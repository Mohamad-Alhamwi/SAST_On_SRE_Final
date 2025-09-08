
/* std::_List_node<long>::_M_valptr() const */

void __thiscall std::_List_node<long>::_M_valptr(_List_node<long> *this)

{
  __aligned_membuf<long>::_M_ptr((__aligned_membuf<long> *)(this + 0x10));
  return;
}




/* new_allocator<std::_List_node<long> >::max_size() const */

undefined8 new_allocator<std::_List_node<long>>::max_size(void)

{
  return 0x555555555555555;
}




/* CWE191_Integer_Underflow__int64_t_min_multiply_73::bad() */

void CWE191_Integer_Underflow__int64_t_min_multiply_73::bad(void)

{
  long in_FS_OFFSET;
  long local_60;
  list<long,std::allocator<long>> local_58 [32];
  list<long,std::allocator<long>> local_38 [24];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  std::list<long,std::allocator<long>>::list(local_58);
  local_60 = -0x8000000000000000;
                    /* try { // try from 001016e0 to 0010171d has its CatchHandler @ 00101769 */
  std::list<long,std::allocator<long>>::push_back(local_58,&local_60);
  std::list<long,std::allocator<long>>::push_back(local_58,&local_60);
  std::list<long,std::allocator<long>>::push_back(local_58,&local_60);
  std::list<long,std::allocator<long>>::list(local_38,(list *)local_58);
                    /* try { // try from 00101725 to 00101729 has its CatchHandler @ 00101754 */
  badSink((list)local_38);
  std::list<long,std::allocator<long>>::~list(local_38);
  std::list<long,std::allocator<long>>::~list(local_58);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




/* std::_List_base<long, std::allocator<long> >::_List_base(std::allocator<std::_List_node<long>
   >&&) */

void __thiscall
std::_List_base<long,std::allocator<long>>::_List_base
          (_List_base<long,std::allocator<long>> *this,allocator *param_1)

{
  type *ptVar1;
  
  ptVar1 = move<std::allocator<std::_List_node<long>>&>(param_1);
  _List_impl::_List_impl((_List_impl *)this,(allocator *)ptVar1);
  return;
}




void bad7(void)

{
  return;
}




void printShortLine(short param_1)

{
  printf("%hd\n",(ulong)(uint)(int)param_1);
  return;
}




/* std::list<long, std::allocator<long> >::list() */

void __thiscall std::list<long,std::allocator<long>>::list(list<long,std::allocator<long>> *this)

{
  _List_base<long,std::allocator<long>>::_List_base((_List_base<long,std::allocator<long>> *)this);
  return;
}




/* __aligned_membuf<long>::_M_ptr() */

void __thiscall __aligned_membuf<long>::_M_ptr(__aligned_membuf<long> *this)

{
  _M_addr(this);
  return;
}




/* void std::list<long, std::allocator<long> >::_M_insert<long const&>(std::_List_iterator<long>,
   long const&) */

void __thiscall
std::list<long,std::allocator<long>>::_M_insert<long_const&>
          (list<long,std::allocator<long>> *this,_List_iterator param_1,long *param_2)

{
  long *plVar1;
  _List_node *p_Var2;
  
  plVar1 = forward<long_const&>((type *)param_2);
  p_Var2 = _M_create_node<long_const&>(this,plVar1);
  std::__detail::_List_node_base::_M_hook((_List_node_base *)p_Var2);
  _List_base<long,std::allocator<long>>::_M_inc_size
            ((_List_base<long,std::allocator<long>> *)this,1);
  return;
}




void good2(void)

{
  return;
}




/* std::__allocated_ptr<std::allocator<std::_List_node<long> > >::~__allocated_ptr() */

void __thiscall
std::__allocated_ptr<std::allocator<std::_List_node<long>>>::~__allocated_ptr
          (__allocated_ptr<std::allocator<std::_List_node<long>>> *this)

{
  if (*(long *)(this + 8) != 0) {
    allocator_traits<std::allocator<std::_List_node<long>>>::deallocate
              (*(allocator **)this,*(_List_node **)(this + 8),1);
  }
  return;
}




/* std::_List_const_iterator<long>::TEMPNAMEPLACEHOLDERVALUE() const */

void __thiscall std::_List_const_iterator<long>::operator*(_List_const_iterator<long> *this)

{
  _List_node<long>::_M_valptr(*(_List_node<long> **)this);
  return;
}




/* new_allocator<std::_List_node<long> >::new_allocator() */

void new_allocator<std::_List_node<long>>::new_allocator(void)

{
  return;
}




/* new_allocator<std::_List_node<long> >::allocate(unsigned long, void const*) */

void new_allocator<std::_List_node<long>>::allocate(ulong param_1,void *param_2)

{
  void *pvVar1;
  
  pvVar1 = (void *)max_size();
  if (pvVar1 < param_2) {
    std::__throw_bad_alloc();
  }
  operator_new((long)param_2 * 0x18);
  return;
}




void printHexCharLine(char param_1)

{
  printf("%02x\n",(ulong)(uint)(int)param_1);
  return;
}




/* std::_List_base<long, std::allocator<long> >::_List_impl::~_List_impl() */

void __thiscall
std::_List_base<long,std::allocator<long>>::_List_impl::~_List_impl(_List_impl *this)

{
  allocator<std::_List_node<long>>::~allocator((allocator<std::_List_node<long>> *)this);
  return;
}




ulong decodeHexWChars(long param_1,ulong param_2,long param_3)

{
  int iVar1;
  long in_FS_OFFSET;
  undefined local_1c [4];
  ulong local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  for (local_18 = 0; local_18 < param_2; local_18 = local_18 + 1) {
    iVar1 = iswxdigit(*(wint_t *)(param_3 + local_18 * 8));
    if (iVar1 == 0) break;
    iVar1 = iswxdigit(*(wint_t *)(param_3 + local_18 * 8 + 4));
    if (iVar1 == 0) break;
    __isoc99_swscanf(local_18 * 8 + param_3,&DAT_001030d8,local_1c);
    *(char *)(local_18 + param_1) = local_1c[0];
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void good9(void)

{
  return;
}




void bad9(void)

{
  return;
}




/* __aligned_membuf<long>::_M_addr() const */

__aligned_membuf<long> * __thiscall __aligned_membuf<long>::_M_addr(__aligned_membuf<long> *this)

{
  return this;
}




/* void std::allocator_traits<std::allocator<std::_List_node<long> >
   >::destroy<long>(std::allocator<std::_List_node<long> >&, long*) */

void std::allocator_traits<std::allocator<std::_List_node<long>>>::destroy<long>
               (allocator *param_1,long *param_2)

{
  new_allocator<std::_List_node<long>>::destroy<long>((long *)param_1);
  return;
}




void printDoubleLine(undefined8 param_1)

{
  printf("%g\n",param_1);
  return;
}




/* std::_List_base<long, std::allocator<long>
   >::_List_impl::_List_impl(std::allocator<std::_List_node<long> >&&) */

void __thiscall
std::_List_base<long,std::allocator<long>>::_List_impl::_List_impl
          (_List_impl *this,allocator *param_1)

{
  move<std::allocator<std::_List_node<long>>&>(param_1);
  allocator<std::_List_node<long>>::allocator((allocator *)this);
  __detail::_List_node_header::_List_node_header((_List_node_header *)this);
  return;
}




void printFloatLine(float param_1)

{
  printf("%f\n",(double)param_1);
  return;
}




/* std::_List_base<long, std::allocator<long> >::_List_impl::_List_impl() */

void __thiscall std::_List_base<long,std::allocator<long>>::_List_impl::_List_impl(_List_impl *this)

{
  allocator<std::_List_node<long>>::allocator();
  __detail::_List_node_header::_List_node_header((_List_node_header *)this);
  return;
}




/* std::_List_iterator<long>::TEMPNAMEPLACEHOLDERVALUE() */

_List_iterator<long> * __thiscall std::_List_iterator<long>::operator--(_List_iterator<long> *this)

{
  *(undefined8 *)this = *(undefined8 *)(*(long *)this + 8);
  return this;
}




void internal_start(long param_1)

{
  (**(code **)(param_1 + 8))(*(undefined8 *)(param_1 + 0x10));
                    /* WARNING: Subroutine does not return */
  pthread_exit((void *)0x0);
}




void good5(void)

{
  return;
}




/* std::__detail::_List_node_header::_M_init() */

void __thiscall std::__detail::_List_node_header::_M_init(_List_node_header *this)

{
  *(_List_node_header **)(this + 8) = this;
  *(undefined8 *)this = *(undefined8 *)(this + 8);
  *(undefined8 *)(this + 0x10) = 0;
  return;
}




/* std::allocator_traits<std::allocator<std::_List_node<long> >
   >::select_on_container_copy_construction(std::allocator<std::_List_node<long> > const&) */

allocator *
std::allocator_traits<std::allocator<std::_List_node<long>>>::select_on_container_copy_construction
          (allocator *param_1)

{
  allocator<std::_List_node<long>>::allocator(param_1);
  return param_1;
}




/* std::list<long, std::allocator<long> >::list(std::list<long, std::allocator<long> > const&) */

void __thiscall
std::list<long,std::allocator<long>>::list(list<long,std::allocator<long>> *this,list *param_1)

{
  __false_type _Var1;
  _List_const_iterator _Var2;
  long in_FS_OFFSET;
  allocator local_21;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  _List_base<long,std::allocator<long>>::_M_get_Node_allocator
            ((_List_base<long,std::allocator<long>> *)param_1);
  __alloc_traits<std::allocator<std::_List_node<long>>,std::_List_node<long>>::_S_select_on_copy
            (&local_21);
  _List_base<long,std::allocator<long>>::_List_base
            ((_List_base<long,std::allocator<long>> *)this,&local_21);
  allocator<std::_List_node<long>>::~allocator((allocator<std::_List_node<long>> *)&local_21);
  _Var1 = end((list<long,std::allocator<long>> *)param_1);
  _Var2 = begin((list<long,std::allocator<long>> *)param_1);
                    /* try { // try from 00101c30 to 00101c34 has its CatchHandler @ 00101c37 */
  _M_initialize_dispatch<std::_List_const_iterator<long>>((_List_const_iterator)this,_Var2,_Var1);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void good1(void)

{
  return;
}




/* std::__allocated_ptr<std::allocator<std::_List_node<long> >
   >::__allocated_ptr(std::allocator<std::_List_node<long> >&, std::_List_node<long>*) */

void __thiscall
std::__allocated_ptr<std::allocator<std::_List_node<long>>>::__allocated_ptr
          (__allocated_ptr<std::allocator<std::_List_node<long>>> *this,allocator *param_1,
          _List_node *param_2)

{
  allocator *paVar1;
  
  paVar1 = __addressof<std::allocator<std::_List_node<long>>>(param_1);
  *(allocator **)this = paVar1;
  *(_List_node **)(this + 8) = param_2;
  return;
}




void FUN_00101020(void)

{
  (*(code *)PTR_00105f08)();
  return;
}




/* void std::allocator_traits<std::allocator<std::_List_node<long> > >::construct<long, long
   const&>(std::allocator<std::_List_node<long> >&, long*, long const&) */

void std::allocator_traits<std::allocator<std::_List_node<long>>>::construct<long,long_const&>
               (allocator *param_1,long *param_2,long *param_3)

{
  long *plVar1;
  
  plVar1 = forward<long_const&>((type *)param_3);
  new_allocator<std::_List_node<long>>::construct<long,long_const&>
            ((new_allocator<std::_List_node<long>> *)param_1,param_2,plVar1);
  return;
}




void stdThreadLockDestroy(pthread_mutex_t *param_1)

{
  pthread_mutex_destroy(param_1);
  free(param_1);
  return;
}




void bad5(void)

{
  return;
}




/* __aligned_membuf<long>::_M_addr() */

__aligned_membuf<long> * __thiscall __aligned_membuf<long>::_M_addr(__aligned_membuf<long> *this)

{
  return this;
}




void printIntLine(uint param_1)

{
  printf("%d\n",(ulong)param_1);
  return;
}




/* std::_List_base<long, std::allocator<long> >::~_List_base() */

void __thiscall
std::_List_base<long,std::allocator<long>>::~_List_base(_List_base<long,std::allocator<long>> *this)

{
  _M_clear(this);
  _List_impl::~_List_impl((_List_impl *)this);
  return;
}




void printLongLine(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




/* CWE191_Integer_Underflow__int64_t_min_multiply_73::goodG2B() */

void CWE191_Integer_Underflow__int64_t_min_multiply_73::goodG2B(void)

{
  long in_FS_OFFSET;
  long local_60;
  list<long,std::allocator<long>> local_58 [32];
  list<long,std::allocator<long>> local_38 [24];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  std::list<long,std::allocator<long>>::list(local_58);
  local_60 = -2;
                    /* try { // try from 001017d9 to 00101816 has its CatchHandler @ 00101862 */
  std::list<long,std::allocator<long>>::push_back(local_58,&local_60);
  std::list<long,std::allocator<long>>::push_back(local_58,&local_60);
  std::list<long,std::allocator<long>>::push_back(local_58,&local_60);
  std::list<long,std::allocator<long>>::list(local_38,(list *)local_58);
                    /* try { // try from 0010181e to 00101822 has its CatchHandler @ 0010184d */
  goodG2BSink((list)local_38);
  std::list<long,std::allocator<long>>::~list(local_38);
  std::list<long,std::allocator<long>>::~list(local_58);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void stdThreadLockAcquire(pthread_mutex_t *param_1)

{
  pthread_mutex_lock(param_1);
  return;
}




/* std::_List_iterator<long>::_List_iterator(std::__detail::_List_node_base*) */

void __thiscall
std::_List_iterator<long>::_List_iterator(_List_iterator<long> *this,_List_node_base *param_1)

{
  *(_List_node_base **)this = param_1;
  return;
}




/* std::allocator<std::_List_node<long> >::~allocator() */

void __thiscall
std::allocator<std::_List_node<long>>::~allocator(allocator<std::_List_node<long>> *this)

{
  new_allocator<std::_List_node<long>>::~new_allocator((new_allocator<std::_List_node<long>> *)this)
  ;
  return;
}




/* __aligned_membuf<long>::_M_ptr() const */

void __thiscall __aligned_membuf<long>::_M_ptr(__aligned_membuf<long> *this)

{
  _M_addr(this);
  return;
}




void bad1(void)

{
  return;
}




/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* std::allocator<std::_List_node<long> >* std::__addressof<std::allocator<std::_List_node<long> >
   >(std::allocator<std::_List_node<long> >&) */

allocator * std::__addressof<std::allocator<std::_List_node<long>>>(allocator *param_1)

{
  return param_1;
}




/* std::_List_const_iterator<long>::TEMPNAMEPLACEHOLDERVALUE() */

_List_const_iterator<long> * __thiscall
std::_List_const_iterator<long>::operator++(_List_const_iterator<long> *this)

{
  *(undefined8 *)this = **(undefined8 **)this;
  return this;
}




undefined8 stdThreadCreate(pthread_t param_1,pthread_t param_2,undefined8 *param_3)

{
  int iVar1;
  undefined8 uVar2;
  long in_FS_OFFSET;
  pthread_t local_20;
  pthread_t *local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  *param_3 = 0;
  local_18 = (pthread_t *)malloc(0x18);
  if (local_18 == (pthread_t *)0x0) {
    uVar2 = 0;
  }
  else {
    local_18[1] = param_1;
    local_18[2] = param_2;
    iVar1 = pthread_create(&local_20,(pthread_attr_t *)0x0,internal_start,local_18);
    if (iVar1 == 0) {
      *local_18 = local_20;
      *param_3 = local_18;
      uVar2 = 1;
    }
    else {
      free(local_18);
      uVar2 = 0;
    }
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar2;
}




undefined8 main(void)

{
  time_t tVar1;
  
  tVar1 = time((time_t *)0x0);
  srand((uint)tVar1);
  printLine("Calling good()...");
  CWE191_Integer_Underflow__int64_t_min_multiply_73::good();
  printLine("Finished good()");
  printLine("Calling bad()...");
  CWE191_Integer_Underflow__int64_t_min_multiply_73::bad();
  printLine("Finished bad()");
  return 0;
}




void good8(void)

{
  return;
}




/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* std::remove_reference<std::allocator<std::_List_node<long> >&>::type&&
   std::move<std::allocator<std::_List_node<long> >&>(std::allocator<std::_List_node<long> >&) */

type * std::move<std::allocator<std::_List_node<long>>&>(allocator *param_1)

{
  return (type *)param_1;
}




/* std::allocator_traits<std::allocator<std::_List_node<long> >
   >::allocate(std::allocator<std::_List_node<long> >&, unsigned long) */

void std::allocator_traits<std::allocator<std::_List_node<long>>>::allocate
               (allocator *param_1,ulong param_2)

{
  new_allocator<std::_List_node<long>>::allocate((ulong)param_1,(void *)param_2);
  return;
}




void printBytesLine(long param_1,ulong param_2)

{
  ulong local_10;
  
  for (local_10 = 0; local_10 < param_2; local_10 = local_10 + 1) {
    printf("%02x",(ulong)*(byte *)(local_10 + param_1));
  }
  puts("");
  return;
}




/* CWE191_Integer_Underflow__int64_t_min_multiply_73::goodB2G() */

void CWE191_Integer_Underflow__int64_t_min_multiply_73::goodB2G(void)

{
  long in_FS_OFFSET;
  long local_60;
  list<long,std::allocator<long>> local_58 [32];
  list<long,std::allocator<long>> local_38 [24];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  std::list<long,std::allocator<long>>::list(local_58);
  local_60 = -0x8000000000000000;
                    /* try { // try from 001018d8 to 00101915 has its CatchHandler @ 00101961 */
  std::list<long,std::allocator<long>>::push_back(local_58,&local_60);
  std::list<long,std::allocator<long>>::push_back(local_58,&local_60);
  std::list<long,std::allocator<long>>::push_back(local_58,&local_60);
  std::list<long,std::allocator<long>>::list(local_38,(list *)local_58);
                    /* try { // try from 0010191d to 00101921 has its CatchHandler @ 0010194c */
  goodB2GSink((list)local_38);
  std::list<long,std::allocator<long>>::~list(local_38);
  std::list<long,std::allocator<long>>::~list(local_58);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




/* std::__detail::_List_node_header::_List_node_header() */

void __thiscall std::__detail::_List_node_header::_List_node_header(_List_node_header *this)

{
  _M_init(this);
  return;
}




/* std::allocator<std::_List_node<long> >::allocator() */

void std::allocator<std::_List_node<long>>::allocator(void)

{
  new_allocator<std::_List_node<long>>::new_allocator();
  return;
}




/* CWE191_Integer_Underflow__int64_t_min_multiply_73::good() */

void CWE191_Integer_Underflow__int64_t_min_multiply_73::good(void)

{
  goodG2B();
  goodB2G();
  return;
}




/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* long const& std::forward<long const&>(std::remove_reference<long const&>::type&) */

long * std::forward<long_const&>(type *param_1)

{
  return (long *)param_1;
}




void bad2(void)

{
  return;
}




/* operator new(unsigned long, void*) */

void * operator_new(ulong param_1,void *param_2)

{
  return param_2;
}




undefined8 stdThreadLockCreate(undefined8 *param_1)

{
  int iVar1;
  pthread_mutex_t *__mutex;
  undefined8 uVar2;
  
  *param_1 = 0;
  __mutex = (pthread_mutex_t *)malloc(0x28);
  if (__mutex == (pthread_mutex_t *)0x0) {
    uVar2 = 0;
  }
  else {
    iVar1 = pthread_mutex_init(__mutex,(pthread_mutexattr_t *)0x0);
    if (iVar1 == 0) {
      *param_1 = __mutex;
      uVar2 = 1;
    }
    else {
      free(param_1);
      uVar2 = 0;
    }
  }
  return uVar2;
}




undefined8 globalReturnsFalse(void)

{
  return 0;
}




/* CWE191_Integer_Underflow__int64_t_min_multiply_73::goodB2GSink(std::list<long,
   std::allocator<long> >) */

void CWE191_Integer_Underflow__int64_t_min_multiply_73::goodB2GSink(list param_1)

{
  long lVar1;
  long *plVar2;
  undefined4 in_register_0000003c;
  
  plVar2 = (long *)std::list<long,std::allocator<long>>::back
                             ((list<long,std::allocator<long>> *)
                              CONCAT44(in_register_0000003c,param_1));
  lVar1 = *plVar2;
  if (lVar1 < 0) {
    if (lVar1 < -0x3fffffffffffffff) {
      printLine("data value is too small to perform multiplication.");
    }
    else {
      printLongLongLine(lVar1 * 2);
    }
  }
  return;
}




void printLongLongLine(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




bool stdThreadJoin(pthread_t *param_1)

{
  int iVar1;
  long in_FS_OFFSET;
  void *local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  iVar1 = pthread_join(*param_1,&local_18);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return iVar1 == 0;
}




/* std::_List_base<long, std::allocator<long> >::_M_get_node() */

void __thiscall
std::_List_base<long,std::allocator<long>>::_M_get_node(_List_base<long,std::allocator<long>> *this)

{
  allocator_traits<std::allocator<std::_List_node<long>>>::allocate((allocator *)this,1);
  return;
}




/* std::allocator<std::_List_node<long> >::allocator(std::allocator<std::_List_node<long> > const&)
    */

void std::allocator<std::_List_node<long>>::allocator(allocator *param_1)

{
  new_allocator<std::_List_node<long>>::new_allocator((new_allocator *)param_1);
  return;
}




void bad3(void)

{
  return;
}




/* std::list<long, std::allocator<long> >::end() const */

undefined8 __thiscall
std::list<long,std::allocator<long>>::end(list<long,std::allocator<long>> *this)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  _List_const_iterator<long>::_List_const_iterator
            ((_List_const_iterator<long> *)&local_18,(_List_node_base *)this);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void bad6(void)

{
  return;
}




undefined8 stdThreadDestroy(void *param_1)

{
  free(param_1);
  return 1;
}




/* std::_List_base<long, std::allocator<long> >::_M_inc_size(unsigned long) */

void __thiscall
std::_List_base<long,std::allocator<long>>::_M_inc_size
          (_List_base<long,std::allocator<long>> *this,ulong param_1)

{
  *(ulong *)(this + 0x10) = *(long *)(this + 0x10) + param_1;
  return;
}




/* std::_List_base<long, std::allocator<long> >::_List_base() */

void __thiscall
std::_List_base<long,std::allocator<long>>::_List_base(_List_base<long,std::allocator<long>> *this)

{
  _List_impl::_List_impl((_List_impl *)this);
  return;
}




/* void std::list<long, std::allocator<long>
   >::_M_initialize_dispatch<std::_List_const_iterator<long> >(std::_List_const_iterator<long>,
   std::_List_const_iterator<long>, std::__false_type) */

void std::list<long,std::allocator<long>>::_M_initialize_dispatch<std::_List_const_iterator<long>>
               (_List_const_iterator param_1,_List_const_iterator param_2,__false_type param_3)

{
  char cVar1;
  long *plVar2;
  undefined4 in_register_00000014;
  undefined4 in_register_00000034;
  undefined4 in_register_0000003c;
  undefined8 local_20;
  undefined8 local_18;
  list<long,std::allocator<long>> *local_10;
  
  local_10 = (list<long,std::allocator<long>> *)CONCAT44(in_register_0000003c,param_1);
  local_18 = CONCAT44(in_register_00000034,param_2);
  local_20 = CONCAT44(in_register_00000014,param_3);
  while( true ) {
    cVar1 = operator!=((_List_const_iterator *)&local_18,(_List_const_iterator *)&local_20);
    if (cVar1 == '\0') break;
    plVar2 = (long *)_List_const_iterator<long>::operator*((_List_const_iterator<long> *)&local_18);
    emplace_back<long_const&>(local_10,plVar2);
    _List_const_iterator<long>::operator++((_List_const_iterator<long> *)&local_18);
  }
  return;
}




/* std::allocator_traits<std::allocator<std::_List_node<long> >
   >::deallocate(std::allocator<std::_List_node<long> >&, std::_List_node<long>*, unsigned long) */

void std::allocator_traits<std::allocator<std::_List_node<long>>>::deallocate
               (allocator *param_1,_List_node *param_2,ulong param_3)

{
  new_allocator<std::_List_node<long>>::deallocate((_List_node *)param_1,(ulong)param_2);
  return;
}




/* new_allocator<std::_List_node<long> >::~new_allocator() */

void __thiscall
new_allocator<std::_List_node<long>>::~new_allocator(new_allocator<std::_List_node<long>> *this)

{
  return;
}




void good6(void)

{
  return;
}




/* __alloc_traits<std::allocator<std::_List_node<long> >, std::_List_node<long>
   >::_S_select_on_copy(std::allocator<std::_List_node<long> > const&) */

allocator *
__alloc_traits<std::allocator<std::_List_node<long>>,std::_List_node<long>>::_S_select_on_copy
          (allocator *param_1)

{
  long lVar1;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  std::allocator_traits<std::allocator<std::_List_node<long>>>::
  select_on_container_copy_construction(param_1);
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1;
}




void printHexUnsignedCharLine(byte param_1)

{
  printf("%02x\n",(ulong)param_1);
  return;
}




/* std::_List_base<long, std::allocator<long> >::_M_get_Node_allocator() */

_List_base<long,std::allocator<long>> * __thiscall
std::_List_base<long,std::allocator<long>>::_M_get_Node_allocator
          (_List_base<long,std::allocator<long>> *this)

{
  return this;
}




undefined8 globalReturnsTrue(void)

{
  return 1;
}




/* std::list<long, std::allocator<long> >::~list() */

void __thiscall std::list<long,std::allocator<long>>::~list(list<long,std::allocator<long>> *this)

{
  _List_base<long,std::allocator<long>>::~_List_base((_List_base<long,std::allocator<long>> *)this);
  return;
}




void printLine(char *param_1)

{
  if (param_1 != (char *)0x0) {
    puts(param_1);
  }
  return;
}




void good4(void)

{
  return;
}




void good7(void)

{
  return;
}




void printSizeTLine(undefined8 param_1)

{
  printf("%zu\n",param_1);
  return;
}




/* std::list<long, std::allocator<long> >::back() */

void __thiscall std::list<long,std::allocator<long>>::back(list<long,std::allocator<long>> *this)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_18 = end(this);
  _List_iterator<long>::operator--((_List_iterator<long> *)&local_18);
  _List_iterator<long>::operator*((_List_iterator<long> *)&local_18);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




int globalReturnsTrueOrFalse(void)

{
  int iVar1;
  
  iVar1 = rand();
  return iVar1 % 2;
}




/* CWE191_Integer_Underflow__int64_t_min_multiply_73::goodG2BSink(std::list<long,
   std::allocator<long> >) */

void CWE191_Integer_Underflow__int64_t_min_multiply_73::goodG2BSink(list param_1)

{
  long *plVar1;
  undefined4 in_register_0000003c;
  
  plVar1 = (long *)std::list<long,std::allocator<long>>::back
                             ((list<long,std::allocator<long>> *)
                              CONCAT44(in_register_0000003c,param_1));
  if (*plVar1 < 0) {
    printLongLongLine(*plVar1 * 2);
  }
  return;
}




/* std::list<long, std::allocator<long> >::begin() const */

undefined8 __thiscall
std::list<long,std::allocator<long>>::begin(list<long,std::allocator<long>> *this)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  _List_const_iterator<long>::_List_const_iterator
            ((_List_const_iterator<long> *)&local_18,*(_List_node_base **)this);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




/* std::_List_base<long, std::allocator<long> >::_M_clear() */

void __thiscall
std::_List_base<long,std::allocator<long>>::_M_clear(_List_base<long,std::allocator<long>> *this)

{
  _List_node<long> *p_Var1;
  long *plVar2;
  allocator *paVar3;
  undefined8 local_20;
  
  local_20 = *(_List_node<long> **)this;
  while (local_20 != (_List_node<long> *)this) {
    p_Var1 = *(_List_node<long> **)local_20;
    plVar2 = (long *)_List_node<long>::_M_valptr(local_20);
    paVar3 = (allocator *)_M_get_Node_allocator(this);
    allocator_traits<std::allocator<std::_List_node<long>>>::destroy<long>(paVar3,plVar2);
    _M_put_node(this,(_List_node *)local_20);
    local_20 = p_Var1;
  }
  return;
}




/* std::_List_base<long, std::allocator<long> >::_M_get_Node_allocator() const */

_List_base<long,std::allocator<long>> * __thiscall
std::_List_base<long,std::allocator<long>>::_M_get_Node_allocator
          (_List_base<long,std::allocator<long>> *this)

{
  return this;
}




ulong decodeHexChars(long param_1,ulong param_2,long param_3)

{
  ushort **ppuVar1;
  long in_FS_OFFSET;
  undefined local_1c [4];
  ulong local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  for (local_18 = 0; local_18 < param_2; local_18 = local_18 + 1) {
    ppuVar1 = __ctype_b_loc();
    if (((*ppuVar1)[*(char *)(param_3 + local_18 * 2)] & 0x1000) == 0) break;
    ppuVar1 = __ctype_b_loc();
    if (((*ppuVar1)[*(char *)(param_3 + local_18 * 2 + 1)] & 0x1000) == 0) break;
    __isoc99_sscanf(local_18 * 2 + param_3,&DAT_001030d0,local_1c);
    *(char *)(local_18 + param_1) = local_1c[0];
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




/* std::_List_base<long, std::allocator<long> >::_M_put_node(std::_List_node<long>*) */

void __thiscall
std::_List_base<long,std::allocator<long>>::_M_put_node
          (_List_base<long,std::allocator<long>> *this,_List_node *param_1)

{
  allocator_traits<std::allocator<std::_List_node<long>>>::deallocate((allocator *)this,param_1,1);
  return;
}




void stdThreadLockRelease(pthread_mutex_t *param_1)

{
  pthread_mutex_unlock(param_1);
  return;
}




/* new_allocator<std::_List_node<long> >::deallocate(std::_List_node<long>*, unsigned long) */

void new_allocator<std::_List_node<long>>::deallocate(_List_node *param_1,ulong param_2)

{
  operator_delete((void *)param_2);
  return;
}




void printStructLine(uint *param_1)

{
  printf("%d -- %d\n",(ulong)*param_1,(ulong)param_1[1]);
  return;
}




void good3(void)

{
  return;
}




/* CWE191_Integer_Underflow__int64_t_min_multiply_73::badSink(std::list<long, std::allocator<long>
   >) */

void CWE191_Integer_Underflow__int64_t_min_multiply_73::badSink(list param_1)

{
  long *plVar1;
  undefined4 in_register_0000003c;
  
  plVar1 = (long *)std::list<long,std::allocator<long>>::back
                             ((list<long,std::allocator<long>> *)
                              CONCAT44(in_register_0000003c,param_1));
  if (*plVar1 < 0) {
    printLongLongLine(*plVar1 * 2);
  }
  return;
}




/* std::_List_iterator<long>::TEMPNAMEPLACEHOLDERVALUE() const */

void __thiscall std::_List_iterator<long>::operator*(_List_iterator<long> *this)

{
  _List_node<long>::_M_valptr(*(_List_node<long> **)this);
  return;
}




/* std::_List_const_iterator<long>::_List_const_iterator(std::__detail::_List_node_base const*) */

void __thiscall
std::_List_const_iterator<long>::_List_const_iterator
          (_List_const_iterator<long> *this,_List_node_base *param_1)

{
  *(_List_node_base **)this = param_1;
  return;
}




void printUnsignedLine(uint param_1)

{
  printf("%u\n",(ulong)param_1);
  return;
}




/* std::_List_node<long>::_M_valptr() */

void __thiscall std::_List_node<long>::_M_valptr(_List_node<long> *this)

{
  __aligned_membuf<long>::_M_ptr((__aligned_membuf<long> *)(this + 0x10));
  return;
}




/* void std::list<long, std::allocator<long> >::emplace_back<long const&>(long const&) */

void __thiscall
std::list<long,std::allocator<long>>::emplace_back<long_const&>
          (list<long,std::allocator<long>> *this,long *param_1)

{
  _List_iterator _Var1;
  long *plVar2;
  
  plVar2 = forward<long_const&>((type *)param_1);
  _Var1 = end(this);
  _M_insert<long_const&>(this,_Var1,plVar2);
  return;
}




/* std::__allocated_ptr<std::allocator<std::_List_node<long> >
   >::TEMPNAMEPLACEHOLDERVALUE(decltype(nullptr)) */

__allocated_ptr<std::allocator<std::_List_node<long>>> * __thiscall
std::__allocated_ptr<std::allocator<std::_List_node<long>>>::operator=
          (__allocated_ptr<std::allocator<std::_List_node<long>>> *this,
          _func_decltype_nullptr *param_1)

{
  *(undefined8 *)(this + 8) = 0;
  return this;
}




void bad8(void)

{
  return;
}




/* std::list<long, std::allocator<long> >::push_back(long const&) */

void __thiscall
std::list<long,std::allocator<long>>::push_back(list<long,std::allocator<long>> *this,long *param_1)

{
  _List_iterator _Var1;
  
  _Var1 = end(this);
  _M_insert<long_const&>(this,_Var1,param_1);
  return;
}




/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* std::TEMPNAMEPLACEHOLDERVALUE(std::_List_const_iterator<long> const&,
   std::_List_const_iterator<long> const&) */

undefined8 std::operator!=(_List_const_iterator *param_1,_List_const_iterator *param_2)

{
  return CONCAT71((int7)((ulong)*(long *)param_2 >> 8),*(long *)param_1 != *(long *)param_2);
}




/* std::list<long, std::allocator<long> >::end() */

undefined8 __thiscall
std::list<long,std::allocator<long>>::end(list<long,std::allocator<long>> *this)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  _List_iterator<long>::_List_iterator((_List_iterator<long> *)&local_18,(_List_node_base *)this);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




/* new_allocator<std::_List_node<long> >::new_allocator(new_allocator<std::_List_node<long> >
   const&) */

void new_allocator<std::_List_node<long>>::new_allocator(new_allocator *param_1)

{
  return;
}




void printWLine(long param_1)

{
  if (param_1 != 0) {
    wprintf(L"%ls\n",param_1);
  }
  return;
}




void printWcharLine(undefined4 param_1)

{
  long in_FS_OFFSET;
  undefined4 local_18;
  undefined4 local_14;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_14 = 0;
  local_18 = param_1;
  printf("%ls\n",&local_18);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




/* void new_allocator<std::_List_node<long> >::destroy<long>(long*) */

void new_allocator<std::_List_node<long>>::destroy<long>(long *param_1)

{
  return;
}




/* void new_allocator<std::_List_node<long> >::construct<long, long const&>(long*, long const&) */

void __thiscall
new_allocator<std::_List_node<long>>::construct<long,long_const&>
          (new_allocator<std::_List_node<long>> *this,long *param_1,long *param_2)

{
  long lVar1;
  long *plVar2;
  
  plVar2 = std::forward<long_const&>((type *)param_2);
  lVar1 = *plVar2;
  plVar2 = (long *)operator_new(8,param_1);
  *plVar2 = lVar1;
  return;
}




void bad4(void)

{
  return;
}




/* std::_List_node<long>* std::list<long, std::allocator<long> >::_M_create_node<long const&>(long
   const&) */

_List_node * __thiscall
std::list<long,std::allocator<long>>::_M_create_node<long_const&>
          (list<long,std::allocator<long>> *this,long *param_1)

{
  _List_node<long> *this_00;
  allocator *paVar1;
  long *plVar2;
  long *plVar3;
  long in_FS_OFFSET;
  __allocated_ptr<std::allocator<std::_List_node<long>>> local_38 [24];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  this_00 = (_List_node<long> *)
            _List_base<long,std::allocator<long>>::_M_get_node
                      ((_List_base<long,std::allocator<long>> *)this);
  paVar1 = (allocator *)
           _List_base<long,std::allocator<long>>::_M_get_Node_allocator
                     ((_List_base<long,std::allocator<long>> *)this);
  __allocated_ptr<std::allocator<std::_List_node<long>>>::__allocated_ptr
            (local_38,paVar1,(_List_node *)this_00);
  plVar2 = forward<long_const&>((type *)param_1);
  plVar3 = (long *)_List_node<long>::_M_valptr(this_00);
  allocator_traits<std::allocator<std::_List_node<long>>>::construct<long,long_const&>
            (paVar1,plVar3,plVar2);
  __allocated_ptr<std::allocator<std::_List_node<long>>>::operator=
            (local_38,(_func_decltype_nullptr *)0x0);
  __allocated_ptr<std::allocator<std::_List_node<long>>>::~__allocated_ptr(local_38);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return (_List_node *)this_00;
}



