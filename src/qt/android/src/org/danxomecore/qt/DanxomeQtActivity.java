package org.danxomecore.qt;

import android.os.Bundle;
import android.system.ErrnoException;
import android.system.Os;

import org.qtproject.qt5.android.bindings.QtActivity;

import java.io.File;

public class DanxomeQtActivity extends QtActivity
{
    @Override
    public void onCreate(Bundle savedInstanceState)
    {
        final File danxomeDir = new File(getFilesDir().getAbsolutePath() + "/.danxome");
        if (!danxomeDir.exists()) {
            danxomeDir.mkdir();
        }

        super.onCreate(savedInstanceState);
    }
}
