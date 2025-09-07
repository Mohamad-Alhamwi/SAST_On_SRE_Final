
void bad6(void)

{
  return;
}




void stdThreadLockAcquire(pthread_mutex_t *param_1)

{
  pthread_mutex_lock(param_1);
  return;
}




/* std::_List_base<_twoIntsStruct*, std::allocator<_twoIntsStruct*>
   >::_List_base(std::allocator<std::_List_node<_twoIntsStruct*> >&&) */

void __thiscall
std::_List_base<_twoIntsStruct*,std::allocator<_twoIntsStruct*>>::_List_base
          (_List_base<_twoIntsStruct*,std::allocator<_twoIntsStruct*>> *this,allocator *param_1)

{
  type *ptVar1;
  
  ptVar1 = move<std::allocator<std::_List_node<_twoIntsStruct*>>&>(param_1);
  _List_impl::_List_impl((_List_impl *)this,(allocator *)ptVar1);
  return;
}




void printHexUnsignedCharLine(byte param_1)

{
  printf("%02x\n",(ulong)param_1);
  return;
}




void good3(void)

{
  return;
}




/* std::__detail::_List_node_header::_List_node_header() */

void __thiscall std::__detail::_List_node_header::_List_node_header(_List_node_header *this)

{
  _M_init(this);
  return;
}




void good6(void)

{
  return;
}




undefined8 globalReturnsFalse(void)

{
  return 0;
}




void good5(void)

{
  return;
}




void bad2(void)

{
  return;
}




/* std::_List_node<_twoIntsStruct*>::_M_valptr() const */

void __thiscall std::_List_node<_twoIntsStruct*>::_M_valptr(_List_node<_twoIntsStruct*> *this)

{
  __aligned_membuf<_twoIntsStruct*>::_M_ptr((__aligned_membuf<_twoIntsStruct*> *)(this + 0x10));
  return;
}




/* std::_List_const_iterator<_twoIntsStruct*>::TEMPNAMEPLACEHOLDERVALUE() */

_List_const_iterator<_twoIntsStruct*> * __thiscall
std::_List_const_iterator<_twoIntsStruct*>::operator++(_List_const_iterator<_twoIntsStruct*> *this)

{
  *(undefined8 *)this = **(undefined8 **)this;
  return this;
}




void bad7(void)

{
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




void good4(void)

{
  return;
}




/* CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_memcpy_73::goodG2BSink(std::list<_twoIntsStruct*,
   std::allocator<_twoIntsStruct*> >) */

void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_memcpy_73::goodG2BSink(list param_1)

{
  void *__dest;
  undefined8 *puVar1;
  undefined4 in_register_0000003c;
  long in_FS_OFFSET;
  ulong local_348;
  undefined4 local_338 [202];
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  puVar1 = (undefined8 *)
           std::list<_twoIntsStruct*,std::allocator<_twoIntsStruct*>>::back
                     ((list<_twoIntsStruct*,std::allocator<_twoIntsStruct*>> *)
                      CONCAT44(in_register_0000003c,param_1));
  __dest = (void *)*puVar1;
  for (local_348 = 0; local_348 < 100; local_348 = local_348 + 1) {
    local_338[local_348 * 2] = 0;
    local_338[local_348 * 2 + 1] = 0;
  }
  memcpy(__dest,local_338,800);
  printStructLine(__dest);
  free(__dest);
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




/* CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_memcpy_73::bad() */

void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_memcpy_73::bad(void)

{
  long in_FS_OFFSET;
  _twoIntsStruct *local_60;
  list<_twoIntsStruct*,std::allocator<_twoIntsStruct*>> local_58 [32];
  list<_twoIntsStruct*,std::allocator<_twoIntsStruct*>> local_38 [24];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  std::list<_twoIntsStruct*,std::allocator<_twoIntsStruct*>>::list(local_58);
  local_60 = (_twoIntsStruct *)0x0;
  local_60 = (_twoIntsStruct *)malloc(400);
  if (local_60 == (_twoIntsStruct *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
                    /* try { // try from 001017f1 to 0010182e has its CatchHandler @ 0010187a */
  std::list<_twoIntsStruct*,std::allocator<_twoIntsStruct*>>::push_back(local_58,&local_60);
  std::list<_twoIntsStruct*,std::allocator<_twoIntsStruct*>>::push_back(local_58,&local_60);
  std::list<_twoIntsStruct*,std::allocator<_twoIntsStruct*>>::push_back(local_58,&local_60);
  std::list<_twoIntsStruct*,std::allocator<_twoIntsStruct*>>::list(local_38,(list *)local_58);
                    /* try { // try from 00101836 to 0010183a has its CatchHandler @ 00101865 */
  badSink((list)local_38);
  std::list<_twoIntsStruct*,std::allocator<_twoIntsStruct*>>::~list(local_38);
  std::list<_twoIntsStruct*,std::allocator<_twoIntsStruct*>>::~list(local_58);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




/* std::allocator_traits<std::allocator<std::_List_node<_twoIntsStruct*> >
   >::allocate(std::allocator<std::_List_node<_twoIntsStruct*> >&, unsigned long) */

void std::allocator_traits<std::allocator<std::_List_node<_twoIntsStruct*>>>::allocate
               (allocator *param_1,ulong param_2)

{
  new_allocator<std::_List_node<_twoIntsStruct*>>::allocate((ulong)param_1,(void *)param_2);
  return;
}




/* std::list<_twoIntsStruct*, std::allocator<_twoIntsStruct*> >::push_back(_twoIntsStruct* const&)
    */

void __thiscall
std::list<_twoIntsStruct*,std::allocator<_twoIntsStruct*>>::push_back
          (list<_twoIntsStruct*,std::allocator<_twoIntsStruct*>> *this,_twoIntsStruct **param_1)

{
  _List_iterator _Var1;
  
  _Var1 = end(this);
  _M_insert<_twoIntsStruct*const&>(this,_Var1,param_1);
  return;
}




void printHexCharLine(char param_1)

{
  printf("%02x\n",(ulong)(uint)(int)param_1);
  return;
}




/* std::list<_twoIntsStruct*, std::allocator<_twoIntsStruct*> >::end() const */

undefined8 __thiscall
std::list<_twoIntsStruct*,std::allocator<_twoIntsStruct*>>::end
          (list<_twoIntsStruct*,std::allocator<_twoIntsStruct*>> *this)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  _List_const_iterator<_twoIntsStruct*>::_List_const_iterator
            ((_List_const_iterator<_twoIntsStruct*> *)&local_18,(_List_node_base *)this);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void bad8(void)

{
  return;
}




/* std::_List_iterator<_twoIntsStruct*>::_List_iterator(std::__detail::_List_node_base*) */

void __thiscall
std::_List_iterator<_twoIntsStruct*>::_List_iterator
          (_List_iterator<_twoIntsStruct*> *this,_List_node_base *param_1)

{
  *(_List_node_base **)this = param_1;
  return;
}




void printLongLongLine(undefined8 param_1)

{
  printf("%ld\n",param_1);
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




/* void std::list<_twoIntsStruct*, std::allocator<_twoIntsStruct*>
   >::_M_initialize_dispatch<std::_List_const_iterator<_twoIntsStruct*>
   >(std::_List_const_iterator<_twoIntsStruct*>, std::_List_const_iterator<_twoIntsStruct*>,
   std::__false_type) */

void std::list<_twoIntsStruct*,std::allocator<_twoIntsStruct*>>::
     _M_initialize_dispatch<std::_List_const_iterator<_twoIntsStruct*>>
               (_List_const_iterator param_1,_List_const_iterator param_2,__false_type param_3)

{
  char cVar1;
  _twoIntsStruct **pp_Var2;
  undefined4 in_register_00000014;
  undefined4 in_register_00000034;
  undefined4 in_register_0000003c;
  undefined8 local_20;
  undefined8 local_18;
  list<_twoIntsStruct*,std::allocator<_twoIntsStruct*>> *local_10;
  
  local_10 = (list<_twoIntsStruct*,std::allocator<_twoIntsStruct*>> *)
             CONCAT44(in_register_0000003c,param_1);
  local_18 = CONCAT44(in_register_00000034,param_2);
  local_20 = CONCAT44(in_register_00000014,param_3);
  while( true ) {
    cVar1 = operator!=((_List_const_iterator *)&local_18,(_List_const_iterator *)&local_20);
    if (cVar1 == '\0') break;
    pp_Var2 = (_twoIntsStruct **)
              _List_const_iterator<_twoIntsStruct*>::operator*
                        ((_List_const_iterator<_twoIntsStruct*> *)&local_18);
    emplace_back<_twoIntsStruct*const&>(local_10,pp_Var2);
    _List_const_iterator<_twoIntsStruct*>::operator++
              ((_List_const_iterator<_twoIntsStruct*> *)&local_18);
  }
  return;
}




/* std::list<_twoIntsStruct*, std::allocator<_twoIntsStruct*> >::~list() */

void __thiscall
std::list<_twoIntsStruct*,std::allocator<_twoIntsStruct*>>::~list
          (list<_twoIntsStruct*,std::allocator<_twoIntsStruct*>> *this)

{
  _List_base<_twoIntsStruct*,std::allocator<_twoIntsStruct*>>::~_List_base
            ((_List_base<_twoIntsStruct*,std::allocator<_twoIntsStruct*>> *)this);
  return;
}




void internal_start(long param_1)

{
  (**(code **)(param_1 + 8))(*(undefined8 *)(param_1 + 0x10));
                    /* WARNING: Subroutine does not return */
  pthread_exit((void *)0x0);
}




/* std::_List_base<_twoIntsStruct*, std::allocator<_twoIntsStruct*> >::_M_get_node() */

void __thiscall
std::_List_base<_twoIntsStruct*,std::allocator<_twoIntsStruct*>>::_M_get_node
          (_List_base<_twoIntsStruct*,std::allocator<_twoIntsStruct*>> *this)

{
  allocator_traits<std::allocator<std::_List_node<_twoIntsStruct*>>>::allocate((allocator *)this,1);
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




/* operator new(unsigned long, void*) */

void * operator_new(ulong param_1,void *param_2)

{
  return param_2;
}




/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* std::TEMPNAMEPLACEHOLDERVALUE(std::_List_const_iterator<_twoIntsStruct*> const&,
   std::_List_const_iterator<_twoIntsStruct*> const&) */

undefined8 std::operator!=(_List_const_iterator *param_1,_List_const_iterator *param_2)

{
  return CONCAT71((int7)((ulong)*(long *)param_2 >> 8),*(long *)param_1 != *(long *)param_2);
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




void bad9(void)

{
  return;
}




/* std::_List_base<_twoIntsStruct*, std::allocator<_twoIntsStruct*> >::_M_inc_size(unsigned long) */

void __thiscall
std::_List_base<_twoIntsStruct*,std::allocator<_twoIntsStruct*>>::_M_inc_size
          (_List_base<_twoIntsStruct*,std::allocator<_twoIntsStruct*>> *this,ulong param_1)

{
  *(ulong *)(this + 0x10) = *(long *)(this + 0x10) + param_1;
  return;
}




/* void std::list<_twoIntsStruct*, std::allocator<_twoIntsStruct*> >::_M_insert<_twoIntsStruct*
   const&>(std::_List_iterator<_twoIntsStruct*>, _twoIntsStruct* const&) */

void __thiscall
std::list<_twoIntsStruct*,std::allocator<_twoIntsStruct*>>::_M_insert<_twoIntsStruct*const&>
          (list<_twoIntsStruct*,std::allocator<_twoIntsStruct*>> *this,_List_iterator param_1,
          _twoIntsStruct **param_2)

{
  _twoIntsStruct **pp_Var1;
  _List_node *p_Var2;
  
  pp_Var1 = forward<_twoIntsStruct*const&>((type *)param_2);
  p_Var2 = _M_create_node<_twoIntsStruct*const&>(this,pp_Var1);
  std::__detail::_List_node_base::_M_hook((_List_node_base *)p_Var2);
  _List_base<_twoIntsStruct*,std::allocator<_twoIntsStruct*>>::_M_inc_size
            ((_List_base<_twoIntsStruct*,std::allocator<_twoIntsStruct*>> *)this,1);
  return;
}




void FUN_00101020(void)

{
  (*(code *)PTR_00105ef8)();
  return;
}




void printSizeTLine(undefined8 param_1)

{
  printf("%zu\n",param_1);
  return;
}




/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* _twoIntsStruct* const& std::forward<_twoIntsStruct* const&>(std::remove_reference<_twoIntsStruct*
   const&>::type&) */

_twoIntsStruct ** std::forward<_twoIntsStruct*const&>(type *param_1)

{
  return (_twoIntsStruct **)param_1;
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




void stdThreadLockDestroy(pthread_mutex_t *param_1)

{
  pthread_mutex_destroy(param_1);
  free(param_1);
  return;
}




void bad1(void)

{
  return;
}




void printLongLine(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




/* std::__allocated_ptr<std::allocator<std::_List_node<_twoIntsStruct*> > >::~__allocated_ptr() */

void __thiscall
std::__allocated_ptr<std::allocator<std::_List_node<_twoIntsStruct*>>>::~__allocated_ptr
          (__allocated_ptr<std::allocator<std::_List_node<_twoIntsStruct*>>> *this)

{
  if (*(long *)(this + 8) != 0) {
    allocator_traits<std::allocator<std::_List_node<_twoIntsStruct*>>>::deallocate
              (*(allocator **)this,*(_List_node **)(this + 8),1);
  }
  return;
}




/* std::list<_twoIntsStruct*, std::allocator<_twoIntsStruct*> >::list(std::list<_twoIntsStruct*,
   std::allocator<_twoIntsStruct*> > const&) */

void __thiscall
std::list<_twoIntsStruct*,std::allocator<_twoIntsStruct*>>::list
          (list<_twoIntsStruct*,std::allocator<_twoIntsStruct*>> *this,list *param_1)

{
  __false_type _Var1;
  _List_const_iterator _Var2;
  long in_FS_OFFSET;
  allocator local_21;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  _List_base<_twoIntsStruct*,std::allocator<_twoIntsStruct*>>::_M_get_Node_allocator
            ((_List_base<_twoIntsStruct*,std::allocator<_twoIntsStruct*>> *)param_1);
  __alloc_traits<std::allocator<std::_List_node<_twoIntsStruct*>>,std::_List_node<_twoIntsStruct*>>
  ::_S_select_on_copy(&local_21);
  _List_base<_twoIntsStruct*,std::allocator<_twoIntsStruct*>>::_List_base
            ((_List_base<_twoIntsStruct*,std::allocator<_twoIntsStruct*>> *)this,&local_21);
  allocator<std::_List_node<_twoIntsStruct*>>::~allocator
            ((allocator<std::_List_node<_twoIntsStruct*>> *)&local_21);
  _Var1 = end((list<_twoIntsStruct*,std::allocator<_twoIntsStruct*>> *)param_1);
  _Var2 = begin((list<_twoIntsStruct*,std::allocator<_twoIntsStruct*>> *)param_1);
                    /* try { // try from 00101c56 to 00101c5a has its CatchHandler @ 00101c5d */
  _M_initialize_dispatch<std::_List_const_iterator<_twoIntsStruct*>>
            ((_List_const_iterator)this,_Var2,_Var1);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




/* new_allocator<std::_List_node<_twoIntsStruct*> >::allocate(unsigned long, void const*) */

void new_allocator<std::_List_node<_twoIntsStruct*>>::allocate(ulong param_1,void *param_2)

{
  void *pvVar1;
  
  pvVar1 = (void *)max_size();
  if (pvVar1 < param_2) {
    std::__throw_bad_alloc();
  }
  operator_new((long)param_2 * 0x18);
  return;
}




/* std::__allocated_ptr<std::allocator<std::_List_node<_twoIntsStruct*> >
   >::__allocated_ptr(std::allocator<std::_List_node<_twoIntsStruct*> >&,
   std::_List_node<_twoIntsStruct*>*) */

void __thiscall
std::__allocated_ptr<std::allocator<std::_List_node<_twoIntsStruct*>>>::__allocated_ptr
          (__allocated_ptr<std::allocator<std::_List_node<_twoIntsStruct*>>> *this,
          allocator *param_1,_List_node *param_2)

{
  allocator *paVar1;
  
  paVar1 = __addressof<std::allocator<std::_List_node<_twoIntsStruct*>>>(param_1);
  *(allocator **)this = paVar1;
  *(_List_node **)(this + 8) = param_2;
  return;
}




/* new_allocator<std::_List_node<_twoIntsStruct*> >::new_allocator() */

void new_allocator<std::_List_node<_twoIntsStruct*>>::new_allocator(void)

{
  return;
}




void bad4(void)

{
  return;
}




/* std::_List_base<_twoIntsStruct*, std::allocator<_twoIntsStruct*> >::~_List_base() */

void __thiscall
std::_List_base<_twoIntsStruct*,std::allocator<_twoIntsStruct*>>::~_List_base
          (_List_base<_twoIntsStruct*,std::allocator<_twoIntsStruct*>> *this)

{
  _M_clear(this);
  _List_impl::~_List_impl((_List_impl *)this);
  return;
}




undefined8 globalReturnsTrue(void)

{
  return 1;
}




/* __aligned_membuf<_twoIntsStruct*>::_M_ptr() */

void __thiscall __aligned_membuf<_twoIntsStruct*>::_M_ptr(__aligned_membuf<_twoIntsStruct*> *this)

{
  _M_addr(this);
  return;
}




void good8(void)

{
  return;
}




/* std::list<_twoIntsStruct*, std::allocator<_twoIntsStruct*> >::end() */

undefined8 __thiscall
std::list<_twoIntsStruct*,std::allocator<_twoIntsStruct*>>::end
          (list<_twoIntsStruct*,std::allocator<_twoIntsStruct*>> *this)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  _List_iterator<_twoIntsStruct*>::_List_iterator
            ((_List_iterator<_twoIntsStruct*> *)&local_18,(_List_node_base *)this);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




/* std::allocator<std::_List_node<_twoIntsStruct*> >::allocator() */

void std::allocator<std::_List_node<_twoIntsStruct*>>::allocator(void)

{
  new_allocator<std::_List_node<_twoIntsStruct*>>::new_allocator();
  return;
}




/* __aligned_membuf<_twoIntsStruct*>::_M_ptr() const */

void __thiscall __aligned_membuf<_twoIntsStruct*>::_M_ptr(__aligned_membuf<_twoIntsStruct*> *this)

{
  _M_addr(this);
  return;
}




void good9(void)

{
  return;
}




/* std::_List_base<_twoIntsStruct*, std::allocator<_twoIntsStruct*>
   >::_M_put_node(std::_List_node<_twoIntsStruct*>*) */

void __thiscall
std::_List_base<_twoIntsStruct*,std::allocator<_twoIntsStruct*>>::_M_put_node
          (_List_base<_twoIntsStruct*,std::allocator<_twoIntsStruct*>> *this,_List_node *param_1)

{
  allocator_traits<std::allocator<std::_List_node<_twoIntsStruct*>>>::deallocate
            ((allocator *)this,param_1,1);
  return;
}




/* CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_memcpy_73::good() */

void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_memcpy_73::good(void)

{
  goodG2B();
  return;
}




/* std::_List_base<_twoIntsStruct*, std::allocator<_twoIntsStruct*>
   >::_List_impl::_List_impl(std::allocator<std::_List_node<_twoIntsStruct*> >&&) */

void __thiscall
std::_List_base<_twoIntsStruct*,std::allocator<_twoIntsStruct*>>::_List_impl::_List_impl
          (_List_impl *this,allocator *param_1)

{
  move<std::allocator<std::_List_node<_twoIntsStruct*>>&>(param_1);
  allocator<std::_List_node<_twoIntsStruct*>>::allocator((allocator *)this);
  __detail::_List_node_header::_List_node_header((_List_node_header *)this);
  return;
}




/* std::_List_base<_twoIntsStruct*, std::allocator<_twoIntsStruct*> >::_M_get_Node_allocator() */

_List_base<_twoIntsStruct*,std::allocator<_twoIntsStruct*>> * __thiscall
std::_List_base<_twoIntsStruct*,std::allocator<_twoIntsStruct*>>::_M_get_Node_allocator
          (_List_base<_twoIntsStruct*,std::allocator<_twoIntsStruct*>> *this)

{
  return this;
}




/* void std::allocator_traits<std::allocator<std::_List_node<_twoIntsStruct*> >
   >::construct<_twoIntsStruct*, _twoIntsStruct*
   const&>(std::allocator<std::_List_node<_twoIntsStruct*> >&, _twoIntsStruct**, _twoIntsStruct*
   const&) */

void std::allocator_traits<std::allocator<std::_List_node<_twoIntsStruct*>>>::
     construct<_twoIntsStruct*,_twoIntsStruct*const&>
               (allocator *param_1,_twoIntsStruct **param_2,_twoIntsStruct **param_3)

{
  _twoIntsStruct **pp_Var1;
  
  pp_Var1 = forward<_twoIntsStruct*const&>((type *)param_3);
  new_allocator<std::_List_node<_twoIntsStruct*>>::construct<_twoIntsStruct*,_twoIntsStruct*const&>
            ((new_allocator<std::_List_node<_twoIntsStruct*>> *)param_1,param_2,pp_Var1);
  return;
}




/* std::allocator_traits<std::allocator<std::_List_node<_twoIntsStruct*> >
   >::deallocate(std::allocator<std::_List_node<_twoIntsStruct*> >&,
   std::_List_node<_twoIntsStruct*>*, unsigned long) */

void std::allocator_traits<std::allocator<std::_List_node<_twoIntsStruct*>>>::deallocate
               (allocator *param_1,_List_node *param_2,ulong param_3)

{
  new_allocator<std::_List_node<_twoIntsStruct*>>::deallocate((_List_node *)param_1,(ulong)param_2);
  return;
}




/* new_allocator<std::_List_node<_twoIntsStruct*> >::~new_allocator() */

void __thiscall
new_allocator<std::_List_node<_twoIntsStruct*>>::~new_allocator
          (new_allocator<std::_List_node<_twoIntsStruct*>> *this)

{
  return;
}




void good1(void)

{
  return;
}




/* __alloc_traits<std::allocator<std::_List_node<_twoIntsStruct*> >,
   std::_List_node<_twoIntsStruct*>
   >::_S_select_on_copy(std::allocator<std::_List_node<_twoIntsStruct*> > const&) */

allocator *
__alloc_traits<std::allocator<std::_List_node<_twoIntsStruct*>>,std::_List_node<_twoIntsStruct*>>::
_S_select_on_copy(allocator *param_1)

{
  long lVar1;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  std::allocator_traits<std::allocator<std::_List_node<_twoIntsStruct*>>>::
  select_on_container_copy_construction(param_1);
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1;
}




/* new_allocator<std::_List_node<_twoIntsStruct*> >::deallocate(std::_List_node<_twoIntsStruct*>*,
   unsigned long) */

void new_allocator<std::_List_node<_twoIntsStruct*>>::deallocate(_List_node *param_1,ulong param_2)

{
  operator_delete((void *)param_2);
  return;
}




void bad3(void)

{
  return;
}




/* void std::allocator_traits<std::allocator<std::_List_node<_twoIntsStruct*> >
   >::destroy<_twoIntsStruct*>(std::allocator<std::_List_node<_twoIntsStruct*> >&, _twoIntsStruct**)
    */

void std::allocator_traits<std::allocator<std::_List_node<_twoIntsStruct*>>>::
     destroy<_twoIntsStruct*>(allocator *param_1,_twoIntsStruct **param_2)

{
  new_allocator<std::_List_node<_twoIntsStruct*>>::destroy<_twoIntsStruct*>
            ((_twoIntsStruct **)param_1);
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




void printWLine(long param_1)

{
  if (param_1 != 0) {
    wprintf(L"%ls\n",param_1);
  }
  return;
}




/* std::_List_base<_twoIntsStruct*, std::allocator<_twoIntsStruct*> >::_List_base() */

void __thiscall
std::_List_base<_twoIntsStruct*,std::allocator<_twoIntsStruct*>>::_List_base
          (_List_base<_twoIntsStruct*,std::allocator<_twoIntsStruct*>> *this)

{
  _List_impl::_List_impl((_List_impl *)this);
  return;
}




/* std::_List_base<_twoIntsStruct*, std::allocator<_twoIntsStruct*> >::_List_impl::_List_impl() */

void __thiscall
std::_List_base<_twoIntsStruct*,std::allocator<_twoIntsStruct*>>::_List_impl::_List_impl
          (_List_impl *this)

{
  allocator<std::_List_node<_twoIntsStruct*>>::allocator();
  __detail::_List_node_header::_List_node_header((_List_node_header *)this);
  return;
}




void printFloatLine(float param_1)

{
  printf("%f\n",(double)param_1);
  return;
}




/* std::_List_iterator<_twoIntsStruct*>::TEMPNAMEPLACEHOLDERVALUE() const */

void __thiscall
std::_List_iterator<_twoIntsStruct*>::operator*(_List_iterator<_twoIntsStruct*> *this)

{
  _List_node<_twoIntsStruct*>::_M_valptr(*(_List_node<_twoIntsStruct*> **)this);
  return;
}




/* std::allocator_traits<std::allocator<std::_List_node<_twoIntsStruct*> >
   >::select_on_container_copy_construction(std::allocator<std::_List_node<_twoIntsStruct*> >
   const&) */

allocator *
std::allocator_traits<std::allocator<std::_List_node<_twoIntsStruct*>>>::
select_on_container_copy_construction(allocator *param_1)

{
  allocator<std::_List_node<_twoIntsStruct*>>::allocator(param_1);
  return param_1;
}




/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* std::allocator<std::_List_node<_twoIntsStruct*> >*
   std::__addressof<std::allocator<std::_List_node<_twoIntsStruct*> >
   >(std::allocator<std::_List_node<_twoIntsStruct*> >&) */

allocator * std::__addressof<std::allocator<std::_List_node<_twoIntsStruct*>>>(allocator *param_1)

{
  return param_1;
}




/* CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_memcpy_73::goodG2B() */

void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_memcpy_73::goodG2B(void)

{
  long in_FS_OFFSET;
  _twoIntsStruct *local_60;
  list<_twoIntsStruct*,std::allocator<_twoIntsStruct*>> local_58 [32];
  list<_twoIntsStruct*,std::allocator<_twoIntsStruct*>> local_38 [24];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  std::list<_twoIntsStruct*,std::allocator<_twoIntsStruct*>>::list(local_58);
  local_60 = (_twoIntsStruct *)0x0;
  local_60 = (_twoIntsStruct *)malloc(800);
  if (local_60 == (_twoIntsStruct *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
                    /* try { // try from 00101903 to 00101940 has its CatchHandler @ 0010198c */
  std::list<_twoIntsStruct*,std::allocator<_twoIntsStruct*>>::push_back(local_58,&local_60);
  std::list<_twoIntsStruct*,std::allocator<_twoIntsStruct*>>::push_back(local_58,&local_60);
  std::list<_twoIntsStruct*,std::allocator<_twoIntsStruct*>>::push_back(local_58,&local_60);
  std::list<_twoIntsStruct*,std::allocator<_twoIntsStruct*>>::list(local_38,(list *)local_58);
                    /* try { // try from 00101948 to 0010194c has its CatchHandler @ 00101977 */
  goodG2BSink((list)local_38);
  std::list<_twoIntsStruct*,std::allocator<_twoIntsStruct*>>::~list(local_38);
  std::list<_twoIntsStruct*,std::allocator<_twoIntsStruct*>>::~list(local_58);
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




/* void new_allocator<std::_List_node<_twoIntsStruct*> >::destroy<_twoIntsStruct*>(_twoIntsStruct**)
    */

void new_allocator<std::_List_node<_twoIntsStruct*>>::destroy<_twoIntsStruct*>
               (_twoIntsStruct **param_1)

{
  return;
}




/* new_allocator<std::_List_node<_twoIntsStruct*> >::max_size() const */

undefined8 new_allocator<std::_List_node<_twoIntsStruct*>>::max_size(void)

{
  return 0x555555555555555;
}




/* std::list<_twoIntsStruct*, std::allocator<_twoIntsStruct*> >::list() */

void __thiscall
std::list<_twoIntsStruct*,std::allocator<_twoIntsStruct*>>::list
          (list<_twoIntsStruct*,std::allocator<_twoIntsStruct*>> *this)

{
  _List_base<_twoIntsStruct*,std::allocator<_twoIntsStruct*>>::_List_base
            ((_List_base<_twoIntsStruct*,std::allocator<_twoIntsStruct*>> *)this);
  return;
}




void printDoubleLine(undefined8 param_1)

{
  printf("%g\n",param_1);
  return;
}




/* std::allocator<std::_List_node<_twoIntsStruct*> >::~allocator() */

void __thiscall
std::allocator<std::_List_node<_twoIntsStruct*>>::~allocator
          (allocator<std::_List_node<_twoIntsStruct*>> *this)

{
  new_allocator<std::_List_node<_twoIntsStruct*>>::~new_allocator
            ((new_allocator<std::_List_node<_twoIntsStruct*>> *)this);
  return;
}




/* CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_memcpy_73::badSink(std::list<_twoIntsStruct*,
   std::allocator<_twoIntsStruct*> >) */

void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_memcpy_73::badSink(list param_1)

{
  void *__dest;
  undefined8 *puVar1;
  undefined4 in_register_0000003c;
  long in_FS_OFFSET;
  ulong local_348;
  undefined4 local_338 [202];
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  puVar1 = (undefined8 *)
           std::list<_twoIntsStruct*,std::allocator<_twoIntsStruct*>>::back
                     ((list<_twoIntsStruct*,std::allocator<_twoIntsStruct*>> *)
                      CONCAT44(in_register_0000003c,param_1));
  __dest = (void *)*puVar1;
  for (local_348 = 0; local_348 < 100; local_348 = local_348 + 1) {
    local_338[local_348 * 2] = 0;
    local_338[local_348 * 2 + 1] = 0;
  }
  memcpy(__dest,local_338,800);
  printStructLine(__dest);
  free(__dest);
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
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_memcpy_73::good();
  printLine("Finished good()");
  printLine("Calling bad()...");
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_memcpy_73::bad();
  printLine("Finished bad()");
  return 0;
}




void good7(void)

{
  return;
}




/* std::__allocated_ptr<std::allocator<std::_List_node<_twoIntsStruct*> >
   >::TEMPNAMEPLACEHOLDERVALUE(decltype(nullptr)) */

__allocated_ptr<std::allocator<std::_List_node<_twoIntsStruct*>>> * __thiscall
std::__allocated_ptr<std::allocator<std::_List_node<_twoIntsStruct*>>>::operator=
          (__allocated_ptr<std::allocator<std::_List_node<_twoIntsStruct*>>> *this,
          _func_decltype_nullptr *param_1)

{
  *(undefined8 *)(this + 8) = 0;
  return this;
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




/* __aligned_membuf<_twoIntsStruct*>::_M_addr() const */

__aligned_membuf<_twoIntsStruct*> * __thiscall
__aligned_membuf<_twoIntsStruct*>::_M_addr(__aligned_membuf<_twoIntsStruct*> *this)

{
  return this;
}




void printIntLine(uint param_1)

{
  printf("%d\n",(ulong)param_1);
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




/* __aligned_membuf<_twoIntsStruct*>::_M_addr() */

__aligned_membuf<_twoIntsStruct*> * __thiscall
__aligned_membuf<_twoIntsStruct*>::_M_addr(__aligned_membuf<_twoIntsStruct*> *this)

{
  return this;
}




void stdThreadLockRelease(pthread_mutex_t *param_1)

{
  pthread_mutex_unlock(param_1);
  return;
}




/* std::_List_base<_twoIntsStruct*, std::allocator<_twoIntsStruct*> >::_M_get_Node_allocator() const
    */

_List_base<_twoIntsStruct*,std::allocator<_twoIntsStruct*>> * __thiscall
std::_List_base<_twoIntsStruct*,std::allocator<_twoIntsStruct*>>::_M_get_Node_allocator
          (_List_base<_twoIntsStruct*,std::allocator<_twoIntsStruct*>> *this)

{
  return this;
}




/* new_allocator<std::_List_node<_twoIntsStruct*>
   >::new_allocator(new_allocator<std::_List_node<_twoIntsStruct*> > const&) */

void new_allocator<std::_List_node<_twoIntsStruct*>>::new_allocator(new_allocator *param_1)

{
  return;
}




/* std::_List_const_iterator<_twoIntsStruct*>::_List_const_iterator(std::__detail::_List_node_base
   const*) */

void __thiscall
std::_List_const_iterator<_twoIntsStruct*>::_List_const_iterator
          (_List_const_iterator<_twoIntsStruct*> *this,_List_node_base *param_1)

{
  *(_List_node_base **)this = param_1;
  return;
}




/* std::_List_node<_twoIntsStruct*>* std::list<_twoIntsStruct*, std::allocator<_twoIntsStruct*>
   >::_M_create_node<_twoIntsStruct* const&>(_twoIntsStruct* const&) */

_List_node * __thiscall
std::list<_twoIntsStruct*,std::allocator<_twoIntsStruct*>>::_M_create_node<_twoIntsStruct*const&>
          (list<_twoIntsStruct*,std::allocator<_twoIntsStruct*>> *this,_twoIntsStruct **param_1)

{
  _List_node<_twoIntsStruct*> *this_00;
  allocator *paVar1;
  _twoIntsStruct **pp_Var2;
  _twoIntsStruct **pp_Var3;
  long in_FS_OFFSET;
  __allocated_ptr<std::allocator<std::_List_node<_twoIntsStruct*>>> local_38 [24];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  this_00 = (_List_node<_twoIntsStruct*> *)
            _List_base<_twoIntsStruct*,std::allocator<_twoIntsStruct*>>::_M_get_node
                      ((_List_base<_twoIntsStruct*,std::allocator<_twoIntsStruct*>> *)this);
  paVar1 = (allocator *)
           _List_base<_twoIntsStruct*,std::allocator<_twoIntsStruct*>>::_M_get_Node_allocator
                     ((_List_base<_twoIntsStruct*,std::allocator<_twoIntsStruct*>> *)this);
  __allocated_ptr<std::allocator<std::_List_node<_twoIntsStruct*>>>::__allocated_ptr
            (local_38,paVar1,(_List_node *)this_00);
  pp_Var2 = forward<_twoIntsStruct*const&>((type *)param_1);
  pp_Var3 = (_twoIntsStruct **)_List_node<_twoIntsStruct*>::_M_valptr(this_00);
  allocator_traits<std::allocator<std::_List_node<_twoIntsStruct*>>>::
  construct<_twoIntsStruct*,_twoIntsStruct*const&>(paVar1,pp_Var3,pp_Var2);
  __allocated_ptr<std::allocator<std::_List_node<_twoIntsStruct*>>>::operator=
            (local_38,(_func_decltype_nullptr *)0x0);
  __allocated_ptr<std::allocator<std::_List_node<_twoIntsStruct*>>>::~__allocated_ptr(local_38);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return (_List_node *)this_00;
}




void good2(void)

{
  return;
}




/* std::_List_node<_twoIntsStruct*>::_M_valptr() */

void __thiscall std::_List_node<_twoIntsStruct*>::_M_valptr(_List_node<_twoIntsStruct*> *this)

{
  __aligned_membuf<_twoIntsStruct*>::_M_ptr((__aligned_membuf<_twoIntsStruct*> *)(this + 0x10));
  return;
}




/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* std::remove_reference<std::allocator<std::_List_node<_twoIntsStruct*> >&>::type&&
   std::move<std::allocator<std::_List_node<_twoIntsStruct*>
   >&>(std::allocator<std::_List_node<_twoIntsStruct*> >&) */

type * std::move<std::allocator<std::_List_node<_twoIntsStruct*>>&>(allocator *param_1)

{
  return (type *)param_1;
}




/* std::_List_base<_twoIntsStruct*, std::allocator<_twoIntsStruct*> >::_List_impl::~_List_impl() */

void __thiscall
std::_List_base<_twoIntsStruct*,std::allocator<_twoIntsStruct*>>::_List_impl::~_List_impl
          (_List_impl *this)

{
  allocator<std::_List_node<_twoIntsStruct*>>::~allocator
            ((allocator<std::_List_node<_twoIntsStruct*>> *)this);
  return;
}




/* std::_List_iterator<_twoIntsStruct*>::TEMPNAMEPLACEHOLDERVALUE() */

_List_iterator<_twoIntsStruct*> * __thiscall
std::_List_iterator<_twoIntsStruct*>::operator--(_List_iterator<_twoIntsStruct*> *this)

{
  *(undefined8 *)this = *(undefined8 *)(*(long *)this + 8);
  return this;
}




/* std::list<_twoIntsStruct*, std::allocator<_twoIntsStruct*> >::begin() const */

undefined8 __thiscall
std::list<_twoIntsStruct*,std::allocator<_twoIntsStruct*>>::begin
          (list<_twoIntsStruct*,std::allocator<_twoIntsStruct*>> *this)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  _List_const_iterator<_twoIntsStruct*>::_List_const_iterator
            ((_List_const_iterator<_twoIntsStruct*> *)&local_18,*(_List_node_base **)this);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




/* void new_allocator<std::_List_node<_twoIntsStruct*> >::construct<_twoIntsStruct*, _twoIntsStruct*
   const&>(_twoIntsStruct**, _twoIntsStruct* const&) */

void __thiscall
new_allocator<std::_List_node<_twoIntsStruct*>>::construct<_twoIntsStruct*,_twoIntsStruct*const&>
          (new_allocator<std::_List_node<_twoIntsStruct*>> *this,_twoIntsStruct **param_1,
          _twoIntsStruct **param_2)

{
  _twoIntsStruct *p_Var1;
  _twoIntsStruct **pp_Var2;
  undefined8 *puVar3;
  
  pp_Var2 = std::forward<_twoIntsStruct*const&>((type *)param_2);
  p_Var1 = *pp_Var2;
  puVar3 = (undefined8 *)operator_new(8,param_1);
  *puVar3 = p_Var1;
  return;
}




/* std::allocator<std::_List_node<_twoIntsStruct*>
   >::allocator(std::allocator<std::_List_node<_twoIntsStruct*> > const&) */

void std::allocator<std::_List_node<_twoIntsStruct*>>::allocator(allocator *param_1)

{
  new_allocator<std::_List_node<_twoIntsStruct*>>::new_allocator((new_allocator *)param_1);
  return;
}




/* void std::list<_twoIntsStruct*, std::allocator<_twoIntsStruct*> >::emplace_back<_twoIntsStruct*
   const&>(_twoIntsStruct* const&) */

void __thiscall
std::list<_twoIntsStruct*,std::allocator<_twoIntsStruct*>>::emplace_back<_twoIntsStruct*const&>
          (list<_twoIntsStruct*,std::allocator<_twoIntsStruct*>> *this,_twoIntsStruct **param_1)

{
  _List_iterator _Var1;
  _twoIntsStruct **pp_Var2;
  
  pp_Var2 = forward<_twoIntsStruct*const&>((type *)param_1);
  _Var1 = end(this);
  _M_insert<_twoIntsStruct*const&>(this,_Var1,pp_Var2);
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




void printLine(char *param_1)

{
  if (param_1 != (char *)0x0) {
    puts(param_1);
  }
  return;
}




/* std::_List_const_iterator<_twoIntsStruct*>::TEMPNAMEPLACEHOLDERVALUE() const */

void __thiscall
std::_List_const_iterator<_twoIntsStruct*>::operator*(_List_const_iterator<_twoIntsStruct*> *this)

{
  _List_node<_twoIntsStruct*>::_M_valptr(*(_List_node<_twoIntsStruct*> **)this);
  return;
}




/* std::list<_twoIntsStruct*, std::allocator<_twoIntsStruct*> >::back() */

void __thiscall
std::list<_twoIntsStruct*,std::allocator<_twoIntsStruct*>>::back
          (list<_twoIntsStruct*,std::allocator<_twoIntsStruct*>> *this)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_18 = end(this);
  _List_iterator<_twoIntsStruct*>::operator--((_List_iterator<_twoIntsStruct*> *)&local_18);
  _List_iterator<_twoIntsStruct*>::operator*((_List_iterator<_twoIntsStruct*> *)&local_18);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




/* std::_List_base<_twoIntsStruct*, std::allocator<_twoIntsStruct*> >::_M_clear() */

void __thiscall
std::_List_base<_twoIntsStruct*,std::allocator<_twoIntsStruct*>>::_M_clear
          (_List_base<_twoIntsStruct*,std::allocator<_twoIntsStruct*>> *this)

{
  _List_node<_twoIntsStruct*> *p_Var1;
  _twoIntsStruct **pp_Var2;
  allocator *paVar3;
  undefined8 local_20;
  
  local_20 = *(_List_node<_twoIntsStruct*> **)this;
  while (local_20 != (_List_node<_twoIntsStruct*> *)this) {
    p_Var1 = *(_List_node<_twoIntsStruct*> **)local_20;
    pp_Var2 = (_twoIntsStruct **)_List_node<_twoIntsStruct*>::_M_valptr(local_20);
    paVar3 = (allocator *)_M_get_Node_allocator(this);
    allocator_traits<std::allocator<std::_List_node<_twoIntsStruct*>>>::destroy<_twoIntsStruct*>
              (paVar3,pp_Var2);
    _M_put_node(this,(_List_node *)local_20);
    local_20 = p_Var1;
  }
  return;
}




undefined8 stdThreadDestroy(void *param_1)

{
  free(param_1);
  return 1;
}



