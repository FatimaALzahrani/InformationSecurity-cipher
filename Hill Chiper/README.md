# Hill Cipher

هي طريقة تشفير نصوص تستخدم في علم التشفير وتعتمد على الجبر الخطي. يعود تاريخ استخدام هذه الطريقة إلى العالم الأمريكي ليستر هيل (Leslie V. Hill) الذي طورها في عام 1929.

تعتمد هذه الطريقة على استخدام مصفوفة مفتاح تدعى مصفوفة هيل، وهي مصفوفة مربعة من الأرقام تستخدم لتشفير الرسائل وتكون key . يتم تقسيم النص الأصلي إلى أجزاء معينة وتحويلها الى مصفوفه على قد ابعاد ال key يعني لو 2×2 بيكون 2×1 ولو 3×3 بيكون 3×1 وهكذا ...
ثم يتم ضرب المصفوفة الناتجة بمصفوفة هيل (key) لتشفير النص.

تتميز طريقة هيل شيبر بأنها تعمل بسرعة وتوفر درجة عالية من الأمان في التشفير. ومع ذلك، يمكن اختراق هذه الطريقة إذا تم استخدام مفاتيح ضعيفة أو تم استخدام الطريقة بشكل غير صحيح.

ولذلك، ينصح باستخدامها مع الإجراءات الأمنية الإضافية لزيادة مستوى الأمان.


<img width="416" alt="‫فاينل امن  pdf و3 من الصفحات الأخرى - شخصي - Microsoft​ Edge‬ 5_5_2023 5_20_59 PM" src="https://user-images.githubusercontent.com/107775566/236485130-286eb9f9-d3d8-41e7-9b92-1e21cbfe4885.png">

### *معاني الرموز :
- key مصفوفه المفتاح/هيل والتي سيتم ضرب ارقام النص فيها
- p رقم يمثل مكان الحرف في الاحرف الابجدية مثل a=0,b=1...
- c النص المشفر
- mod باقي القسمة ونطلعه باننا نقسم قسمة مطوله او نطرح من 26 الين يصير اقل من 26
