
void good8(void)

{
  return;
}




void bad8(void)

{
  return;
}




/* new_allocator<std::_List_node<char*> >::new_allocator() */

void new_allocator<std::_List_node<char*>>::new_allocator(void)

{
  return;
}




void printLongLine(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




void FUN_00101020(void)

{
  (*(code *)PTR_00106ef8)();
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




void stdThreadLockRelease(pthread_mutex_t *param_1)

{
  pthread_mutex_unlock(param_1);
  return;
}




/* std::_List_base<char*, std::allocator<char*> >::~_List_base() */

void __thiscall
std::_List_base<char*,std::allocator<char*>>::~_List_base
          (_List_base<char*,std::allocator<char*>> *this)

{
  _M_clear(this);
  _List_impl::~_List_impl((_List_impl *)this);
  return;
}




undefined8 globalReturnsFalse(void)

{
  return 0;
}




void printHexUnsignedCharLine(byte param_1)

{
  printf("%02x\n",(ulong)param_1);
  return;
}




undefined8 globalReturnsTrue(void)

{
  return 1;
}




void good4(void)

{
  return;
}




void stdThreadLockDestroy(pthread_mutex_t *param_1)

{
  pthread_mutex_destroy(param_1);
  free(param_1);
  return;
}




/* __aligned_membuf<char*>::_M_addr() */

__aligned_membuf<char*> * __thiscall __aligned_membuf<char*>::_M_addr(__aligned_membuf<char*> *this)

{
  return this;
}




/* __aligned_membuf<char*>::_M_ptr() */

void __thiscall __aligned_membuf<char*>::_M_ptr(__aligned_membuf<char*> *this)

{
  _M_addr(this);
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




/* CWE126_Buffer_Overread__char_alloca_loop_73::bad() */

void CWE126_Buffer_Overread__char_alloca_loop_73::bad(void)

{
  undefined *puVar1;
  undefined *puVar2;
  long in_FS_OFFSET;
  undefined auStack_78 [8];
  char *local_70;
  char *local_68;
  void *local_60;
  list<char*,std::allocator<char*>> local_58 [32];
  list<char*,std::allocator<char*>> local_38 [24];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  std::list<char*,std::allocator<char*>>::list(local_58);
  for (puVar1 = auStack_78; puVar1 != auStack_78; puVar1 = puVar1 + -0x1000) {
    *(undefined8 *)(puVar1 + -8) = *(undefined8 *)(puVar1 + -8);
  }
  *(undefined8 *)(puVar1 + -8) = *(undefined8 *)(puVar1 + -8);
  local_68 = (char *)((ulong)(puVar1 + -0x31) & 0xfffffffffffffff0);
  for (puVar2 = puVar1 + -0x40; puVar2 != puVar1 + -0x40; puVar2 = puVar2 + -0x1000) {
    *(undefined8 *)(puVar2 + -8) = *(undefined8 *)(puVar2 + -8);
  }
  *(undefined8 *)(puVar2 + -8) = *(undefined8 *)(puVar2 + -8);
  local_60 = (void *)((ulong)(puVar2 + -0x61) & 0xfffffffffffffff0);
  *(undefined8 *)(puVar2 + -0x78) = 0x1015d1;
  memset((char *)((ulong)(puVar1 + -0x31) & 0xfffffffffffffff0),0x41,0x31);
  local_68[0x31] = '\0';
  *(undefined8 *)(puVar2 + -0x78) = 0x1015f2;
  memset(local_60,0x41,99);
  *(undefined *)((long)local_60 + 99) = 0;
  local_70 = local_68;
                    /* try { // try from 00101613 to 00101650 has its CatchHandler @ 0010169c */
  *(undefined8 *)(puVar2 + -0x78) = 0x101618;
  std::list<char*,std::allocator<char*>>::push_back(local_58,&local_70);
  *(undefined8 *)(puVar2 + -0x78) = 0x10162b;
  std::list<char*,std::allocator<char*>>::push_back(local_58,&local_70);
  *(undefined8 *)(puVar2 + -0x78) = 0x10163e;
  std::list<char*,std::allocator<char*>>::push_back(local_58,&local_70);
  *(undefined8 *)(puVar2 + -0x78) = 0x101651;
  std::list<char*,std::allocator<char*>>::list(local_38,(list *)local_58);
                    /* try { // try from 00101658 to 0010165c has its CatchHandler @ 00101687 */
  *(undefined8 *)(puVar2 + -0x78) = 0x10165d;
  badSink(local_38);
  *(undefined8 *)(puVar2 + -0x78) = 0x101669;
  std::list<char*,std::allocator<char*>>::~list(local_38);
  *(undefined8 *)(puVar2 + -0x78) = 0x101675;
  std::list<char*,std::allocator<char*>>::~list(local_58);
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  *(undefined8 *)(puVar2 + -0x78) = 0x1016bf;
  __stack_chk_fail();
}




/* std::list<char*, std::allocator<char*> >::back() */

void __thiscall
std::list<char*,std::allocator<char*>>::back(list<char*,std::allocator<char*>> *this)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_18 = end(this);
  _List_iterator<char*>::operator--((_List_iterator<char*> *)&local_18);
  _List_iterator<char*>::operator*((_List_iterator<char*> *)&local_18);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




/* std::_List_base<char*, std::allocator<char*> >::_List_base() */

void __thiscall
std::_List_base<char*,std::allocator<char*>>::_List_base
          (_List_base<char*,std::allocator<char*>> *this)

{
  _List_impl::_List_impl((_List_impl *)this);
  return;
}




/* new_allocator<std::_List_node<char*> >::deallocate(std::_List_node<char*>*, unsigned long) */

void new_allocator<std::_List_node<char*>>::deallocate(_List_node *param_1,ulong param_2)

{
  operator_delete((void *)param_2);
  return;
}




/* void std::list<char*, std::allocator<char*> >::_M_insert<char*
   const&>(std::_List_iterator<char*>, char* const&) */

void __thiscall
std::list<char*,std::allocator<char*>>::_M_insert<char*const&>
          (list<char*,std::allocator<char*>> *this,_List_iterator param_1,char **param_2)

{
  char **ppcVar1;
  _List_node *p_Var2;
  
  ppcVar1 = forward<char*const&>((type *)param_2);
  p_Var2 = _M_create_node<char*const&>(this,ppcVar1);
  std::__detail::_List_node_base::_M_hook((_List_node_base *)p_Var2);
  _List_base<char*,std::allocator<char*>>::_M_inc_size
            ((_List_base<char*,std::allocator<char*>> *)this,1);
  return;
}




void printIntLine(uint param_1)

{
  printf("%d\n",(ulong)param_1);
  return;
}




/* std::_List_base<char*, std::allocator<char*> >::_M_get_Node_allocator() */

_List_base<char*,std::allocator<char*>> * __thiscall
std::_List_base<char*,std::allocator<char*>>::_M_get_Node_allocator
          (_List_base<char*,std::allocator<char*>> *this)

{
  return this;
}




void bad1(void)

{
  return;
}




/* operator new(unsigned long, void*) */

void * operator_new(ulong param_1,void *param_2)

{
  return param_2;
}




void printLine(char *param_1)

{
  if (param_1 != (char *)0x0) {
    puts(param_1);
  }
  return;
}




void bad4(void)

{
  return;
}




/* void std::allocator_traits<std::allocator<std::_List_node<char*> >
   >::destroy<char*>(std::allocator<std::_List_node<char*> >&, char**) */

void std::allocator_traits<std::allocator<std::_List_node<char*>>>::destroy<char*>
               (allocator *param_1,char **param_2)

{
  new_allocator<std::_List_node<char*>>::destroy<char*>((char **)param_1);
  return;
}




/* std::allocator<std::_List_node<char*> >::allocator() */

void std::allocator<std::_List_node<char*>>::allocator(void)

{
  new_allocator<std::_List_node<char*>>::new_allocator();
  return;
}




void bad3(void)

{
  return;
}




/* std::__allocated_ptr<std::allocator<std::_List_node<char*> > >::~__allocated_ptr() */

void __thiscall
std::__allocated_ptr<std::allocator<std::_List_node<char*>>>::~__allocated_ptr
          (__allocated_ptr<std::allocator<std::_List_node<char*>>> *this)

{
  if (*(long *)(this + 8) != 0) {
    allocator_traits<std::allocator<std::_List_node<char*>>>::deallocate
              (*(allocator **)this,*(_List_node **)(this + 8),1);
  }
  return;
}




/* std::allocator<std::_List_node<char*> >::~allocator() */

void __thiscall
std::allocator<std::_List_node<char*>>::~allocator(allocator<std::_List_node<char*>> *this)

{
  new_allocator<std::_List_node<char*>>::~new_allocator
            ((new_allocator<std::_List_node<char*>> *)this);
  return;
}




/* void std::list<char*, std::allocator<char*> >::emplace_back<char* const&>(char* const&) */

void __thiscall
std::list<char*,std::allocator<char*>>::emplace_back<char*const&>
          (list<char*,std::allocator<char*>> *this,char **param_1)

{
  _List_iterator _Var1;
  char **ppcVar2;
  
  ppcVar2 = forward<char*const&>((type *)param_1);
  _Var1 = end(this);
  _M_insert<char*const&>(this,_Var1,ppcVar2);
  return;
}




void good7(void)

{
  return;
}




void printDoubleLine(undefined8 param_1)

{
  printf("%g\n",param_1);
  return;
}




void bad2(void)

{
  return;
}




/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* std::remove_reference<std::allocator<std::_List_node<char*> >&>::type&&
   std::move<std::allocator<std::_List_node<char*> >&>(std::allocator<std::_List_node<char*> >&) */

type * std::move<std::allocator<std::_List_node<char*>>&>(allocator *param_1)

{
  return (type *)param_1;
}




/* std::list<char*, std::allocator<char*> >::end() const */

undefined8 __thiscall
std::list<char*,std::allocator<char*>>::end(list<char*,std::allocator<char*>> *this)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  _List_const_iterator<char*>::_List_const_iterator
            ((_List_const_iterator<char*> *)&local_18,(_List_node_base *)this);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void printWLine(long param_1)

{
  if (param_1 != 0) {
    wprintf(L"%ls\n",param_1);
  }
  return;
}




/* std::allocator_traits<std::allocator<std::_List_node<char*> >
   >::select_on_container_copy_construction(std::allocator<std::_List_node<char*> > const&) */

allocator *
std::allocator_traits<std::allocator<std::_List_node<char*>>>::select_on_container_copy_construction
          (allocator *param_1)

{
  allocator<std::_List_node<char*>>::allocator(param_1);
  return param_1;
}




void printShortLine(short param_1)

{
  printf("%hd\n",(ulong)(uint)(int)param_1);
  return;
}




void internal_start(long param_1)

{
  (**(code **)(param_1 + 8))(*(undefined8 *)(param_1 + 0x10));
                    /* WARNING: Subroutine does not return */
  pthread_exit((void *)0x0);
}




void good3(void)

{
  return;
}




/* std::_List_iterator<char*>::TEMPNAMEPLACEHOLDERVALUE() const */

void __thiscall std::_List_iterator<char*>::operator*(_List_iterator<char*> *this)

{
  _List_node<char*>::_M_valptr(*(_List_node<char*> **)this);
  return;
}




/* void std::allocator_traits<std::allocator<std::_List_node<char*> > >::construct<char*, char*
   const&>(std::allocator<std::_List_node<char*> >&, char**, char* const&) */

void std::allocator_traits<std::allocator<std::_List_node<char*>>>::construct<char*,char*const&>
               (allocator *param_1,char **param_2,char **param_3)

{
  char **ppcVar1;
  
  ppcVar1 = forward<char*const&>((type *)param_3);
  new_allocator<std::_List_node<char*>>::construct<char*,char*const&>
            ((new_allocator<std::_List_node<char*>> *)param_1,param_2,ppcVar1);
  return;
}




/* __alloc_traits<std::allocator<std::_List_node<char*> >, std::_List_node<char*>
   >::_S_select_on_copy(std::allocator<std::_List_node<char*> > const&) */

allocator *
__alloc_traits<std::allocator<std::_List_node<char*>>,std::_List_node<char*>>::_S_select_on_copy
          (allocator *param_1)

{
  long lVar1;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  std::allocator_traits<std::allocator<std::_List_node<char*>>>::
  select_on_container_copy_construction(param_1);
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1;
}




/* __aligned_membuf<char*>::_M_ptr() const */

void __thiscall __aligned_membuf<char*>::_M_ptr(__aligned_membuf<char*> *this)

{
  _M_addr(this);
  return;
}




/* std::_List_base<char*, std::allocator<char*> >::_M_put_node(std::_List_node<char*>*) */

void __thiscall
std::_List_base<char*,std::allocator<char*>>::_M_put_node
          (_List_base<char*,std::allocator<char*>> *this,_List_node *param_1)

{
  allocator_traits<std::allocator<std::_List_node<char*>>>::deallocate((allocator *)this,param_1,1);
  return;
}




void good6(void)

{
  return;
}




/* std::list<char*, std::allocator<char*> >::end() */

undefined8 __thiscall
std::list<char*,std::allocator<char*>>::end(list<char*,std::allocator<char*>> *this)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  _List_iterator<char*>::_List_iterator((_List_iterator<char*> *)&local_18,(_List_node_base *)this);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void printUnsignedLine(uint param_1)

{
  printf("%u\n",(ulong)param_1);
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




void good1(void)

{
  return;
}




/* std::_List_base<char*, std::allocator<char*> >::_M_get_Node_allocator() const */

_List_base<char*,std::allocator<char*>> * __thiscall
std::_List_base<char*,std::allocator<char*>>::_M_get_Node_allocator
          (_List_base<char*,std::allocator<char*>> *this)

{
  return this;
}




/* void new_allocator<std::_List_node<char*> >::construct<char*, char* const&>(char**, char* const&)
    */

void __thiscall
new_allocator<std::_List_node<char*>>::construct<char*,char*const&>
          (new_allocator<std::_List_node<char*>> *this,char **param_1,char **param_2)

{
  char *pcVar1;
  char **ppcVar2;
  undefined8 *puVar3;
  
  ppcVar2 = std::forward<char*const&>((type *)param_2);
  pcVar1 = *ppcVar2;
  puVar3 = (undefined8 *)operator_new(8,param_1);
  *puVar3 = pcVar1;
  return;
}




void good2(void)

{
  return;
}




void stdThreadLockAcquire(pthread_mutex_t *param_1)

{
  pthread_mutex_lock(param_1);
  return;
}




/* std::_List_base<char*, std::allocator<char*> >::_M_inc_size(unsigned long) */

void __thiscall
std::_List_base<char*,std::allocator<char*>>::_M_inc_size
          (_List_base<char*,std::allocator<char*>> *this,ulong param_1)

{
  *(ulong *)(this + 0x10) = *(long *)(this + 0x10) + param_1;
  return;
}




/* std::list<char*, std::allocator<char*> >::~list() */

void __thiscall
std::list<char*,std::allocator<char*>>::~list(list<char*,std::allocator<char*>> *this)

{
  _List_base<char*,std::allocator<char*>>::~_List_base
            ((_List_base<char*,std::allocator<char*>> *)this);
  return;
}




/* std::_List_const_iterator<char*>::TEMPNAMEPLACEHOLDERVALUE() */

_List_const_iterator<char*> * __thiscall
std::_List_const_iterator<char*>::operator++(_List_const_iterator<char*> *this)

{
  *(undefined8 *)this = **(undefined8 **)this;
  return this;
}




/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* char* const& std::forward<char* const&>(std::remove_reference<char* const&>::type&) */

char ** std::forward<char*const&>(type *param_1)

{
  return (char **)param_1;
}




/* std::__allocated_ptr<std::allocator<std::_List_node<char*> >
   >::TEMPNAMEPLACEHOLDERVALUE(decltype(nullptr)) */

__allocated_ptr<std::allocator<std::_List_node<char*>>> * __thiscall
std::__allocated_ptr<std::allocator<std::_List_node<char*>>>::operator=
          (__allocated_ptr<std::allocator<std::_List_node<char*>>> *this,
          _func_decltype_nullptr *param_1)

{
  *(undefined8 *)(this + 8) = 0;
  return this;
}




/* std::__allocated_ptr<std::allocator<std::_List_node<char*> >
   >::__allocated_ptr(std::allocator<std::_List_node<char*> >&, std::_List_node<char*>*) */

void __thiscall
std::__allocated_ptr<std::allocator<std::_List_node<char*>>>::__allocated_ptr
          (__allocated_ptr<std::allocator<std::_List_node<char*>>> *this,allocator *param_1,
          _List_node *param_2)

{
  allocator *paVar1;
  
  paVar1 = __addressof<std::allocator<std::_List_node<char*>>>(param_1);
  *(allocator **)this = paVar1;
  *(_List_node **)(this + 8) = param_2;
  return;
}




/* std::_List_base<char*, std::allocator<char*> >::_List_base(std::allocator<std::_List_node<char*>
   >&&) */

void __thiscall
std::_List_base<char*,std::allocator<char*>>::_List_base
          (_List_base<char*,std::allocator<char*>> *this,allocator *param_1)

{
  type *ptVar1;
  
  ptVar1 = move<std::allocator<std::_List_node<char*>>&>(param_1);
  _List_impl::_List_impl((_List_impl *)this,(allocator *)ptVar1);
  return;
}




void printStructLine(uint *param_1)

{
  printf("%d -- %d\n",(ulong)*param_1,(ulong)param_1[1]);
  return;
}




/* void std::list<char*, std::allocator<char*>
   >::_M_initialize_dispatch<std::_List_const_iterator<char*> >(std::_List_const_iterator<char*>,
   std::_List_const_iterator<char*>, std::__false_type) */

void std::list<char*,std::allocator<char*>>::
     _M_initialize_dispatch<std::_List_const_iterator<char*>>
               (_List_const_iterator param_1,_List_const_iterator param_2,__false_type param_3)

{
  char cVar1;
  char **ppcVar2;
  undefined4 in_register_00000014;
  undefined4 in_register_00000034;
  undefined4 in_register_0000003c;
  undefined8 local_20;
  undefined8 local_18;
  list<char*,std::allocator<char*>> *local_10;
  
  local_10 = (list<char*,std::allocator<char*>> *)CONCAT44(in_register_0000003c,param_1);
  local_18 = CONCAT44(in_register_00000034,param_2);
  local_20 = CONCAT44(in_register_00000014,param_3);
  while( true ) {
    cVar1 = operator!=((_List_const_iterator *)&local_18,(_List_const_iterator *)&local_20);
    if (cVar1 == '\0') break;
    ppcVar2 = (char **)_List_const_iterator<char*>::operator*
                                 ((_List_const_iterator<char*> *)&local_18);
    emplace_back<char*const&>(local_10,ppcVar2);
    _List_const_iterator<char*>::operator++((_List_const_iterator<char*> *)&local_18);
  }
  return;
}




void good5(void)

{
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




/* std::_List_node<char*>* std::list<char*, std::allocator<char*> >::_M_create_node<char*
   const&>(char* const&) */

_List_node * __thiscall
std::list<char*,std::allocator<char*>>::_M_create_node<char*const&>
          (list<char*,std::allocator<char*>> *this,char **param_1)

{
  _List_node<char*> *this_00;
  allocator *paVar1;
  char **ppcVar2;
  char **ppcVar3;
  long in_FS_OFFSET;
  __allocated_ptr<std::allocator<std::_List_node<char*>>> local_38 [24];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  this_00 = (_List_node<char*> *)
            _List_base<char*,std::allocator<char*>>::_M_get_node
                      ((_List_base<char*,std::allocator<char*>> *)this);
  paVar1 = (allocator *)
           _List_base<char*,std::allocator<char*>>::_M_get_Node_allocator
                     ((_List_base<char*,std::allocator<char*>> *)this);
  __allocated_ptr<std::allocator<std::_List_node<char*>>>::__allocated_ptr
            (local_38,paVar1,(_List_node *)this_00);
  ppcVar2 = forward<char*const&>((type *)param_1);
  ppcVar3 = (char **)_List_node<char*>::_M_valptr(this_00);
  allocator_traits<std::allocator<std::_List_node<char*>>>::construct<char*,char*const&>
            (paVar1,ppcVar3,ppcVar2);
  __allocated_ptr<std::allocator<std::_List_node<char*>>>::operator=
            (local_38,(_func_decltype_nullptr *)0x0);
  __allocated_ptr<std::allocator<std::_List_node<char*>>>::~__allocated_ptr(local_38);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return (_List_node *)this_00;
}




void printSizeTLine(undefined8 param_1)

{
  printf("%zu\n",param_1);
  return;
}




/* CWE126_Buffer_Overread__char_alloca_loop_73::badSink(std::list<char*, std::allocator<char*> >) */

void CWE126_Buffer_Overread__char_alloca_loop_73::badSink
               (list<char*,std::allocator<char*>> *param_1)

{
  long lVar1;
  long *plVar2;
  size_t sVar3;
  long in_FS_OFFSET;
  ulong local_90;
  char local_78 [99];
  undefined local_15;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  plVar2 = (long *)std::list<char*,std::allocator<char*>>::back(param_1);
  lVar1 = *plVar2;
  memset(local_78,0x43,99);
  local_15 = 0;
  sVar3 = strlen(local_78);
  for (local_90 = 0; local_90 < sVar3; local_90 = local_90 + 1) {
    local_78[local_90] = *(char *)(local_90 + lVar1);
  }
  local_15 = 0;
  printLine(local_78);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




/* new_allocator<std::_List_node<char*> >::~new_allocator() */

void __thiscall
new_allocator<std::_List_node<char*>>::~new_allocator(new_allocator<std::_List_node<char*>> *this)

{
  return;
}




/* std::_List_iterator<char*>::TEMPNAMEPLACEHOLDERVALUE() */

_List_iterator<char*> * __thiscall
std::_List_iterator<char*>::operator--(_List_iterator<char*> *this)

{
  *(undefined8 *)this = *(undefined8 *)(*(long *)this + 8);
  return this;
}




undefined8 main(void)

{
  time_t tVar1;
  
  tVar1 = time((time_t *)0x0);
  srand((uint)tVar1);
  printLine("Calling good()...");
  CWE126_Buffer_Overread__char_alloca_loop_73::good();
  printLine("Finished good()");
  printLine("Calling bad()...");
  CWE126_Buffer_Overread__char_alloca_loop_73::bad();
  printLine("Finished bad()");
  return 0;
}




/* std::_List_base<char*, std::allocator<char*>
   >::_List_impl::_List_impl(std::allocator<std::_List_node<char*> >&&) */

void __thiscall
std::_List_base<char*,std::allocator<char*>>::_List_impl::_List_impl
          (_List_impl *this,allocator *param_1)

{
  move<std::allocator<std::_List_node<char*>>&>(param_1);
  allocator<std::_List_node<char*>>::allocator((allocator *)this);
  __detail::_List_node_header::_List_node_header((_List_node_header *)this);
  return;
}




/* std::allocator_traits<std::allocator<std::_List_node<char*> >
   >::allocate(std::allocator<std::_List_node<char*> >&, unsigned long) */

void std::allocator_traits<std::allocator<std::_List_node<char*>>>::allocate
               (allocator *param_1,ulong param_2)

{
  new_allocator<std::_List_node<char*>>::allocate((ulong)param_1,(void *)param_2);
  return;
}




/* std::list<char*, std::allocator<char*> >::list() */

void __thiscall
std::list<char*,std::allocator<char*>>::list(list<char*,std::allocator<char*>> *this)

{
  _List_base<char*,std::allocator<char*>>::_List_base
            ((_List_base<char*,std::allocator<char*>> *)this);
  return;
}




void printFloatLine(float param_1)

{
  printf("%f\n",(double)param_1);
  return;
}




/* std::_List_base<char*, std::allocator<char*> >::_M_get_node() */

void __thiscall
std::_List_base<char*,std::allocator<char*>>::_M_get_node
          (_List_base<char*,std::allocator<char*>> *this)

{
  allocator_traits<std::allocator<std::_List_node<char*>>>::allocate((allocator *)this,1);
  return;
}




/* __aligned_membuf<char*>::_M_addr() const */

__aligned_membuf<char*> * __thiscall __aligned_membuf<char*>::_M_addr(__aligned_membuf<char*> *this)

{
  return this;
}




/* std::list<char*, std::allocator<char*> >::list(std::list<char*, std::allocator<char*> > const&)
    */

void __thiscall
std::list<char*,std::allocator<char*>>::list(list<char*,std::allocator<char*>> *this,list *param_1)

{
  __false_type _Var1;
  _List_const_iterator _Var2;
  long in_FS_OFFSET;
  allocator local_21;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  _List_base<char*,std::allocator<char*>>::_M_get_Node_allocator
            ((_List_base<char*,std::allocator<char*>> *)param_1);
  __alloc_traits<std::allocator<std::_List_node<char*>>,std::_List_node<char*>>::_S_select_on_copy
            (&local_21);
  _List_base<char*,std::allocator<char*>>::_List_base
            ((_List_base<char*,std::allocator<char*>> *)this,&local_21);
  allocator<std::_List_node<char*>>::~allocator((allocator<std::_List_node<char*>> *)&local_21);
  _Var1 = end((list<char*,std::allocator<char*>> *)param_1);
  _Var2 = begin((list<char*,std::allocator<char*>> *)param_1);
                    /* try { // try from 00101ba0 to 00101ba4 has its CatchHandler @ 00101ba7 */
  _M_initialize_dispatch<std::_List_const_iterator<char*>>((_List_const_iterator)this,_Var2,_Var1);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void printLongLongLine(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




/* std::_List_base<char*, std::allocator<char*> >::_M_clear() */

void __thiscall
std::_List_base<char*,std::allocator<char*>>::_M_clear
          (_List_base<char*,std::allocator<char*>> *this)

{
  _List_node<char*> *p_Var1;
  char **ppcVar2;
  allocator *paVar3;
  undefined8 local_20;
  
  local_20 = *(_List_node<char*> **)this;
  while (local_20 != (_List_node<char*> *)this) {
    p_Var1 = *(_List_node<char*> **)local_20;
    ppcVar2 = (char **)_List_node<char*>::_M_valptr(local_20);
    paVar3 = (allocator *)_M_get_Node_allocator(this);
    allocator_traits<std::allocator<std::_List_node<char*>>>::destroy<char*>(paVar3,ppcVar2);
    _M_put_node(this,(_List_node *)local_20);
    local_20 = p_Var1;
  }
  return;
}




/* std::_List_base<char*, std::allocator<char*> >::_List_impl::_List_impl() */

void __thiscall
std::_List_base<char*,std::allocator<char*>>::_List_impl::_List_impl(_List_impl *this)

{
  allocator<std::_List_node<char*>>::allocator();
  __detail::_List_node_header::_List_node_header((_List_node_header *)this);
  return;
}




int globalReturnsTrueOrFalse(void)

{
  int iVar1;
  
  iVar1 = rand();
  return iVar1 % 2;
}




/* new_allocator<std::_List_node<char*> >::new_allocator(new_allocator<std::_List_node<char*> >
   const&) */

void new_allocator<std::_List_node<char*>>::new_allocator(new_allocator *param_1)

{
  return;
}




void bad5(void)

{
  return;
}




/* new_allocator<std::_List_node<char*> >::allocate(unsigned long, void const*) */

void new_allocator<std::_List_node<char*>>::allocate(ulong param_1,void *param_2)

{
  void *pvVar1;
  
  pvVar1 = (void *)max_size();
  if (pvVar1 < param_2) {
    std::__throw_bad_alloc();
  }
  operator_new((long)param_2 * 0x18);
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




/* CWE126_Buffer_Overread__char_alloca_loop_73::goodG2BSink(std::list<char*, std::allocator<char*>
   >) */

void CWE126_Buffer_Overread__char_alloca_loop_73::goodG2BSink
               (list<char*,std::allocator<char*>> *param_1)

{
  long lVar1;
  long *plVar2;
  size_t sVar3;
  long in_FS_OFFSET;
  ulong local_90;
  char local_78 [99];
  undefined local_15;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  plVar2 = (long *)std::list<char*,std::allocator<char*>>::back(param_1);
  lVar1 = *plVar2;
  memset(local_78,0x43,99);
  local_15 = 0;
  sVar3 = strlen(local_78);
  for (local_90 = 0; local_90 < sVar3; local_90 = local_90 + 1) {
    local_78[local_90] = *(char *)(local_90 + lVar1);
  }
  local_15 = 0;
  printLine(local_78);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void printHexCharLine(char param_1)

{
  printf("%02x\n",(ulong)(uint)(int)param_1);
  return;
}




/* std::_List_base<char*, std::allocator<char*> >::_List_impl::~_List_impl() */

void __thiscall
std::_List_base<char*,std::allocator<char*>>::_List_impl::~_List_impl(_List_impl *this)

{
  allocator<std::_List_node<char*>>::~allocator((allocator<std::_List_node<char*>> *)this);
  return;
}




void bad9(void)

{
  return;
}




/* std::_List_iterator<char*>::_List_iterator(std::__detail::_List_node_base*) */

void __thiscall
std::_List_iterator<char*>::_List_iterator(_List_iterator<char*> *this,_List_node_base *param_1)

{
  *(_List_node_base **)this = param_1;
  return;
}




/* std::_List_node<char*>::_M_valptr() const */

void __thiscall std::_List_node<char*>::_M_valptr(_List_node<char*> *this)

{
  __aligned_membuf<char*>::_M_ptr((__aligned_membuf<char*> *)(this + 0x10));
  return;
}




/* std::_List_const_iterator<char*>::TEMPNAMEPLACEHOLDERVALUE() const */

void __thiscall std::_List_const_iterator<char*>::operator*(_List_const_iterator<char*> *this)

{
  _List_node<char*>::_M_valptr(*(_List_node<char*> **)this);
  return;
}




/* std::allocator<std::_List_node<char*> >::allocator(std::allocator<std::_List_node<char*> >
   const&) */

void std::allocator<std::_List_node<char*>>::allocator(allocator *param_1)

{
  new_allocator<std::_List_node<char*>>::new_allocator((new_allocator *)param_1);
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




/* std::__detail::_List_node_header::_List_node_header() */

void __thiscall std::__detail::_List_node_header::_List_node_header(_List_node_header *this)

{
  _M_init(this);
  return;
}




/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* std::TEMPNAMEPLACEHOLDERVALUE(std::_List_const_iterator<char*> const&,
   std::_List_const_iterator<char*> const&) */

undefined8 std::operator!=(_List_const_iterator *param_1,_List_const_iterator *param_2)

{
  return CONCAT71((int7)((ulong)*(long *)param_2 >> 8),*(long *)param_1 != *(long *)param_2);
}




/* std::list<char*, std::allocator<char*> >::push_back(char* const&) */

void __thiscall
std::list<char*,std::allocator<char*>>::push_back
          (list<char*,std::allocator<char*>> *this,char **param_1)

{
  _List_iterator _Var1;
  
  _Var1 = end(this);
  _M_insert<char*const&>(this,_Var1,param_1);
  return;
}




/* CWE126_Buffer_Overread__char_alloca_loop_73::good() */

void CWE126_Buffer_Overread__char_alloca_loop_73::good(void)

{
  goodG2B();
  return;
}




undefined8 stdThreadDestroy(void *param_1)

{
  free(param_1);
  return 1;
}




/* std::_List_node<char*>::_M_valptr() */

void __thiscall std::_List_node<char*>::_M_valptr(_List_node<char*> *this)

{
  __aligned_membuf<char*>::_M_ptr((__aligned_membuf<char*> *)(this + 0x10));
  return;
}




/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* std::allocator<std::_List_node<char*> >* std::__addressof<std::allocator<std::_List_node<char*> >
   >(std::allocator<std::_List_node<char*> >&) */

allocator * std::__addressof<std::allocator<std::_List_node<char*>>>(allocator *param_1)

{
  return param_1;
}




/* std::_List_const_iterator<char*>::_List_const_iterator(std::__detail::_List_node_base const*) */

void __thiscall
std::_List_const_iterator<char*>::_List_const_iterator
          (_List_const_iterator<char*> *this,_List_node_base *param_1)

{
  *(_List_node_base **)this = param_1;
  return;
}




/* std::allocator_traits<std::allocator<std::_List_node<char*> >
   >::deallocate(std::allocator<std::_List_node<char*> >&, std::_List_node<char*>*, unsigned long)
    */

void std::allocator_traits<std::allocator<std::_List_node<char*>>>::deallocate
               (allocator *param_1,_List_node *param_2,ulong param_3)

{
  new_allocator<std::_List_node<char*>>::deallocate((_List_node *)param_1,(ulong)param_2);
  return;
}




void bad7(void)

{
  return;
}




/* new_allocator<std::_List_node<char*> >::max_size() const */

undefined8 new_allocator<std::_List_node<char*>>::max_size(void)

{
  return 0x555555555555555;
}




/* void new_allocator<std::_List_node<char*> >::destroy<char*>(char**) */

void new_allocator<std::_List_node<char*>>::destroy<char*>(char **param_1)

{
  return;
}




/* CWE126_Buffer_Overread__char_alloca_loop_73::goodG2B() */

void CWE126_Buffer_Overread__char_alloca_loop_73::goodG2B(void)

{
  undefined *puVar1;
  undefined *puVar2;
  long in_FS_OFFSET;
  undefined auStack_78 [8];
  char *local_70;
  void *local_68;
  char *local_60;
  list<char*,std::allocator<char*>> local_58 [32];
  list<char*,std::allocator<char*>> local_38 [24];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  std::list<char*,std::allocator<char*>>::list(local_58);
  for (puVar1 = auStack_78; puVar1 != auStack_78; puVar1 = puVar1 + -0x1000) {
    *(undefined8 *)(puVar1 + -8) = *(undefined8 *)(puVar1 + -8);
  }
  *(undefined8 *)(puVar1 + -8) = *(undefined8 *)(puVar1 + -8);
  local_68 = (void *)((ulong)(puVar1 + -0x31) & 0xfffffffffffffff0);
  for (puVar2 = puVar1 + -0x40; puVar2 != puVar1 + -0x40; puVar2 = puVar2 + -0x1000) {
    *(undefined8 *)(puVar2 + -8) = *(undefined8 *)(puVar2 + -8);
  }
  *(undefined8 *)(puVar2 + -8) = *(undefined8 *)(puVar2 + -8);
  local_60 = (char *)((ulong)(puVar2 + -0x61) & 0xfffffffffffffff0);
  *(undefined8 *)(puVar2 + -0x78) = 0x10180d;
  memset((void *)((ulong)(puVar1 + -0x31) & 0xfffffffffffffff0),0x41,0x31);
  *(undefined *)((long)local_68 + 0x31) = 0;
  *(undefined8 *)(puVar2 + -0x78) = 0x10182e;
  memset(local_60,0x41,99);
  local_60[99] = '\0';
  local_70 = local_60;
                    /* try { // try from 0010184f to 0010188c has its CatchHandler @ 001018d8 */
  *(undefined8 *)(puVar2 + -0x78) = 0x101854;
  std::list<char*,std::allocator<char*>>::push_back(local_58,&local_70);
  *(undefined8 *)(puVar2 + -0x78) = 0x101867;
  std::list<char*,std::allocator<char*>>::push_back(local_58,&local_70);
  *(undefined8 *)(puVar2 + -0x78) = 0x10187a;
  std::list<char*,std::allocator<char*>>::push_back(local_58,&local_70);
  *(undefined8 *)(puVar2 + -0x78) = 0x10188d;
  std::list<char*,std::allocator<char*>>::list(local_38,(list *)local_58);
                    /* try { // try from 00101894 to 00101898 has its CatchHandler @ 001018c3 */
  *(undefined8 *)(puVar2 + -0x78) = 0x101899;
  goodG2BSink(local_38);
  *(undefined8 *)(puVar2 + -0x78) = 0x1018a5;
  std::list<char*,std::allocator<char*>>::~list(local_38);
  *(undefined8 *)(puVar2 + -0x78) = 0x1018b1;
  std::list<char*,std::allocator<char*>>::~list(local_58);
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  *(undefined8 *)(puVar2 + -0x78) = 0x1018fb;
  __stack_chk_fail();
}




/* std::list<char*, std::allocator<char*> >::begin() const */

undefined8 __thiscall
std::list<char*,std::allocator<char*>>::begin(list<char*,std::allocator<char*>> *this)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  _List_const_iterator<char*>::_List_const_iterator
            ((_List_const_iterator<char*> *)&local_18,*(_List_node_base **)this);
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



