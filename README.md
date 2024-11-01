# Libft Kütüphanesi Dokümantasyonu

## 1. Giriş
Libft, yaygın kullanılan C kütüphane fonksiyonlarının öğrenilmesi ve yeniden yazılması amacıyla oluşturulmuş bir projedir. Proje, temel C fonksiyonlarını içeren ve daha sonraki projelerde faydalı olacak kişisel bir kütüphane geliştirmeyi amaçlar.
<br/>
## 2.Kurulum
Projeyi çalıştırmak için aşağıdaki adımları izleyin:

Proje dosyalarını klonlayın: `git clone` . <repo-url> <br/>
Proje dizinine gidin: `cd libft`. <br/>
`make` komutunu çalıştırarak projeyi derleyin.<br/>
## 3.Proje Yapısı
**libft.h:** Tüm fonksiyon prototipleri ve gerekli tanımlamalar burada bulunur.<br/>
**ft_*.c:** Her bir fonksiyon, *ft_* öneki ile başlayan ayrı C dosyalarında yer alır.<br/>
**Makefile:** Derleme işlemlerini yöneten make dosyası.<br/>
## 4.Fonksiyonlar 
### 4.1 Libc Fonksiyonları
`ft_isalpha()`, `ft_isdigit()`, `ft_isalnum()`, `ft_isascii()` ve `ft_isprint()` gönderilen karakterin alfabetik, sayısal, alfanümerik, ASCII değeri veya yazdırılabilir bir değer olup olmadığına bağlı olarak sırasıyla 0 veya 1 tamsayı döndürür. <br/>
<br/><br/>
`ft_toupper()` ve `ft_tolower()`bir `int`alır ve değerinin sırasıyla küçük harfli veya büyük harfli bir ASCII değerine eşit olup olmadığını kontrol eder ve ardından onu büyük harfli veya küçük harfli değerine dönüştürür.<br/>
<br/>c
`ft_strlen()` bir dizenin uzunluğunu sayan ve bu uzunluğu size_t olarak döndüren bir fonksiyondur. `size_t` ile ilk burada karşılaşırız maksimum değeri derlerleyiciye bağlıdır. 32-bit sistemlerde genellikle 4 bayt, 64-bit sistemlerde ise 8 bayttır.Genellikle bellek alanlarının veya dizilerin boyutunu temsil etmek amacıyla tercih edilir. size_t, işaretsiz bir tamsayı türüdür, yani negatif değer almaz; yalnızca sıfır ve pozitif değerler içerir. <br/>
<br/><br/>
`ft_memset()` ve `ft_bzero()` bir void işaretçisini kullanarak bellek bölgelerini belirli bir değerle doldurur.`void` işaretçileri, herhangi bir türden veriye işaret edebilen genel işaretçilerdir.<br/>
`ft_memset()` fonksiyonu **kullanıcı tarafından istenilen** değerle doldurulurken `ft_bzero()` fonksiyonu **0** değeriyle doldurulur.
<br/><br/>
`ft_memcpy()` ve `ft_memmove()` bellek bölgelerini kopyalamak için kullanılan fonksiyonlardır ancak aralarındaki temel fark, bellek alanlarının çakışması durumunda ortaya çıkar.<br>
`ft_memcpy()`: İki void işaretçi alır ve belirtilen n uzunluğundaki veriyi kaynak işaretçiden hedef işaretçiye kopyalar. Ancak kaynak ve hedef işaretçilerin bellek alanları çakışırsa, veriler yanlış kopyalanabilir. Bu, kaynak verilerin daha kopyalama bitmeden değişmesine neden olabilir.
`ft_memmove()`: Çakışma sorununu çözmek için daha güvenlidir. Hedef işaretçi kaynak işaretçiden önce veya sonra yer alıp almadığını kontrol eder. Eğer çakışma varsa kopyalamayı güvenli bir şekilde, geriye doğru yapar.<br/>
<br/><br/>
`ft_strlcpy()`, `ft_memcpy()` gibi veri kopyalama işlevi görür, ancak yalnızca **\0** ile sonlanan  dizeler (string'ler) için kullanılır. Bu işlev, kaynak dizenin n kadar karakterini hedef dizgeye kopyalar ve her durumda hedef dizenin sonuna bir **\0** ekler.<br/>
Farklı olarak, ft_strlcpy() işlevi, kopyalamanın başarılı olup olmamasına bakmaksızın kaynak dizenin toplam uzunluğunu döndürür. <br/>
<br/><br/>
`ft_strlcat()`, kaynak dizeyi hedef dizenin sonuna ekler, ancak toplam uzunluk belirtilen **dst_size** sınırını aşmaz. İşlem başarılı olup olmasa da dönen değer, tam birleştirilmiş dizgenin uzunluğunu verir. Bu, hedefin kapasitesini ayarlamak için kullanışlıdır.<br/>
<br/><br/>
`ft_strchr()` ve `ft_strrchr()` fonksiyonları, bir dizede belirtilen karakteri **(int olarak girilen bir karakter kodunu)** arar.<br/>
`ft_strchr()`: Dizenin başından başlayarak karakteri arar ve ilk bulduğu yerdeki adresi döner.<br/>
`ft_strrchr()`: Dizenin sonundan başlayarak karakteri arar ve son bulduğu (tersten ilk bulduğu) yerdeki adresi döner.<br/>
Eğer karakter bulunamazsa, her iki işlev de **NULL** döner.<br/><br/>
<br/>
`ft_strncmp()`, iki dize alır ve değerlerini belirtilen sayıda karaktere kadar karşılaştırır. Bir fark bulunursa, karşılaştığı ilk farklı karakterlerin tam sayı farkını döndürür. Hiçbir fark bulunmazsa, **0**döndürülür.<br/>
<br/><br/>
`ft_memchr()`ve `ft_memcmp()`, `ft_strchr()` ve `ft_strncmp()` fonksiyonları gibi çalışır fakat `ft_memchr()` belirtilen byte değerinde arar ve ilk eşleşme bulduğunda o adresi döner.
`ft_memcmp()` ise iki `void` işaretçiyi byte byte karşılaştırır.Farklı bir byte değeri bulduğunda iki byte arasındaki farkı döner.<br/>
<br/><br/>
`ft_strnstr()` bir **“haystack"** dizesi ve bir **“needle”** dizesi alır. Belirli bir uzunluğa kadar, haystack dizesinde needle dizesini arar ve bulunursa,haystack dizesindeki başlangıcına işaretçi döndürülür. Bulunamazsa, null döndürülür.<br/>
<br/><br/>
`ft_atoi()` fonksiyonu bir karakter dizisini *string* belli koşullar altında tam sayıya *integer* dönüştürür. Bu koşullar bazı boşluklar atlamamız gerektiği, işaret kontrolü ve işaretten sonra gelen sayılarsa (0 - 9),bunları ardışık tam sayıya dönüştürür.<br/>
<br/><br/>
`ft_calloc()`fonksiyonu bellek tahsis etmek için `malloc`kullanılır. Mallocta ayrılan yerlere rastgele değerler gelirken bu durumu engellemek için `b_zero`fonksiyonu ile **0** değeriyle doldurduk.Segmentasyon hatalarından kaçmak için `malloc` kullanıldığında yer tahsisinin başarılı olup olmadığını kontrol edilmelidir.`malloc()` başarısız olursa, null döndürürüz.<br/>
<br/><br/>
`ft_strdup()`, `malloc()` kullanarak yeni bir dize oluşturarak ve parametre olarak alınan dizenin içeriğini kopyalayarak, yeni tahsis edilmiş bir dizenin kopyasını döndürür.<br/>
### 4.2 Ek Fonksiyonlar

Buradaki fonksiyonlar standart C kütüphanesinde bulunmayan fonksiyonlardır.

`ft_substr()`fonksiyonu bir dize *string* alır , bir tam sayı *int* olarak başlangıç noktası ve uzunluk *len* alır. Belirtilen dizinden belirtilen uzunluğa kadar, dizenin içerikleri yeni tahsis edilmiş bir dizeye kopyalanır ve bu dize döndürülür. Dizenin start noktası dizenin uzunluğunu aşarsa `ft_strdup` sayesinde boş bir dize döndürülür (null döndürmekle aynı şey değildir!).<br/>
<br/><br/>
`ft_strjoin()`fonksiyonu iki dize *string* alır. Burada amacımız iki dizeyi yeni tahsis edilmiş dizeye birleştirmektir. Dizilerden biri boşsa, diğer dize döndürülür.<br/>
<br/><br/>
`ft_strtrim()`fonksiyonu iki dize *string* alır.İlk string kırpılacak ve ikinci string ise başından sonundan kırpılacak olan karakter dizisidir.Yeni oluşturulan karakter dizisine yeni tahsis edilmiş bir dize olarak döndürülür. Burada kırpmak istediğimiz karakterleri, kırpılacak olan dizenin içinde aramak için`ft_strchr()` fonksiyonunu kullanabiliriz.<br/>
<br/><br/>
`ft_split()`fonksiyonu bir dize *string* ve bir karakter *char* alır.Fonksiyonun amacı, belirtilen karakteri ayırıcı olarak kullanıp dizeyi bölmek ve bu bölünen yeni dizeleri tutan yeni bir dize döndürmektir.Öncellikle olarak bir `count_words` fonksiyonu ile dizede kaç karakter olduğunu hesaplanır.`extract_word` ile kelimleri çıkartıp yeni tahsis edilmiş yere konulur.`ft_split()`ile `extract_word` ile çıkartılan kelimeleri yeniden tahsis edilmiş yere eklenir.<br/>
<br/><br/>
`ft_itoa()` fonksiyonu bir tam sayıyı alır ve onu yeni tahsis edilmiş bir dizeye dönüştürür. Dize için doğru miktarda alan tahsis edebilmemiz için basamak sayısını (negatif bir sayı durumunda eksi işareti dahil) sayan bir fonksiyon kullanırız.<br/>
<br/><br/>
`ft_strmapi()` ve `ft_striteri()` bir dize ve bir fonksiyona işaretçi alır. Hem ft_strmapi() hem de ft_striteri() geçirilen fonksiyonu geçirilen dizenin her karakterine ayrı ayrı uygular, ancak `ft_striteri()` dizeyi doğrudan değiştirirken `ft_strmapi()` sonuçla birlikte yeni tahsis edilmiş bir dize döndürür.<br/>
<br/><br/>
`ft_putchar_fd()` fonksiyonu karakter yazdırmaya; `ft_putstr_fd()` fonksiyonu *string* yazdırmaya ;`ft_putendl_fd()` fonksiyonu karakter ve yeni satır *newline* yazdırmaya;`ft_putnbr_fd()`fonksiyonu sayı yazdırır. Bir dosya tanımlayıcısı, sistemdeki bir dosyanın bellekteki adresini belirtir. <br/>
`0 -> Standart Input.
1 -> Standart Output.
2 -> Standart Error.` <br/><br/>
