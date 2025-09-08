
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* void* const& std::forward<void* const&>(std::remove_reference<void* const&>::type&) */

void ** std::forward<void*const&>(type *param_1)

{
  return (void **)param_1;
}




/* std::_List_const_iterator<void*>::TEMPNAMEPLACEHOLDERVALUE() */

_List_const_iterator<void*> * __thiscall
std::_List_const_iterator<void*>::operator++(_List_const_iterator<void*> *this)

{
  *(undefined8 *)this = **(undefined8 **)this;
  return this;
}




undefined8 main(void)

{
  time_t tVar1;
  
  tVar1 = time((time_t *)0x0);
  srand((uint)tVar1);
  printLine("Calling good()...");
  CWE122_Heap_Based_Buffer_Overflow__CWE135_73::good();
  printLine("Finished good()");
  printLine("Calling bad()...");
  CWE122_Heap_Based_Buffer_Overflow__CWE135_73::bad();
  printLine("Finished bad()");
  return 0;
}




/* std::_List_base<void*, std::allocator<void*> >::_M_clear() */

void __thiscall
std::_List_base<void*,std::allocator<void*>>::_M_clear
          (_List_base<void*,std::allocator<void*>> *this)

{
  _List_node<void*> *p_Var1;
  void **ppvVar2;
  allocator *paVar3;
  undefined8 local_20;
  
  local_20 = *(_List_node<void*> **)this;
  while (local_20 != (_List_node<void*> *)this) {
    p_Var1 = *(_List_node<void*> **)local_20;
    ppvVar2 = (void **)_List_node<void*>::_M_valptr(local_20);
    paVar3 = (allocator *)_M_get_Node_allocator(this);
    allocator_traits<std::allocator<std::_List_node<void*>>>::destroy<void*>(paVar3,ppvVar2);
    _M_put_node(this,(_List_node *)local_20);
    local_20 = p_Var1;
  }
  return;
}




/* new_allocator<std::_List_node<void*> >::deallocate(std::_List_node<void*>*, unsigned long) */

void new_allocator<std::_List_node<void*>>::deallocate(_List_node *param_1,ulong param_2)

{
  operator_delete((void *)param_2);
  return;
}




/* void std::allocator_traits<std::allocator<std::_List_node<void*> > >::construct<void*, void*
   const&>(std::allocator<std::_List_node<void*> >&, void**, void* const&) */

void std::allocator_traits<std::allocator<std::_List_node<void*>>>::construct<void*,void*const&>
               (allocator *param_1,void **param_2,void **param_3)

{
  void **ppvVar1;
  
  ppvVar1 = forward<void*const&>((type *)param_3);
  new_allocator<std::_List_node<void*>>::construct<void*,void*const&>
            ((new_allocator<std::_List_node<void*>> *)param_1,param_2,ppvVar1);
  return;
}




void printWLine(long param_1)

{
  if (param_1 != 0) {
    wprintf(L"%ls\n",param_1);
  }
  return;
}




/* std::_List_base<void*, std::allocator<void*> >::_M_get_Node_allocator() const */

_List_base<void*,std::allocator<void*>> * __thiscall
std::_List_base<void*,std::allocator<void*>>::_M_get_Node_allocator
          (_List_base<void*,std::allocator<void*>> *this)

{
  return this;
}




/* std::allocator_traits<std::allocator<std::_List_node<void*> >
   >::allocate(std::allocator<std::_List_node<void*> >&, unsigned long) */

void std::allocator_traits<std::allocator<std::_List_node<void*>>>::allocate
               (allocator *param_1,ulong param_2)

{
  new_allocator<std::_List_node<void*>>::allocate((ulong)param_1,(void *)param_2);
  return;
}




/* std::_List_base<void*, std::allocator<void*> >::_List_impl::_List_impl() */

void __thiscall
std::_List_base<void*,std::allocator<void*>>::_List_impl::_List_impl(_List_impl *this)

{
  allocator<std::_List_node<void*>>::allocator();
  __detail::_List_node_header::_List_node_header((_List_node_header *)this);
  return;
}




/* __alloc_traits<std::allocator<std::_List_node<void*> >, std::_List_node<void*>
   >::_S_select_on_copy(std::allocator<std::_List_node<void*> > const&) */

allocator *
__alloc_traits<std::allocator<std::_List_node<void*>>,std::_List_node<void*>>::_S_select_on_copy
          (allocator *param_1)

{
  long lVar1;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  std::allocator_traits<std::allocator<std::_List_node<void*>>>::
  select_on_container_copy_construction(param_1);
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1;
}




/* new_allocator<std::_List_node<void*> >::new_allocator() */

void new_allocator<std::_List_node<void*>>::new_allocator(void)

{
  return;
}




/* std::__allocated_ptr<std::allocator<std::_List_node<void*> >
   >::TEMPNAMEPLACEHOLDERVALUE(decltype(nullptr)) */

__allocated_ptr<std::allocator<std::_List_node<void*>>> * __thiscall
std::__allocated_ptr<std::allocator<std::_List_node<void*>>>::operator=
          (__allocated_ptr<std::allocator<std::_List_node<void*>>> *this,
          _func_decltype_nullptr *param_1)

{
  *(undefined8 *)(this + 8) = 0;
  return this;
}




/* new_allocator<std::_List_node<void*> >::allocate(unsigned long, void const*) */

void new_allocator<std::_List_node<void*>>::allocate(ulong param_1,void *param_2)

{
  void *pvVar1;
  
  pvVar1 = (void *)max_size();
  if (pvVar1 < param_2) {
    std::__throw_bad_alloc();
  }
  operator_new((long)param_2 * 0x18);
  return;
}




/* std::_List_node<void*>* std::list<void*, std::allocator<void*> >::_M_create_node<void*
   const&>(void* const&) */

_List_node * __thiscall
std::list<void*,std::allocator<void*>>::_M_create_node<void*const&>
          (list<void*,std::allocator<void*>> *this,void **param_1)

{
  _List_node<void*> *this_00;
  allocator *paVar1;
  void **ppvVar2;
  void **ppvVar3;
  long in_FS_OFFSET;
  __allocated_ptr<std::allocator<std::_List_node<void*>>> local_38 [24];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  this_00 = (_List_node<void*> *)
            _List_base<void*,std::allocator<void*>>::_M_get_node
                      ((_List_base<void*,std::allocator<void*>> *)this);
  paVar1 = (allocator *)
           _List_base<void*,std::allocator<void*>>::_M_get_Node_allocator
                     ((_List_base<void*,std::allocator<void*>> *)this);
  __allocated_ptr<std::allocator<std::_List_node<void*>>>::__allocated_ptr
            (local_38,paVar1,(_List_node *)this_00);
  ppvVar2 = forward<void*const&>((type *)param_1);
  ppvVar3 = (void **)_List_node<void*>::_M_valptr(this_00);
  allocator_traits<std::allocator<std::_List_node<void*>>>::construct<void*,void*const&>
            (paVar1,ppvVar3,ppvVar2);
  __allocated_ptr<std::allocator<std::_List_node<void*>>>::operator=
            (local_38,(_func_decltype_nullptr *)0x0);
  __allocated_ptr<std::allocator<std::_List_node<void*>>>::~__allocated_ptr(local_38);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return (_List_node *)this_00;
}




int globalReturnsTrueOrFalse(void)

{
  int iVar1;
  
  iVar1 = rand();
  return iVar1 % 2;
}




void printUnsignedLine(uint param_1)

{
  printf("%u\n",(ulong)param_1);
  return;
}




/* std::_List_node<void*>::_M_valptr() const */

void __thiscall std::_List_node<void*>::_M_valptr(_List_node<void*> *this)

{
  __aligned_membuf<void*>::_M_ptr((__aligned_membuf<void*> *)(this + 0x10));
  return;
}




/* void new_allocator<std::_List_node<void*> >::destroy<void*>(void**) */

void new_allocator<std::_List_node<void*>>::destroy<void*>(void **param_1)

{
  return;
}




/* std::_List_base<void*, std::allocator<void*> >::_List_impl::~_List_impl() */

void __thiscall
std::_List_base<void*,std::allocator<void*>>::_List_impl::~_List_impl(_List_impl *this)

{
  allocator<std::_List_node<void*>>::~allocator((allocator<std::_List_node<void*>> *)this);
  return;
}




/* void std::list<void*, std::allocator<void*> >::_M_insert<void*
   const&>(std::_List_iterator<void*>, void* const&) */

void __thiscall
std::list<void*,std::allocator<void*>>::_M_insert<void*const&>
          (list<void*,std::allocator<void*>> *this,_List_iterator param_1,void **param_2)

{
  void **ppvVar1;
  _List_node *p_Var2;
  
  ppvVar1 = forward<void*const&>((type *)param_2);
  p_Var2 = _M_create_node<void*const&>(this,ppvVar1);
  std::__detail::_List_node_base::_M_hook((_List_node_base *)p_Var2);
  _List_base<void*,std::allocator<void*>>::_M_inc_size
            ((_List_base<void*,std::allocator<void*>> *)this,1);
  return;
}




/* std::_List_iterator<void*>::TEMPNAMEPLACEHOLDERVALUE() const */

void __thiscall std::_List_iterator<void*>::operator*(_List_iterator<void*> *this)

{
  _List_node<void*>::_M_valptr(*(_List_node<void*> **)this);
  return;
}




void FUN_00101020(void)

{
  (*(code *)PTR_00106ec8)();
  return;
}




/* CWE122_Heap_Based_Buffer_Overflow__CWE135_73::bad() */

void CWE122_Heap_Based_Buffer_Overflow__CWE135_73::bad(void)

{
  long in_FS_OFFSET;
  wchar_t *local_68;
  wchar_t *local_60;
  list<void*,std::allocator<void*>> local_58 [32];
  list<void*,std::allocator<void*>> local_38 [24];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  std::list<void*,std::allocator<void*>>::list(local_58);
  local_68 = (wchar_t *)0x0;
  local_60 = (wchar_t *)malloc(200);
  if (local_60 == (wchar_t *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  wmemset(local_60,L'A',0x31);
  local_60[0x31] = L'\0';
  local_68 = local_60;
                    /* try { // try from 001018d5 to 00101912 has its CatchHandler @ 0010195e */
  std::list<void*,std::allocator<void*>>::push_back(local_58,&local_68);
  std::list<void*,std::allocator<void*>>::push_back(local_58,&local_68);
  std::list<void*,std::allocator<void*>>::push_back(local_58,&local_68);
  std::list<void*,std::allocator<void*>>::list(local_38,(list *)local_58);
                    /* try { // try from 0010191a to 0010191e has its CatchHandler @ 00101949 */
  badSink((list)local_38);
  std::list<void*,std::allocator<void*>>::~list(local_38);
  std::list<void*,std::allocator<void*>>::~list(local_58);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void good3(void)

{
  return;
}




/* std::_List_base<void*, std::allocator<void*> >::_M_inc_size(unsigned long) */

void __thiscall
std::_List_base<void*,std::allocator<void*>>::_M_inc_size
          (_List_base<void*,std::allocator<void*>> *this,ulong param_1)

{
  *(ulong *)(this + 0x10) = *(long *)(this + 0x10) + param_1;
  return;
}




/* __aligned_membuf<void*>::_M_ptr() */

void __thiscall __aligned_membuf<void*>::_M_ptr(__aligned_membuf<void*> *this)

{
  _M_addr(this);
  return;
}




/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* std::remove_reference<std::allocator<std::_List_node<void*> >&>::type&&
   std::move<std::allocator<std::_List_node<void*> >&>(std::allocator<std::_List_node<void*> >&) */

type * std::move<std::allocator<std::_List_node<void*>>&>(allocator *param_1)

{
  return (type *)param_1;
}




/* std::allocator<std::_List_node<void*> >::allocator(std::allocator<std::_List_node<void*> >
   const&) */

void std::allocator<std::_List_node<void*>>::allocator(allocator *param_1)

{
  new_allocator<std::_List_node<void*>>::new_allocator((new_allocator *)param_1);
  return;
}




void bad5(void)

{
  return;
}




void good8(void)

{
  return;
}




/* void new_allocator<std::_List_node<void*> >::construct<void*, void* const&>(void**, void* const&)
    */

void __thiscall
new_allocator<std::_List_node<void*>>::construct<void*,void*const&>
          (new_allocator<std::_List_node<void*>> *this,void **param_1,void **param_2)

{
  void *pvVar1;
  void **ppvVar2;
  undefined8 *puVar3;
  
  ppvVar2 = std::forward<void*const&>((type *)param_2);
  pvVar1 = *ppvVar2;
  puVar3 = (undefined8 *)operator_new(8,param_1);
  *puVar3 = pvVar1;
  return;
}




/* std::allocator_traits<std::allocator<std::_List_node<void*> >
   >::select_on_container_copy_construction(std::allocator<std::_List_node<void*> > const&) */

allocator *
std::allocator_traits<std::allocator<std::_List_node<void*>>>::select_on_container_copy_construction
          (allocator *param_1)

{
  allocator<std::_List_node<void*>>::allocator(param_1);
  return param_1;
}




/* std::_List_base<void*, std::allocator<void*> >::_M_put_node(std::_List_node<void*>*) */

void __thiscall
std::_List_base<void*,std::allocator<void*>>::_M_put_node
          (_List_base<void*,std::allocator<void*>> *this,_List_node *param_1)

{
  allocator_traits<std::allocator<std::_List_node<void*>>>::deallocate((allocator *)this,param_1,1);
  return;
}




/* std::allocator<std::_List_node<void*> >::~allocator() */

void __thiscall
std::allocator<std::_List_node<void*>>::~allocator(allocator<std::_List_node<void*>> *this)

{
  new_allocator<std::_List_node<void*>>::~new_allocator
            ((new_allocator<std::_List_node<void*>> *)this);
  return;
}




void good7(void)

{
  return;
}




/* CWE122_Heap_Based_Buffer_Overflow__CWE135_73::goodB2GSink(std::list<void*, std::allocator<void*>
   >) */

void CWE122_Heap_Based_Buffer_Overflow__CWE135_73::goodB2GSink(list param_1)

{
  wchar_t *__s;
  undefined8 *puVar1;
  size_t sVar2;
  wchar_t *__dest;
  undefined4 in_register_0000003c;
  
  puVar1 = (undefined8 *)
           std::list<void*,std::allocator<void*>>::back
                     ((list<void*,std::allocator<void*>> *)CONCAT44(in_register_0000003c,param_1));
  __s = (wchar_t *)*puVar1;
  sVar2 = wcslen(__s);
  __dest = (wchar_t *)calloc(sVar2 + 1,4);
  if (__dest == (wchar_t *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  wcscpy(__dest,__s);
  printWLine(__dest);
  free(__dest);
  return;
}




void stdThreadLockRelease(pthread_mutex_t *param_1)

{
  pthread_mutex_unlock(param_1);
  return;
}




void printHexUnsignedCharLine(byte param_1)

{
  printf("%02x\n",(ulong)param_1);
  return;
}




void printShortLine(short param_1)

{
  printf("%hd\n",(ulong)(uint)(int)param_1);
  return;
}




void good9(void)

{
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




/* __aligned_membuf<void*>::_M_addr() const */

__aligned_membuf<void*> * __thiscall __aligned_membuf<void*>::_M_addr(__aligned_membuf<void*> *this)

{
  return this;
}




/* __aligned_membuf<void*>::_M_addr() */

__aligned_membuf<void*> * __thiscall __aligned_membuf<void*>::_M_addr(__aligned_membuf<void*> *this)

{
  return this;
}




void bad4(void)

{
  return;
}




void printLine(char *param_1)

{
  if (param_1 != (char *)0x0) {
    puts(param_1);
  }
  return;
}




/* CWE122_Heap_Based_Buffer_Overflow__CWE135_73::goodG2B() */

void CWE122_Heap_Based_Buffer_Overflow__CWE135_73::goodG2B(void)

{
  long in_FS_OFFSET;
  void *local_68;
  void *local_60;
  list<void*,std::allocator<void*>> local_58 [32];
  list<void*,std::allocator<void*>> local_38 [24];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  std::list<void*,std::allocator<void*>>::list(local_58);
  local_68 = (void *)0x0;
  local_60 = malloc(0x32);
  if (local_60 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  memset(local_60,0x41,0x31);
  *(undefined *)((long)local_60 + 0x31) = 0;
  local_68 = local_60;
                    /* try { // try from 00101a0e to 00101a4b has its CatchHandler @ 00101a97 */
  std::list<void*,std::allocator<void*>>::push_back(local_58,&local_68);
  std::list<void*,std::allocator<void*>>::push_back(local_58,&local_68);
  std::list<void*,std::allocator<void*>>::push_back(local_58,&local_68);
  std::list<void*,std::allocator<void*>>::list(local_38,(list *)local_58);
                    /* try { // try from 00101a53 to 00101a57 has its CatchHandler @ 00101a82 */
  goodG2BSink((list)local_38);
  std::list<void*,std::allocator<void*>>::~list(local_38);
  std::list<void*,std::allocator<void*>>::~list(local_58);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




/* new_allocator<std::_List_node<void*> >::new_allocator(new_allocator<std::_List_node<void*> >
   const&) */

void new_allocator<std::_List_node<void*>>::new_allocator(new_allocator *param_1)

{
  return;
}




/* void std::list<void*, std::allocator<void*> >::emplace_back<void* const&>(void* const&) */

void __thiscall
std::list<void*,std::allocator<void*>>::emplace_back<void*const&>
          (list<void*,std::allocator<void*>> *this,void **param_1)

{
  _List_iterator _Var1;
  void **ppvVar2;
  
  ppvVar2 = forward<void*const&>((type *)param_1);
  _Var1 = end(this);
  _M_insert<void*const&>(this,_Var1,ppvVar2);
  return;
}




void printStructLine(uint *param_1)

{
  printf("%d -- %d\n",(ulong)*param_1,(ulong)param_1[1]);
  return;
}




/* void std::list<void*, std::allocator<void*>
   >::_M_initialize_dispatch<std::_List_const_iterator<void*> >(std::_List_const_iterator<void*>,
   std::_List_const_iterator<void*>, std::__false_type) */

void std::list<void*,std::allocator<void*>>::
     _M_initialize_dispatch<std::_List_const_iterator<void*>>
               (_List_const_iterator param_1,_List_const_iterator param_2,__false_type param_3)

{
  char cVar1;
  void **ppvVar2;
  undefined4 in_register_00000014;
  undefined4 in_register_00000034;
  undefined4 in_register_0000003c;
  undefined8 local_20;
  undefined8 local_18;
  list<void*,std::allocator<void*>> *local_10;
  
  local_10 = (list<void*,std::allocator<void*>> *)CONCAT44(in_register_0000003c,param_1);
  local_18 = CONCAT44(in_register_00000034,param_2);
  local_20 = CONCAT44(in_register_00000014,param_3);
  while( true ) {
    cVar1 = operator!=((_List_const_iterator *)&local_18,(_List_const_iterator *)&local_20);
    if (cVar1 == '\0') break;
    ppvVar2 = (void **)_List_const_iterator<void*>::operator*
                                 ((_List_const_iterator<void*> *)&local_18);
    emplace_back<void*const&>(local_10,ppvVar2);
    _List_const_iterator<void*>::operator++((_List_const_iterator<void*> *)&local_18);
  }
  return;
}




/* std::_List_node<void*>::_M_valptr() */

void __thiscall std::_List_node<void*>::_M_valptr(_List_node<void*> *this)

{
  __aligned_membuf<void*>::_M_ptr((__aligned_membuf<void*> *)(this + 0x10));
  return;
}




void printHexCharLine(char param_1)

{
  printf("%02x\n",(ulong)(uint)(int)param_1);
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




void stdThreadLockAcquire(pthread_mutex_t *param_1)

{
  pthread_mutex_lock(param_1);
  return;
}




void good2(void)

{
  return;
}




undefined8 globalReturnsFalse(void)

{
  return 0;
}




/* void std::allocator_traits<std::allocator<std::_List_node<void*> >
   >::destroy<void*>(std::allocator<std::_List_node<void*> >&, void**) */

void std::allocator_traits<std::allocator<std::_List_node<void*>>>::destroy<void*>
               (allocator *param_1,void **param_2)

{
  new_allocator<std::_List_node<void*>>::destroy<void*>((void **)param_1);
  return;
}




void printSizeTLine(undefined8 param_1)

{
  printf("%zu\n",param_1);
  return;
}




undefined8 globalReturnsTrue(void)

{
  return 1;
}




/* std::_List_base<void*, std::allocator<void*> >::_List_base() */

void __thiscall
std::_List_base<void*,std::allocator<void*>>::_List_base
          (_List_base<void*,std::allocator<void*>> *this)

{
  _List_impl::_List_impl((_List_impl *)this);
  return;
}




/* __aligned_membuf<void*>::_M_ptr() const */

void __thiscall __aligned_membuf<void*>::_M_ptr(__aligned_membuf<void*> *this)

{
  _M_addr(this);
  return;
}




/* std::list<void*, std::allocator<void*> >::begin() const */

undefined8 __thiscall
std::list<void*,std::allocator<void*>>::begin(list<void*,std::allocator<void*>> *this)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  _List_const_iterator<void*>::_List_const_iterator
            ((_List_const_iterator<void*> *)&local_18,*(_List_node_base **)this);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void good5(void)

{
  return;
}




/* new_allocator<std::_List_node<void*> >::max_size() const */

undefined8 new_allocator<std::_List_node<void*>>::max_size(void)

{
  return 0x555555555555555;
}




/* std::list<void*, std::allocator<void*> >::end() const */

undefined8 __thiscall
std::list<void*,std::allocator<void*>>::end(list<void*,std::allocator<void*>> *this)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  _List_const_iterator<void*>::_List_const_iterator
            ((_List_const_iterator<void*> *)&local_18,(_List_node_base *)this);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




/* std::__allocated_ptr<std::allocator<std::_List_node<void*> > >::~__allocated_ptr() */

void __thiscall
std::__allocated_ptr<std::allocator<std::_List_node<void*>>>::~__allocated_ptr
          (__allocated_ptr<std::allocator<std::_List_node<void*>>> *this)

{
  if (*(long *)(this + 8) != 0) {
    allocator_traits<std::allocator<std::_List_node<void*>>>::deallocate
              (*(allocator **)this,*(_List_node **)(this + 8),1);
  }
  return;
}




void bad8(void)

{
  return;
}




void bad2(void)

{
  return;
}




/* std::list<void*, std::allocator<void*> >::list(std::list<void*, std::allocator<void*> > const&)
    */

void __thiscall
std::list<void*,std::allocator<void*>>::list(list<void*,std::allocator<void*>> *this,list *param_1)

{
  __false_type _Var1;
  _List_const_iterator _Var2;
  long in_FS_OFFSET;
  allocator local_21;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  _List_base<void*,std::allocator<void*>>::_M_get_Node_allocator
            ((_List_base<void*,std::allocator<void*>> *)param_1);
  __alloc_traits<std::allocator<std::_List_node<void*>>,std::_List_node<void*>>::_S_select_on_copy
            (&local_21);
  _List_base<void*,std::allocator<void*>>::_List_base
            ((_List_base<void*,std::allocator<void*>> *)this,&local_21);
  allocator<std::_List_node<void*>>::~allocator((allocator<std::_List_node<void*>> *)&local_21);
  _Var1 = end((list<void*,std::allocator<void*>> *)param_1);
  _Var2 = begin((list<void*,std::allocator<void*>> *)param_1);
                    /* try { // try from 00101ea4 to 00101ea8 has its CatchHandler @ 00101eab */
  _M_initialize_dispatch<std::_List_const_iterator<void*>>((_List_const_iterator)this,_Var2,_Var1);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void bad3(void)

{
  return;
}




/* std::allocator<std::_List_node<void*> >::allocator() */

void std::allocator<std::_List_node<void*>>::allocator(void)

{
  new_allocator<std::_List_node<void*>>::new_allocator();
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




/* std::_List_base<void*, std::allocator<void*> >::~_List_base() */

void __thiscall
std::_List_base<void*,std::allocator<void*>>::~_List_base
          (_List_base<void*,std::allocator<void*>> *this)

{
  _M_clear(this);
  _List_impl::~_List_impl((_List_impl *)this);
  return;
}




/* std::_List_base<void*, std::allocator<void*> >::_M_get_Node_allocator() */

_List_base<void*,std::allocator<void*>> * __thiscall
std::_List_base<void*,std::allocator<void*>>::_M_get_Node_allocator
          (_List_base<void*,std::allocator<void*>> *this)

{
  return this;
}




/* std::allocator_traits<std::allocator<std::_List_node<void*> >
   >::deallocate(std::allocator<std::_List_node<void*> >&, std::_List_node<void*>*, unsigned long)
    */

void std::allocator_traits<std::allocator<std::_List_node<void*>>>::deallocate
               (allocator *param_1,_List_node *param_2,ulong param_3)

{
  new_allocator<std::_List_node<void*>>::deallocate((_List_node *)param_1,(ulong)param_2);
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




/* std::__detail::_List_node_header::_List_node_header() */

void __thiscall std::__detail::_List_node_header::_List_node_header(_List_node_header *this)

{
  _M_init(this);
  return;
}




/* std::list<void*, std::allocator<void*> >::end() */

undefined8 __thiscall
std::list<void*,std::allocator<void*>>::end(list<void*,std::allocator<void*>> *this)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  _List_iterator<void*>::_List_iterator((_List_iterator<void*> *)&local_18,(_List_node_base *)this);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void good6(void)

{
  return;
}




/* std::_List_iterator<void*>::_List_iterator(std::__detail::_List_node_base*) */

void __thiscall
std::_List_iterator<void*>::_List_iterator(_List_iterator<void*> *this,_List_node_base *param_1)

{
  *(_List_node_base **)this = param_1;
  return;
}




void printLongLine(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




void bad6(void)

{
  return;
}




void bad7(void)

{
  return;
}




/* CWE122_Heap_Based_Buffer_Overflow__CWE135_73::good() */

void CWE122_Heap_Based_Buffer_Overflow__CWE135_73::good(void)

{
  goodG2B();
  goodB2G();
  return;
}




void internal_start(long param_1)

{
  (**(code **)(param_1 + 8))(*(undefined8 *)(param_1 + 0x10));
                    /* WARNING: Subroutine does not return */
  pthread_exit((void *)0x0);
}




/* CWE122_Heap_Based_Buffer_Overflow__CWE135_73::goodG2BSink(std::list<void*, std::allocator<void*>
   >) */

void CWE122_Heap_Based_Buffer_Overflow__CWE135_73::goodG2BSink(list param_1)

{
  char *__s;
  undefined8 *puVar1;
  size_t sVar2;
  char *__dest;
  undefined4 in_register_0000003c;
  
  puVar1 = (undefined8 *)
           std::list<void*,std::allocator<void*>>::back
                     ((list<void*,std::allocator<void*>> *)CONCAT44(in_register_0000003c,param_1));
  __s = (char *)*puVar1;
  sVar2 = strlen(__s);
  __dest = (char *)calloc(sVar2 + 1,1);
  if (__dest == (char *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  strcpy(__dest,__s);
  printLine(__dest);
  free(__dest);
  return;
}




/* operator new(unsigned long, void*) */

void * operator_new(ulong param_1,void *param_2)

{
  return param_2;
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




/* std::_List_base<void*, std::allocator<void*> >::_List_base(std::allocator<std::_List_node<void*>
   >&&) */

void __thiscall
std::_List_base<void*,std::allocator<void*>>::_List_base
          (_List_base<void*,std::allocator<void*>> *this,allocator *param_1)

{
  type *ptVar1;
  
  ptVar1 = move<std::allocator<std::_List_node<void*>>&>(param_1);
  _List_impl::_List_impl((_List_impl *)this,(allocator *)ptVar1);
  return;
}




/* std::list<void*, std::allocator<void*> >::push_back(void* const&) */

void __thiscall
std::list<void*,std::allocator<void*>>::push_back
          (list<void*,std::allocator<void*>> *this,void **param_1)

{
  _List_iterator _Var1;
  
  _Var1 = end(this);
  _M_insert<void*const&>(this,_Var1,param_1);
  return;
}




void printLongLongLine(undefined8 param_1)

{
  printf("%ld\n",param_1);
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
    __isoc99_swscanf(local_18 * 8 + param_3,&DAT_00104098,local_1c);
    *(char *)(local_18 + param_1) = local_1c[0];
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




/* std::_List_base<void*, std::allocator<void*>
   >::_List_impl::_List_impl(std::allocator<std::_List_node<void*> >&&) */

void __thiscall
std::_List_base<void*,std::allocator<void*>>::_List_impl::_List_impl
          (_List_impl *this,allocator *param_1)

{
  move<std::allocator<std::_List_node<void*>>&>(param_1);
  allocator<std::_List_node<void*>>::allocator((allocator *)this);
  __detail::_List_node_header::_List_node_header((_List_node_header *)this);
  return;
}




/* CWE122_Heap_Based_Buffer_Overflow__CWE135_73::badSink(std::list<void*, std::allocator<void*> >)
    */

void CWE122_Heap_Based_Buffer_Overflow__CWE135_73::badSink(list param_1)

{
  wchar_t *__src;
  undefined8 *puVar1;
  size_t sVar2;
  wchar_t *__dest;
  undefined4 in_register_0000003c;
  
  puVar1 = (undefined8 *)
           std::list<void*,std::allocator<void*>>::back
                     ((list<void*,std::allocator<void*>> *)CONCAT44(in_register_0000003c,param_1));
  __src = (wchar_t *)*puVar1;
  sVar2 = strlen((char *)__src);
  __dest = (wchar_t *)calloc(sVar2 + 1,4);
  if (__dest == (wchar_t *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  wcscpy(__dest,__src);
  printLine(__dest);
  free(__dest);
  return;
}




/* std::__allocated_ptr<std::allocator<std::_List_node<void*> >
   >::__allocated_ptr(std::allocator<std::_List_node<void*> >&, std::_List_node<void*>*) */

void __thiscall
std::__allocated_ptr<std::allocator<std::_List_node<void*>>>::__allocated_ptr
          (__allocated_ptr<std::allocator<std::_List_node<void*>>> *this,allocator *param_1,
          _List_node *param_2)

{
  allocator *paVar1;
  
  paVar1 = __addressof<std::allocator<std::_List_node<void*>>>(param_1);
  *(allocator **)this = paVar1;
  *(_List_node **)(this + 8) = param_2;
  return;
}




/* std::list<void*, std::allocator<void*> >::~list() */

void __thiscall
std::list<void*,std::allocator<void*>>::~list(list<void*,std::allocator<void*>> *this)

{
  _List_base<void*,std::allocator<void*>>::~_List_base
            ((_List_base<void*,std::allocator<void*>> *)this);
  return;
}




/* std::_List_iterator<void*>::TEMPNAMEPLACEHOLDERVALUE() */

_List_iterator<void*> * __thiscall
std::_List_iterator<void*>::operator--(_List_iterator<void*> *this)

{
  *(undefined8 *)this = *(undefined8 *)(*(long *)this + 8);
  return this;
}




/* std::__detail::_List_node_header::_M_init() */

void __thiscall std::__detail::_List_node_header::_M_init(_List_node_header *this)

{
  *(_List_node_header **)(this + 8) = this;
  *(undefined8 *)this = *(undefined8 *)(this + 8);
  *(undefined8 *)(this + 0x10) = 0;
  return;
}




void good1(void)

{
  return;
}




void printFloatLine(float param_1)

{
  printf("%f\n",(double)param_1);
  return;
}




/* std::_List_const_iterator<void*>::TEMPNAMEPLACEHOLDERVALUE() const */

void __thiscall std::_List_const_iterator<void*>::operator*(_List_const_iterator<void*> *this)

{
  _List_node<void*>::_M_valptr(*(_List_node<void*> **)this);
  return;
}




void printDoubleLine(undefined8 param_1)

{
  printf("%g\n",param_1);
  return;
}




/* new_allocator<std::_List_node<void*> >::~new_allocator() */

void __thiscall
new_allocator<std::_List_node<void*>>::~new_allocator(new_allocator<std::_List_node<void*>> *this)

{
  return;
}




void printIntLine(uint param_1)

{
  printf("%d\n",(ulong)param_1);
  return;
}




/* std::list<void*, std::allocator<void*> >::list() */

void __thiscall
std::list<void*,std::allocator<void*>>::list(list<void*,std::allocator<void*>> *this)

{
  _List_base<void*,std::allocator<void*>>::_List_base
            ((_List_base<void*,std::allocator<void*>> *)this);
  return;
}




void bad9(void)

{
  return;
}




void stdThreadLockDestroy(pthread_mutex_t *param_1)

{
  pthread_mutex_destroy(param_1);
  free(param_1);
  return;
}




/* std::_List_base<void*, std::allocator<void*> >::_M_get_node() */

void __thiscall
std::_List_base<void*,std::allocator<void*>>::_M_get_node
          (_List_base<void*,std::allocator<void*>> *this)

{
  allocator_traits<std::allocator<std::_List_node<void*>>>::allocate((allocator *)this,1);
  return;
}




/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* std::allocator<std::_List_node<void*> >* std::__addressof<std::allocator<std::_List_node<void*> >
   >(std::allocator<std::_List_node<void*> >&) */

allocator * std::__addressof<std::allocator<std::_List_node<void*>>>(allocator *param_1)

{
  return param_1;
}




/* CWE122_Heap_Based_Buffer_Overflow__CWE135_73::goodB2G() */

void CWE122_Heap_Based_Buffer_Overflow__CWE135_73::goodB2G(void)

{
  long in_FS_OFFSET;
  wchar_t *local_68;
  wchar_t *local_60;
  list<void*,std::allocator<void*>> local_58 [32];
  list<void*,std::allocator<void*>> local_38 [24];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  std::list<void*,std::allocator<void*>>::list(local_58);
  local_68 = (wchar_t *)0x0;
  local_60 = (wchar_t *)malloc(200);
  if (local_60 == (wchar_t *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  wmemset(local_60,L'A',0x31);
  local_60[0x31] = L'\0';
  local_68 = local_60;
                    /* try { // try from 00101b4c to 00101b89 has its CatchHandler @ 00101bd5 */
  std::list<void*,std::allocator<void*>>::push_back(local_58,&local_68);
  std::list<void*,std::allocator<void*>>::push_back(local_58,&local_68);
  std::list<void*,std::allocator<void*>>::push_back(local_58,&local_68);
  std::list<void*,std::allocator<void*>>::list(local_38,(list *)local_58);
                    /* try { // try from 00101b91 to 00101b95 has its CatchHandler @ 00101bc0 */
  goodB2GSink((list)local_38);
  std::list<void*,std::allocator<void*>>::~list(local_38);
  std::list<void*,std::allocator<void*>>::~list(local_58);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void good4(void)

{
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
    __isoc99_sscanf(local_18 * 2 + param_3,&DAT_00104090,local_1c);
    *(char *)(local_18 + param_1) = local_1c[0];
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* std::TEMPNAMEPLACEHOLDERVALUE(std::_List_const_iterator<void*> const&,
   std::_List_const_iterator<void*> const&) */

undefined8 std::operator!=(_List_const_iterator *param_1,_List_const_iterator *param_2)

{
  return CONCAT71((int7)((ulong)*(long *)param_2 >> 8),*(long *)param_1 != *(long *)param_2);
}




/* std::list<void*, std::allocator<void*> >::back() */

void __thiscall
std::list<void*,std::allocator<void*>>::back(list<void*,std::allocator<void*>> *this)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_18 = end(this);
  _List_iterator<void*>::operator--((_List_iterator<void*> *)&local_18);
  _List_iterator<void*>::operator*((_List_iterator<void*> *)&local_18);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void bad1(void)

{
  return;
}




undefined8 stdThreadDestroy(void *param_1)

{
  free(param_1);
  return 1;
}




/* std::_List_const_iterator<void*>::_List_const_iterator(std::__detail::_List_node_base const*) */

void __thiscall
std::_List_const_iterator<void*>::_List_const_iterator
          (_List_const_iterator<void*> *this,_List_node_base *param_1)

{
  *(_List_node_base **)this = param_1;
  return;
}



