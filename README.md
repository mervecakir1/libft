# Libft Kütüphanesi Dokümantasyonu

## 1. Giriş
Libft, yaygın kullanılan C kütüphane fonksiyonlarının öğrenilmesi ve yeniden yazılması amacıyla oluşturulmuş bir projedir. Proje, temel C fonksiyonlarını içeren ve daha sonraki projelerde faydalı olacak kişisel bir kütüphane geliştirmeyi amaçlar.
<br/>
## 2.Kurulum
Projeyi çalıştırmak için aşağıdaki adımları izleyin:

Proje dosyalarını klonlayın: `git clone`  <repo-url> <br/>
Proje dizinine gidin: `cd libft` <br/>
`make` komutunu çalıştırarak projeyi derleyin.<br/>
## 3.Proje Yapısı
**libft.h:** Tüm fonksiyon prototipleri ve gerekli tanımlamalar burada bulunur.<br/>
**ft_*.c:** Her bir fonksiyon, *ft_* öneki ile başlayan ayrı C dosyalarında yer alır.<br/>
**Makefile:** Derleme işlemlerini yöneten make dosyası.<br/>
## 4.Fonksiyonlar 
### 4.1 Libc Fonksiyonları
`ft_isalpha()`, `ft_isdigit()`, `ft_isalnum()`, `ft_isascii()` ve `ft_isprint()` gönderilen karakterin alfabetik, sayısal, alfanümerik, ASCII değeri veya yazdırılabilir bir değer olup olmadığına bağlı olarak sırasıyla 0 veya 1 tamsayı döndürür. <br/>
<br/><br/>
`ft_toupper()` ve `ft_tolower()`bir `int`alır ve değerinin sırasıyla küçük harfli veya büyük harfli bir ASCII değerine eşit olup olmadığını kontrol eder ve ardından onu büyük harfli veya küçük harfli değerine dönüştürür
<br/><br/>
`ft_strlen()` bir dizenin uzunluğunu sayan ve bu uzunluğu size_t olarak döndüren bir fonksiyondur. `size_t` ile ilk burada karşılaşırız maksimum değeri derlerleyiciye bağlıdır. 32-bit sistemlerde genellikle 4 bayt, 64-bit sistemlerde ise 8 bayttır.Genellikle bellek alanlarının veya dizilerin boyutunu temsil etmek amacıyla tercih edilir. size_t, işaretsiz bir tamsayı türüdür, yani negatif değer almaz; yalnızca sıfır ve pozitif değerler içerir. <br/>
<br/><br/>
`ft_memset()` ve `ft_bzero()` bir void işaretçisini kullanarak bellek bölgelerini belirli bir değerle doldurur.`void` işaretçileri, herhangi bir türden veriye işaret edebilen genel işaretçilerdir.<br/>
`ft_memset()` fonksiyonu **kullanıcı tarafından istenilen** değerle doldurulurken `ft_bzero()` fonksiyonu **0** değeriyle doldurulur
<br/><br/>
`ft_memcpy()` ve `ft_memmove()` bellek bölgelerini kopyalamak için kullanılan fonksiyonlardır ancak aralarındaki temel fark, bellek alanlarının çakışması durumunda ortaya çıkar.<br>
`ft_memcpy()`: İki void işaretçi alır ve belirtilen n uzunluğundaki veriyi kaynak işaretçiden hedef işaretçiye kopyalar. Ancak kaynak ve hedef işaretçilerin bellek alanları çakışırsa, veriler yanlış kopyalanabilir. Bu, kaynak verilerin daha kopyalama bitmeden değişmesine neden olabilir.
`ft_memmove()`: Çakışma sorununu çözmek için daha güvenlidir. Hedef işaretçi kaynak işaretçiden önce veya sonra yer alıp almadığını kontrol eder. Eğer çakışma varsa kopyalamayı güvenli bir şekilde, geriye doğru yapar.
<br/><br/>
`ft_strlcpy()`, `ft_memcpy()` gibi veri kopyalama işlevi görür, ancak yalnızca **\0** ile sonlanan  dizeler (string'ler) için kullanılır. Bu işlev, kaynak dizenin n kadar karakterini hedef dizgeye kopyalar ve her durumda hedef dizenin sonuna bir **\0** ekler.<br/>
Farklı olarak, ft_strlcpy() işlevi, kopyalamanın başarılı olup olmamasına bakmaksızın kaynak dizenin toplam uzunluğunu döndürür. 
<br/><br/>
`ft_strlcat()`, kaynak dizgeyi hedef dizgenin sonuna ekler, ancak toplam uzunluk belirtilen **dstsize** sınırını aşmaz. İşlem başarılı olup olmasa da, dönen değer, tam birleştirilmiş dizgenin uzunluğunu verir. Bu, hedefin kapasitesini ayarlamak için kullanışlıdır.
<br/><br/>
`ft_strchr()` ve `ft_strrchr()` fonksiyonları, bir dizede belirtilen karakteri **(int olarak girilen bir karakter kodunu)** arar.
`ft_strchr()`: Dizenin başından başlayarak karakteri arar ve ilk bulduğu yerdeki adresi döner.<br/>
`ft_strrchr()`: Dizenin sonundan başlayarak karakteri arar ve son bulduğu (tersten ilk bulduğu) yerdeki adresi döner.
Eğer karakter bulunamazsa, her iki işlev de `NULL` döner.
<br/><br/>
`ft_strncmp()`, iki dize alır ve değerlerini belirtilen sayıda karaktere kadar karşılaştırır. Bir fark bulunursa, karşılaştığı ilk farklı karakterlerin tam sayı farkını döndürür. Hiçbir fark bulunmazsa, 0 döndürülür.
<br/><br/>
`ft_memchr()`ve `ft_memcmp()`, `ft_strchr()` ve `ft_strncmp()` fonksiyonları gibi çalışır fakat `ft_memchr()` belirtilen byte değerinde arar ve ilk eşleşme bulduğunda o adresi döner.
`ft_memcmp()` ise iki `void` işaretçiyi byte byte karşılaştırır.Farklı bir byte değeri bulduğunda iki byte arasındaki farkı döner.<br/>
<br/><br/>
`ft_strnstr()` bir **“haystack"** dizesi ve bir **“needle”** dizesi alır. Belirli bir uzunluğa kadar, haystack dizesinde needle dizesini arar ve bulunursa,haystack dizesindeki başlangıcına işaretçi döndürülür. Bulunamazsa, null döndürülür.<br/>
<br/><br/>
`ft_atoi()` fonksiyonu bir karakter dizisini *string* belli koşullar altında tam sayıya *integer* dönüştürür. Bu koşullar bazı boşluklar atlamamız gerektiği, işaret kontrolü ve işaretten sonra gelen sayılarsa (0 - 9),bunları ardışık tam sayıya dönüştürür.<br/>
<br/><br/>
`ft_calloc()`fonksiyonu bellek tahsis etmek için `malloc`kullanılır. Mallocta ayrılan yerlere rastgele değerler gelirken bu durumu engellemek için `b_zero`fonksiyonu ile **0** değeriyle doldurduk.Segmentasyon hatalarından kaçmak için `malloc` kullanıldığında yer tahsisinin başarılı olup olmadığını kontrol edilmelidir.`malloc()` başarısız olursa, null döndürürüz.
### 4.2 Ek Fonksiyonlar
