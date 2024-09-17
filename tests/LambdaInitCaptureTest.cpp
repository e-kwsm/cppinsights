int main()
{
   const int x{3};

   auto lambInit = [x=x] {};

   auto lamb = [x] {};
}
