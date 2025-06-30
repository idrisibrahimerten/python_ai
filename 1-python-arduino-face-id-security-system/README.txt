# Webcam & Face Recognition with Arduino Integration / Web Kamerası ve Arduino Entegrasyonlu Yüz Tanıma

---

## English

### Overview
This project implements a complete pipeline for real-time face recognition using a webcam and communicates results to an Arduino device. The workflow consists of the following steps:

1. **Webcam Access**  
2. **Face Detection**  
3. **Data Collection**  
4. **Model Training**  
5. **Face Recognition**  
6. **Arduino Programming**  

### Files
- `webcam_access.py` – Access and preview webcam feed  
- `face_detection.py` – Detect faces in each frame  
- `data_collection.py` – Capture and store face images  
- `model_training.py` – Train face recognition model  
- `face_recognition.py` – Recognize and annotate faces in real-time  
- `arduino_programming.ino` – Arduino sketch for receiving recognition results  

### Requirements
- Python 3.7+  
- OpenCV  
- face_recognition (dlib-based)  
- numpy  
- pyserial  
- Arduino IDE  

Install Python dependencies:
```bash
pip install opencv-python face_recognition numpy pyserial
```

### Setup & Usage

1. **Clone the repository**  
   ```bash
   git clone https://github.com/yourusername/webcam-face-arduino.git
   cd webcam-face-arduino
   ```

2. **Connect devices**  
   - Plug in your USB webcam.  
   - Connect Arduino via USB.

3. **Step 1: Webcam Access**  
   ```bash
   python webcam_access.py
   ```

4. **Step 2: Face Detection**  
   ```bash
   python face_detection.py
   ```

5. **Step 3: Data Collection**  
   ```bash
   python data_collection.py
   ```

6. **Step 4: Model Training**  
   ```bash
   python model_training.py
   ```

7. **Step 5: Face Recognition**  
   ```bash
   python face_recognition.py
   ```

8. **Step 6: Arduino Programming**  
   - Open `arduino_programming.ino` in the Arduino IDE.  
   - Upload to your Arduino board.

---

## Türkçe

### Genel Bakış
Bu proje, web kamerası kullanarak gerçek zamanlı yüz tanıma akışını gerçekleştirir ve tanıma sonuçlarını bir Arduino cihazına iletir. Süreç adımları:

1. **Web Kamerasına Erişim**  
2. **Yüz Tespiti**  
3. **Veri Toplama**  
4. **Model Eğitimi**  
5. **Yüz Tanıma**  
6. **Arduino Programlaması**  

### Dosyalar
- `webcam_access.py` – Web kamerası beslemesini alır ve görüntüler  
- `face_detection.py` – Karelerde yüzleri tespit eder  
- `data_collection.py` – Yüz görüntülerini yakalar ve kaydeder  
- `model_training.py` – Yüz tanıma modelini eğitir  
- `face_recognition.py` – Gerçek zamanlı yüz tanıma ve etiketleme yapar  
- `arduino_programming.ino` – Tanıma sonuçlarını alacak Arduino kodu  

### Gereksinimler
- Python 3.7+  
- OpenCV  
- face_recognition (dlib tabanlı)  
- numpy  
- pyserial  
- Arduino IDE  

Python bağımlılıklarını yüklemek için:
```bash
pip install opencv-python face_recognition numpy pyserial
```

### Kurulum & Kullanım

1. **Depoyu klonlayın**  
   ```bash
   git clone https://github.com/yourusername/webcam-face-arduino.git
   cd webcam-face-arduino
   ```

2. **Cihazları Bağlayın**  
   - USB web kameranızı takın.  
   - Arduino’yu USB ile bağlayın.

3. **1. Adım: Web Kamerasına Erişim**  
   ```bash
   python webcam_access.py
   ```

4. **2. Adım: Yüz Tespiti**  
   ```bash
   python face_detection.py
   ```

5. **3. Adım: Veri Toplama**  
   ```bash
   python data_collection.py
   ```

6. **4. Adım: Model Eğitimi**  
   ```bash
   python model_training.py
   ```

7. **5. Adım: Yüz Tanıma**  
   ```bash
   python face_recognition.py
   ```

8. **6. Adım: Arduino Programlaması**  
   - `arduino_programming.ino` dosyasını Arduino IDE’de açın.  
   - Arduino’ya yükleyin.  
