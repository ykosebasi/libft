*This project has been created as part of the 42 curriculum by ykosebas.*


Description

Libft projesi, C programlama dilindeki standart kütüphane fonksiyonlarını ve ihtiyaç duyabileceğim ek araçları sıfırdan kodlayarak kendi kütüphanemi oluşturduğum bir projedir. Bu süreçte bellek yönetimi, işaretçiler ve veri yapılarının mantığını derinlemesine kavradım.


Instructions

Compilation
Kütüphane, Makefile kullanılarak -Wall -Wextra -Werror bayrakları ile derlenir.

make: libft.a kütüphanesini derler.

make clean: Oluşturulan nesne (.o) dosyalarını siler.

make fclean: Tüm nesne dosyalarını ve libft.a dosyasını siler.

make re: Kütüphaneyi temizleyip baştan derler.


📚 Detailed Library Description

1️⃣ Part 1 - Standart Fonksiyonlar

| Fonksiyon  | Açıklama                                                              |
| ---------- | --------------------------------------------------------------------- |
| ft_isalpha | Karakterin alfabetik olup olmadığını kontrol eder.                    |
| ft_isdigit | Karakterin rakam olup olmadığını kontrol eder.                        |
| ft_isalnum | Karakterin alfanümerik olup olmadığını kontrol eder.                  |
| ft_isascii | Karakterin ASCII tablosunda olup olmadığını kontrol eder.             |
| ft_isprint | Karakterin basılabilir olup olmadığını kontrol eder.                  |
| ft_strlen  | Bir dizginin karakter uzunluğunu hesaplar.                            |
| ft_memset  | Belleğin belirli bir alanını sabit bir bayt ile doldurur.             |
| ft_bzero   | Bellek alanını sıfırlar (null bayt yazar).                            |
| ft_memcpy  | Bir bellek alanını başka bir bellek alanına kopyalar.                 |
| ft_memmove | Bellek alanlarını çakışma riskini yöneterek güvenli şekilde kopyalar. |
| ft_strlcpy | Dizgiyi belirli bir boyuta kadar güvenli şekilde kopyalar.            |
| ft_strlcat | Dizgileri belirli bir boyuta kadar güvenli şekilde birleştirir.       |
| ft_toupper | Küçük harfi büyük harfe dönüştürür.                                   |
| ft_tolower | Büyük harfi küçük harfe dönüştürür.                                   |
| ft_strchr  | Dizgi içinde karakterin ilk görüldüğü yeri bulur.                     |
| ft_strrchr | Dizgi içinde karakterin son görüldüğü yeri bulur.                     |
| ft_strncmp | İki dizgiyi belirli bir sayıya kadar karşılaştırır.                   |
| ft_memchr  | Bellek içinde belirli bir karakteri arar.                             |
| ft_memcmp  | İki bellek alanını birbiriyle karşılaştırır.                          |
| ft_strnstr | Dizgi içinde başka bir alt dizgiyi belirli uzunlukta arar.            |
| ft_atoi    | Bir dizgiyi tam sayıya (integer) dönüştürür.                          |
| ft_calloc  | Bellekte yer ayırır ve tüm alanı sıfırlarla doldurur.                 |
| ft_strdup  | Dizginin kopyasını oluşturmak için yeni bellek alanı ayırır.          |


2️⃣ Part 2 - Ek Fonksiyonlar

| Fonksiyon     | Açıklama                                                          |
| ------------- | ----------------------------------------------------------------- |
| ft_substr     | Dizgiden belirli kurallara göre alt dizgi oluşturur.              |
| ft_strjoin    | İki dizgiyi birleştirip yeni bir dizgi döndürür.                  |
| ft_strtrim    | Dizginin başındaki ve sonundaki istenmeyen karakterleri siler.    |
| ft_split      | Dizgiyi ayırıcı karaktere göre bölerek string dizisi oluşturur.   |
| ft_itoa       | Bir tam sayıyı string (dizgi) formatına çevirir.                  |
| ft_strmapi    | Dizginin her karakterine fonksiyon uygulayıp yeni dizgi döndürür. |
| ft_striteri   | Dizginin karakterlerine adresleri üzerinden fonksiyon uygular.    |
| ft_putchar_fd | Karakteri belirtilen dosya tanımlayıcısına yazar.                 |
| ft_putstr_fd  | Dizgiyi belirtilen dosya tanımlayıcısına yazar.                   |
| ft_putendl_fd | Dizgiyi yazar ve sonuna yeni satır ekler.                         |
| ft_putnbr_fd  | Tam sayıyı belirtilen dosya tanımlayıcısına yazdırır.             |


3️⃣ Part 3 - Bağlı Liste (Linked List) Fonksiyonları

| Fonksiyon       | Açıklama                                                   |
| --------------- | ---------------------------------------------------------- |
| ft_lstnew       | Yeni bir liste düğümü oluşturur ve içeriğini başlatır.     |
| ft_lstadd_front | Listenin başına yeni bir eleman ekler.                     |
| ft_lstsize      | Listenin kaç elemandan oluştuğunu sayar.                   |
| ft_lstlast      | Listenin son elemanını döndürür.                           |
| ft_lstadd_back  | Listenin sonuna yeni bir eleman ekler.                     |
| ft_lstdelone    | Bir liste elemanını siler ve belleğini temizler.           |
| ft_lstclear     | Listenin tamamını ve tüm ardıllarını siler.                |
| ft_lstiter      | Listenin tüm elemanlarına sırasıyla bir fonksiyon uygular. |
| ft_lstmap       | Listeyi fonksiyondan geçirerek yeni bir liste oluşturur.   |


📖 Resources

https://www.geeksforgeeks.org/c/dynamic-memory-allocation-in-c-using-malloc-calloc-free-and-realloc/

https://youtu.be/r3uOBb3BM-0

https://www.learn-c.org/

🤖 AI Usage : Bu projede yapay zekayı; yazdığım kodlarda gözden kaçabilecek bellek sızıntılarını (memory leaks) tespit etmek, ft_split gibi karmaşık mantık içeren fonksiyonlarda "Segmentation Fault" hatalarının kök nedenini analiz etmek ve farklı test senaryoları (edge cases) oluşturmak için bir danışman olarak kullandım. Projedeki tüm kodların mantığı kavrandıktan sonra, fonksiyonların tüm yazımları bizzat tarafımdan gerçekleştirilmiştir.




