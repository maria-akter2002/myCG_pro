package com.example.storyreadingapp;

import androidx.appcompat.app.AppCompatActivity;
import androidx.fragment.app.FragmentActivity;

import android.os.Bundle;

import com.google.android.gms.maps.CameraUpdateFactory;
import com.google.android.gms.maps.GoogleMap;
import com.google.android.gms.maps.OnMapReadyCallback;
import com.google.android.gms.maps.SupportMapFragment;
import com.google.android.gms.maps.model.LatLng;
import com.google.android.gms.maps.model.Marker;
import com.google.android.gms.maps.model.MarkerOptions;

public class MapsActivity extends AppCompatActivity implements OnMapReadyCallback {

    private GoogleMap mMap;

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_maps);
        // Obtain the SupportMapFragment and get notified when the map is ready to be used.
        SupportMapFragment mapFragment = (SupportMapFragment) getSupportFragmentManager()
                .findFragmentById(R.id.map);
        mapFragment.getMapAsync(this);

    }


    @Override
    public void onMapReady(GoogleMap googleMap) {

        mMap = googleMap;

                // Add markers for multiple locations
                addMarker(new LatLng(37.7749, -122.4194), "SNOW WHITE STORY");
                addMarker(new LatLng(34.0522, -118.2437), "FROZEN STORY");
                addMarker(new LatLng(41.8781, -87.6298), "RAYA AND THE LAST DRAGON");
                addMarker(new LatLng(37.926868, -78.024902), "PINOCCHIO SHORT STORY in Virginia");
                addMarker(new LatLng(31.000000, -100.000000), "MALEFICENT BACKSTORY at Texas");


        // Zoom to a specific location (optional)
                googleMap.animateCamera(CameraUpdateFactory.newLatLngZoom(new LatLng(37.7749, -122.4194), 10));
            }

            private void addMarker (LatLng position, String title){
                Marker marker = mMap.addMarker(new MarkerOptions().position(position).title(title));
                marker.showInfoWindow();
            }

        }

