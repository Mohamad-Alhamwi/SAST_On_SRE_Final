
/* std::_List_base<unsigned int, std::allocator<unsigned int> >::_M_get_node() */

void __thiscall
std::_List_base<unsigned_int,std::allocator<unsigned_int>>::_M_get_node
          (_List_base<unsigned_int,std::allocator<unsigned_int>> *this)

{
  allocator_traits<std::allocator<std::_List_node<unsigned_int>>>::allocate((allocator *)this,1);
  return;
}




/* std::allocator_traits<std::allocator<std::_List_node<unsigned int> >
   >::allocate(std::allocator<std::_List_node<unsigned int> >&, unsigned long) */

void std::allocator_traits<std::allocator<std::_List_node<unsigned_int>>>::allocate
               (allocator *param_1,ulong param_2)

{
  new_allocator<std::_List_node<unsigned_int>>::allocate((ulong)param_1,(void *)param_2);
  return;
}




/* std::_List_iterator<unsigned int>::TEMPNAMEPLACEHOLDERVALUE() const */

void __thiscall std::_List_iterator<unsigned_int>::operator*(_List_iterator<unsigned_int> *this)

{
  _List_node<unsigned_int>::_M_valptr(*(_List_node<unsigned_int> **)this);
  return;
}




/* new_allocator<std::_List_node<unsigned int> >::~new_allocator() */

void __thiscall
new_allocator<std::_List_node<unsigned_int>>::~new_allocator
          (new_allocator<std::_List_node<unsigned_int>> *this)

{
  return;
}




void good9(void)

{
  return;
}




/* operator new(unsigned long, void*) */

void * operator_new(ulong param_1,void *param_2)

{
  return param_2;
}




/* std::list<unsigned int, std::allocator<unsigned int> >::end() */

undefined8 __thiscall
std::list<unsigned_int,std::allocator<unsigned_int>>::end
          (list<unsigned_int,std::allocator<unsigned_int>> *this)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  _List_iterator<unsigned_int>::_List_iterator
            ((_List_iterator<unsigned_int> *)&local_18,(_List_node_base *)this);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




/* std::list<unsigned int, std::allocator<unsigned int> >::push_back(unsigned int const&) */

void __thiscall
std::list<unsigned_int,std::allocator<unsigned_int>>::push_back
          (list<unsigned_int,std::allocator<unsigned_int>> *this,uint *param_1)

{
  _List_iterator _Var1;
  
  _Var1 = end(this);
  _M_insert<unsigned_int_const&>(this,_Var1,param_1);
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




/* void std::list<unsigned int, std::allocator<unsigned int> >::emplace_back<unsigned int
   const&>(unsigned int const&) */

void __thiscall
std::list<unsigned_int,std::allocator<unsigned_int>>::emplace_back<unsigned_int_const&>
          (list<unsigned_int,std::allocator<unsigned_int>> *this,uint *param_1)

{
  _List_iterator _Var1;
  uint *puVar2;
  
  puVar2 = forward<unsigned_int_const&>((type *)param_1);
  _Var1 = end(this);
  _M_insert<unsigned_int_const&>(this,_Var1,puVar2);
  return;
}




/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* std::remove_reference<std::allocator<std::_List_node<unsigned int> >&>::type&&
   std::move<std::allocator<std::_List_node<unsigned int>
   >&>(std::allocator<std::_List_node<unsigned int> >&) */

type * std::move<std::allocator<std::_List_node<unsigned_int>>&>(allocator *param_1)

{
  return (type *)param_1;
}




void stdThreadLockDestroy(pthread_mutex_t *param_1)

{
  pthread_mutex_destroy(param_1);
  free(param_1);
  return;
}




/* std::_List_base<unsigned int, std::allocator<unsigned int> >::_M_get_Node_allocator() const */

_List_base<unsigned_int,std::allocator<unsigned_int>> * __thiscall
std::_List_base<unsigned_int,std::allocator<unsigned_int>>::_M_get_Node_allocator
          (_List_base<unsigned_int,std::allocator<unsigned_int>> *this)

{
  return this;
}




/* std::_List_node<unsigned int>::_M_valptr() const */

void __thiscall std::_List_node<unsigned_int>::_M_valptr(_List_node<unsigned_int> *this)

{
  __aligned_membuf<unsigned_int>::_M_ptr((__aligned_membuf<unsigned_int> *)(this + 0x10));
  return;
}




void printWLine(long param_1)

{
  if (param_1 != 0) {
    wprintf(L"%ls\n",param_1);
  }
  return;
}




/* CWE190_Integer_Overflow__unsigned_int_fscanf_multiply_73::goodB2G() */

void CWE190_Integer_Overflow__unsigned_int_fscanf_multiply_73::goodB2G(void)

{
  long in_FS_OFFSET;
  uint local_5c;
  list<unsigned_int,std::allocator<unsigned_int>> local_58 [32];
  list<unsigned_int,std::allocator<unsigned_int>> local_38 [24];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  std::list<unsigned_int,std::allocator<unsigned_int>>::list(local_58);
  local_5c = 0;
                    /* try { // try from 001018e3 to 00101933 has its CatchHandler @ 0010197f */
  __isoc99_fscanf(stdin,&DAT_00103047,&local_5c);
  std::list<unsigned_int,std::allocator<unsigned_int>>::push_back(local_58,&local_5c);
  std::list<unsigned_int,std::allocator<unsigned_int>>::push_back(local_58,&local_5c);
  std::list<unsigned_int,std::allocator<unsigned_int>>::push_back(local_58,&local_5c);
  std::list<unsigned_int,std::allocator<unsigned_int>>::list(local_38,(list *)local_58);
                    /* try { // try from 0010193b to 0010193f has its CatchHandler @ 0010196a */
  goodB2GSink((list)local_38);
  std::list<unsigned_int,std::allocator<unsigned_int>>::~list(local_38);
  std::list<unsigned_int,std::allocator<unsigned_int>>::~list(local_58);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
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




void good2(void)

{
  return;
}




void bad2(void)

{
  return;
}




/* new_allocator<std::_List_node<unsigned int> >::deallocate(std::_List_node<unsigned int>*,
   unsigned long) */

void new_allocator<std::_List_node<unsigned_int>>::deallocate(_List_node *param_1,ulong param_2)

{
  operator_delete((void *)param_2);
  return;
}




/* std::list<unsigned int, std::allocator<unsigned int> >::begin() const */

undefined8 __thiscall
std::list<unsigned_int,std::allocator<unsigned_int>>::begin
          (list<unsigned_int,std::allocator<unsigned_int>> *this)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  _List_const_iterator<unsigned_int>::_List_const_iterator
            ((_List_const_iterator<unsigned_int> *)&local_18,*(_List_node_base **)this);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void printLongLine(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




/* std::_List_node<unsigned int>* std::list<unsigned int, std::allocator<unsigned int>
   >::_M_create_node<unsigned int const&>(unsigned int const&) */

_List_node * __thiscall
std::list<unsigned_int,std::allocator<unsigned_int>>::_M_create_node<unsigned_int_const&>
          (list<unsigned_int,std::allocator<unsigned_int>> *this,uint *param_1)

{
  _List_node<unsigned_int> *this_00;
  allocator *paVar1;
  uint *puVar2;
  uint *puVar3;
  long in_FS_OFFSET;
  __allocated_ptr<std::allocator<std::_List_node<unsigned_int>>> local_38 [24];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  this_00 = (_List_node<unsigned_int> *)
            _List_base<unsigned_int,std::allocator<unsigned_int>>::_M_get_node
                      ((_List_base<unsigned_int,std::allocator<unsigned_int>> *)this);
  paVar1 = (allocator *)
           _List_base<unsigned_int,std::allocator<unsigned_int>>::_M_get_Node_allocator
                     ((_List_base<unsigned_int,std::allocator<unsigned_int>> *)this);
  __allocated_ptr<std::allocator<std::_List_node<unsigned_int>>>::__allocated_ptr
            (local_38,paVar1,(_List_node *)this_00);
  puVar2 = forward<unsigned_int_const&>((type *)param_1);
  puVar3 = (uint *)_List_node<unsigned_int>::_M_valptr(this_00);
  allocator_traits<std::allocator<std::_List_node<unsigned_int>>>::
  construct<unsigned_int,unsigned_int_const&>(paVar1,puVar3,puVar2);
  __allocated_ptr<std::allocator<std::_List_node<unsigned_int>>>::operator=
            (local_38,(_func_decltype_nullptr *)0x0);
  __allocated_ptr<std::allocator<std::_List_node<unsigned_int>>>::~__allocated_ptr(local_38);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return (_List_node *)this_00;
}




/* std::__detail::_List_node_header::_M_init() */

void __thiscall std::__detail::_List_node_header::_M_init(_List_node_header *this)

{
  *(_List_node_header **)(this + 8) = this;
  *(undefined8 *)this = *(undefined8 *)(this + 8);
  *(undefined8 *)(this + 0x10) = 0;
  return;
}




/* CWE190_Integer_Overflow__unsigned_int_fscanf_multiply_73::badSink(std::list<unsigned int,
   std::allocator<unsigned int> >) */

void CWE190_Integer_Overflow__unsigned_int_fscanf_multiply_73::badSink(list param_1)

{
  int *piVar1;
  undefined4 in_register_0000003c;
  
  piVar1 = (int *)std::list<unsigned_int,std::allocator<unsigned_int>>::back
                            ((list<unsigned_int,std::allocator<unsigned_int>> *)
                             CONCAT44(in_register_0000003c,param_1));
  if (*piVar1 != 0) {
    printUnsignedLine(*piVar1 * 2);
  }
  return;
}




void bad3(void)

{
  return;
}




undefined8 globalReturnsTrue(void)

{
  return 1;
}




/* CWE190_Integer_Overflow__unsigned_int_fscanf_multiply_73::goodG2B() */

void CWE190_Integer_Overflow__unsigned_int_fscanf_multiply_73::goodG2B(void)

{
  long in_FS_OFFSET;
  uint local_5c;
  list<unsigned_int,std::allocator<unsigned_int>> local_58 [32];
  list<unsigned_int,std::allocator<unsigned_int>> local_38 [24];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  std::list<unsigned_int,std::allocator<unsigned_int>>::list(local_58);
  local_5c = 2;
                    /* try { // try from 001017e7 to 00101824 has its CatchHandler @ 00101870 */
  std::list<unsigned_int,std::allocator<unsigned_int>>::push_back(local_58,&local_5c);
  std::list<unsigned_int,std::allocator<unsigned_int>>::push_back(local_58,&local_5c);
  std::list<unsigned_int,std::allocator<unsigned_int>>::push_back(local_58,&local_5c);
  std::list<unsigned_int,std::allocator<unsigned_int>>::list(local_38,(list *)local_58);
                    /* try { // try from 0010182c to 00101830 has its CatchHandler @ 0010185b */
  goodG2BSink((list)local_38);
  std::list<unsigned_int,std::allocator<unsigned_int>>::~list(local_38);
  std::list<unsigned_int,std::allocator<unsigned_int>>::~list(local_58);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




/* __aligned_membuf<unsigned int>::_M_addr() const */

__aligned_membuf<unsigned_int> * __thiscall
__aligned_membuf<unsigned_int>::_M_addr(__aligned_membuf<unsigned_int> *this)

{
  return this;
}




/* void std::allocator_traits<std::allocator<std::_List_node<unsigned int> > >::destroy<unsigned
   int>(std::allocator<std::_List_node<unsigned int> >&, unsigned int*) */

void std::allocator_traits<std::allocator<std::_List_node<unsigned_int>>>::destroy<unsigned_int>
               (allocator *param_1,uint *param_2)

{
  new_allocator<std::_List_node<unsigned_int>>::destroy<unsigned_int>((uint *)param_1);
  return;
}




/* std::list<unsigned int, std::allocator<unsigned int> >::~list() */

void __thiscall
std::list<unsigned_int,std::allocator<unsigned_int>>::~list
          (list<unsigned_int,std::allocator<unsigned_int>> *this)

{
  _List_base<unsigned_int,std::allocator<unsigned_int>>::~_List_base
            ((_List_base<unsigned_int,std::allocator<unsigned_int>> *)this);
  return;
}




void printStructLine(uint *param_1)

{
  printf("%d -- %d\n",(ulong)*param_1,(ulong)param_1[1]);
  return;
}




void stdThreadLockRelease(pthread_mutex_t *param_1)

{
  pthread_mutex_unlock(param_1);
  return;
}




/* std::_List_const_iterator<unsigned int>::TEMPNAMEPLACEHOLDERVALUE() const */

void __thiscall
std::_List_const_iterator<unsigned_int>::operator*(_List_const_iterator<unsigned_int> *this)

{
  _List_node<unsigned_int>::_M_valptr(*(_List_node<unsigned_int> **)this);
  return;
}




/* void new_allocator<std::_List_node<unsigned int> >::construct<unsigned int, unsigned int
   const&>(unsigned int*, unsigned int const&) */

void __thiscall
new_allocator<std::_List_node<unsigned_int>>::construct<unsigned_int,unsigned_int_const&>
          (new_allocator<std::_List_node<unsigned_int>> *this,uint *param_1,uint *param_2)

{
  uint uVar1;
  uint *puVar2;
  
  puVar2 = std::forward<unsigned_int_const&>((type *)param_2);
  uVar1 = *puVar2;
  puVar2 = (uint *)operator_new(4,param_1);
  *puVar2 = uVar1;
  return;
}




void internal_start(long param_1)

{
  (**(code **)(param_1 + 8))(*(undefined8 *)(param_1 + 0x10));
                    /* WARNING: Subroutine does not return */
  pthread_exit((void *)0x0);
}




void good7(void)

{
  return;
}




/* std::_List_iterator<unsigned int>::TEMPNAMEPLACEHOLDERVALUE() */

_List_iterator<unsigned_int> * __thiscall
std::_List_iterator<unsigned_int>::operator--(_List_iterator<unsigned_int> *this)

{
  *(undefined8 *)this = *(undefined8 *)(*(long *)this + 8);
  return this;
}




void FUN_00101020(void)

{
  (*(code *)PTR_00105f00)();
  return;
}




/* std::_List_base<unsigned int, std::allocator<unsigned int> >::_List_base() */

void __thiscall
std::_List_base<unsigned_int,std::allocator<unsigned_int>>::_List_base
          (_List_base<unsigned_int,std::allocator<unsigned_int>> *this)

{
  _List_impl::_List_impl((_List_impl *)this);
  return;
}




/* std::_List_iterator<unsigned int>::_List_iterator(std::__detail::_List_node_base*) */

void __thiscall
std::_List_iterator<unsigned_int>::_List_iterator
          (_List_iterator<unsigned_int> *this,_List_node_base *param_1)

{
  *(_List_node_base **)this = param_1;
  return;
}




void bad8(void)

{
  return;
}




/* CWE190_Integer_Overflow__unsigned_int_fscanf_multiply_73::goodB2GSink(std::list<unsigned int,
   std::allocator<unsigned int> >) */

void CWE190_Integer_Overflow__unsigned_int_fscanf_multiply_73::goodB2GSink(list param_1)

{
  uint uVar1;
  uint *puVar2;
  undefined4 in_register_0000003c;
  
  puVar2 = (uint *)std::list<unsigned_int,std::allocator<unsigned_int>>::back
                             ((list<unsigned_int,std::allocator<unsigned_int>> *)
                              CONCAT44(in_register_0000003c,param_1));
  uVar1 = *puVar2;
  if (uVar1 != 0) {
    if (uVar1 < 0x7fffffff) {
      printUnsignedLine(uVar1 * 2);
    }
    else {
      printLine("data value is too large to perform arithmetic safely.");
    }
  }
  return;
}




/* std::_List_base<unsigned int, std::allocator<unsigned int> >::_List_impl::~_List_impl() */

void __thiscall
std::_List_base<unsigned_int,std::allocator<unsigned_int>>::_List_impl::~_List_impl
          (_List_impl *this)

{
  allocator<std::_List_node<unsigned_int>>::~allocator
            ((allocator<std::_List_node<unsigned_int>> *)this);
  return;
}




/* new_allocator<std::_List_node<unsigned int>
   >::new_allocator(new_allocator<std::_List_node<unsigned int> > const&) */

void new_allocator<std::_List_node<unsigned_int>>::new_allocator(new_allocator *param_1)

{
  return;
}




void good3(void)

{
  return;
}




/* void std::allocator_traits<std::allocator<std::_List_node<unsigned int> > >::construct<unsigned
   int, unsigned int const&>(std::allocator<std::_List_node<unsigned int> >&, unsigned int*,
   unsigned int const&) */

void std::allocator_traits<std::allocator<std::_List_node<unsigned_int>>>::
     construct<unsigned_int,unsigned_int_const&>(allocator *param_1,uint *param_2,uint *param_3)

{
  uint *puVar1;
  
  puVar1 = forward<unsigned_int_const&>((type *)param_3);
  new_allocator<std::_List_node<unsigned_int>>::construct<unsigned_int,unsigned_int_const&>
            ((new_allocator<std::_List_node<unsigned_int>> *)param_1,param_2,puVar1);
  return;
}




/* std::allocator<std::_List_node<unsigned int> >::allocator(std::allocator<std::_List_node<unsigned
   int> > const&) */

void std::allocator<std::_List_node<unsigned_int>>::allocator(allocator *param_1)

{
  new_allocator<std::_List_node<unsigned_int>>::new_allocator((new_allocator *)param_1);
  return;
}




void bad4(void)

{
  return;
}




void good1(void)

{
  return;
}




/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* unsigned int const& std::forward<unsigned int const&>(std::remove_reference<unsigned int
   const&>::type&) */

uint * std::forward<unsigned_int_const&>(type *param_1)

{
  return (uint *)param_1;
}




/* std::__allocated_ptr<std::allocator<std::_List_node<unsigned int> > >::~__allocated_ptr() */

void __thiscall
std::__allocated_ptr<std::allocator<std::_List_node<unsigned_int>>>::~__allocated_ptr
          (__allocated_ptr<std::allocator<std::_List_node<unsigned_int>>> *this)

{
  if (*(long *)(this + 8) != 0) {
    allocator_traits<std::allocator<std::_List_node<unsigned_int>>>::deallocate
              (*(allocator **)this,*(_List_node **)(this + 8),1);
  }
  return;
}




void printSizeTLine(undefined8 param_1)

{
  printf("%zu\n",param_1);
  return;
}




/* std::_List_node<unsigned int>::_M_valptr() */

void __thiscall std::_List_node<unsigned_int>::_M_valptr(_List_node<unsigned_int> *this)

{
  __aligned_membuf<unsigned_int>::_M_ptr((__aligned_membuf<unsigned_int> *)(this + 0x10));
  return;
}




/* CWE190_Integer_Overflow__unsigned_int_fscanf_multiply_73::bad() */

void CWE190_Integer_Overflow__unsigned_int_fscanf_multiply_73::bad(void)

{
  long in_FS_OFFSET;
  uint local_5c;
  list<unsigned_int,std::allocator<unsigned_int>> local_58 [32];
  list<unsigned_int,std::allocator<unsigned_int>> local_38 [24];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  std::list<unsigned_int,std::allocator<unsigned_int>>::list(local_58);
  local_5c = 0;
                    /* try { // try from 001016dd to 0010172d has its CatchHandler @ 00101779 */
  __isoc99_fscanf(stdin,&DAT_00103047,&local_5c);
  std::list<unsigned_int,std::allocator<unsigned_int>>::push_back(local_58,&local_5c);
  std::list<unsigned_int,std::allocator<unsigned_int>>::push_back(local_58,&local_5c);
  std::list<unsigned_int,std::allocator<unsigned_int>>::push_back(local_58,&local_5c);
  std::list<unsigned_int,std::allocator<unsigned_int>>::list(local_38,(list *)local_58);
                    /* try { // try from 00101735 to 00101739 has its CatchHandler @ 00101764 */
  badSink((list)local_38);
  std::list<unsigned_int,std::allocator<unsigned_int>>::~list(local_38);
  std::list<unsigned_int,std::allocator<unsigned_int>>::~list(local_58);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




/* std::_List_base<unsigned int, std::allocator<unsigned int> >::_List_impl::_List_impl() */

void __thiscall
std::_List_base<unsigned_int,std::allocator<unsigned_int>>::_List_impl::_List_impl(_List_impl *this)

{
  allocator<std::_List_node<unsigned_int>>::allocator();
  __detail::_List_node_header::_List_node_header((_List_node_header *)this);
  return;
}




/* __aligned_membuf<unsigned int>::_M_ptr() */

void __thiscall __aligned_membuf<unsigned_int>::_M_ptr(__aligned_membuf<unsigned_int> *this)

{
  _M_addr(this);
  return;
}




/* void std::list<unsigned int, std::allocator<unsigned int>
   >::_M_initialize_dispatch<std::_List_const_iterator<unsigned int>
   >(std::_List_const_iterator<unsigned int>, std::_List_const_iterator<unsigned int>,
   std::__false_type) */

void std::list<unsigned_int,std::allocator<unsigned_int>>::
     _M_initialize_dispatch<std::_List_const_iterator<unsigned_int>>
               (_List_const_iterator param_1,_List_const_iterator param_2,__false_type param_3)

{
  char cVar1;
  uint *puVar2;
  undefined4 in_register_00000014;
  undefined4 in_register_00000034;
  undefined4 in_register_0000003c;
  undefined8 local_20;
  undefined8 local_18;
  list<unsigned_int,std::allocator<unsigned_int>> *local_10;
  
  local_10 = (list<unsigned_int,std::allocator<unsigned_int>> *)
             CONCAT44(in_register_0000003c,param_1);
  local_18 = CONCAT44(in_register_00000034,param_2);
  local_20 = CONCAT44(in_register_00000014,param_3);
  while( true ) {
    cVar1 = operator!=((_List_const_iterator *)&local_18,(_List_const_iterator *)&local_20);
    if (cVar1 == '\0') break;
    puVar2 = (uint *)_List_const_iterator<unsigned_int>::operator*
                               ((_List_const_iterator<unsigned_int> *)&local_18);
    emplace_back<unsigned_int_const&>(local_10,puVar2);
    _List_const_iterator<unsigned_int>::operator++((_List_const_iterator<unsigned_int> *)&local_18);
  }
  return;
}




void good4(void)

{
  return;
}




/* __aligned_membuf<unsigned int>::_M_addr() */

__aligned_membuf<unsigned_int> * __thiscall
__aligned_membuf<unsigned_int>::_M_addr(__aligned_membuf<unsigned_int> *this)

{
  return this;
}




void bad7(void)

{
  return;
}




void printHexUnsignedCharLine(byte param_1)

{
  printf("%02x\n",(ulong)param_1);
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




undefined8 main(void)

{
  time_t tVar1;
  
  tVar1 = time((time_t *)0x0);
  srand((uint)tVar1);
  printLine("Calling good()...");
  CWE190_Integer_Overflow__unsigned_int_fscanf_multiply_73::good();
  printLine("Finished good()");
  printLine("Calling bad()...");
  CWE190_Integer_Overflow__unsigned_int_fscanf_multiply_73::bad();
  printLine("Finished bad()");
  return 0;
}




void bad5(void)

{
  return;
}




/* std::_List_const_iterator<unsigned int>::TEMPNAMEPLACEHOLDERVALUE() */

_List_const_iterator<unsigned_int> * __thiscall
std::_List_const_iterator<unsigned_int>::operator++(_List_const_iterator<unsigned_int> *this)

{
  *(undefined8 *)this = **(undefined8 **)this;
  return this;
}




/* std::_List_base<unsigned int, std::allocator<unsigned int>
   >::_M_put_node(std::_List_node<unsigned int>*) */

void __thiscall
std::_List_base<unsigned_int,std::allocator<unsigned_int>>::_M_put_node
          (_List_base<unsigned_int,std::allocator<unsigned_int>> *this,_List_node *param_1)

{
  allocator_traits<std::allocator<std::_List_node<unsigned_int>>>::deallocate
            ((allocator *)this,param_1,1);
  return;
}




void good5(void)

{
  return;
}




/* void std::list<unsigned int, std::allocator<unsigned int> >::_M_insert<unsigned int
   const&>(std::_List_iterator<unsigned int>, unsigned int const&) */

void __thiscall
std::list<unsigned_int,std::allocator<unsigned_int>>::_M_insert<unsigned_int_const&>
          (list<unsigned_int,std::allocator<unsigned_int>> *this,_List_iterator param_1,
          uint *param_2)

{
  uint *puVar1;
  _List_node *p_Var2;
  
  puVar1 = forward<unsigned_int_const&>((type *)param_2);
  p_Var2 = _M_create_node<unsigned_int_const&>(this,puVar1);
  std::__detail::_List_node_base::_M_hook((_List_node_base *)p_Var2);
  _List_base<unsigned_int,std::allocator<unsigned_int>>::_M_inc_size
            ((_List_base<unsigned_int,std::allocator<unsigned_int>> *)this,1);
  return;
}




void good8(void)

{
  return;
}




/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* std::allocator<std::_List_node<unsigned int> >*
   std::__addressof<std::allocator<std::_List_node<unsigned int> >
   >(std::allocator<std::_List_node<unsigned int> >&) */

allocator * std::__addressof<std::allocator<std::_List_node<unsigned_int>>>(allocator *param_1)

{
  return param_1;
}




void bad6(void)

{
  return;
}




/* std::_List_base<unsigned int, std::allocator<unsigned int> >::_M_get_Node_allocator() */

_List_base<unsigned_int,std::allocator<unsigned_int>> * __thiscall
std::_List_base<unsigned_int,std::allocator<unsigned_int>>::_M_get_Node_allocator
          (_List_base<unsigned_int,std::allocator<unsigned_int>> *this)

{
  return this;
}




/* CWE190_Integer_Overflow__unsigned_int_fscanf_multiply_73::good() */

void CWE190_Integer_Overflow__unsigned_int_fscanf_multiply_73::good(void)

{
  goodG2B();
  goodB2G();
  return;
}




/* __alloc_traits<std::allocator<std::_List_node<unsigned int> >, std::_List_node<unsigned int>
   >::_S_select_on_copy(std::allocator<std::_List_node<unsigned int> > const&) */

allocator *
__alloc_traits<std::allocator<std::_List_node<unsigned_int>>,std::_List_node<unsigned_int>>::
_S_select_on_copy(allocator *param_1)

{
  long lVar1;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  std::allocator_traits<std::allocator<std::_List_node<unsigned_int>>>::
  select_on_container_copy_construction(param_1);
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1;
}




/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* std::TEMPNAMEPLACEHOLDERVALUE(std::_List_const_iterator<unsigned int> const&,
   std::_List_const_iterator<unsigned int> const&) */

undefined8 std::operator!=(_List_const_iterator *param_1,_List_const_iterator *param_2)

{
  return CONCAT71((int7)((ulong)*(long *)param_2 >> 8),*(long *)param_1 != *(long *)param_2);
}




/* std::allocator<std::_List_node<unsigned int> >::~allocator() */

void __thiscall
std::allocator<std::_List_node<unsigned_int>>::~allocator
          (allocator<std::_List_node<unsigned_int>> *this)

{
  new_allocator<std::_List_node<unsigned_int>>::~new_allocator
            ((new_allocator<std::_List_node<unsigned_int>> *)this);
  return;
}




undefined8 globalReturnsFalse(void)

{
  return 0;
}




/* std::list<unsigned int, std::allocator<unsigned int> >::list(std::list<unsigned int,
   std::allocator<unsigned int> > const&) */

void __thiscall
std::list<unsigned_int,std::allocator<unsigned_int>>::list
          (list<unsigned_int,std::allocator<unsigned_int>> *this,list *param_1)

{
  __false_type _Var1;
  _List_const_iterator _Var2;
  long in_FS_OFFSET;
  allocator local_21;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  _List_base<unsigned_int,std::allocator<unsigned_int>>::_M_get_Node_allocator
            ((_List_base<unsigned_int,std::allocator<unsigned_int>> *)param_1);
  __alloc_traits<std::allocator<std::_List_node<unsigned_int>>,std::_List_node<unsigned_int>>::
  _S_select_on_copy(&local_21);
  _List_base<unsigned_int,std::allocator<unsigned_int>>::_List_base
            ((_List_base<unsigned_int,std::allocator<unsigned_int>> *)this,&local_21);
  allocator<std::_List_node<unsigned_int>>::~allocator
            ((allocator<std::_List_node<unsigned_int>> *)&local_21);
  _Var1 = end((list<unsigned_int,std::allocator<unsigned_int>> *)param_1);
  _Var2 = begin((list<unsigned_int,std::allocator<unsigned_int>> *)param_1);
                    /* try { // try from 00101c4e to 00101c52 has its CatchHandler @ 00101c55 */
  _M_initialize_dispatch<std::_List_const_iterator<unsigned_int>>
            ((_List_const_iterator)this,_Var2,_Var1);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void printFloatLine(float param_1)

{
  printf("%f\n",(double)param_1);
  return;
}




/* std::_List_base<unsigned int, std::allocator<unsigned int>
   >::_List_base(std::allocator<std::_List_node<unsigned int> >&&) */

void __thiscall
std::_List_base<unsigned_int,std::allocator<unsigned_int>>::_List_base
          (_List_base<unsigned_int,std::allocator<unsigned_int>> *this,allocator *param_1)

{
  type *ptVar1;
  
  ptVar1 = move<std::allocator<std::_List_node<unsigned_int>>&>(param_1);
  _List_impl::_List_impl((_List_impl *)this,(allocator *)ptVar1);
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




void printUnsignedLine(uint param_1)

{
  printf("%u\n",(ulong)param_1);
  return;
}




/* std::__detail::_List_node_header::_List_node_header() */

void __thiscall std::__detail::_List_node_header::_List_node_header(_List_node_header *this)

{
  _M_init(this);
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
    __isoc99_swscanf(local_18 * 8 + param_3,&DAT_001030dc,local_1c);
    *(char *)(local_18 + param_1) = local_1c[0];
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




int globalReturnsTrueOrFalse(void)

{
  int iVar1;
  
  iVar1 = rand();
  return iVar1 % 2;
}




void printLine(char *param_1)

{
  if (param_1 != (char *)0x0) {
    puts(param_1);
  }
  return;
}




void printDoubleLine(undefined8 param_1)

{
  printf("%g\n",param_1);
  return;
}




/* std::_List_base<unsigned int, std::allocator<unsigned int> >::_M_clear() */

void __thiscall
std::_List_base<unsigned_int,std::allocator<unsigned_int>>::_M_clear
          (_List_base<unsigned_int,std::allocator<unsigned_int>> *this)

{
  _List_node<unsigned_int> *p_Var1;
  uint *puVar2;
  allocator *paVar3;
  undefined8 local_20;
  
  local_20 = *(_List_node<unsigned_int> **)this;
  while (local_20 != (_List_node<unsigned_int> *)this) {
    p_Var1 = *(_List_node<unsigned_int> **)local_20;
    puVar2 = (uint *)_List_node<unsigned_int>::_M_valptr(local_20);
    paVar3 = (allocator *)_M_get_Node_allocator(this);
    allocator_traits<std::allocator<std::_List_node<unsigned_int>>>::destroy<unsigned_int>
              (paVar3,puVar2);
    _M_put_node(this,(_List_node *)local_20);
    local_20 = p_Var1;
  }
  return;
}




/* std::_List_base<unsigned int, std::allocator<unsigned int> >::~_List_base() */

void __thiscall
std::_List_base<unsigned_int,std::allocator<unsigned_int>>::~_List_base
          (_List_base<unsigned_int,std::allocator<unsigned_int>> *this)

{
  _M_clear(this);
  _List_impl::~_List_impl((_List_impl *)this);
  return;
}




/* std::allocator<std::_List_node<unsigned int> >::allocator() */

void std::allocator<std::_List_node<unsigned_int>>::allocator(void)

{
  new_allocator<std::_List_node<unsigned_int>>::new_allocator();
  return;
}




void printHexCharLine(char param_1)

{
  printf("%02x\n",(ulong)(uint)(int)param_1);
  return;
}




/* std::list<unsigned int, std::allocator<unsigned int> >::end() const */

undefined8 __thiscall
std::list<unsigned_int,std::allocator<unsigned_int>>::end
          (list<unsigned_int,std::allocator<unsigned_int>> *this)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  _List_const_iterator<unsigned_int>::_List_const_iterator
            ((_List_const_iterator<unsigned_int> *)&local_18,(_List_node_base *)this);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void stdThreadLockAcquire(pthread_mutex_t *param_1)

{
  pthread_mutex_lock(param_1);
  return;
}




void bad9(void)

{
  return;
}




/* std::__allocated_ptr<std::allocator<std::_List_node<unsigned int> >
   >::__allocated_ptr(std::allocator<std::_List_node<unsigned int> >&, std::_List_node<unsigned
   int>*) */

void __thiscall
std::__allocated_ptr<std::allocator<std::_List_node<unsigned_int>>>::__allocated_ptr
          (__allocated_ptr<std::allocator<std::_List_node<unsigned_int>>> *this,allocator *param_1,
          _List_node *param_2)

{
  allocator *paVar1;
  
  paVar1 = __addressof<std::allocator<std::_List_node<unsigned_int>>>(param_1);
  *(allocator **)this = paVar1;
  *(_List_node **)(this + 8) = param_2;
  return;
}




/* new_allocator<std::_List_node<unsigned int> >::max_size() const */

undefined8 new_allocator<std::_List_node<unsigned_int>>::max_size(void)

{
  return 0x555555555555555;
}




void printLongLongLine(undefined8 param_1)

{
  printf("%ld\n",param_1);
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
    __isoc99_sscanf(local_18 * 2 + param_3,&DAT_001030d4,local_1c);
    *(char *)(local_18 + param_1) = local_1c[0];
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




undefined8 stdThreadDestroy(void *param_1)

{
  free(param_1);
  return 1;
}




/* CWE190_Integer_Overflow__unsigned_int_fscanf_multiply_73::goodG2BSink(std::list<unsigned int,
   std::allocator<unsigned int> >) */

void CWE190_Integer_Overflow__unsigned_int_fscanf_multiply_73::goodG2BSink(list param_1)

{
  int *piVar1;
  undefined4 in_register_0000003c;
  
  piVar1 = (int *)std::list<unsigned_int,std::allocator<unsigned_int>>::back
                            ((list<unsigned_int,std::allocator<unsigned_int>> *)
                             CONCAT44(in_register_0000003c,param_1));
  if (*piVar1 != 0) {
    printUnsignedLine(*piVar1 * 2);
  }
  return;
}




/* std::_List_base<unsigned int, std::allocator<unsigned int> >::_M_inc_size(unsigned long) */

void __thiscall
std::_List_base<unsigned_int,std::allocator<unsigned_int>>::_M_inc_size
          (_List_base<unsigned_int,std::allocator<unsigned_int>> *this,ulong param_1)

{
  *(ulong *)(this + 0x10) = *(long *)(this + 0x10) + param_1;
  return;
}




void printShortLine(short param_1)

{
  printf("%hd\n",(ulong)(uint)(int)param_1);
  return;
}




/* __aligned_membuf<unsigned int>::_M_ptr() const */

void __thiscall __aligned_membuf<unsigned_int>::_M_ptr(__aligned_membuf<unsigned_int> *this)

{
  _M_addr(this);
  return;
}




/* std::list<unsigned int, std::allocator<unsigned int> >::back() */

void __thiscall
std::list<unsigned_int,std::allocator<unsigned_int>>::back
          (list<unsigned_int,std::allocator<unsigned_int>> *this)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_18 = end(this);
  _List_iterator<unsigned_int>::operator--((_List_iterator<unsigned_int> *)&local_18);
  _List_iterator<unsigned_int>::operator*((_List_iterator<unsigned_int> *)&local_18);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




/* std::_List_base<unsigned int, std::allocator<unsigned int>
   >::_List_impl::_List_impl(std::allocator<std::_List_node<unsigned int> >&&) */

void __thiscall
std::_List_base<unsigned_int,std::allocator<unsigned_int>>::_List_impl::_List_impl
          (_List_impl *this,allocator *param_1)

{
  move<std::allocator<std::_List_node<unsigned_int>>&>(param_1);
  allocator<std::_List_node<unsigned_int>>::allocator((allocator *)this);
  __detail::_List_node_header::_List_node_header((_List_node_header *)this);
  return;
}




/* void new_allocator<std::_List_node<unsigned int> >::destroy<unsigned int>(unsigned int*) */

void new_allocator<std::_List_node<unsigned_int>>::destroy<unsigned_int>(uint *param_1)

{
  return;
}




/* new_allocator<std::_List_node<unsigned int> >::allocate(unsigned long, void const*) */

void new_allocator<std::_List_node<unsigned_int>>::allocate(ulong param_1,void *param_2)

{
  void *pvVar1;
  
  pvVar1 = (void *)max_size();
  if (pvVar1 < param_2) {
    std::__throw_bad_alloc();
  }
  operator_new((long)param_2 * 0x18);
  return;
}




void bad1(void)

{
  return;
}




/* std::list<unsigned int, std::allocator<unsigned int> >::list() */

void __thiscall
std::list<unsigned_int,std::allocator<unsigned_int>>::list
          (list<unsigned_int,std::allocator<unsigned_int>> *this)

{
  _List_base<unsigned_int,std::allocator<unsigned_int>>::_List_base
            ((_List_base<unsigned_int,std::allocator<unsigned_int>> *)this);
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




/* std::allocator_traits<std::allocator<std::_List_node<unsigned int> >
   >::select_on_container_copy_construction(std::allocator<std::_List_node<unsigned int> > const&)
    */

allocator *
std::allocator_traits<std::allocator<std::_List_node<unsigned_int>>>::
select_on_container_copy_construction(allocator *param_1)

{
  allocator<std::_List_node<unsigned_int>>::allocator(param_1);
  return param_1;
}




/* std::allocator_traits<std::allocator<std::_List_node<unsigned int> >
   >::deallocate(std::allocator<std::_List_node<unsigned int> >&, std::_List_node<unsigned int>*,
   unsigned long) */

void std::allocator_traits<std::allocator<std::_List_node<unsigned_int>>>::deallocate
               (allocator *param_1,_List_node *param_2,ulong param_3)

{
  new_allocator<std::_List_node<unsigned_int>>::deallocate((_List_node *)param_1,(ulong)param_2);
  return;
}




void printIntLine(uint param_1)

{
  printf("%d\n",(ulong)param_1);
  return;
}




/* std::_List_const_iterator<unsigned int>::_List_const_iterator(std::__detail::_List_node_base
   const*) */

void __thiscall
std::_List_const_iterator<unsigned_int>::_List_const_iterator
          (_List_const_iterator<unsigned_int> *this,_List_node_base *param_1)

{
  *(_List_node_base **)this = param_1;
  return;
}




/* std::__allocated_ptr<std::allocator<std::_List_node<unsigned int> >
   >::TEMPNAMEPLACEHOLDERVALUE(decltype(nullptr)) */

__allocated_ptr<std::allocator<std::_List_node<unsigned_int>>> * __thiscall
std::__allocated_ptr<std::allocator<std::_List_node<unsigned_int>>>::operator=
          (__allocated_ptr<std::allocator<std::_List_node<unsigned_int>>> *this,
          _func_decltype_nullptr *param_1)

{
  *(undefined8 *)(this + 8) = 0;
  return this;
}




void good6(void)

{
  return;
}




/* new_allocator<std::_List_node<unsigned int> >::new_allocator() */

void new_allocator<std::_List_node<unsigned_int>>::new_allocator(void)

{
  return;
}



