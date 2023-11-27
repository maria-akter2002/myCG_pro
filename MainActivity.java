package com.example.storyreadingapp;

import androidx.appcompat.app.AppCompatActivity;

import android.content.Intent;
import android.os.Bundle;
import android.view.View;
import android.widget.ImageView;

public class MainActivity extends AppCompatActivity {

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_main);

        ImageView btnSt1 = findViewById(R.id.imgTitle);
        ImageView btnSt2 = findViewById(R.id.btnStory2);
        ImageView btnSt3 = findViewById(R.id.btnStory3);
        ImageView btnSt4 = findViewById(R.id.btnStory4);
        ImageView btnSt5 = findViewById(R.id.btnStory5);

        btnSt1.setOnClickListener(new View.OnClickListener(){
            @Override
            public void onClick(View view) {
                Intent ca = new Intent(getApplicationContext(), ReadStory.class);
                ca.putExtra("keyStory", "storyA");
                startActivity(ca);
            }
        });

        btnSt2.setOnClickListener(new View.OnClickListener(){
            @Override
            public void onClick(View view) {
                Intent ca = new Intent(getApplicationContext(), ReadStory.class);
                ca.putExtra("keyStory", "storyB");
                startActivity(ca);
            }
        });

        btnSt3.setOnClickListener(new View.OnClickListener(){
            @Override
            public void onClick(View view) {
                Intent ca = new Intent(getApplicationContext(), ReadStory.class);
                ca.putExtra("keyStory", "storyC");
                startActivity(ca);
            }
        });

        btnSt4.setOnClickListener(new View.OnClickListener(){
            @Override
            public void onClick(View view) {
                Intent ca = new Intent(getApplicationContext(), ReadStory.class);
                ca.putExtra("keyStory", "storyD");
                startActivity(ca);
            }
        });

        btnSt5.setOnClickListener(new View.OnClickListener(){
            @Override
            public void onClick(View view) {
                Intent ca = new Intent(getApplicationContext(), ReadStory.class);
                ca.putExtra("keyStory", "storyE");
                startActivity(ca);
            }
        });

    }
}
