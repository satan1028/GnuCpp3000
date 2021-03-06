#include "AbsUserCart1.hpp"
#include "Common.hpp"
#include "Products.hpp"
#include <list>

// Re-implement AbsUserCart signature using list<Product>
namespace Cart04 {

class FrankenCart : public MyUserCart01::AbsUserCart {
 protected:
  list<Product> data;
  virtual float getDiscount();

 public:
  FrankenCart(ShoppingCart::UserData& user);
  virtual float getBalance();
  virtual int addItem(int item);
  virtual int removeItem(int item);
  virtual bool isAvailable(int item);  // Check ID
  static FrankenCart& CreateCart(ShoppingCart::UserData& user);
};
}
