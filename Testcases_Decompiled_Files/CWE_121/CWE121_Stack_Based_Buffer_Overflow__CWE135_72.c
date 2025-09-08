
/* __normal_iterator<void**, std::vector<void*, std::allocator<void*> > >::difference_type
   TEMPNAMEPLACEHOLDERVALUE(__normal_iterator<void**, std::vector<void*, std::allocator<void*> > >
   const&, __normal_iterator<void**, std::vector<void*, std::allocator<void*> > > const&) */

difference_type operator-(__normal_iterator *param_1,__normal_iterator *param_2)

{
  long lVar1;
  long *plVar2;
  
  plVar2 = (long *)__normal_iterator<void**,std::vector<void*,std::allocator<void*>>>::base
                             ((__normal_iterator<void**,std::vector<void*,std::allocator<void*>>> *)
                              param_1);
  lVar1 = *plVar2;
  plVar2 = (long *)__normal_iterator<void**,std::vector<void*,std::allocator<void*>>>::base
                             ((__normal_iterator<void**,std::vector<void*,std::allocator<void*>>> *)
                              param_2);
  return (difference_type)(lVar1 - *plVar2 >> 3);
}




/* std::vector<void*, std::allocator<void*> >::_M_check_len(unsigned long, char const*) const */

ulong __thiscall
std::vector<void*,std::allocator<void*>>::_M_check_len
          (vector<void*,std::allocator<void*>> *this,ulong param_1,char *param_2)

{
  long lVar1;
  long lVar2;
  ulong *puVar3;
  ulong uVar4;
  ulong uVar5;
  long in_FS_OFFSET;
  ulong local_48;
  vector<void*,std::allocator<void*>> *local_40;
  ulong local_30;
  ulong local_28;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  local_48 = param_1;
  local_40 = this;
  lVar1 = max_size(this);
  lVar2 = size(local_40);
  if ((ulong)(lVar1 - lVar2) < local_48) {
    std::__throw_length_error(param_2);
  }
  lVar1 = size(local_40);
  local_30 = size(local_40);
  puVar3 = max<unsigned_long>(&local_30,&local_48);
  local_28 = *puVar3 + lVar1;
  uVar4 = size(local_40);
  if ((local_28 < uVar4) || (uVar5 = max_size(local_40), uVar4 = local_28, uVar5 < local_28)) {
    uVar4 = max_size(local_40);
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void stdThreadLockDestroy(pthread_mutex_t *param_1)

{
  pthread_mutex_destroy(param_1);
  free(param_1);
  return;
}




/* std::vector<void*, std::allocator<void*> >::begin() const */

undefined8 __thiscall
std::vector<void*,std::allocator<void*>>::begin(vector<void*,std::allocator<void*>> *this)

{
  long in_FS_OFFSET;
  void **local_20;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_20 = *(void ***)this;
  __normal_iterator<void*const*,std::vector<void*,std::allocator<void*>>>::__normal_iterator
            ((__normal_iterator<void*const*,std::vector<void*,std::allocator<void*>>> *)&local_18,
             &local_20);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* void std::_Destroy<void**>(void**, void**) */

void std::_Destroy<void**>(void **param_1,void **param_2)

{
  _Destroy_aux<true>::__destroy<void**>(param_1,param_2);
  return;
}




/* operator new(unsigned long, void*) */

void * operator_new(ulong param_1,void *param_2)

{
  return param_2;
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




/* std::vector<void*, std::allocator<void*> >::insert(__normal_iterator<void* const*,
   std::vector<void*, std::allocator<void*> > >, unsigned long, void* const&) */

void __thiscall
std::vector<void*,std::allocator<void*>>::insert
          (vector<void*,std::allocator<void*>> *this,undefined8 param_2,undefined8 param_3,
          undefined8 param_4)

{
  difference_type dVar1;
  undefined4 extraout_var;
  undefined8 uVar2;
  long in_FS_OFFSET;
  undefined8 local_38;
  vector<void*,std::allocator<void*>> *local_30;
  undefined8 local_20;
  long local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_38 = param_2;
  local_30 = this;
  local_20 = cbegin(this);
  dVar1 = operator-((__normal_iterator *)&local_38,(__normal_iterator *)&local_20);
  local_18 = CONCAT44(extraout_var,dVar1);
  local_20 = begin(local_30);
  uVar2 = __normal_iterator<void**,std::vector<void*,std::allocator<void*>>>::operator+
                    ((__normal_iterator<void**,std::vector<void*,std::allocator<void*>>> *)&local_20
                     ,local_18);
  _M_fill_insert(local_30,uVar2,param_3,param_4);
  local_20 = begin(local_30);
  __normal_iterator<void**,std::vector<void*,std::allocator<void*>>>::operator+
            ((__normal_iterator<void**,std::vector<void*,std::allocator<void*>>> *)&local_20,
             local_18);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




/* void** std::__uninitialized_copy<true>::__uninit_copy<__normal_iterator<void* const*,
   std::vector<void*, std::allocator<void*> > >, void**>(__normal_iterator<void* const*,
   std::vector<void*, std::allocator<void*> > >, __normal_iterator<void* const*, std::vector<void*,
   std::allocator<void*> > >, void**) */

void std::__uninitialized_copy<true>::
     __uninit_copy<__normal_iterator<void*const*,std::vector<void*,std::allocator<void*>>>,void**>
               (undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  copy<__normal_iterator<void*const*,std::vector<void*,std::allocator<void*>>>,void**>
            (param_1,param_2,param_3);
  return;
}




/* std::_Vector_base<void*, std::allocator<void*> >::_Vector_impl_data::_Vector_impl_data() */

void __thiscall
std::_Vector_base<void*,std::allocator<void*>>::_Vector_impl_data::_Vector_impl_data
          (_Vector_impl_data *this)

{
  *(undefined8 *)this = 0;
  *(undefined8 *)(this + 8) = 0;
  *(undefined8 *)(this + 0x10) = 0;
  return;
}




/* new_allocator<void*>::new_allocator() */

void new_allocator<void*>::new_allocator(void)

{
  return;
}




/* new_allocator<void*>::deallocate(void**, unsigned long) */

void new_allocator<void*>::deallocate(void **param_1,ulong param_2)

{
  operator_delete((void *)param_2);
  return;
}




/* std::allocator_traits<std::allocator<void*> >::max_size(std::allocator<void*> const&) */

void std::allocator_traits<std::allocator<void*>>::max_size(allocator *param_1)

{
  new_allocator<void*>::max_size();
  return;
}




void printDoubleLine(undefined8 param_1)

{
  printf("%g\n",param_1);
  return;
}




void printLongLongLine(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




/* std::vector<void*, std::allocator<void*> >::vector(std::vector<void*, std::allocator<void*> >
   const&) */

void __thiscall
std::vector<void*,std::allocator<void*>>::vector
          (vector<void*,std::allocator<void*>> *this,vector *param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long in_FS_OFFSET;
  allocator local_31;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  _Vector_base<void*,std::allocator<void*>>::_M_get_Tp_allocator
            ((_Vector_base<void*,std::allocator<void*>> *)param_1);
  __alloc_traits<std::allocator<void*>,void*>::_S_select_on_copy(&local_31);
  uVar1 = size((vector<void*,std::allocator<void*>> *)param_1);
                    /* try { // try from 0010209c to 001020a0 has its CatchHandler @ 00102109 */
  _Vector_base<void*,std::allocator<void*>>::_Vector_base
            ((_Vector_base<void*,std::allocator<void*>> *)this,uVar1,&local_31);
  allocator<void*>::~allocator((allocator<void*> *)&local_31);
  uVar2 = _Vector_base<void*,std::allocator<void*>>::_M_get_Tp_allocator
                    ((_Vector_base<void*,std::allocator<void*>> *)this);
  uVar5 = *(undefined8 *)this;
  uVar3 = end((vector<void*,std::allocator<void*>> *)param_1);
  uVar4 = begin((vector<void*,std::allocator<void*>> *)param_1);
                    /* try { // try from 001020ea to 001020ee has its CatchHandler @ 00102127 */
  uVar5 = __uninitialized_copy_a<__normal_iterator<void*const*,std::vector<void*,std::allocator<void*>>>,void**,void*>
                    (uVar4,uVar3,uVar5,uVar2);
  *(undefined8 *)(this + 8) = uVar5;
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void bad2(void)

{
  return;
}




/* std::_Vector_base<void*, std::allocator<void*> >::~_Vector_base() */

void __thiscall
std::_Vector_base<void*,std::allocator<void*>>::~_Vector_base
          (_Vector_base<void*,std::allocator<void*>> *this)

{
  _M_deallocate(this,*(void ***)this,*(long *)(this + 0x10) - *(long *)this >> 3);
  _Vector_impl::~_Vector_impl((_Vector_impl *)this);
  return;
}




/* std::_Vector_base<void*, std::allocator<void*> >::_M_allocate(unsigned long) */

undefined8 __thiscall
std::_Vector_base<void*,std::allocator<void*>>::_M_allocate
          (_Vector_base<void*,std::allocator<void*>> *this,ulong param_1)

{
  undefined8 uVar1;
  
  if (param_1 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = allocator_traits<std::allocator<void*>>::allocate((allocator *)this,param_1);
  }
  return uVar1;
}




int globalReturnsTrueOrFalse(void)

{
  int iVar1;
  
  iVar1 = rand();
  return iVar1 % 2;
}




/* std::vector<void*, std::allocator<void*> >::_S_max_size(std::allocator<void*> const&) */

ulong std::vector<void*,std::allocator<void*>>::_S_max_size(allocator *param_1)

{
  ulong *puVar1;
  long in_FS_OFFSET;
  ulong local_20;
  ulong local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_20 = 0xfffffffffffffff;
  local_18 = allocator_traits<std::allocator<void*>>::max_size(param_1);
  puVar1 = min<unsigned_long>(&local_20,&local_18);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return *puVar1;
}




void good6(void)

{
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
    __isoc99_swscanf(local_18 * 8 + param_3,&DAT_00105194,local_1c);
    *(char *)(local_18 + param_1) = local_1c[0];
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




/* std::vector<void*, std::allocator<void*> >::max_size() const */

void __thiscall
std::vector<void*,std::allocator<void*>>::max_size(vector<void*,std::allocator<void*>> *this)

{
  allocator *paVar1;
  
  paVar1 = (allocator *)
           _Vector_base<void*,std::allocator<void*>>::_M_get_Tp_allocator
                     ((_Vector_base<void*,std::allocator<void*>> *)this);
  _S_max_size(paVar1);
  return;
}




/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* void std::_Destroy<void**, void*>(void**, void**, std::allocator<void*>&) */

void std::_Destroy<void**,void*>(void **param_1,void **param_2,allocator *param_3)

{
  _Destroy<void**>(param_1,param_2);
  return;
}




/* std::vector<void*, std::allocator<void*> >::end() const */

undefined8 __thiscall
std::vector<void*,std::allocator<void*>>::end(vector<void*,std::allocator<void*>> *this)

{
  long in_FS_OFFSET;
  void **local_20;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_20 = *(void ***)(this + 8);
  __normal_iterator<void*const*,std::vector<void*,std::allocator<void*>>>::__normal_iterator
            ((__normal_iterator<void*const*,std::vector<void*,std::allocator<void*>>> *)&local_18,
             &local_20);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* void** std::__copy_move_a<false, void* const*, void**>(void* const*, void* const*, void**) */

void ** std::__copy_move_a<false,void*const*,void**>(void **param_1,void **param_2,void **param_3)

{
  void **ppvVar1;
  
  ppvVar1 = __copy_move<false,true,std::random_access_iterator_tag>::__copy_m<void*>
                      (param_1,param_2,param_3);
  return ppvVar1;
}




void good8(void)

{
  return;
}




/* void std::_Destroy_aux<true>::__destroy<void**>(void**, void**) */

void std::_Destroy_aux<true>::__destroy<void**>(void **param_1,void **param_2)

{
  return;
}




/* void std::allocator_traits<std::allocator<void*> >::construct<void*, void*
   const&>(std::allocator<void*>&, void**, void* const&) */

void std::allocator_traits<std::allocator<void*>>::construct<void*,void*const&>
               (allocator *param_1,void **param_2,void **param_3)

{
  void **ppvVar1;
  
  ppvVar1 = forward<void*const&>((type *)param_3);
  new_allocator<void*>::construct<void*,void*const&>
            ((new_allocator<void*> *)param_1,param_2,ppvVar1);
  return;
}




/* std::move_iterator<void**>::move_iterator(void**) */

void __thiscall
std::move_iterator<void**>::move_iterator(move_iterator<void**> *this,void **param_1)

{
  *(void ***)this = param_1;
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




/* new_allocator<void*>::allocate(unsigned long, void const*) */

void new_allocator<void*>::allocate(ulong param_1,void *param_2)

{
  void *pvVar1;
  
  pvVar1 = (void *)max_size();
  if (pvVar1 < param_2) {
    std::__throw_bad_alloc();
  }
  operator_new((long)param_2 << 3);
  return;
}




/* std::allocator_traits<std::allocator<void*>
   >::select_on_container_copy_construction(std::allocator<void*> const&) */

allocator *
std::allocator_traits<std::allocator<void*>>::select_on_container_copy_construction
          (allocator *param_1)

{
  allocator<void*>::allocator(param_1);
  return param_1;
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




/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* __enable_if<std::__is_scalar<void*>::__value, void**>::__type std::__fill_n_a<void**, unsigned
   long, void*>(void**, unsigned long, void* const&) */

__type std::__fill_n_a<void**,unsigned_long,void*>(void **param_1,ulong param_2,void **param_3)

{
  void *pvVar1;
  void **local_20;
  ulong local_18;
  
  pvVar1 = *param_3;
  local_20 = param_1;
  for (local_18 = param_2; local_18 != 0; local_18 = local_18 - 1) {
    *local_20 = pvVar1;
    local_20 = local_20 + 1;
  }
  return (__type)local_20;
}




/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* void** std::__niter_base<void**>(void**) */

void ** std::__niter_base<void**>(void **param_1)

{
  return param_1;
}




/* __normal_iterator<void**, std::vector<void*, std::allocator<void*> >
   >::TEMPNAMEPLACEHOLDERVALUE(long) const */

undefined8 __thiscall
__normal_iterator<void**,std::vector<void*,std::allocator<void*>>>::operator+
          (__normal_iterator<void**,std::vector<void*,std::allocator<void*>>> *this,long param_1)

{
  long in_FS_OFFSET;
  void **local_20;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_20 = (void **)(*(long *)this + param_1 * 8);
  __normal_iterator((__normal_iterator<void**,std::vector<void*,std::allocator<void*>>> *)&local_18,
                    &local_20);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void printSizeTLine(undefined8 param_1)

{
  printf("%zu\n",param_1);
  return;
}




void internal_start(long param_1)

{
  (**(code **)(param_1 + 8))(*(undefined8 *)(param_1 + 0x10));
                    /* WARNING: Subroutine does not return */
  pthread_exit((void *)0x0);
}




void printShortLine(short param_1)

{
  printf("%hd\n",(ulong)(uint)(int)param_1);
  return;
}




/* std::vector<void*, std::allocator<void*> >::size() const */

long __thiscall
std::vector<void*,std::allocator<void*>>::size(vector<void*,std::allocator<void*>> *this)

{
  return *(long *)(this + 8) - *(long *)this >> 3;
}




/* new_allocator<void*>::~new_allocator() */

void __thiscall new_allocator<void*>::~new_allocator(new_allocator<void*> *this)

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




/* void** std::__copy_move_backward<true, true,
   std::random_access_iterator_tag>::__copy_move_b<void*>(void* const*, void* const*, void**) */

void ** std::__copy_move_backward<true,true,std::random_access_iterator_tag>::__copy_move_b<void*>
                  (void **param_1,void **param_2,void **param_3)

{
  long lVar1;
  
  lVar1 = (long)param_2 - (long)param_1 >> 3;
  if (lVar1 != 0) {
    memmove(param_3 + -lVar1,param_1,lVar1 * 8);
  }
  return param_3 + -lVar1;
}




/* std::move_iterator<void**>::base() const */

undefined8 __thiscall std::move_iterator<void**>::base(move_iterator<void**> *this)

{
  return *(undefined8 *)this;
}




void FUN_00101020(void)

{
  (*(code *)PTR_00107ec8)();
  return;
}




/* std::vector<void*, std::allocator<void*> >::operator[](unsigned long) */

long __thiscall
std::vector<void*,std::allocator<void*>>::operator[]
          (vector<void*,std::allocator<void*>> *this,ulong param_1)

{
  return *(long *)this + param_1 * 8;
}




void bad4(void)

{
  return;
}




/* std::vector<void*, std::allocator<void*> >::~vector() */

void __thiscall
std::vector<void*,std::allocator<void*>>::~vector(vector<void*,std::allocator<void*>> *this)

{
  allocator *paVar1;
  
  paVar1 = (allocator *)
           _Vector_base<void*,std::allocator<void*>>::_M_get_Tp_allocator
                     ((_Vector_base<void*,std::allocator<void*>> *)this);
  _Destroy<void**,void*>(*(void ***)this,*(void ***)(this + 8),paVar1);
  _Vector_base<void*,std::allocator<void*>>::~_Vector_base
            ((_Vector_base<void*,std::allocator<void*>> *)this);
  return;
}




/* CWE121_Stack_Based_Buffer_Overflow__CWE135_72::badSink(std::vector<void*, std::allocator<void*>
   >) */

void CWE121_Stack_Based_Buffer_Overflow__CWE135_72::badSink(vector param_1)

{
  long lVar1;
  wchar_t *pwVar2;
  undefined8 *puVar3;
  ulong uVar4;
  undefined *puVar5;
  undefined4 in_register_0000003c;
  long in_FS_OFFSET;
  undefined auStack_38 [8];
  vector<void*,std::allocator<void*>> *local_30;
  wchar_t *local_28;
  size_t local_20;
  wchar_t *local_18;
  long local_10;
  
  local_30 = (vector<void*,std::allocator<void*>> *)CONCAT44(in_register_0000003c,param_1);
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  puVar3 = (undefined8 *)std::vector<void*,std::allocator<void*>>::operator[](local_30,2);
  local_28 = (wchar_t *)*puVar3;
  local_20 = strlen((char *)local_28);
  uVar4 = (((local_20 + 1) * 4 + 0x17) / 0x10) * 0x10;
  for (puVar5 = auStack_38; puVar5 != auStack_38 + -(uVar4 & 0xfffffffffffff000);
      puVar5 = puVar5 + -0x1000) {
    *(undefined8 *)(puVar5 + -8) = *(undefined8 *)(puVar5 + -8);
  }
  lVar1 = -(ulong)((uint)uVar4 & 0xfff);
  if ((uVar4 & 0xfff) != 0) {
    *(undefined8 *)(puVar5 + ((ulong)((uint)uVar4 & 0xfff) - 8) + lVar1) =
         *(undefined8 *)(puVar5 + ((ulong)((uint)uVar4 & 0xfff) - 8) + lVar1);
  }
  pwVar2 = local_28;
  local_18 = (wchar_t *)((ulong)(puVar5 + lVar1 + 0xf) & 0xfffffffffffffff0);
  *(undefined8 *)(puVar5 + lVar1 + -8) = 0x101637;
  wcscpy((wchar_t *)((ulong)(puVar5 + lVar1 + 0xf) & 0xfffffffffffffff0),pwVar2);
  pwVar2 = local_18;
  *(undefined8 *)(puVar5 + lVar1 + -8) = 0x101643;
  printLine(pwVar2);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    *(undefined8 *)(puVar5 + lVar1 + -8) = 0x101658;
    __stack_chk_fail();
  }
  return;
}




void stdThreadLockAcquire(pthread_mutex_t *param_1)

{
  pthread_mutex_lock(param_1);
  return;
}




void printStructLine(uint *param_1)

{
  printf("%d -- %d\n",(ulong)*param_1,(ulong)param_1[1]);
  return;
}




/* __normal_iterator<void* const*, std::vector<void*, std::allocator<void*> >
   >::__normal_iterator(void* const* const&) */

void __thiscall
__normal_iterator<void*const*,std::vector<void*,std::allocator<void*>>>::__normal_iterator
          (__normal_iterator<void*const*,std::vector<void*,std::allocator<void*>>> *this,
          void ***param_1)

{
  *(void ***)this = *param_1;
  return;
}




/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* void** std::__copy_move_backward_a2<true, void**, void**>(void**, void**, void**) */

void ** std::__copy_move_backward_a2<true,void**,void**>
                  (void **param_1,void **param_2,void **param_3)

{
  void **ppvVar1;
  void **ppvVar2;
  void **ppvVar3;
  void **local_30;
  void **local_28;
  void **local_20;
  
  local_30 = param_3;
  local_28 = param_2;
  local_20 = param_1;
  ppvVar1 = __niter_base<void**>(param_3);
  ppvVar2 = __niter_base<void**>(local_28);
  ppvVar3 = __niter_base<void**>(local_20);
  ppvVar1 = __copy_move_backward_a<true,void**,void**>(ppvVar3,ppvVar2,ppvVar1);
  ppvVar1 = __niter_wrap<void**>(&local_30,ppvVar1);
  return ppvVar1;
}




undefined8 main(void)

{
  time_t tVar1;
  
  tVar1 = time((time_t *)0x0);
  srand((uint)tVar1);
  printLine("Calling good()...");
  CWE121_Stack_Based_Buffer_Overflow__CWE135_72::good();
  printLine("Finished good()");
  printLine("Calling bad()...");
  CWE121_Stack_Based_Buffer_Overflow__CWE135_72::bad();
  printLine("Finished bad()");
  return 0;
}




/* std::_Vector_base<void*, std::allocator<void*> >::_M_deallocate(void**, unsigned long) */

void __thiscall
std::_Vector_base<void*,std::allocator<void*>>::_M_deallocate
          (_Vector_base<void*,std::allocator<void*>> *this,void **param_1,ulong param_2)

{
  if (param_1 != (void **)0x0) {
    allocator_traits<std::allocator<void*>>::deallocate((allocator *)this,param_1,param_2);
  }
  return;
}




undefined8 globalReturnsFalse(void)

{
  return 0;
}




/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* void** std::__copy_move_a<true, void**, void**>(void**, void**, void**) */

void ** std::__copy_move_a<true,void**,void**>(void **param_1,void **param_2,void **param_3)

{
  void **ppvVar1;
  
  ppvVar1 = __copy_move<true,true,std::random_access_iterator_tag>::__copy_m<void*>
                      (param_1,param_2,param_3);
  return ppvVar1;
}




void printHexCharLine(char param_1)

{
  printf("%02x\n",(ulong)(uint)(int)param_1);
  return;
}




/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* void** std::uninitialized_copy<std::move_iterator<void**>, void**>(std::move_iterator<void**>,
   std::move_iterator<void**>, void**) */

void ** std::uninitialized_copy<std::move_iterator<void**>,void**>
                  (move_iterator param_1,move_iterator param_2,void **param_3)

{
  void **ppvVar1;
  
  ppvVar1 = __uninitialized_copy<true>::__uninit_copy<std::move_iterator<void**>,void**>
                      (param_1,param_2,param_3);
  return ppvVar1;
}




/* std::vector<void*, std::allocator<void*> >::end() */

undefined8 __thiscall
std::vector<void*,std::allocator<void*>>::end(vector<void*,std::allocator<void*>> *this)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  __normal_iterator<void**,std::vector<void*,std::allocator<void*>>>::__normal_iterator
            ((__normal_iterator<void**,std::vector<void*,std::allocator<void*>>> *)&local_18,
             (void ***)(this + 8));
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




/* __normal_iterator<void* const*, std::vector<void*, std::allocator<void*> > >::base() const */

__normal_iterator<void*const*,std::vector<void*,std::allocator<void*>>> * __thiscall
__normal_iterator<void*const*,std::vector<void*,std::allocator<void*>>>::base
          (__normal_iterator<void*const*,std::vector<void*,std::allocator<void*>>> *this)

{
  return this;
}




/* std::allocator<void*>::allocator() */

void std::allocator<void*>::allocator(void)

{
  new_allocator<void*>::new_allocator();
  return;
}




/* std::_Vector_base<void*, std::allocator<void*> >::_M_get_Tp_allocator() */

_Vector_base<void*,std::allocator<void*>> * __thiscall
std::_Vector_base<void*,std::allocator<void*>>::_M_get_Tp_allocator
          (_Vector_base<void*,std::allocator<void*>> *this)

{
  return this;
}




void good9(void)

{
  return;
}




/* CWE121_Stack_Based_Buffer_Overflow__CWE135_72::goodB2GSink(std::vector<void*,
   std::allocator<void*> >) */

void CWE121_Stack_Based_Buffer_Overflow__CWE135_72::goodB2GSink(vector param_1)

{
  long lVar1;
  wchar_t *pwVar2;
  undefined8 *puVar3;
  ulong uVar4;
  undefined *puVar5;
  undefined4 in_register_0000003c;
  long in_FS_OFFSET;
  undefined auStack_38 [8];
  vector<void*,std::allocator<void*>> *local_30;
  wchar_t *local_28;
  size_t local_20;
  wchar_t *local_18;
  long local_10;
  
  local_30 = (vector<void*,std::allocator<void*>> *)CONCAT44(in_register_0000003c,param_1);
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  puVar3 = (undefined8 *)std::vector<void*,std::allocator<void*>>::operator[](local_30,2);
  local_28 = (wchar_t *)*puVar3;
  local_20 = wcslen(local_28);
  uVar4 = (((local_20 + 1) * 4 + 0x17) / 0x10) * 0x10;
  for (puVar5 = auStack_38; puVar5 != auStack_38 + -(uVar4 & 0xfffffffffffff000);
      puVar5 = puVar5 + -0x1000) {
    *(undefined8 *)(puVar5 + -8) = *(undefined8 *)(puVar5 + -8);
  }
  lVar1 = -(ulong)((uint)uVar4 & 0xfff);
  if ((uVar4 & 0xfff) != 0) {
    *(undefined8 *)(puVar5 + ((ulong)((uint)uVar4 & 0xfff) - 8) + lVar1) =
         *(undefined8 *)(puVar5 + ((ulong)((uint)uVar4 & 0xfff) - 8) + lVar1);
  }
  pwVar2 = local_28;
  local_18 = (wchar_t *)((ulong)(puVar5 + lVar1 + 0xf) & 0xfffffffffffffff0);
  *(undefined8 *)(puVar5 + lVar1 + -8) = 0x101855;
  wcscpy((wchar_t *)((ulong)(puVar5 + lVar1 + 0xf) & 0xfffffffffffffff0),pwVar2);
  pwVar2 = local_18;
  *(undefined8 *)(puVar5 + lVar1 + -8) = 0x101861;
  printWLine(pwVar2);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    *(undefined8 *)(puVar5 + lVar1 + -8) = 0x101876;
    __stack_chk_fail();
  }
  return;
}




/* void** std::__uninitialized_copy_a<__normal_iterator<void* const*, std::vector<void*,
   std::allocator<void*> > >, void**, void*>(__normal_iterator<void* const*, std::vector<void*,
   std::allocator<void*> > >, __normal_iterator<void* const*, std::vector<void*,
   std::allocator<void*> > >, void**, std::allocator<void*>&) */

void std::
     __uninitialized_copy_a<__normal_iterator<void*const*,std::vector<void*,std::allocator<void*>>>,void**,void*>
               (undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  uninitialized_copy<__normal_iterator<void*const*,std::vector<void*,std::allocator<void*>>>,void**>
            (param_1,param_2,param_3);
  return;
}




void good7(void)

{
  return;
}




/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* std::move_iterator<void**> std::__make_move_if_noexcept_iterator<void*,
   std::move_iterator<void**> >(void**) */

move_iterator
std::__make_move_if_noexcept_iterator<void*,std::move_iterator<void**>>(void **param_1)

{
  long in_FS_OFFSET;
  move_iterator local_18 [2];
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  move_iterator<void**>::move_iterator((move_iterator<void**> *)local_18,param_1);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18[0];
}




/* __normal_iterator<void**, std::vector<void*, std::allocator<void*> > >::__normal_iterator(void**
   const&) */

void __thiscall
__normal_iterator<void**,std::vector<void*,std::allocator<void*>>>::__normal_iterator
          (__normal_iterator<void**,std::vector<void*,std::allocator<void*>>> *this,void ***param_1)

{
  *(void ***)this = *param_1;
  return;
}




/* std::vector<void*, std::allocator<void*> >::_Temporary_value::_M_val() */

void __thiscall
std::vector<void*,std::allocator<void*>>::_Temporary_value::_M_val(_Temporary_value *this)

{
  _M_ptr(this);
  return;
}




/* std::vector<void*, std::allocator<void*> >::_M_fill_insert(__normal_iterator<void**,
   std::vector<void*, std::allocator<void*> > >, unsigned long, void* const&) */

void __thiscall
std::vector<void*,std::allocator<void*>>::_M_fill_insert
          (vector<void*,std::allocator<void*>> *this,undefined8 param_2,ulong param_3,void **param_4
          )

{
  long lVar1;
  difference_type dVar2;
  undefined4 extraout_var;
  allocator *paVar3;
  undefined8 *puVar4;
  long *plVar5;
  void **ppvVar6;
  undefined4 extraout_var_00;
  long in_FS_OFFSET;
  undefined8 local_88;
  vector<void*,std::allocator<void*>> *local_80;
  undefined8 local_78;
  void **local_70;
  ulong local_68;
  long local_60;
  void **local_58;
  void **local_50;
  ulong local_48;
  void **local_40;
  _Temporary_value local_38 [24];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  local_88 = param_2;
  local_80 = this;
  if (param_3 != 0) {
    if ((ulong)(*(long *)(this + 0x10) - *(long *)(this + 8) >> 3) < param_3) {
      local_68 = _M_check_len(this,param_3,"vector::_M_fill_insert");
      local_78 = begin(local_80);
      dVar2 = operator-((__normal_iterator *)&local_88,(__normal_iterator *)&local_78);
      local_60 = CONCAT44(extraout_var_00,dVar2);
      local_70 = (void **)_Vector_base<void*,std::allocator<void*>>::_M_allocate
                                    ((_Vector_base<void*,std::allocator<void*>> *)local_80,local_68)
      ;
      local_58 = local_70;
      paVar3 = (allocator *)
               _Vector_base<void*,std::allocator<void*>>::_M_get_Tp_allocator
                         ((_Vector_base<void*,std::allocator<void*>> *)local_80);
                    /* try { // try from 0010260c to 00102697 has its CatchHandler @ 0010274f */
      __uninitialized_fill_n_a<void**,unsigned_long,void*,void*>
                (local_58 + local_60,param_3,param_4,paVar3);
      local_70 = (void **)0x0;
      paVar3 = (allocator *)
               _Vector_base<void*,std::allocator<void*>>::_M_get_Tp_allocator
                         ((_Vector_base<void*,std::allocator<void*>> *)local_80);
      puVar4 = (undefined8 *)
               __normal_iterator<void**,std::vector<void*,std::allocator<void*>>>::base
                         ((__normal_iterator<void**,std::vector<void*,std::allocator<void*>>> *)
                          &local_88);
      local_70 = __uninitialized_move_if_noexcept_a<void**,void**,std::allocator<void*>>
                           (*(void ***)local_80,(void **)*puVar4,local_58,paVar3);
      local_70 = local_70 + param_3;
      paVar3 = (allocator *)
               _Vector_base<void*,std::allocator<void*>>::_M_get_Tp_allocator
                         ((_Vector_base<void*,std::allocator<void*>> *)local_80);
      ppvVar6 = *(void ***)(local_80 + 8);
      puVar4 = (undefined8 *)
               __normal_iterator<void**,std::vector<void*,std::allocator<void*>>>::base
                         ((__normal_iterator<void**,std::vector<void*,std::allocator<void*>>> *)
                          &local_88);
      local_70 = __uninitialized_move_if_noexcept_a<void**,void**,std::allocator<void*>>
                           ((void **)*puVar4,ppvVar6,local_70,paVar3);
      paVar3 = (allocator *)
               _Vector_base<void*,std::allocator<void*>>::_M_get_Tp_allocator
                         ((_Vector_base<void*,std::allocator<void*>> *)local_80);
      _Destroy<void**,void*>(*(void ***)local_80,*(void ***)(local_80 + 8),paVar3);
      _Vector_base<void*,std::allocator<void*>>::_M_deallocate
                ((_Vector_base<void*,std::allocator<void*>> *)local_80,*(void ***)local_80,
                 *(long *)(local_80 + 0x10) - *(long *)local_80 >> 3);
      *(void ***)local_80 = local_58;
      *(void ***)(local_80 + 8) = local_70;
      *(void ***)(local_80 + 0x10) = local_58 + local_68;
    }
    else {
      _Temporary_value::_Temporary_value<void*const&>(local_38,(vector *)this,param_4);
                    /* try { // try from 0010238c to 0010255f has its CatchHandler @ 00102731 */
      local_50 = (void **)_Temporary_value::_M_val(local_38);
      local_78 = end(local_80);
      dVar2 = operator-((__normal_iterator *)&local_78,(__normal_iterator *)&local_88);
      local_48 = CONCAT44(extraout_var,dVar2);
      local_40 = *(void ***)(local_80 + 8);
      if (param_3 < local_48) {
        paVar3 = (allocator *)
                 _Vector_base<void*,std::allocator<void*>>::_M_get_Tp_allocator
                           ((_Vector_base<void*,std::allocator<void*>> *)local_80);
        __uninitialized_move_a<void**,void**,std::allocator<void*>>
                  ((void **)(param_3 * -8 + *(long *)(local_80 + 8)),*(void ***)(local_80 + 8),
                   *(void ***)(local_80 + 8),paVar3);
        *(ulong *)(local_80 + 8) = param_3 * 8 + *(long *)(local_80 + 8);
        ppvVar6 = local_40 + -param_3;
        puVar4 = (undefined8 *)
                 __normal_iterator<void**,std::vector<void*,std::allocator<void*>>>::base
                           ((__normal_iterator<void**,std::vector<void*,std::allocator<void*>>> *)
                            &local_88);
        move_backward<void**,void**>((void **)*puVar4,ppvVar6,local_40);
        plVar5 = (long *)__normal_iterator<void**,std::vector<void*,std::allocator<void*>>>::base
                                   ((__normal_iterator<void**,std::vector<void*,std::allocator<void*>>>
                                     *)&local_88);
        lVar1 = *plVar5;
        puVar4 = (undefined8 *)
                 __normal_iterator<void**,std::vector<void*,std::allocator<void*>>>::base
                           ((__normal_iterator<void**,std::vector<void*,std::allocator<void*>>> *)
                            &local_88);
        fill<void**,void*>((void **)*puVar4,(void **)(lVar1 + param_3 * 8),local_50);
      }
      else {
        paVar3 = (allocator *)
                 _Vector_base<void*,std::allocator<void*>>::_M_get_Tp_allocator
                           ((_Vector_base<void*,std::allocator<void*>> *)local_80);
        ppvVar6 = __uninitialized_fill_n_a<void**,unsigned_long,void*,void*>
                            (*(void ***)(local_80 + 8),param_3 - local_48,local_50,paVar3);
        *(void ***)(local_80 + 8) = ppvVar6;
        paVar3 = (allocator *)
                 _Vector_base<void*,std::allocator<void*>>::_M_get_Tp_allocator
                           ((_Vector_base<void*,std::allocator<void*>> *)local_80);
        ppvVar6 = *(void ***)(local_80 + 8);
        puVar4 = (undefined8 *)
                 __normal_iterator<void**,std::vector<void*,std::allocator<void*>>>::base
                           ((__normal_iterator<void**,std::vector<void*,std::allocator<void*>>> *)
                            &local_88);
        __uninitialized_move_a<void**,void**,std::allocator<void*>>
                  ((void **)*puVar4,local_40,ppvVar6,paVar3);
        *(ulong *)(local_80 + 8) = local_48 * 8 + *(long *)(local_80 + 8);
        puVar4 = (undefined8 *)
                 __normal_iterator<void**,std::vector<void*,std::allocator<void*>>>::base
                           ((__normal_iterator<void**,std::vector<void*,std::allocator<void*>>> *)
                            &local_88);
        fill<void**,void*>((void **)*puVar4,local_40,local_50);
      }
      _Temporary_value::~_Temporary_value(local_38);
    }
  }
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




/* std::vector<void*, std::allocator<void*> >::_Temporary_value::_M_ptr() */

_Temporary_value * __thiscall
std::vector<void*,std::allocator<void*>>::_Temporary_value::_M_ptr(_Temporary_value *this)

{
  return this + 8;
}




void good5(void)

{
  return;
}




undefined8 globalReturnsTrue(void)

{
  return 1;
}




/* void** std::__copy_move<true, true, std::random_access_iterator_tag>::__copy_m<void*>(void*
   const*, void* const*, void**) */

void ** std::__copy_move<true,true,std::random_access_iterator_tag>::__copy_m<void*>
                  (void **param_1,void **param_2,void **param_3)

{
  long lVar1;
  
  lVar1 = (long)param_2 - (long)param_1 >> 3;
  if (lVar1 != 0) {
    memmove(param_3,param_1,lVar1 * 8);
  }
  return param_3 + lVar1;
}




/* std::_Vector_base<void*, std::allocator<void*>
   >::_Vector_impl::_Vector_impl(std::allocator<void*> const&) */

void __thiscall
std::_Vector_base<void*,std::allocator<void*>>::_Vector_impl::_Vector_impl
          (_Vector_impl *this,allocator *param_1)

{
  allocator<void*>::allocator((allocator *)this);
  _Vector_impl_data::_Vector_impl_data((_Vector_impl_data *)this);
  return;
}




/* CWE121_Stack_Based_Buffer_Overflow__CWE135_72::bad() */

void CWE121_Stack_Based_Buffer_Overflow__CWE135_72::bad(void)

{
  long in_FS_OFFSET;
  wchar_t *local_68;
  undefined8 local_60;
  vector<void*,std::allocator<void*>> local_58 [32];
  undefined8 local_38 [3];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  std::vector<void*,std::allocator<void*>>::vector(local_58);
  local_68 = L"AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA";
  local_60 = std::vector<void*,std::allocator<void*>>::end(local_58);
  __normal_iterator<void*const*,std::vector<void*,std::allocator<void*>>>::__normal_iterator<void**>
            ((__normal_iterator<void*const*,std::vector<void*,std::allocator<void*>>> *)local_38,
             (__normal_iterator *)&local_60);
                    /* try { // try from 00101911 to 001019a6 has its CatchHandler @ 001019f2 */
  std::vector<void*,std::allocator<void*>>::insert(local_58,local_38[0],1,&local_68);
  local_60 = std::vector<void*,std::allocator<void*>>::end(local_58);
  __normal_iterator<void*const*,std::vector<void*,std::allocator<void*>>>::__normal_iterator<void**>
            ((__normal_iterator<void*const*,std::vector<void*,std::allocator<void*>>> *)local_38,
             (__normal_iterator *)&local_60);
  std::vector<void*,std::allocator<void*>>::insert(local_58,local_38[0],1,&local_68);
  local_60 = std::vector<void*,std::allocator<void*>>::end(local_58);
  __normal_iterator<void*const*,std::vector<void*,std::allocator<void*>>>::__normal_iterator<void**>
            ((__normal_iterator<void*const*,std::vector<void*,std::allocator<void*>>> *)local_38,
             (__normal_iterator *)&local_60);
  std::vector<void*,std::allocator<void*>>::insert(local_58,local_38[0],1,&local_68);
  std::vector<void*,std::allocator<void*>>::vector
            ((vector<void*,std::allocator<void*>> *)local_38,(vector *)local_58);
                    /* try { // try from 001019ae to 001019b2 has its CatchHandler @ 001019dd */
  badSink((vector)local_38);
  std::vector<void*,std::allocator<void*>>::~vector((vector<void*,std::allocator<void*>> *)local_38)
  ;
  std::vector<void*,std::allocator<void*>>::~vector(local_58);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* void std::fill<void**, void*>(void**, void**, void* const&) */

void std::fill<void**,void*>(void **param_1,void **param_2,void **param_3)

{
  void **ppvVar1;
  void **ppvVar2;
  
  ppvVar1 = __niter_base<void**>(param_2);
  ppvVar2 = __niter_base<void**>(param_1);
  __fill_a<void**,void*>(ppvVar2,ppvVar1,param_3);
  return;
}




/* CWE121_Stack_Based_Buffer_Overflow__CWE135_72::goodG2BSink(std::vector<void*,
   std::allocator<void*> >) */

void CWE121_Stack_Based_Buffer_Overflow__CWE135_72::goodG2BSink(vector param_1)

{
  long lVar1;
  char *pcVar2;
  undefined8 *puVar3;
  ulong uVar4;
  undefined *puVar5;
  undefined4 in_register_0000003c;
  long in_FS_OFFSET;
  undefined auStack_38 [8];
  vector<void*,std::allocator<void*>> *local_30;
  char *local_28;
  size_t local_20;
  char *local_18;
  long local_10;
  
  local_30 = (vector<void*,std::allocator<void*>> *)CONCAT44(in_register_0000003c,param_1);
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  puVar3 = (undefined8 *)std::vector<void*,std::allocator<void*>>::operator[](local_30,2);
  local_28 = (char *)*puVar3;
  local_20 = strlen(local_28);
  uVar4 = ((local_20 + 0x18) / 0x10) * 0x10;
  for (puVar5 = auStack_38; puVar5 != auStack_38 + -(uVar4 & 0xfffffffffffff000);
      puVar5 = puVar5 + -0x1000) {
    *(undefined8 *)(puVar5 + -8) = *(undefined8 *)(puVar5 + -8);
  }
  lVar1 = -(ulong)((uint)uVar4 & 0xfff);
  if ((uVar4 & 0xfff) != 0) {
    *(undefined8 *)(puVar5 + ((ulong)((uint)uVar4 & 0xfff) - 8) + lVar1) =
         *(undefined8 *)(puVar5 + ((ulong)((uint)uVar4 & 0xfff) - 8) + lVar1);
  }
  pcVar2 = local_28;
  local_18 = (char *)((ulong)(puVar5 + lVar1 + 0xf) & 0xfffffffffffffff0);
  *(undefined8 *)(puVar5 + lVar1 + -8) = 0x101744;
  strcpy((char *)((ulong)(puVar5 + lVar1 + 0xf) & 0xfffffffffffffff0),pcVar2);
  pcVar2 = local_18;
  *(undefined8 *)(puVar5 + lVar1 + -8) = 0x101750;
  printLine(pcVar2);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    *(undefined8 *)(puVar5 + lVar1 + -8) = 0x101765;
    __stack_chk_fail();
  }
  return;
}




/* std::_Vector_base<void*, std::allocator<void*> >::_Vector_base(unsigned long,
   std::allocator<void*> const&) */

void __thiscall
std::_Vector_base<void*,std::allocator<void*>>::_Vector_base
          (_Vector_base<void*,std::allocator<void*>> *this,ulong param_1,allocator *param_2)

{
  _Vector_impl::_Vector_impl((_Vector_impl *)this,param_2);
                    /* try { // try from 00102998 to 0010299c has its CatchHandler @ 0010299f */
  _M_create_storage(this,param_1);
  return;
}




/* void std::allocator_traits<std::allocator<void*> >::destroy<void*>(std::allocator<void*>&,
   void**) */

void std::allocator_traits<std::allocator<void*>>::destroy<void*>(allocator *param_1,void **param_2)

{
  new_allocator<void*>::destroy<void*>((void **)param_1);
  return;
}




/* void** std::copy<__normal_iterator<void* const*, std::vector<void*, std::allocator<void*> > >,
   void**>(__normal_iterator<void* const*, std::vector<void*, std::allocator<void*> > >,
   __normal_iterator<void* const*, std::vector<void*, std::allocator<void*> > >, void**) */

void std::copy<__normal_iterator<void*const*,std::vector<void*,std::allocator<void*>>>,void**>
               (undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = __miter_base<__normal_iterator<void*const*,std::vector<void*,std::allocator<void*>>>>
                    (param_2);
  uVar2 = __miter_base<__normal_iterator<void*const*,std::vector<void*,std::allocator<void*>>>>
                    (param_1);
  __copy_move_a2<false,__normal_iterator<void*const*,std::vector<void*,std::allocator<void*>>>,void**>
            (uVar2,uVar1,param_3);
  return;
}




/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* unsigned long const& std::max<unsigned long>(unsigned long const&, unsigned long const&) */

ulong * std::max<unsigned_long>(ulong *param_1,ulong *param_2)

{
  if (*param_1 < *param_2) {
    param_1 = param_2;
  }
  return param_1;
}




void bad5(void)

{
  return;
}




void bad9(void)

{
  return;
}




/* std::_Vector_base<void*, std::allocator<void*> >::_Vector_base() */

void __thiscall
std::_Vector_base<void*,std::allocator<void*>>::_Vector_base
          (_Vector_base<void*,std::allocator<void*>> *this)

{
  _Vector_impl::_Vector_impl((_Vector_impl *)this);
  return;
}




void good1(void)

{
  return;
}




void printUnsignedLine(uint param_1)

{
  printf("%u\n",(ulong)param_1);
  return;
}




/* void** std::__copy_move<false, true, std::random_access_iterator_tag>::__copy_m<void*>(void*
   const*, void* const*, void**) */

void ** std::__copy_move<false,true,std::random_access_iterator_tag>::__copy_m<void*>
                  (void **param_1,void **param_2,void **param_3)

{
  long lVar1;
  
  lVar1 = (long)param_2 - (long)param_1 >> 3;
  if (lVar1 != 0) {
    memmove(param_3,param_1,lVar1 * 8);
  }
  return param_3 + lVar1;
}




/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* void** std::__copy_move_backward_a<true, void**, void**>(void**, void**, void**) */

void ** std::__copy_move_backward_a<true,void**,void**>
                  (void **param_1,void **param_2,void **param_3)

{
  void **ppvVar1;
  
  ppvVar1 = __copy_move_backward<true,true,std::random_access_iterator_tag>::__copy_move_b<void*>
                      (param_1,param_2,param_3);
  return ppvVar1;
}




/* std::_Vector_base<void*, std::allocator<void*> >::_M_create_storage(unsigned long) */

void __thiscall
std::_Vector_base<void*,std::allocator<void*>>::_M_create_storage
          (_Vector_base<void*,std::allocator<void*>> *this,ulong param_1)

{
  undefined8 uVar1;
  
  uVar1 = _M_allocate(this,param_1);
  *(undefined8 *)this = uVar1;
  *(undefined8 *)(this + 8) = *(undefined8 *)this;
  *(ulong *)(this + 0x10) = param_1 * 8 + *(long *)this;
  return;
}




/* __normal_iterator<void**, std::vector<void*, std::allocator<void*> > >::base() const */

__normal_iterator<void**,std::vector<void*,std::allocator<void*>>> * __thiscall
__normal_iterator<void**,std::vector<void*,std::allocator<void*>>>::base
          (__normal_iterator<void**,std::vector<void*,std::allocator<void*>>> *this)

{
  return this;
}




/* std::allocator<void*>::allocator(std::allocator<void*> const&) */

void std::allocator<void*>::allocator(allocator *param_1)

{
  new_allocator<void*>::new_allocator((new_allocator *)param_1);
  return;
}




void printFloatLine(float param_1)

{
  printf("%f\n",(double)param_1);
  return;
}




/* std::vector<void*, std::allocator<void*> >::_Temporary_value::_Temporary_value<void*
   const&>(std::vector<void*, std::allocator<void*> >*, void* const&) */

void __thiscall
std::vector<void*,std::allocator<void*>>::_Temporary_value::_Temporary_value<void*const&>
          (_Temporary_value *this,vector *param_1,void **param_2)

{
  void **ppvVar1;
  void **ppvVar2;
  
  *(vector **)this = param_1;
  ppvVar1 = forward<void*const&>((type *)param_2);
  ppvVar2 = (void **)_M_ptr(this);
  allocator_traits<std::allocator<void*>>::construct<void*,void*const&>
            (*(allocator **)this,ppvVar2,ppvVar1);
  return;
}




/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* void** std::__miter_base<void**>(void**) */

void ** std::__miter_base<void**>(void **param_1)

{
  return param_1;
}




void good3(void)

{
  return;
}




/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* decltype (__miter_base(({parm#1}.base)())) std::__miter_base<void**>(std::move_iterator<void**>)
    */

void std::__miter_base<void**>(move_iterator param_1)

{
  void **ppvVar1;
  undefined4 in_register_0000003c;
  undefined8 local_10;
  
  local_10 = CONCAT44(in_register_0000003c,param_1);
  ppvVar1 = (void **)move_iterator<void**>::base((move_iterator<void**> *)&local_10);
  __miter_base<void**>(ppvVar1);
  return;
}




/* __normal_iterator<void* const*, std::vector<void*, std::allocator<void*> > >::difference_type
   TEMPNAMEPLACEHOLDERVALUE(__normal_iterator<void* const*, std::vector<void*, std::allocator<void*>
   > > const&, __normal_iterator<void* const*, std::vector<void*, std::allocator<void*> > > const&)
    */

difference_type operator-(__normal_iterator *param_1,__normal_iterator *param_2)

{
  long lVar1;
  long *plVar2;
  
  plVar2 = (long *)__normal_iterator<void*const*,std::vector<void*,std::allocator<void*>>>::base
                             ((__normal_iterator<void*const*,std::vector<void*,std::allocator<void*>>>
                               *)param_1);
  lVar1 = *plVar2;
  plVar2 = (long *)__normal_iterator<void*const*,std::vector<void*,std::allocator<void*>>>::base
                             ((__normal_iterator<void*const*,std::vector<void*,std::allocator<void*>>>
                               *)param_2);
  return (difference_type)(lVar1 - *plVar2 >> 3);
}




/* void** std::__copy_move_a2<false, __normal_iterator<void* const*, std::vector<void*,
   std::allocator<void*> > >, void**>(__normal_iterator<void* const*, std::vector<void*,
   std::allocator<void*> > >, __normal_iterator<void* const*, std::vector<void*,
   std::allocator<void*> > >, void**) */

void std::
     __copy_move_a2<false,__normal_iterator<void*const*,std::vector<void*,std::allocator<void*>>>,void**>
               (undefined8 param_1,undefined8 param_2,void **param_3)

{
  void **ppvVar1;
  void **ppvVar2;
  void **ppvVar3;
  void **local_30;
  undefined8 local_28;
  undefined8 local_20;
  
  local_30 = param_3;
  local_28 = param_2;
  local_20 = param_1;
  ppvVar1 = __niter_base<void**>(param_3);
  ppvVar2 = (void **)__niter_base<void*const*,std::vector<void*,std::allocator<void*>>>(local_28);
  ppvVar3 = (void **)__niter_base<void*const*,std::vector<void*,std::allocator<void*>>>(local_20);
  ppvVar1 = __copy_move_a<false,void*const*,void**>(ppvVar3,ppvVar2,ppvVar1);
  __niter_wrap<void**>(&local_30,ppvVar1);
  return;
}




/* void new_allocator<void*>::destroy<void*>(void**) */

void new_allocator<void*>::destroy<void*>(void **param_1)

{
  return;
}




/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* unsigned long const& std::min<unsigned long>(unsigned long const&, unsigned long const&) */

ulong * std::min<unsigned_long>(ulong *param_1,ulong *param_2)

{
  if (*param_2 < *param_1) {
    param_1 = param_2;
  }
  return param_1;
}




/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* void** std::copy<std::move_iterator<void**>, void**>(std::move_iterator<void**>,
   std::move_iterator<void**>, void**) */

void ** std::copy<std::move_iterator<void**>,void**>
                  (move_iterator param_1,move_iterator param_2,void **param_3)

{
  void **ppvVar1;
  void **ppvVar2;
  
  ppvVar1 = (void **)__miter_base<void**>(param_2);
  ppvVar2 = (void **)__miter_base<void**>(param_1);
  ppvVar1 = __copy_move_a2<true,void**,void**>(ppvVar2,ppvVar1,param_3);
  return ppvVar1;
}




/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* std::move_iterator<void**> std::make_move_iterator<void**>(void**) */

move_iterator std::make_move_iterator<void**>(void **param_1)

{
  long in_FS_OFFSET;
  move_iterator local_18 [2];
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  move_iterator<void**>::move_iterator((move_iterator<void**> *)local_18,param_1);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18[0];
}




void bad7(void)

{
  return;
}




/* std::_Vector_base<void*, std::allocator<void*> >::_Vector_impl::_Vector_impl() */

void __thiscall
std::_Vector_base<void*,std::allocator<void*>>::_Vector_impl::_Vector_impl(_Vector_impl *this)

{
  allocator<void*>::allocator();
  _Vector_impl_data::_Vector_impl_data((_Vector_impl_data *)this);
  return;
}




void stdThreadLockRelease(pthread_mutex_t *param_1)

{
  pthread_mutex_unlock(param_1);
  return;
}




void bad1(void)

{
  return;
}




void bad8(void)

{
  return;
}




/* std::vector<void*, std::allocator<void*> >::begin() */

undefined8 __thiscall
std::vector<void*,std::allocator<void*>>::begin(vector<void*,std::allocator<void*>> *this)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  __normal_iterator<void**,std::vector<void*,std::allocator<void*>>>::__normal_iterator
            ((__normal_iterator<void**,std::vector<void*,std::allocator<void*>>> *)&local_18,
             (void ***)this);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* void** std::__uninitialized_copy_a<std::move_iterator<void**>, void**,
   void*>(std::move_iterator<void**>, std::move_iterator<void**>, void**, std::allocator<void*>&) */

void ** std::__uninitialized_copy_a<std::move_iterator<void**>,void**,void*>
                  (move_iterator param_1,move_iterator param_2,void **param_3,allocator *param_4)

{
  void **ppvVar1;
  
  ppvVar1 = uninitialized_copy<std::move_iterator<void**>,void**>(param_1,param_2,param_3);
  return ppvVar1;
}




void good2(void)

{
  return;
}




/* __alloc_traits<std::allocator<void*>, void*>::_S_select_on_copy(std::allocator<void*> const&) */

allocator * __alloc_traits<std::allocator<void*>,void*>::_S_select_on_copy(allocator *param_1)

{
  long lVar1;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  std::allocator_traits<std::allocator<void*>>::select_on_container_copy_construction(param_1);
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1;
}




/* __normal_iterator<void* const*, std::vector<void*, std::allocator<void*> >
   >::__normal_iterator<void**>(__normal_iterator<void**, __enable_if<std::__are_same<void**,
   void**>::__value, std::vector<void*, std::allocator<void*> > >::__type> const&) */

void __thiscall
__normal_iterator<void*const*,std::vector<void*,std::allocator<void*>>>::__normal_iterator<void**>
          (__normal_iterator<void*const*,std::vector<void*,std::allocator<void*>>> *this,
          __normal_iterator *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)
           __normal_iterator<void**,std::vector<void*,std::allocator<void*>>>::base
                     ((__normal_iterator<void**,std::vector<void*,std::allocator<void*>>> *)param_1)
  ;
  *(undefined8 *)this = *puVar1;
  return;
}




/* CWE121_Stack_Based_Buffer_Overflow__CWE135_72::good() */

void CWE121_Stack_Based_Buffer_Overflow__CWE135_72::good(void)

{
  goodG2B();
  goodB2G();
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




/* std::vector<void*, std::allocator<void*> >::_Temporary_value::~_Temporary_value() */

void __thiscall
std::vector<void*,std::allocator<void*>>::_Temporary_value::~_Temporary_value
          (_Temporary_value *this)

{
  void **ppvVar1;
  
  ppvVar1 = (void **)_M_ptr(this);
  allocator_traits<std::allocator<void*>>::destroy<void*>(*(allocator **)this,ppvVar1);
  return;
}




/* std::allocator_traits<std::allocator<void*> >::allocate(std::allocator<void*>&, unsigned long) */

void std::allocator_traits<std::allocator<void*>>::allocate(allocator *param_1,ulong param_2)

{
  new_allocator<void*>::allocate((ulong)param_1,(void *)param_2);
  return;
}




/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* __enable_if<std::__is_scalar<void*>::__value, void>::__type std::__fill_a<void**, void*>(void**,
   void**, void* const&) */

__type std::__fill_a<void**,void*>(void **param_1,void **param_2,void **param_3)

{
  void *pvVar1;
  void **local_20;
  
  pvVar1 = *param_3;
  for (local_20 = param_1; local_20 != param_2; local_20 = local_20 + 1) {
    *local_20 = pvVar1;
  }
  return (__type)local_20;
}




/* std::_Vector_base<void*, std::allocator<void*> >::_M_get_Tp_allocator() const */

_Vector_base<void*,std::allocator<void*>> * __thiscall
std::_Vector_base<void*,std::allocator<void*>>::_M_get_Tp_allocator
          (_Vector_base<void*,std::allocator<void*>> *this)

{
  return this;
}




void bad6(void)

{
  return;
}




/* std::allocator<void*>::~allocator() */

void __thiscall std::allocator<void*>::~allocator(allocator<void*> *this)

{
  new_allocator<void*>::~new_allocator((new_allocator<void*> *)this);
  return;
}




/* std::vector<void*, std::allocator<void*> >::cbegin() const */

undefined8 __thiscall
std::vector<void*,std::allocator<void*>>::cbegin(vector<void*,std::allocator<void*>> *this)

{
  long in_FS_OFFSET;
  void **local_20;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_20 = *(void ***)this;
  __normal_iterator<void*const*,std::vector<void*,std::allocator<void*>>>::__normal_iterator
            ((__normal_iterator<void*const*,std::vector<void*,std::allocator<void*>>> *)&local_18,
             &local_20);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* void** std::__copy_move_a2<true, void**, void**>(void**, void**, void**) */

void ** std::__copy_move_a2<true,void**,void**>(void **param_1,void **param_2,void **param_3)

{
  void **ppvVar1;
  void **ppvVar2;
  void **ppvVar3;
  void **local_30;
  void **local_28;
  void **local_20;
  
  local_30 = param_3;
  local_28 = param_2;
  local_20 = param_1;
  ppvVar1 = __niter_base<void**>(param_3);
  ppvVar2 = __niter_base<void**>(local_28);
  ppvVar3 = __niter_base<void**>(local_20);
  ppvVar1 = __copy_move_a<true,void**,void**>(ppvVar3,ppvVar2,ppvVar1);
  ppvVar1 = __niter_wrap<void**>(&local_30,ppvVar1);
  return ppvVar1;
}




/* void** std::__uninitialized_copy<true>::__uninit_copy<std::move_iterator<void**>,
   void**>(std::move_iterator<void**>, std::move_iterator<void**>, void**) */

void ** std::__uninitialized_copy<true>::__uninit_copy<std::move_iterator<void**>,void**>
                  (move_iterator param_1,move_iterator param_2,void **param_3)

{
  void **ppvVar1;
  
  ppvVar1 = copy<std::move_iterator<void**>,void**>(param_1,param_2,param_3);
  return ppvVar1;
}




/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* void** std::__niter_wrap<void**>(void** const&, void**) */

void ** std::__niter_wrap<void**>(void ***param_1,void **param_2)

{
  return param_2;
}




undefined8 stdThreadDestroy(void *param_1)

{
  free(param_1);
  return 1;
}




void printWLine(long param_1)

{
  if (param_1 != 0) {
    wprintf(L"%ls\n",param_1);
  }
  return;
}




/* CWE121_Stack_Based_Buffer_Overflow__CWE135_72::goodG2B() */

void CWE121_Stack_Based_Buffer_Overflow__CWE135_72::goodG2B(void)

{
  long in_FS_OFFSET;
  char *local_68;
  undefined8 local_60;
  vector<void*,std::allocator<void*>> local_58 [32];
  undefined8 local_38 [3];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  std::vector<void*,std::allocator<void*>>::vector(local_58);
  local_68 = "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA";
  local_60 = std::vector<void*,std::allocator<void*>>::end(local_58);
  __normal_iterator<void*const*,std::vector<void*,std::allocator<void*>>>::__normal_iterator<void**>
            ((__normal_iterator<void*const*,std::vector<void*,std::allocator<void*>>> *)local_38,
             (__normal_iterator *)&local_60);
                    /* try { // try from 00101a91 to 00101b26 has its CatchHandler @ 00101b72 */
  std::vector<void*,std::allocator<void*>>::insert(local_58,local_38[0],1,&local_68);
  local_60 = std::vector<void*,std::allocator<void*>>::end(local_58);
  __normal_iterator<void*const*,std::vector<void*,std::allocator<void*>>>::__normal_iterator<void**>
            ((__normal_iterator<void*const*,std::vector<void*,std::allocator<void*>>> *)local_38,
             (__normal_iterator *)&local_60);
  std::vector<void*,std::allocator<void*>>::insert(local_58,local_38[0],1,&local_68);
  local_60 = std::vector<void*,std::allocator<void*>>::end(local_58);
  __normal_iterator<void*const*,std::vector<void*,std::allocator<void*>>>::__normal_iterator<void**>
            ((__normal_iterator<void*const*,std::vector<void*,std::allocator<void*>>> *)local_38,
             (__normal_iterator *)&local_60);
  std::vector<void*,std::allocator<void*>>::insert(local_58,local_38[0],1,&local_68);
  std::vector<void*,std::allocator<void*>>::vector
            ((vector<void*,std::allocator<void*>> *)local_38,(vector *)local_58);
                    /* try { // try from 00101b2e to 00101b32 has its CatchHandler @ 00101b5d */
  goodG2BSink((vector)local_38);
  std::vector<void*,std::allocator<void*>>::~vector((vector<void*,std::allocator<void*>> *)local_38)
  ;
  std::vector<void*,std::allocator<void*>>::~vector(local_58);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* void** std::move_backward<void**, void**>(void**, void**, void**) */

void ** std::move_backward<void**,void**>(void **param_1,void **param_2,void **param_3)

{
  void **ppvVar1;
  void **ppvVar2;
  
  ppvVar1 = __miter_base<void**>(param_2);
  ppvVar2 = __miter_base<void**>(param_1);
  ppvVar1 = __copy_move_backward_a2<true,void**,void**>(ppvVar2,ppvVar1,param_3);
  return ppvVar1;
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
    __isoc99_sscanf(local_18 * 2 + param_3,&DAT_0010518c,local_1c);
    *(char *)(local_18 + param_1) = local_1c[0];
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* void** std::__uninitialized_move_if_noexcept_a<void**, void**, std::allocator<void*> >(void**,
   void**, void**, std::allocator<void*>&) */

void ** std::__uninitialized_move_if_noexcept_a<void**,void**,std::allocator<void*>>
                  (void **param_1,void **param_2,void **param_3,allocator *param_4)

{
  move_iterator mVar1;
  move_iterator mVar2;
  void **ppvVar3;
  
  mVar1 = __make_move_if_noexcept_iterator<void*,std::move_iterator<void**>>(param_2);
  mVar2 = __make_move_if_noexcept_iterator<void*,std::move_iterator<void**>>(param_1);
  ppvVar3 = __uninitialized_copy_a<std::move_iterator<void**>,void**,void*>
                      (mVar2,mVar1,param_3,param_4);
  return ppvVar3;
}




/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* void** std::uninitialized_fill_n<void**, unsigned long, void*>(void**, unsigned long, void*
   const&) */

void ** std::uninitialized_fill_n<void**,unsigned_long,void*>
                  (void **param_1,ulong param_2,void **param_3)

{
  void **ppvVar1;
  
  ppvVar1 = __uninitialized_fill_n<true>::__uninit_fill_n<void**,unsigned_long,void*>
                      (param_1,param_2,param_3);
  return ppvVar1;
}




/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* void** std::fill_n<void**, unsigned long, void*>(void**, unsigned long, void* const&) */

void ** std::fill_n<void**,unsigned_long,void*>(void **param_1,ulong param_2,void **param_3)

{
  __type _Var1;
  void **ppvVar2;
  undefined4 extraout_var;
  void **local_10;
  
  local_10 = param_1;
  ppvVar2 = __niter_base<void**>(param_1);
  _Var1 = __fill_n_a<void**,unsigned_long,void*>(ppvVar2,param_2,param_3);
  ppvVar2 = __niter_wrap<void**>(&local_10,(void **)CONCAT44(extraout_var,_Var1));
  return ppvVar2;
}




/* new_allocator<void*>::new_allocator(new_allocator<void*> const&) */

void new_allocator<void*>::new_allocator(new_allocator *param_1)

{
  return;
}




void printIntLine(uint param_1)

{
  printf("%d\n",(ulong)param_1);
  return;
}




/* void** std::__uninitialized_fill_n<true>::__uninit_fill_n<void**, unsigned long, void*>(void**,
   unsigned long, void* const&) */

void ** std::__uninitialized_fill_n<true>::__uninit_fill_n<void**,unsigned_long,void*>
                  (void **param_1,ulong param_2,void **param_3)

{
  void **ppvVar1;
  
  ppvVar1 = fill_n<void**,unsigned_long,void*>(param_1,param_2,param_3);
  return ppvVar1;
}




/* CWE121_Stack_Based_Buffer_Overflow__CWE135_72::goodB2G() */

void CWE121_Stack_Based_Buffer_Overflow__CWE135_72::goodB2G(void)

{
  long in_FS_OFFSET;
  wchar_t *local_68;
  undefined8 local_60;
  vector<void*,std::allocator<void*>> local_58 [32];
  undefined8 local_38 [3];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  std::vector<void*,std::allocator<void*>>::vector(local_58);
  local_68 = L"AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA";
  local_60 = std::vector<void*,std::allocator<void*>>::end(local_58);
  __normal_iterator<void*const*,std::vector<void*,std::allocator<void*>>>::__normal_iterator<void**>
            ((__normal_iterator<void*const*,std::vector<void*,std::allocator<void*>>> *)local_38,
             (__normal_iterator *)&local_60);
                    /* try { // try from 00101c11 to 00101ca6 has its CatchHandler @ 00101cf2 */
  std::vector<void*,std::allocator<void*>>::insert(local_58,local_38[0],1,&local_68);
  local_60 = std::vector<void*,std::allocator<void*>>::end(local_58);
  __normal_iterator<void*const*,std::vector<void*,std::allocator<void*>>>::__normal_iterator<void**>
            ((__normal_iterator<void*const*,std::vector<void*,std::allocator<void*>>> *)local_38,
             (__normal_iterator *)&local_60);
  std::vector<void*,std::allocator<void*>>::insert(local_58,local_38[0],1,&local_68);
  local_60 = std::vector<void*,std::allocator<void*>>::end(local_58);
  __normal_iterator<void*const*,std::vector<void*,std::allocator<void*>>>::__normal_iterator<void**>
            ((__normal_iterator<void*const*,std::vector<void*,std::allocator<void*>>> *)local_38,
             (__normal_iterator *)&local_60);
  std::vector<void*,std::allocator<void*>>::insert(local_58,local_38[0],1,&local_68);
  std::vector<void*,std::allocator<void*>>::vector
            ((vector<void*,std::allocator<void*>> *)local_38,(vector *)local_58);
                    /* try { // try from 00101cae to 00101cb2 has its CatchHandler @ 00101cdd */
  goodB2GSink((vector)local_38);
  std::vector<void*,std::allocator<void*>>::~vector((vector<void*,std::allocator<void*>> *)local_38)
  ;
  std::vector<void*,std::allocator<void*>>::~vector(local_58);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




/* std::allocator_traits<std::allocator<void*> >::deallocate(std::allocator<void*>&, void**,
   unsigned long) */

void std::allocator_traits<std::allocator<void*>>::deallocate
               (allocator *param_1,void **param_2,ulong param_3)

{
  new_allocator<void*>::deallocate((void **)param_1,(ulong)param_2);
  return;
}




void bad3(void)

{
  return;
}




/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* void** std::__uninitialized_fill_n_a<void**, unsigned long, void*, void*>(void**, unsigned long,
   void* const&, std::allocator<void*>&) */

void ** std::__uninitialized_fill_n_a<void**,unsigned_long,void*,void*>
                  (void **param_1,ulong param_2,void **param_3,allocator *param_4)

{
  void **ppvVar1;
  
  ppvVar1 = uninitialized_fill_n<void**,unsigned_long,void*>(param_1,param_2,param_3);
  return ppvVar1;
}




/* std::_Vector_base<void*, std::allocator<void*> >::_Vector_impl::~_Vector_impl() */

void __thiscall
std::_Vector_base<void*,std::allocator<void*>>::_Vector_impl::~_Vector_impl(_Vector_impl *this)

{
  allocator<void*>::~allocator((allocator<void*> *)this);
  return;
}




/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* void* const& std::forward<void* const&>(std::remove_reference<void* const&>::type&) */

void ** std::forward<void*const&>(type *param_1)

{
  return (void **)param_1;
}




/* void** std::uninitialized_copy<__normal_iterator<void* const*, std::vector<void*,
   std::allocator<void*> > >, void**>(__normal_iterator<void* const*, std::vector<void*,
   std::allocator<void*> > >, __normal_iterator<void* const*, std::vector<void*,
   std::allocator<void*> > >, void**) */

void std::
     uninitialized_copy<__normal_iterator<void*const*,std::vector<void*,std::allocator<void*>>>,void**>
               (undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  __uninitialized_copy<true>::
  __uninit_copy<__normal_iterator<void*const*,std::vector<void*,std::allocator<void*>>>,void**>
            (param_1,param_2,param_3);
  return;
}




void printHexUnsignedCharLine(byte param_1)

{
  printf("%02x\n",(ulong)param_1);
  return;
}




/* new_allocator<void*>::max_size() const */

undefined8 new_allocator<void*>::max_size(void)

{
  return 0xfffffffffffffff;
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




/* __normal_iterator<void* const*, std::vector<void*, std::allocator<void*> > >
   std::__miter_base<__normal_iterator<void* const*, std::vector<void*, std::allocator<void*> > >
   >(__normal_iterator<void* const*, std::vector<void*, std::allocator<void*> > >) */

undefined8
std::__miter_base<__normal_iterator<void*const*,std::vector<void*,std::allocator<void*>>>>
          (undefined8 param_1)

{
  return param_1;
}




void printLongLine(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




/* void new_allocator<void*>::construct<void*, void* const&>(void**, void* const&) */

void __thiscall
new_allocator<void*>::construct<void*,void*const&>
          (new_allocator<void*> *this,void **param_1,void **param_2)

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




void good4(void)

{
  return;
}




/* std::vector<void*, std::allocator<void*> >::vector() */

void __thiscall
std::vector<void*,std::allocator<void*>>::vector(vector<void*,std::allocator<void*>> *this)

{
  _Vector_base<void*,std::allocator<void*>>::_Vector_base
            ((_Vector_base<void*,std::allocator<void*>> *)this);
  return;
}




/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* void** std::__uninitialized_move_a<void**, void**, std::allocator<void*> >(void**, void**,
   void**, std::allocator<void*>&) */

void ** std::__uninitialized_move_a<void**,void**,std::allocator<void*>>
                  (void **param_1,void **param_2,void **param_3,allocator *param_4)

{
  move_iterator mVar1;
  move_iterator mVar2;
  void **ppvVar3;
  
  mVar1 = make_move_iterator<void**>(param_2);
  mVar2 = make_move_iterator<void**>(param_1);
  ppvVar3 = __uninitialized_copy_a<std::move_iterator<void**>,void**,void*>
                      (mVar2,mVar1,param_3,param_4);
  return ppvVar3;
}




/* void* const* std::__niter_base<void* const*, std::vector<void*, std::allocator<void*> >
   >(__normal_iterator<void* const*, std::vector<void*, std::allocator<void*> > >) */

undefined8
std::__niter_base<void*const*,std::vector<void*,std::allocator<void*>>>(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined8 local_10;
  
  local_10 = param_1;
  puVar1 = (undefined8 *)
           __normal_iterator<void*const*,std::vector<void*,std::allocator<void*>>>::base
                     ((__normal_iterator<void*const*,std::vector<void*,std::allocator<void*>>> *)
                      &local_10);
  return *puVar1;
}



