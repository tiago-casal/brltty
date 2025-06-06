/*
 * BRLTTY - A background process providing access to the console screen (when in
 *          text mode) for a blind person using a refreshable braille display.
 *
 * Copyright (C) 1995-2025 by The BRLTTY Developers.
 *
 * BRLTTY comes with ABSOLUTELY NO WARRANTY.
 *
 * This is free software, placed under the terms of the
 * GNU Lesser General Public License, as published by the Free Software
 * Foundation; either version 2.1 of the License, or (at your option) any
 * later version. Please see the file LICENSE-LGPL for details.
 *
 * Web Page: http://brltty.app/
 *
 * This software is maintained by Dave Mielke <dave@mielke.cc>.
 */

package org.a11y.brltty.android.settings;
import org.a11y.brltty.android.*;

import android.preference.Preference;
import android.preference.EditTextPreference;

public abstract class TextSetting extends PreferenceSetting<EditTextPreference> {
  protected abstract void onTextChanged (String newText);

  public final CharSequence getText () {
    return preference.getEditText().getText();
  }

  @Override
  public final void setSummary () {
    setSummary(getText());
  }

  @Override
  public boolean onPreferenceChange (Preference preference, Object newValue) {
    final String newText = (String)newValue;

    setSummary(newText);
    onTextChanged(newText);

    return true;
  }

  protected TextSetting (SettingsFragment fragment, int key) {
    super(fragment, key);
  }
}
