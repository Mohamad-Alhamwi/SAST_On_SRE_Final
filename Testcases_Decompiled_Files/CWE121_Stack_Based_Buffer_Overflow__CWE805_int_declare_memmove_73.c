
/* std::_List_base<int*, std::allocator<int*> >::_M_get_node() */

void __thiscall
std::_List_base<int*,std::allocator<int*>>::_M_get_node(_List_base<int*,std::allocator<int*>> *this)

{
  allocator_traits<std::allocator<std::_List_node<int*>>>::allocate((allocator *)this,1);
  return;
}




/* std::allocator_traits<std::allocator<std::_List_node<int*> >
   >::allocate(std::allocator<std::_List_node<int*> >&, unsigned long) */

void std::allocator_traits<std::allocator<std::_List_node<int*>>>::allocate
               (allocator *param_1,ulong param_2)

{
  new_allocator<std::_List_node<int*>>::allocate((ulong)param_1,(void *)param_2);
  return;
}




/* std::list<int*, std::allocator<int*> >::end() */

undefined8 __thiscall
std::list<int*,std::allocator<int*>>::end(list<int*,std::allocator<int*>> *this)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  _List_iterator<int*>::_List_iterator((_List_iterator<int*> *)&local_18,(_List_node_base *)this);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




/* new_allocator<std::_List_node<int*> >::~new_allocator() */

void __thiscall
new_allocator<std::_List_node<int*>>::~new_allocator(new_allocator<std::_List_node<int*>> *this)

{
  return;
}




void bad2(void)

{
  return;
}




/* void std::allocator_traits<std::allocator<std::_List_node<int*> >
   >::destroy<int*>(std::allocator<std::_List_node<int*> >&, int**) */

void std::allocator_traits<std::allocator<std::_List_node<int*>>>::destroy<int*>
               (allocator *param_1,int **param_2)

{
  new_allocator<std::_List_node<int*>>::destroy<int*>((int **)param_1);
  return;
}




/* CWE121_Stack_Based_Buffer_Overflow__CWE805_int_declare_memmove_73::good() */

void CWE121_Stack_Based_Buffer_Overflow__CWE805_int_declare_memmove_73::good(void)

{
  goodG2B();
  return;
}




/* CWE121_Stack_Based_Buffer_Overflow__CWE805_int_declare_memmove_73::goodG2BSink(std::list<int*,
   std::allocator<int*> >) */

void CWE121_Stack_Based_Buffer_Overflow__CWE805_int_declare_memmove_73::goodG2BSink(list param_1)

{
  undefined4 *__dest;
  undefined8 *puVar1;
  long lVar2;
  undefined4 in_register_0000003c;
  long in_FS_OFFSET;
  byte bVar3;
  undefined8 local_1a8 [51];
  long local_10;
  
  bVar3 = 0;
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  puVar1 = (undefined8 *)
           std::list<int*,std::allocator<int*>>::back
                     ((list<int*,std::allocator<int*>> *)CONCAT44(in_register_0000003c,param_1));
  __dest = (undefined4 *)*puVar1;
  puVar1 = local_1a8;
  for (lVar2 = 0x32; lVar2 != 0; lVar2 = lVar2 + -1) {
    *puVar1 = 0;
    puVar1 = puVar1 + (ulong)bVar3 * -2 + 1;
  }
  memmove(__dest,local_1a8,400);
  printIntLine(*__dest);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




/* std::list<int*, std::allocator<int*> >::push_back(int* const&) */

void __thiscall
std::list<int*,std::allocator<int*>>::push_back(list<int*,std::allocator<int*>> *this,int **param_1)

{
  _List_iterator _Var1;
  
  _Var1 = end(this);
  _M_insert<int*const&>(this,_Var1,param_1);
  return;
}




void printStructLine(uint *param_1)

{
  printf("%d -- %d\n",(ulong)*param_1,(ulong)param_1[1]);
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
    __isoc99_swscanf(local_18 * 8 + param_3,&DAT_00103098,local_1c);
    *(char *)(local_18 + param_1) = local_1c[0];
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




/* void std::list<int*, std::allocator<int*> >::emplace_back<int* const&>(int* const&) */

void __thiscall
std::list<int*,std::allocator<int*>>::emplace_back<int*const&>
          (list<int*,std::allocator<int*>> *this,int **param_1)

{
  _List_iterator _Var1;
  int **ppiVar2;
  
  ppiVar2 = forward<int*const&>((type *)param_1);
  _Var1 = end(this);
  _M_insert<int*const&>(this,_Var1,ppiVar2);
  return;
}




/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* std::remove_reference<std::allocator<std::_List_node<int*> >&>::type&&
   std::move<std::allocator<std::_List_node<int*> >&>(std::allocator<std::_List_node<int*> >&) */

type * std::move<std::allocator<std::_List_node<int*>>&>(allocator *param_1)

{
  return (type *)param_1;
}




/* std::_List_base<int*, std::allocator<int*> >::_M_get_Node_allocator() const */

_List_base<int*,std::allocator<int*>> * __thiscall
std::_List_base<int*,std::allocator<int*>>::_M_get_Node_allocator
          (_List_base<int*,std::allocator<int*>> *this)

{
  return this;
}




/* std::_List_node<int*>::_M_valptr() const */

void __thiscall std::_List_node<int*>::_M_valptr(_List_node<int*> *this)

{
  __aligned_membuf<int*>::_M_ptr((__aligned_membuf<int*> *)(this + 0x10));
  return;
}




void printIntLine(uint param_1)

{
  printf("%d\n",(ulong)param_1);
  return;
}




/* CWE121_Stack_Based_Buffer_Overflow__CWE805_int_declare_memmove_73::bad() */

void CWE121_Stack_Based_Buffer_Overflow__CWE805_int_declare_memmove_73::bad(void)

{
  long in_FS_OFFSET;
  int *local_200;
  list<int*,std::allocator<int*>> local_1f8 [32];
  list<int*,std::allocator<int*>> local_1d8 [32];
  int local_1b8 [102];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  std::list<int*,std::allocator<int*>>::list(local_1f8);
  local_200 = local_1b8;
                    /* try { // try from 0010174e to 0010179d has its CatchHandler @ 001017f5 */
  std::list<int*,std::allocator<int*>>::push_back(local_1f8,&local_200);
  std::list<int*,std::allocator<int*>>::push_back(local_1f8,&local_200);
  std::list<int*,std::allocator<int*>>::push_back(local_1f8,&local_200);
  std::list<int*,std::allocator<int*>>::list(local_1d8,(list *)local_1f8);
                    /* try { // try from 001017a8 to 001017ac has its CatchHandler @ 001017dd */
  badSink((list)local_1d8);
  std::list<int*,std::allocator<int*>>::~list(local_1d8);
  std::list<int*,std::allocator<int*>>::~list(local_1f8);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void printUnsignedLine(uint param_1)

{
  printf("%u\n",(ulong)param_1);
  return;
}




void good4(void)

{
  return;
}




void bad4(void)

{
  return;
}




/* new_allocator<std::_List_node<int*> >::deallocate(std::_List_node<int*>*, unsigned long) */

void new_allocator<std::_List_node<int*>>::deallocate(_List_node *param_1,ulong param_2)

{
  operator_delete((void *)param_2);
  return;
}




/* std::list<int*, std::allocator<int*> >::begin() const */

undefined8 __thiscall
std::list<int*,std::allocator<int*>>::begin(list<int*,std::allocator<int*>> *this)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  _List_const_iterator<int*>::_List_const_iterator
            ((_List_const_iterator<int*> *)&local_18,*(_List_node_base **)this);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void printLongLongLine(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




/* std::_List_node<int*>* std::list<int*, std::allocator<int*> >::_M_create_node<int* const&>(int*
   const&) */

_List_node * __thiscall
std::list<int*,std::allocator<int*>>::_M_create_node<int*const&>
          (list<int*,std::allocator<int*>> *this,int **param_1)

{
  _List_node<int*> *this_00;
  allocator *paVar1;
  int **ppiVar2;
  int **ppiVar3;
  long in_FS_OFFSET;
  __allocated_ptr<std::allocator<std::_List_node<int*>>> local_38 [24];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  this_00 = (_List_node<int*> *)
            _List_base<int*,std::allocator<int*>>::_M_get_node
                      ((_List_base<int*,std::allocator<int*>> *)this);
  paVar1 = (allocator *)
           _List_base<int*,std::allocator<int*>>::_M_get_Node_allocator
                     ((_List_base<int*,std::allocator<int*>> *)this);
  __allocated_ptr<std::allocator<std::_List_node<int*>>>::__allocated_ptr
            (local_38,paVar1,(_List_node *)this_00);
  ppiVar2 = forward<int*const&>((type *)param_1);
  ppiVar3 = (int **)_List_node<int*>::_M_valptr(this_00);
  allocator_traits<std::allocator<std::_List_node<int*>>>::construct<int*,int*const&>
            (paVar1,ppiVar3,ppiVar2);
  __allocated_ptr<std::allocator<std::_List_node<int*>>>::operator=
            (local_38,(_func_decltype_nullptr *)0x0);
  __allocated_ptr<std::allocator<std::_List_node<int*>>>::~__allocated_ptr(local_38);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return (_List_node *)this_00;
}




/* std::_List_base<int*, std::allocator<int*> >::_M_put_node(std::_List_node<int*>*) */

void __thiscall
std::_List_base<int*,std::allocator<int*>>::_M_put_node
          (_List_base<int*,std::allocator<int*>> *this,_List_node *param_1)

{
  allocator_traits<std::allocator<std::_List_node<int*>>>::deallocate((allocator *)this,param_1,1);
  return;
}




/* std::__detail::_List_node_header::_List_node_header() */

void __thiscall std::__detail::_List_node_header::_List_node_header(_List_node_header *this)

{
  _M_init(this);
  return;
}




void bad5(void)

{
  return;
}




int globalReturnsTrueOrFalse(void)

{
  int iVar1;
  
  iVar1 = rand();
  return iVar1 % 2;
}




/* __aligned_membuf<int*>::_M_addr() */

__aligned_membuf<int*> * __thiscall __aligned_membuf<int*>::_M_addr(__aligned_membuf<int*> *this)

{
  return this;
}




/* new_allocator<std::_List_node<int*> >::max_size() const */

undefined8 new_allocator<std::_List_node<int*>>::max_size(void)

{
  return 0x555555555555555;
}




/* std::list<int*, std::allocator<int*> >::list() */

void __thiscall std::list<int*,std::allocator<int*>>::list(list<int*,std::allocator<int*>> *this)

{
  _List_base<int*,std::allocator<int*>>::_List_base((_List_base<int*,std::allocator<int*>> *)this);
  return;
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
    __isoc99_sscanf(local_18 * 2 + param_3,&DAT_00103090,local_1c);
    *(char *)(local_18 + param_1) = local_1c[0];
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




/* std::_List_const_iterator<int*>::TEMPNAMEPLACEHOLDERVALUE() const */

void __thiscall std::_List_const_iterator<int*>::operator*(_List_const_iterator<int*> *this)

{
  _List_node<int*>::_M_valptr(*(_List_node<int*> **)this);
  return;
}




/* void new_allocator<std::_List_node<int*> >::construct<int*, int* const&>(int**, int* const&) */

void __thiscall
new_allocator<std::_List_node<int*>>::construct<int*,int*const&>
          (new_allocator<std::_List_node<int*>> *this,int **param_1,int **param_2)

{
  int *piVar1;
  int **ppiVar2;
  undefined8 *puVar3;
  
  ppiVar2 = std::forward<int*const&>((type *)param_2);
  piVar1 = *ppiVar2;
  puVar3 = (undefined8 *)operator_new(8,param_1);
  *puVar3 = piVar1;
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




void good9(void)

{
  return;
}




/* std::list<int*, std::allocator<int*> >::back() */

void __thiscall std::list<int*,std::allocator<int*>>::back(list<int*,std::allocator<int*>> *this)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_18 = end(this);
  _List_iterator<int*>::operator--((_List_iterator<int*> *)&local_18);
  _List_iterator<int*>::operator*((_List_iterator<int*> *)&local_18);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




undefined8 main(void)

{
  time_t tVar1;
  
  tVar1 = time((time_t *)0x0);
  srand((uint)tVar1);
  printLine("Calling good()...");
  CWE121_Stack_Based_Buffer_Overflow__CWE805_int_declare_memmove_73::good();
  printLine("Finished good()");
  printLine("Calling bad()...");
  CWE121_Stack_Based_Buffer_Overflow__CWE805_int_declare_memmove_73::bad();
  printLine("Finished bad()");
  return 0;
}




/* std::_List_base<int*, std::allocator<int*> >::_List_impl::~_List_impl() */

void __thiscall
std::_List_base<int*,std::allocator<int*>>::_List_impl::~_List_impl(_List_impl *this)

{
  allocator<std::_List_node<int*>>::~allocator((allocator<std::_List_node<int*>> *)this);
  return;
}




/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* int* const& std::forward<int* const&>(std::remove_reference<int* const&>::type&) */

int ** std::forward<int*const&>(type *param_1)

{
  return (int **)param_1;
}




/* std::_List_iterator<int*>::TEMPNAMEPLACEHOLDERVALUE() */

_List_iterator<int*> * __thiscall std::_List_iterator<int*>::operator--(_List_iterator<int*> *this)

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




/* std::__detail::_List_node_header::_M_init() */

void __thiscall std::__detail::_List_node_header::_M_init(_List_node_header *this)

{
  *(_List_node_header **)(this + 8) = this;
  *(undefined8 *)this = *(undefined8 *)(this + 8);
  *(undefined8 *)(this + 0x10) = 0;
  return;
}




/* new_allocator<std::_List_node<int*> >::new_allocator(new_allocator<std::_List_node<int*> >
   const&) */

void new_allocator<std::_List_node<int*>>::new_allocator(new_allocator *param_1)

{
  return;
}




void good5(void)

{
  return;
}




/* void std::allocator_traits<std::allocator<std::_List_node<int*> > >::construct<int*, int*
   const&>(std::allocator<std::_List_node<int*> >&, int**, int* const&) */

void std::allocator_traits<std::allocator<std::_List_node<int*>>>::construct<int*,int*const&>
               (allocator *param_1,int **param_2,int **param_3)

{
  int **ppiVar1;
  
  ppiVar1 = forward<int*const&>((type *)param_3);
  new_allocator<std::_List_node<int*>>::construct<int*,int*const&>
            ((new_allocator<std::_List_node<int*>> *)param_1,param_2,ppiVar1);
  return;
}




/* std::allocator<std::_List_node<int*> >::allocator(std::allocator<std::_List_node<int*> > const&)
    */

void std::allocator<std::_List_node<int*>>::allocator(allocator *param_1)

{
  new_allocator<std::_List_node<int*>>::new_allocator((new_allocator *)param_1);
  return;
}




void bad6(void)

{
  return;
}




void FUN_00101020(void)

{
  (*(code *)PTR_00105f00)();
  return;
}




void good3(void)

{
  return;
}




/* __aligned_membuf<int*>::_M_ptr() const */

void __thiscall __aligned_membuf<int*>::_M_ptr(__aligned_membuf<int*> *this)

{
  _M_addr(this);
  return;
}




/* std::__allocated_ptr<std::allocator<std::_List_node<int*> > >::~__allocated_ptr() */

void __thiscall
std::__allocated_ptr<std::allocator<std::_List_node<int*>>>::~__allocated_ptr
          (__allocated_ptr<std::allocator<std::_List_node<int*>>> *this)

{
  if (*(long *)(this + 8) != 0) {
    allocator_traits<std::allocator<std::_List_node<int*>>>::deallocate
              (*(allocator **)this,*(_List_node **)(this + 8),1);
  }
  return;
}




void printHexCharLine(char param_1)

{
  printf("%02x\n",(ulong)(uint)(int)param_1);
  return;
}




/* std::_List_iterator<int*>::TEMPNAMEPLACEHOLDERVALUE() const */

void __thiscall std::_List_iterator<int*>::operator*(_List_iterator<int*> *this)

{
  _List_node<int*>::_M_valptr(*(_List_node<int*> **)this);
  return;
}




/* __aligned_membuf<int*>::_M_ptr() */

void __thiscall __aligned_membuf<int*>::_M_ptr(__aligned_membuf<int*> *this)

{
  _M_addr(this);
  return;
}




/* std::list<int*, std::allocator<int*> >::~list() */

void __thiscall std::list<int*,std::allocator<int*>>::~list(list<int*,std::allocator<int*>> *this)

{
  _List_base<int*,std::allocator<int*>>::~_List_base((_List_base<int*,std::allocator<int*>> *)this);
  return;
}




/* std::_List_iterator<int*>::_List_iterator(std::__detail::_List_node_base*) */

void __thiscall
std::_List_iterator<int*>::_List_iterator(_List_iterator<int*> *this,_List_node_base *param_1)

{
  *(_List_node_base **)this = param_1;
  return;
}




/* void std::list<int*, std::allocator<int*>
   >::_M_initialize_dispatch<std::_List_const_iterator<int*> >(std::_List_const_iterator<int*>,
   std::_List_const_iterator<int*>, std::__false_type) */

void std::list<int*,std::allocator<int*>>::_M_initialize_dispatch<std::_List_const_iterator<int*>>
               (_List_const_iterator param_1,_List_const_iterator param_2,__false_type param_3)

{
  char cVar1;
  int **ppiVar2;
  undefined4 in_register_00000014;
  undefined4 in_register_00000034;
  undefined4 in_register_0000003c;
  undefined8 local_20;
  undefined8 local_18;
  list<int*,std::allocator<int*>> *local_10;
  
  local_10 = (list<int*,std::allocator<int*>> *)CONCAT44(in_register_0000003c,param_1);
  local_18 = CONCAT44(in_register_00000034,param_2);
  local_20 = CONCAT44(in_register_00000014,param_3);
  while( true ) {
    cVar1 = operator!=((_List_const_iterator *)&local_18,(_List_const_iterator *)&local_20);
    if (cVar1 == '\0') break;
    ppiVar2 = (int **)_List_const_iterator<int*>::operator*((_List_const_iterator<int*> *)&local_18)
    ;
    emplace_back<int*const&>(local_10,ppiVar2);
    _List_const_iterator<int*>::operator++((_List_const_iterator<int*> *)&local_18);
  }
  return;
}




void good6(void)

{
  return;
}




/* std::_List_node<int*>::_M_valptr() */

void __thiscall std::_List_node<int*>::_M_valptr(_List_node<int*> *this)

{
  __aligned_membuf<int*>::_M_ptr((__aligned_membuf<int*> *)(this + 0x10));
  return;
}




void bad9(void)

{
  return;
}




void printDoubleLine(undefined8 param_1)

{
  printf("%g\n",param_1);
  return;
}




void stdThreadLockRelease(pthread_mutex_t *param_1)

{
  pthread_mutex_unlock(param_1);
  return;
}




void printLine(char *param_1)

{
  if (param_1 != (char *)0x0) {
    puts(param_1);
  }
  return;
}




void bad7(void)

{
  return;
}




/* std::_List_const_iterator<int*>::TEMPNAMEPLACEHOLDERVALUE() */

_List_const_iterator<int*> * __thiscall
std::_List_const_iterator<int*>::operator++(_List_const_iterator<int*> *this)

{
  *(undefined8 *)this = **(undefined8 **)this;
  return this;
}




void good7(void)

{
  return;
}




/* void std::list<int*, std::allocator<int*> >::_M_insert<int* const&>(std::_List_iterator<int*>,
   int* const&) */

void __thiscall
std::list<int*,std::allocator<int*>>::_M_insert<int*const&>
          (list<int*,std::allocator<int*>> *this,_List_iterator param_1,int **param_2)

{
  int **ppiVar1;
  _List_node *p_Var2;
  
  ppiVar1 = forward<int*const&>((type *)param_2);
  p_Var2 = _M_create_node<int*const&>(this,ppiVar1);
  std::__detail::_List_node_base::_M_hook((_List_node_base *)p_Var2);
  _List_base<int*,std::allocator<int*>>::_M_inc_size
            ((_List_base<int*,std::allocator<int*>> *)this,1);
  return;
}




void bad1(void)

{
  return;
}




/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* std::allocator<std::_List_node<int*> >* std::__addressof<std::allocator<std::_List_node<int*> >
   >(std::allocator<std::_List_node<int*> >&) */

allocator * std::__addressof<std::allocator<std::_List_node<int*>>>(allocator *param_1)

{
  return param_1;
}




void bad8(void)

{
  return;
}




/* std::_List_base<int*, std::allocator<int*> >::_M_get_Node_allocator() */

_List_base<int*,std::allocator<int*>> * __thiscall
std::_List_base<int*,std::allocator<int*>>::_M_get_Node_allocator
          (_List_base<int*,std::allocator<int*>> *this)

{
  return this;
}




/* CWE121_Stack_Based_Buffer_Overflow__CWE805_int_declare_memmove_73::goodG2B() */

void CWE121_Stack_Based_Buffer_Overflow__CWE805_int_declare_memmove_73::goodG2B(void)

{
  long in_FS_OFFSET;
  int *local_200;
  list<int*,std::allocator<int*>> local_1f8 [32];
  list<int*,std::allocator<int*>> local_1d8 [32];
  int local_1b8 [102];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  std::list<int*,std::allocator<int*>>::list(local_1f8);
  local_200 = local_1b8;
                    /* try { // try from 00101875 to 001018c4 has its CatchHandler @ 0010191c */
  std::list<int*,std::allocator<int*>>::push_back(local_1f8,&local_200);
  std::list<int*,std::allocator<int*>>::push_back(local_1f8,&local_200);
  std::list<int*,std::allocator<int*>>::push_back(local_1f8,&local_200);
  std::list<int*,std::allocator<int*>>::list(local_1d8,(list *)local_1f8);
                    /* try { // try from 001018cf to 001018d3 has its CatchHandler @ 00101904 */
  goodG2BSink((list)local_1d8);
  std::list<int*,std::allocator<int*>>::~list(local_1d8);
  std::list<int*,std::allocator<int*>>::~list(local_1f8);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




/* __alloc_traits<std::allocator<std::_List_node<int*> >, std::_List_node<int*>
   >::_S_select_on_copy(std::allocator<std::_List_node<int*> > const&) */

allocator *
__alloc_traits<std::allocator<std::_List_node<int*>>,std::_List_node<int*>>::_S_select_on_copy
          (allocator *param_1)

{
  long lVar1;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  std::allocator_traits<std::allocator<std::_List_node<int*>>>::
  select_on_container_copy_construction(param_1);
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1;
}




/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* std::TEMPNAMEPLACEHOLDERVALUE(std::_List_const_iterator<int*> const&,
   std::_List_const_iterator<int*> const&) */

undefined8 std::operator!=(_List_const_iterator *param_1,_List_const_iterator *param_2)

{
  return CONCAT71((int7)((ulong)*(long *)param_2 >> 8),*(long *)param_1 != *(long *)param_2);
}




/* std::allocator<std::_List_node<int*> >::~allocator() */

void __thiscall
std::allocator<std::_List_node<int*>>::~allocator(allocator<std::_List_node<int*>> *this)

{
  new_allocator<std::_List_node<int*>>::~new_allocator((new_allocator<std::_List_node<int*>> *)this)
  ;
  return;
}




void good1(void)

{
  return;
}




/* std::list<int*, std::allocator<int*> >::list(std::list<int*, std::allocator<int*> > const&) */

void __thiscall
std::list<int*,std::allocator<int*>>::list(list<int*,std::allocator<int*>> *this,list *param_1)

{
  __false_type _Var1;
  _List_const_iterator _Var2;
  long in_FS_OFFSET;
  allocator local_21;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  _List_base<int*,std::allocator<int*>>::_M_get_Node_allocator
            ((_List_base<int*,std::allocator<int*>> *)param_1);
  __alloc_traits<std::allocator<std::_List_node<int*>>,std::_List_node<int*>>::_S_select_on_copy
            (&local_21);
  _List_base<int*,std::allocator<int*>>::_List_base
            ((_List_base<int*,std::allocator<int*>> *)this,&local_21);
  allocator<std::_List_node<int*>>::~allocator((allocator<std::_List_node<int*>> *)&local_21);
  _Var1 = end((list<int*,std::allocator<int*>> *)param_1);
  _Var2 = begin((list<int*,std::allocator<int*>> *)param_1);
                    /* try { // try from 00101bec to 00101bf0 has its CatchHandler @ 00101bf3 */
  _M_initialize_dispatch<std::_List_const_iterator<int*>>((_List_const_iterator)this,_Var2,_Var1);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void printLongLine(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




/* std::_List_base<int*, std::allocator<int*> >::_List_base(std::allocator<std::_List_node<int*>
   >&&) */

void __thiscall
std::_List_base<int*,std::allocator<int*>>::_List_base
          (_List_base<int*,std::allocator<int*>> *this,allocator *param_1)

{
  type *ptVar1;
  
  ptVar1 = move<std::allocator<std::_List_node<int*>>&>(param_1);
  _List_impl::_List_impl((_List_impl *)this,(allocator *)ptVar1);
  return;
}




undefined8 stdThreadDestroy(void *param_1)

{
  free(param_1);
  return 1;
}




void printHexUnsignedCharLine(byte param_1)

{
  printf("%02x\n",(ulong)param_1);
  return;
}




/* operator new(unsigned long, void*) */

void * operator_new(ulong param_1,void *param_2)

{
  return param_2;
}




undefined8 globalReturnsFalse(void)

{
  return 0;
}




void good2(void)

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




void printBytesLine(long param_1,ulong param_2)

{
  ulong local_10;
  
  for (local_10 = 0; local_10 < param_2; local_10 = local_10 + 1) {
    printf("%02x",(ulong)*(byte *)(local_10 + param_1));
  }
  puts("");
  return;
}




/* std::_List_base<int*, std::allocator<int*> >::_List_impl::_List_impl() */

void __thiscall std::_List_base<int*,std::allocator<int*>>::_List_impl::_List_impl(_List_impl *this)

{
  allocator<std::_List_node<int*>>::allocator();
  __detail::_List_node_header::_List_node_header((_List_node_header *)this);
  return;
}




/* std::_List_base<int*, std::allocator<int*> >::_M_clear() */

void __thiscall
std::_List_base<int*,std::allocator<int*>>::_M_clear(_List_base<int*,std::allocator<int*>> *this)

{
  _List_node<int*> *p_Var1;
  int **ppiVar2;
  allocator *paVar3;
  undefined8 local_20;
  
  local_20 = *(_List_node<int*> **)this;
  while (local_20 != (_List_node<int*> *)this) {
    p_Var1 = *(_List_node<int*> **)local_20;
    ppiVar2 = (int **)_List_node<int*>::_M_valptr(local_20);
    paVar3 = (allocator *)_M_get_Node_allocator(this);
    allocator_traits<std::allocator<std::_List_node<int*>>>::destroy<int*>(paVar3,ppiVar2);
    _M_put_node(this,(_List_node *)local_20);
    local_20 = p_Var1;
  }
  return;
}




/* std::_List_base<int*, std::allocator<int*> >::~_List_base() */

void __thiscall
std::_List_base<int*,std::allocator<int*>>::~_List_base(_List_base<int*,std::allocator<int*>> *this)

{
  _M_clear(this);
  _List_impl::~_List_impl((_List_impl *)this);
  return;
}




/* std::allocator<std::_List_node<int*> >::allocator() */

void std::allocator<std::_List_node<int*>>::allocator(void)

{
  new_allocator<std::_List_node<int*>>::new_allocator();
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




/* std::list<int*, std::allocator<int*> >::end() const */

undefined8 __thiscall
std::list<int*,std::allocator<int*>>::end(list<int*,std::allocator<int*>> *this)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  _List_const_iterator<int*>::_List_const_iterator
            ((_List_const_iterator<int*> *)&local_18,(_List_node_base *)this);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void stdThreadLockDestroy(pthread_mutex_t *param_1)

{
  pthread_mutex_destroy(param_1);
  free(param_1);
  return;
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




/* std::__allocated_ptr<std::allocator<std::_List_node<int*> >
   >::__allocated_ptr(std::allocator<std::_List_node<int*> >&, std::_List_node<int*>*) */

void __thiscall
std::__allocated_ptr<std::allocator<std::_List_node<int*>>>::__allocated_ptr
          (__allocated_ptr<std::allocator<std::_List_node<int*>>> *this,allocator *param_1,
          _List_node *param_2)

{
  allocator *paVar1;
  
  paVar1 = __addressof<std::allocator<std::_List_node<int*>>>(param_1);
  *(allocator **)this = paVar1;
  *(_List_node **)(this + 8) = param_2;
  return;
}




void printSizeTLine(undefined8 param_1)

{
  printf("%zu\n",param_1);
  return;
}




void stdThreadLockAcquire(pthread_mutex_t *param_1)

{
  pthread_mutex_lock(param_1);
  return;
}




undefined8 globalReturnsTrue(void)

{
  return 1;
}




/* std::_List_base<int*, std::allocator<int*> >::_M_inc_size(unsigned long) */

void __thiscall
std::_List_base<int*,std::allocator<int*>>::_M_inc_size
          (_List_base<int*,std::allocator<int*>> *this,ulong param_1)

{
  *(ulong *)(this + 0x10) = *(long *)(this + 0x10) + param_1;
  return;
}




void printFloatLine(float param_1)

{
  printf("%f\n",(double)param_1);
  return;
}




/* new_allocator<std::_List_node<int*> >::allocate(unsigned long, void const*) */

void new_allocator<std::_List_node<int*>>::allocate(ulong param_1,void *param_2)

{
  void *pvVar1;
  
  pvVar1 = (void *)max_size();
  if (pvVar1 < param_2) {
    std::__throw_bad_alloc();
  }
  operator_new((long)param_2 * 0x18);
  return;
}




/* __aligned_membuf<int*>::_M_addr() const */

__aligned_membuf<int*> * __thiscall __aligned_membuf<int*>::_M_addr(__aligned_membuf<int*> *this)

{
  return this;
}




/* std::_List_base<int*, std::allocator<int*>
   >::_List_impl::_List_impl(std::allocator<std::_List_node<int*> >&&) */

void __thiscall
std::_List_base<int*,std::allocator<int*>>::_List_impl::_List_impl
          (_List_impl *this,allocator *param_1)

{
  move<std::allocator<std::_List_node<int*>>&>(param_1);
  allocator<std::_List_node<int*>>::allocator((allocator *)this);
  __detail::_List_node_header::_List_node_header((_List_node_header *)this);
  return;
}




/* void new_allocator<std::_List_node<int*> >::destroy<int*>(int**) */

void new_allocator<std::_List_node<int*>>::destroy<int*>(int **param_1)

{
  return;
}




void bad3(void)

{
  return;
}




/* std::_List_base<int*, std::allocator<int*> >::_List_base() */

void __thiscall
std::_List_base<int*,std::allocator<int*>>::_List_base(_List_base<int*,std::allocator<int*>> *this)

{
  _List_impl::_List_impl((_List_impl *)this);
  return;
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




/* std::allocator_traits<std::allocator<std::_List_node<int*> >
   >::select_on_container_copy_construction(std::allocator<std::_List_node<int*> > const&) */

allocator *
std::allocator_traits<std::allocator<std::_List_node<int*>>>::select_on_container_copy_construction
          (allocator *param_1)

{
  allocator<std::_List_node<int*>>::allocator(param_1);
  return param_1;
}




/* std::allocator_traits<std::allocator<std::_List_node<int*> >
   >::deallocate(std::allocator<std::_List_node<int*> >&, std::_List_node<int*>*, unsigned long) */

void std::allocator_traits<std::allocator<std::_List_node<int*>>>::deallocate
               (allocator *param_1,_List_node *param_2,ulong param_3)

{
  new_allocator<std::_List_node<int*>>::deallocate((_List_node *)param_1,(ulong)param_2);
  return;
}




/* CWE121_Stack_Based_Buffer_Overflow__CWE805_int_declare_memmove_73::badSink(std::list<int*,
   std::allocator<int*> >) */

void CWE121_Stack_Based_Buffer_Overflow__CWE805_int_declare_memmove_73::badSink(list param_1)

{
  undefined4 *__dest;
  undefined8 *puVar1;
  long lVar2;
  undefined4 in_register_0000003c;
  long in_FS_OFFSET;
  byte bVar3;
  undefined8 local_1a8 [51];
  long local_10;
  
  bVar3 = 0;
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  puVar1 = (undefined8 *)
           std::list<int*,std::allocator<int*>>::back
                     ((list<int*,std::allocator<int*>> *)CONCAT44(in_register_0000003c,param_1));
  __dest = (undefined4 *)*puVar1;
  puVar1 = local_1a8;
  for (lVar2 = 0x32; lVar2 != 0; lVar2 = lVar2 + -1) {
    *puVar1 = 0;
    puVar1 = puVar1 + (ulong)bVar3 * -2 + 1;
  }
  memmove(__dest,local_1a8,400);
  printIntLine(*__dest);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void printShortLine(short param_1)

{
  printf("%hd\n",(ulong)(uint)(int)param_1);
  return;
}




/* std::_List_const_iterator<int*>::_List_const_iterator(std::__detail::_List_node_base const*) */

void __thiscall
std::_List_const_iterator<int*>::_List_const_iterator
          (_List_const_iterator<int*> *this,_List_node_base *param_1)

{
  *(_List_node_base **)this = param_1;
  return;
}




/* std::__allocated_ptr<std::allocator<std::_List_node<int*> >
   >::TEMPNAMEPLACEHOLDERVALUE(decltype(nullptr)) */

__allocated_ptr<std::allocator<std::_List_node<int*>>> * __thiscall
std::__allocated_ptr<std::allocator<std::_List_node<int*>>>::operator=
          (__allocated_ptr<std::allocator<std::_List_node<int*>>> *this,
          _func_decltype_nullptr *param_1)

{
  *(undefined8 *)(this + 8) = 0;
  return this;
}




void good8(void)

{
  return;
}




/* new_allocator<std::_List_node<int*> >::new_allocator() */

void new_allocator<std::_List_node<int*>>::new_allocator(void)

{
  return;
}



