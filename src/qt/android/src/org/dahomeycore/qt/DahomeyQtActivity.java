package org.dahomeycore.qt;

import android.os.Bundle;
import android.system.ErrnoException;
import android.system.Os;

import org.qtproject.qt5.android.bindings.QtActivity;

import java.io.File;

public class DahomeyQtActivity extends QtActivity
{
    @Override
    public void onCreate(Bundle savedInstanceState)
    {
        final File dahomeyDir = new File(getFilesDir().getAbsolutePath() + "/.dahomey");
        if (!dahomeyDir.exists()) {
            dahomeyDir.mkdir();
        }

        super.onCreate(savedInstanceState);
    }
}
