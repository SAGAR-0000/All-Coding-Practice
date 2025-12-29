import java.awt.*;
import java.awt.event.*;

public class ActionListenerExample implements ActionListener {
    Frame f;
    TextField tf;
    Button b;

    public ActionListenerExample() {
        f = new Frame("ActionListener Example");
        tf = new TextField();
        tf.setBounds(50, 50, 150, 20);
        b = new Button("Click me");
        b.setBounds(50, 100, 80, 30);

        b.addActionListener(this); // Register event

        f.add(b);
        f.add(tf);
        f.setSize(400, 400);
        f.setLayout(null);
        f.setVisible(true);

        // Close window properly
        f.addWindowListener(new WindowAdapter() {
            public void windowClosing(WindowEvent e) {
                f.dispose();
            }
        });
    }

    public void actionPerformed(ActionEvent e) {
        tf.setText("Welcome to Javatpoint.");
    }

    public static void main(String args[]) {
        new ActionListenerExample();
    }
}
