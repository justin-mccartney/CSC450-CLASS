public class CounterApp {

    public static void main(String[] args) {
        // Create an object of the class CounterApp to synchronize threads
        CounterApp app = new CounterApp();

        // Create the first thread to count up
        Thread countUpThread = new Thread(new Runnable() {
            @Override
            public void run() {
                app.countUp();
            }
        });

        // Create the second thread to count down
        Thread countDownThread = new Thread(new Runnable() {
            @Override
            public void run() {
                app.countDown();
            }
        });

        // Start the countUpThread
        countUpThread.start();

        // Wait for the countUpThread to finish before starting the countDownThread
        try {
            countUpThread.join();
        } catch (InterruptedException e) {
            e.printStackTrace();
        }

        // Start the countDownThread
        countDownThread.start();

        // Wait for the countDownThread to finish
        try {
            countDownThread.join();
        } catch (InterruptedException e) {
            e.printStackTrace();
        }
    }

    // Method to count up from 0 to 20
    public void countUp() {
        for (int i = 0; i <= 20; i++) {
            try {
                Thread.sleep(500); // Simulate delay
            } catch (InterruptedException e) {
                e.printStackTrace();
            }
            System.out.println("Counting up: " + i);
        }
    }

    // Method to count down from 20 to 0
    public void countDown() {
        for (int i = 20; i >= 0; i--) {
            try {
                Thread.sleep(500); // Simulate delay
            } catch (InterruptedException e) {
                e.printStackTrace();
            }
            System.out.println("Counting down: " + i);
        }
    }
}