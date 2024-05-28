# Soyutlama (Abstraction)
• Kahve makinesi bir nesne olarak
düşünelim. Dış dünyadan sadece
bazı işlevleri görebiliriz (örneğin,
düğmeye basarak kahve yapabiliriz),
ancak içindeki karmaşık mekanizma
ve yapı gizlenir.

• Kullanıcılar sadece kahve yapma işlevini düşünür,
içindeki detaylarla uğraşmak zorunda kalmazlar. Bu
aslında soyutlama konusuda bir

- yani  herseyi yaptın tek tusla calişmasını saglamak biz basarız ama icini bilemeyiz icindeki mekanizmayı bilemiyiz 

# Kapsülleme (Encapsulation)
Bu özellik, programcıların kodunun belirli bir bölümünü saklamasına
(information hiding) ve programın diğer bölümleri tarafından daha az
etkileşimli hale getirmesine yardımcı olur.
Bu, programcının daha az hata yapmasına ve kodu daha kolay
okunabilir ve anlaşılabilir hale getirmesine yardımcı olur.


# Çokbiçimlilik (Polymorphism)
• Polymorphism, bir nesnenin birden fazla farklı şekilde davranış
sergileyebilmesi yeteneğini ifade eder.
Bu davranışlar, aynı isimle ancak farklı parametrelerle çağrılan farklı metotlar tarafından gerçekleştirilir.
• Polymorphism, bir arayüz üzerinden birden fazla farklı sınıfın
uygulanmasına izin verir. Bu sayede, aynı işlevselliğe sahip olan ancak farklı davranışlar sergileyen nesneler birbirinin yerine kullanılabilir hale gelir.


# Soyut Sınıf (Abstract Class)
• Nesne türetilemeyen sınıftır.
• Soyut sınıflar, diğer sınıflardan kalıtım almak ve ortak özellikleri paylaşmak
için kullanılır.
• Soyut sınıflar, soyut yöntemler içerebilir.
• Soyut yöntemler, bir gövdeye sahip olmayan yöntemlerdir.
• Soyut yöntemler, soyut sınıftan türetilen sınıflarda tanımlanmalıdır.

#  (Static)
static anahtar sözcüğü, bir sınıfın üye değişkeninin sınıfın tüm örnekleri
arasında paylaşılması gerektiğinde kullanılır.
• Tüm static değişkenler ve yöntemler sınıfa aittir ve sınıfın herhangi bir
örneğine ait değildir.
• static üyeler bu nedenle sınıf üyesi (class member) olarak ifade edilir.


# Parametrik çok biçimlilik
(Parametric polymorphism)
• Parametrik çok biçimlilik (parametric polymorphism), tam statik tip
güvenliğini korurken tipe bağlı olmadan değerlerle çalışabilen genel ve yeniden kullanılabilir kod yazmanıza olanak tanır.
• Genel (generic) programlama ile parametrik çok biçimlilikten faydalanabiliriz.
• C# ve Java'da generic programlama desteği vardır.
• Python ise ördek tiplemesi (duck typing) kullanır. Ayrıca JavaScript'te ördek
yazımından yaralanılabilir.

# wsd uzantılı dosyada 
- '#' işareti protected anlamında 
- '+' public anlamında
- '-' işareti private anlmında 

# kisa bilgler
- python da kalıtım kullanırsan once olusturdugun nesne sonra onun ust class lar olusuyor 
- c++ ise bu tam tersi en en once en tepedeki class tan bir nesne uretilip sonra istedigin nesne olusuyor
- protected ifadesi sınıf ve onun turetilen sınıflrında erişim var ama turettigin bir nesneden erişim yok 
- private hem nesne turetirken hemde alt sınıflar degere erişemez 


# Nesnelerin İlişkilerini Modelleme
### has-a (Aggregation/Birleşim)
- Bir nesnenin başka bir nesneyi içerdiği ve her iki
nesnenin de kendi bağımsız var oluşlarına sahip
olması durumudur.
- Aslında Composition bir türüdür.
### is-a (Extension/Kalıtım)
• Bir nesnenin başka bir nesneyi kalıtım (miras alma)
yoluyla genişlettiği veya uzantısı olduğu ilişkisini
ifade eder.

## use-a (Dependency/Bağımlılık)
• Bir nesnenin başka bir nesneyi kullanarak veya
içererek işlevselliğini genişlettiği ilişkisini ifade eder.
## is-a-part-of (Composition)
• Bir nesnenin başka bir nesnenin bir parçası olduğu
ilişkisini ifade eder.
•Bu ilişkide, bir nesne, başka bir nesnenin fiziksel
veya mantıksal bir bölümünü temsil eder.
Oluşum "contains-a" ilişkisi olarak anlaşılmalıdır.


