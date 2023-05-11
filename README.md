# Information Security (cipher)

التشفير هو عملية تحويل البيانات النصية أو الرقمية من صيغة واضحة ومفهومة إلى صيغة مشفرة وغير مفهومة، بهدف حماية البيانات والمعلومات من الوصول غير المصرح به إليها.
يمكن استخدام التشفير لحماية البيانات الحساسة مثل المعلومات المصرفية والطبية والمالية والعسكرية والتجارية والخاصة.

## تتوفر العديد من تقنيات التشفير المختلفة، ويمكن تصنيفها بشكل عام إلى ثلاث فئات رئيسية وهي:

1- التشفير السيميتري (Symmetric Encryption): وهو نوع من التشفير يستخدم نفس المفتاح لعملية التشفير والفك، ويتميز هذا النوع من التشفير بالسرعة والفعالية في حماية البيانات، ومن أمثلة تقنيات التشفير السيميتري: AES، DES، 3DES، Blowfish.

2- التشفير العام (Asymmetric Encryption): وهو نوع من التشفير يستخدم مفتاحين مختلفين لعملية التشفير والفك، ويتميز بسهولة التوزيع والاستخدام، ومن أمثلة تقنيات التشفير العام: RSA، Diffie-Hellman، ElGamal.

3- التشفير الهجين (Hybrid Encryption): وهو نوع من التشفير يجمع بين التشفير السيميتري والعام، حيث يتم استخدام التشفير العام لتبادل المفاتيح، ومن ثم يتم استخدام التشفير السيميتري لتشفير البيانات المرسلة، ومن أمثلة تقنيات التشفير الهجين: SSL، TLS.

تتميز تقنيات التشفير بالقدرة على حماية البيانات والمعلومات من الوصول غير المصرح به إليها، ولكنها تواجه بعض الضعف في حالة استخدام مفاتيح ضعيفة أو تعرضت لهجوم القرصنة الإلكترونية

## بعض أنواع التشفير :

1. Monoalphabetic Cipher أو Substitution Cipher: تستبدل كل حرف في النص الأصلي بحرف آخر محدد.

2. Homophonic Cipher: تستخدم أكثر من رمز أو رقم لتمثيل كل حرف في النص الأصلي، وهو نوع من تشفير الاستبدال.

3. Polygram Substitution Cipher: تستبدل مجموعة حروف بمجموعة حروف ثانيه، مما يزيد من صعوبة تحليل النص المشفر ومن امثلتها البلايفير.
     - Playfair Cipher: تستخدم مصفوفة مربعة من الحروف لتشفير النص الأصلي، وتم استخدامها بشكل واسع خلال الحرب العالمية الأولى.

4. Polyalphabetic Substitution Cipher: تستخدم عدة جداول للاستبدال، وتختلف الجداول باستخدام مفاتيح مختلفة، وهو نوع من تشفير الاستبدال.

تختلف أنواع التشفير في العديد من الخصائص، مثل صعوبة تحليل النص المشفر، ومستوى الأمان المطلوب، وطول المفتاح، وسرعة التشفير وفعاليته. ويتم اختيار نوع التشفير المناسب بناءً على الغرض المطلوب من التشفير ومستوى الأمان المطلوب للبيانات.

|          رابط شرح للخوارزمية          |                  رابط الكود المستخدم للتشفير                |        الخوارزمية المستخدمه للتشفير      	 		|				
|:-------------------------:|:-------------------------:|:-------------------------:|
|        Caesar Cipher   	  | [Caesar Cipher code.cpp](https://github.com/FatimaALzahrani/InformationSecurity-cipher/blob/main/Caesar%20Cipher/Caesar%20Cipher%20code.cpp)   | [explanation of the Caesar Chiper](https://github.com/FatimaALzahrani/InformationSecurity-cipher/blob/main/Caesar%20Cipher/README.md)                     				 		|
|        Hill Chiper 	  | [Hill Chiper code.cpp](https://github.com/FatimaALzahrani/InformationSecurity-cipher/blob/main/Hill%20Chiper/Hill%20Chiper%20code.cpp)   | [explanation of the Hill Chiper](https://github.com/FatimaALzahrani/InformationSecurity-cipher/blob/main/Hill%20Chiper/README.md)                     				 		|
|        Playfair Matrix   	  | [PlayfairMatrixCode.java](https://github.com/FatimaALzahrani/InformationSecurity-cipher/blob/main/Playfair%20Matrix/PlayfairMatrixCode.java)   | [explanation of the Playfair Matrix](https://github.com/FatimaALzahrani/InformationSecurity-cipher/blob/main/Playfair%20Matrix/README.md)                     				 		|
|        RSA   	  | [RSA.cpp with know e](https://github.com/FatimaALzahrani/InformationSecurity-cipher/blob/main/RSA/RSA1.cpp)   <br /> [RSA.java without know e](https://github.com/FatimaALzahrani/InformationSecurity-cipher/blob/main/RSA/RSA2.java)  
| [explanation of RAS](https://github.com/FatimaALzahrani/InformationSecurity-cipher/blob/main/RSA/README.md)      
|
