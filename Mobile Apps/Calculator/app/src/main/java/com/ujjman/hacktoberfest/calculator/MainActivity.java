package com.ujjman.hacktoberfest.calculator;

import androidx.appcompat.app.AppCompatActivity;

import android.os.Bundle;
import android.view.View;
import android.widget.TextView;
import android.widget.Toast;

public class MainActivity extends AppCompatActivity {
    double num1;
    double num2;
    TextView answer,a,b,icon;
    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_main);
        a=(TextView) findViewById(R.id.first);
        b=(TextView) findViewById(R.id.second);
        icon=findViewById(R.id.icon);
        answer=findViewById(R.id.answer);
        a.setFocusable(true);
        a.setEnabled(true);
        a.setClickable(true);
        a.setFocusableInTouchMode(true);
        b.setFocusable(true);
        b.setEnabled(true);
        b.setClickable(true);
        b.setFocusableInTouchMode(true);

    }
    public void add(View v)
    {
        icon.setText("+");
        try {
            num1=Double.parseDouble(a.getText().toString());
            num2=Double.parseDouble(b.getText().toString());
        }
        catch (Exception e)
        {
            Toast.makeText(this,"Enter valid text",Toast.LENGTH_SHORT).show();
            return;
        }
        answer.setText((num1+num2)+"");
    }
    public void subtract(View v)
    {
        icon.setText("-");
        try {
            num1=Double.parseDouble(a.getText().toString());
            num2=Double.parseDouble(b.getText().toString());
        }
        catch (Exception e)
        {
            Toast.makeText(this,"Enter valid text",Toast.LENGTH_SHORT).show();
            return;
        }
        answer.setText((num1-num2)+"");
    }
    public void multiply(View v)
    {
        icon.setText("X");
        try {
            num1=Double.parseDouble(a.getText().toString());
            num2=Double.parseDouble(b.getText().toString());
        }
        catch (Exception e)
        {
            Toast.makeText(this,"Enter valid text",Toast.LENGTH_SHORT).show();
        }
        answer.setText((num1*num2)+"");
    }
    public void divide(View v)
    {
        icon.setText("/");
        try {
            num1=Double.parseDouble(a.getText().toString());
            num2=Double.parseDouble(b.getText().toString());
        }
        catch (Exception e)
        {
            Toast.makeText(this,"Enter valid text",Toast.LENGTH_SHORT).show();
            return;
        }
        if(num2==0){
            Toast.makeText(this,"Cannot divide by 0",Toast.LENGTH_SHORT).show();
            return;
        }
        answer.setText((num1/num2)+"");
    }
}