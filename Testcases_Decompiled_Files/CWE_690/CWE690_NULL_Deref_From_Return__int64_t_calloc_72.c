
/* std::_Vector_base<long*, std::allocator<long*> >::_Vector_base() */

void __thiscall
std::_Vector_base<long*,std::allocator<long*>>::_Vector_base
          (_Vector_base<long*,std::allocator<long*>> *this)

{
  _Vector_impl::_Vector_impl((_Vector_impl *)this);
  return;
}




/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* long** std::__copy_move_backward_a<true, long**, long**>(long**, long**, long**) */

long ** std::__copy_move_backward_a<true,long**,long**>
                  (long **param_1,long **param_2,long **param_3)

{
  long **pplVar1;
  
  pplVar1 = __copy_move_backward<true,true,std::random_access_iterator_tag>::__copy_move_b<long*>
                      (param_1,param_2,param_3);
  return pplVar1;
}




/* long** std::copy<__normal_iterator<long* const*, std::vector<long*, std::allocator<long*> > >,
   long**>(__normal_iterator<long* const*, std::vector<long*, std::allocator<long*> > >,
   __normal_iterator<long* const*, std::vector<long*, std::allocator<long*> > >, long**) */

void std::copy<__normal_iterator<long*const*,std::vector<long*,std::allocator<long*>>>,long**>
               (undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = __miter_base<__normal_iterator<long*const*,std::vector<long*,std::allocator<long*>>>>
                    (param_2);
  uVar2 = __miter_base<__normal_iterator<long*const*,std::vector<long*,std::allocator<long*>>>>
                    (param_1);
  __copy_move_a2<false,__normal_iterator<long*const*,std::vector<long*,std::allocator<long*>>>,long**>
            (uVar2,uVar1,param_3);
  return;
}




/* std::allocator<long*>::allocator() */

void std::allocator<long*>::allocator(void)

{
  new_allocator<long*>::new_allocator();
  return;
}




/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* long** std::uninitialized_fill_n<long**, unsigned long, long*>(long**, unsigned long, long*
   const&) */

long ** std::uninitialized_fill_n<long**,unsigned_long,long*>
                  (long **param_1,ulong param_2,long **param_3)

{
  long **pplVar1;
  
  pplVar1 = __uninitialized_fill_n<true>::__uninit_fill_n<long**,unsigned_long,long*>
                      (param_1,param_2,param_3);
  return pplVar1;
}




/* new_allocator<long*>::new_allocator(new_allocator<long*> const&) */

void new_allocator<long*>::new_allocator(new_allocator *param_1)

{
  return;
}




/* __normal_iterator<long* const*, std::vector<long*, std::allocator<long*> > >::base() const */

__normal_iterator<long*const*,std::vector<long*,std::allocator<long*>>> * __thiscall
__normal_iterator<long*const*,std::vector<long*,std::allocator<long*>>>::base
          (__normal_iterator<long*const*,std::vector<long*,std::allocator<long*>>> *this)

{
  return this;
}




/* std::_Vector_base<long*, std::allocator<long*> >::_M_allocate(unsigned long) */

undefined8 __thiscall
std::_Vector_base<long*,std::allocator<long*>>::_M_allocate
          (_Vector_base<long*,std::allocator<long*>> *this,ulong param_1)

{
  undefined8 uVar1;
  
  if (param_1 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = allocator_traits<std::allocator<long*>>::allocate((allocator *)this,param_1);
  }
  return uVar1;
}




void printSizeTLine(undefined8 param_1)

{
  printf("%zu\n",param_1);
  return;
}




/* std::allocator<long*>::allocator(std::allocator<long*> const&) */

void std::allocator<long*>::allocator(allocator *param_1)

{
  new_allocator<long*>::new_allocator((new_allocator *)param_1);
  return;
}




/* std::allocator_traits<std::allocator<long*> >::allocate(std::allocator<long*>&, unsigned long) */

void std::allocator_traits<std::allocator<long*>>::allocate(allocator *param_1,ulong param_2)

{
  new_allocator<long*>::allocate((ulong)param_1,(void *)param_2);
  return;
}




/* long** std::__copy_move_a2<false, __normal_iterator<long* const*, std::vector<long*,
   std::allocator<long*> > >, long**>(__normal_iterator<long* const*, std::vector<long*,
   std::allocator<long*> > >, __normal_iterator<long* const*, std::vector<long*,
   std::allocator<long*> > >, long**) */

void std::
     __copy_move_a2<false,__normal_iterator<long*const*,std::vector<long*,std::allocator<long*>>>,long**>
               (undefined8 param_1,undefined8 param_2,long **param_3)

{
  long **pplVar1;
  long **pplVar2;
  long **pplVar3;
  long **local_30;
  undefined8 local_28;
  undefined8 local_20;
  
  local_30 = param_3;
  local_28 = param_2;
  local_20 = param_1;
  pplVar1 = __niter_base<long**>(param_3);
  pplVar2 = (long **)__niter_base<long*const*,std::vector<long*,std::allocator<long*>>>(local_28);
  pplVar3 = (long **)__niter_base<long*const*,std::vector<long*,std::allocator<long*>>>(local_20);
  pplVar1 = __copy_move_a<false,long*const*,long**>(pplVar3,pplVar2,pplVar1);
  __niter_wrap<long**>(&local_30,pplVar1);
  return;
}




void good2(void)

{
  return;
}




undefined8 main(void)

{
  time_t tVar1;
  
  tVar1 = time((time_t *)0x0);
  srand((uint)tVar1);
  printLine("Calling good()...");
  CWE690_NULL_Deref_From_Return__int64_t_calloc_72::good();
  printLine("Finished good()");
  printLine("Calling bad()...");
  CWE690_NULL_Deref_From_Return__int64_t_calloc_72::bad();
  printLine("Finished bad()");
  return 0;
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




/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* long** std::__uninitialized_move_if_noexcept_a<long**, long**, std::allocator<long*> >(long**,
   long**, long**, std::allocator<long*>&) */

long ** std::__uninitialized_move_if_noexcept_a<long**,long**,std::allocator<long*>>
                  (long **param_1,long **param_2,long **param_3,allocator *param_4)

{
  move_iterator mVar1;
  move_iterator mVar2;
  long **pplVar3;
  
  mVar1 = __make_move_if_noexcept_iterator<long*,std::move_iterator<long**>>(param_2);
  mVar2 = __make_move_if_noexcept_iterator<long*,std::move_iterator<long**>>(param_1);
  pplVar3 = __uninitialized_copy_a<std::move_iterator<long**>,long**,long*>
                      (mVar2,mVar1,param_3,param_4);
  return pplVar3;
}




/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* long** std::move_backward<long**, long**>(long**, long**, long**) */

long ** std::move_backward<long**,long**>(long **param_1,long **param_2,long **param_3)

{
  long **pplVar1;
  long **pplVar2;
  
  pplVar1 = __miter_base<long**>(param_2);
  pplVar2 = __miter_base<long**>(param_1);
  pplVar1 = __copy_move_backward_a2<true,long**,long**>(pplVar2,pplVar1,param_3);
  return pplVar1;
}




/* long** std::__uninitialized_copy<true>::__uninit_copy<std::move_iterator<long**>,
   long**>(std::move_iterator<long**>, std::move_iterator<long**>, long**) */

long ** std::__uninitialized_copy<true>::__uninit_copy<std::move_iterator<long**>,long**>
                  (move_iterator param_1,move_iterator param_2,long **param_3)

{
  long **pplVar1;
  
  pplVar1 = copy<std::move_iterator<long**>,long**>(param_1,param_2,param_3);
  return pplVar1;
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
    __isoc99_sscanf(local_18 * 2 + param_3,&DAT_001040a8,local_1c);
    *(char *)(local_18 + param_1) = local_1c[0];
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void printIntLine(uint param_1)

{
  printf("%d\n",(ulong)param_1);
  return;
}




/* new_allocator<long*>::deallocate(long**, unsigned long) */

void new_allocator<long*>::deallocate(long **param_1,ulong param_2)

{
  operator_delete((void *)param_2);
  return;
}




/* std::vector<long*, std::allocator<long*> >::max_size() const */

void __thiscall
std::vector<long*,std::allocator<long*>>::max_size(vector<long*,std::allocator<long*>> *this)

{
  allocator *paVar1;
  
  paVar1 = (allocator *)
           _Vector_base<long*,std::allocator<long*>>::_M_get_Tp_allocator
                     ((_Vector_base<long*,std::allocator<long*>> *)this);
  _S_max_size(paVar1);
  return;
}




/* std::vector<long*, std::allocator<long*> >::~vector() */

void __thiscall
std::vector<long*,std::allocator<long*>>::~vector(vector<long*,std::allocator<long*>> *this)

{
  allocator *paVar1;
  
  paVar1 = (allocator *)
           _Vector_base<long*,std::allocator<long*>>::_M_get_Tp_allocator
                     ((_Vector_base<long*,std::allocator<long*>> *)this);
  _Destroy<long**,long*>(*(long ***)this,*(long ***)(this + 8),paVar1);
  _Vector_base<long*,std::allocator<long*>>::~_Vector_base
            ((_Vector_base<long*,std::allocator<long*>> *)this);
  return;
}




void bad1(void)

{
  return;
}




/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* long** std::copy<std::move_iterator<long**>, long**>(std::move_iterator<long**>,
   std::move_iterator<long**>, long**) */

long ** std::copy<std::move_iterator<long**>,long**>
                  (move_iterator param_1,move_iterator param_2,long **param_3)

{
  long **pplVar1;
  long **pplVar2;
  
  pplVar1 = (long **)__miter_base<long**>(param_2);
  pplVar2 = (long **)__miter_base<long**>(param_1);
  pplVar1 = __copy_move_a2<true,long**,long**>(pplVar2,pplVar1,param_3);
  return pplVar1;
}




/* std::vector<long*, std::allocator<long*> >::operator[](unsigned long) */

long __thiscall
std::vector<long*,std::allocator<long*>>::operator[]
          (vector<long*,std::allocator<long*>> *this,ulong param_1)

{
  return *(long *)this + param_1 * 8;
}




/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* long** std::__copy_move_a<false, long* const*, long**>(long* const*, long* const*, long**) */

long ** std::__copy_move_a<false,long*const*,long**>(long **param_1,long **param_2,long **param_3)

{
  long **pplVar1;
  
  pplVar1 = __copy_move<false,true,std::random_access_iterator_tag>::__copy_m<long*>
                      (param_1,param_2,param_3);
  return pplVar1;
}




void printUnsignedLine(uint param_1)

{
  printf("%u\n",(ulong)param_1);
  return;
}




void stdThreadLockDestroy(pthread_mutex_t *param_1)

{
  pthread_mutex_destroy(param_1);
  free(param_1);
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
    __isoc99_swscanf(local_18 * 8 + param_3,&DAT_001040b0,local_1c);
    *(char *)(local_18 + param_1) = local_1c[0];
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* long** std::fill_n<long**, unsigned long, long*>(long**, unsigned long, long* const&) */

long ** std::fill_n<long**,unsigned_long,long*>(long **param_1,ulong param_2,long **param_3)

{
  __type _Var1;
  long **pplVar2;
  undefined4 extraout_var;
  long **local_10;
  
  local_10 = param_1;
  pplVar2 = __niter_base<long**>(param_1);
  _Var1 = __fill_n_a<long**,unsigned_long,long*>(pplVar2,param_2,param_3);
  pplVar2 = __niter_wrap<long**>(&local_10,(long **)CONCAT44(extraout_var,_Var1));
  return pplVar2;
}




void good8(void)

{
  return;
}




/* long** std::__copy_move<true, true, std::random_access_iterator_tag>::__copy_m<long*>(long*
   const*, long* const*, long**) */

long ** std::__copy_move<true,true,std::random_access_iterator_tag>::__copy_m<long*>
                  (long **param_1,long **param_2,long **param_3)

{
  long lVar1;
  
  lVar1 = (long)param_2 - (long)param_1 >> 3;
  if (lVar1 != 0) {
    memmove(param_3,param_1,lVar1 * 8);
  }
  return param_3 + lVar1;
}




/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* long** std::__uninitialized_copy_a<std::move_iterator<long**>, long**,
   long*>(std::move_iterator<long**>, std::move_iterator<long**>, long**, std::allocator<long*>&) */

long ** std::__uninitialized_copy_a<std::move_iterator<long**>,long**,long*>
                  (move_iterator param_1,move_iterator param_2,long **param_3,allocator *param_4)

{
  long **pplVar1;
  
  pplVar1 = uninitialized_copy<std::move_iterator<long**>,long**>(param_1,param_2,param_3);
  return pplVar1;
}




void stdThreadLockAcquire(pthread_mutex_t *param_1)

{
  pthread_mutex_lock(param_1);
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




/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* long** std::__miter_base<long**>(long**) */

long ** std::__miter_base<long**>(long **param_1)

{
  return param_1;
}




/* __normal_iterator<long**, std::vector<long*, std::allocator<long*> > >::__normal_iterator(long**
   const&) */

void __thiscall
__normal_iterator<long**,std::vector<long*,std::allocator<long*>>>::__normal_iterator
          (__normal_iterator<long**,std::vector<long*,std::allocator<long*>>> *this,long ***param_1)

{
  *(long ***)this = *param_1;
  return;
}




/* std::_Vector_base<long*, std::allocator<long*>
   >::_Vector_impl::_Vector_impl(std::allocator<long*> const&) */

void __thiscall
std::_Vector_base<long*,std::allocator<long*>>::_Vector_impl::_Vector_impl
          (_Vector_impl *this,allocator *param_1)

{
  allocator<long*>::allocator((allocator *)this);
  _Vector_impl_data::_Vector_impl_data((_Vector_impl_data *)this);
  return;
}




void bad8(void)

{
  return;
}




int globalReturnsTrueOrFalse(void)

{
  int iVar1;
  
  iVar1 = rand();
  return iVar1 % 2;
}




/* std::vector<long*, std::allocator<long*> >::vector(std::vector<long*, std::allocator<long*> >
   const&) */

void __thiscall
std::vector<long*,std::allocator<long*>>::vector
          (vector<long*,std::allocator<long*>> *this,vector *param_1)

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
  _Vector_base<long*,std::allocator<long*>>::_M_get_Tp_allocator
            ((_Vector_base<long*,std::allocator<long*>> *)param_1);
  __alloc_traits<std::allocator<long*>,long*>::_S_select_on_copy(&local_31);
  uVar1 = size((vector<long*,std::allocator<long*>> *)param_1);
                    /* try { // try from 00101c42 to 00101c46 has its CatchHandler @ 00101caf */
  _Vector_base<long*,std::allocator<long*>>::_Vector_base
            ((_Vector_base<long*,std::allocator<long*>> *)this,uVar1,&local_31);
  allocator<long*>::~allocator((allocator<long*> *)&local_31);
  uVar2 = _Vector_base<long*,std::allocator<long*>>::_M_get_Tp_allocator
                    ((_Vector_base<long*,std::allocator<long*>> *)this);
  uVar5 = *(undefined8 *)this;
  uVar3 = end((vector<long*,std::allocator<long*>> *)param_1);
  uVar4 = begin((vector<long*,std::allocator<long*>> *)param_1);
                    /* try { // try from 00101c90 to 00101c94 has its CatchHandler @ 00101ccd */
  uVar5 = __uninitialized_copy_a<__normal_iterator<long*const*,std::vector<long*,std::allocator<long*>>>,long**,long*>
                    (uVar4,uVar3,uVar5,uVar2);
  *(undefined8 *)(this + 8) = uVar5;
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void bad5(void)

{
  return;
}




/* std::vector<long*, std::allocator<long*> >::_M_fill_insert(__normal_iterator<long**,
   std::vector<long*, std::allocator<long*> > >, unsigned long, long* const&) */

void __thiscall
std::vector<long*,std::allocator<long*>>::_M_fill_insert
          (vector<long*,std::allocator<long*>> *this,undefined8 param_2,ulong param_3,long **param_4
          )

{
  long lVar1;
  difference_type dVar2;
  undefined4 extraout_var;
  allocator *paVar3;
  undefined8 *puVar4;
  long *plVar5;
  long **pplVar6;
  undefined4 extraout_var_00;
  long in_FS_OFFSET;
  undefined8 local_88;
  vector<long*,std::allocator<long*>> *local_80;
  undefined8 local_78;
  long **local_70;
  ulong local_68;
  long local_60;
  long **local_58;
  long **local_50;
  ulong local_48;
  long **local_40;
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
      local_70 = (long **)_Vector_base<long*,std::allocator<long*>>::_M_allocate
                                    ((_Vector_base<long*,std::allocator<long*>> *)local_80,local_68)
      ;
      local_58 = local_70;
      paVar3 = (allocator *)
               _Vector_base<long*,std::allocator<long*>>::_M_get_Tp_allocator
                         ((_Vector_base<long*,std::allocator<long*>> *)local_80);
                    /* try { // try from 001021b2 to 0010223d has its CatchHandler @ 001022f5 */
      __uninitialized_fill_n_a<long**,unsigned_long,long*,long*>
                (local_58 + local_60,param_3,param_4,paVar3);
      local_70 = (long **)0x0;
      paVar3 = (allocator *)
               _Vector_base<long*,std::allocator<long*>>::_M_get_Tp_allocator
                         ((_Vector_base<long*,std::allocator<long*>> *)local_80);
      puVar4 = (undefined8 *)
               __normal_iterator<long**,std::vector<long*,std::allocator<long*>>>::base
                         ((__normal_iterator<long**,std::vector<long*,std::allocator<long*>>> *)
                          &local_88);
      local_70 = __uninitialized_move_if_noexcept_a<long**,long**,std::allocator<long*>>
                           (*(long ***)local_80,(long **)*puVar4,local_58,paVar3);
      local_70 = local_70 + param_3;
      paVar3 = (allocator *)
               _Vector_base<long*,std::allocator<long*>>::_M_get_Tp_allocator
                         ((_Vector_base<long*,std::allocator<long*>> *)local_80);
      pplVar6 = *(long ***)(local_80 + 8);
      puVar4 = (undefined8 *)
               __normal_iterator<long**,std::vector<long*,std::allocator<long*>>>::base
                         ((__normal_iterator<long**,std::vector<long*,std::allocator<long*>>> *)
                          &local_88);
      local_70 = __uninitialized_move_if_noexcept_a<long**,long**,std::allocator<long*>>
                           ((long **)*puVar4,pplVar6,local_70,paVar3);
      paVar3 = (allocator *)
               _Vector_base<long*,std::allocator<long*>>::_M_get_Tp_allocator
                         ((_Vector_base<long*,std::allocator<long*>> *)local_80);
      _Destroy<long**,long*>(*(long ***)local_80,*(long ***)(local_80 + 8),paVar3);
      _Vector_base<long*,std::allocator<long*>>::_M_deallocate
                ((_Vector_base<long*,std::allocator<long*>> *)local_80,*(long ***)local_80,
                 *(long *)(local_80 + 0x10) - *(long *)local_80 >> 3);
      *(long ***)local_80 = local_58;
      *(long ***)(local_80 + 8) = local_70;
      *(long ***)(local_80 + 0x10) = local_58 + local_68;
    }
    else {
      _Temporary_value::_Temporary_value<long*const&>(local_38,(vector *)this,param_4);
                    /* try { // try from 00101f32 to 00102105 has its CatchHandler @ 001022d7 */
      local_50 = (long **)_Temporary_value::_M_val(local_38);
      local_78 = end(local_80);
      dVar2 = operator-((__normal_iterator *)&local_78,(__normal_iterator *)&local_88);
      local_48 = CONCAT44(extraout_var,dVar2);
      local_40 = *(long ***)(local_80 + 8);
      if (param_3 < local_48) {
        paVar3 = (allocator *)
                 _Vector_base<long*,std::allocator<long*>>::_M_get_Tp_allocator
                           ((_Vector_base<long*,std::allocator<long*>> *)local_80);
        __uninitialized_move_a<long**,long**,std::allocator<long*>>
                  ((long **)(param_3 * -8 + *(long *)(local_80 + 8)),*(long ***)(local_80 + 8),
                   *(long ***)(local_80 + 8),paVar3);
        *(ulong *)(local_80 + 8) = param_3 * 8 + *(long *)(local_80 + 8);
        pplVar6 = local_40 + -param_3;
        puVar4 = (undefined8 *)
                 __normal_iterator<long**,std::vector<long*,std::allocator<long*>>>::base
                           ((__normal_iterator<long**,std::vector<long*,std::allocator<long*>>> *)
                            &local_88);
        move_backward<long**,long**>((long **)*puVar4,pplVar6,local_40);
        plVar5 = (long *)__normal_iterator<long**,std::vector<long*,std::allocator<long*>>>::base
                                   ((__normal_iterator<long**,std::vector<long*,std::allocator<long*>>>
                                     *)&local_88);
        lVar1 = *plVar5;
        puVar4 = (undefined8 *)
                 __normal_iterator<long**,std::vector<long*,std::allocator<long*>>>::base
                           ((__normal_iterator<long**,std::vector<long*,std::allocator<long*>>> *)
                            &local_88);
        fill<long**,long*>((long **)*puVar4,(long **)(lVar1 + param_3 * 8),local_50);
      }
      else {
        paVar3 = (allocator *)
                 _Vector_base<long*,std::allocator<long*>>::_M_get_Tp_allocator
                           ((_Vector_base<long*,std::allocator<long*>> *)local_80);
        pplVar6 = __uninitialized_fill_n_a<long**,unsigned_long,long*,long*>
                            (*(long ***)(local_80 + 8),param_3 - local_48,local_50,paVar3);
        *(long ***)(local_80 + 8) = pplVar6;
        paVar3 = (allocator *)
                 _Vector_base<long*,std::allocator<long*>>::_M_get_Tp_allocator
                           ((_Vector_base<long*,std::allocator<long*>> *)local_80);
        pplVar6 = *(long ***)(local_80 + 8);
        puVar4 = (undefined8 *)
                 __normal_iterator<long**,std::vector<long*,std::allocator<long*>>>::base
                           ((__normal_iterator<long**,std::vector<long*,std::allocator<long*>>> *)
                            &local_88);
        __uninitialized_move_a<long**,long**,std::allocator<long*>>
                  ((long **)*puVar4,local_40,pplVar6,paVar3);
        *(ulong *)(local_80 + 8) = local_48 * 8 + *(long *)(local_80 + 8);
        puVar4 = (undefined8 *)
                 __normal_iterator<long**,std::vector<long*,std::allocator<long*>>>::base
                           ((__normal_iterator<long**,std::vector<long*,std::allocator<long*>>> *)
                            &local_88);
        fill<long**,long*>((long **)*puVar4,local_40,local_50);
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




/* std::vector<long*, std::allocator<long*> >::end() const */

undefined8 __thiscall
std::vector<long*,std::allocator<long*>>::end(vector<long*,std::allocator<long*>> *this)

{
  long in_FS_OFFSET;
  long **local_20;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_20 = *(long ***)(this + 8);
  __normal_iterator<long*const*,std::vector<long*,std::allocator<long*>>>::__normal_iterator
            ((__normal_iterator<long*const*,std::vector<long*,std::allocator<long*>>> *)&local_18,
             &local_20);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* void std::fill<long**, long*>(long**, long**, long* const&) */

void std::fill<long**,long*>(long **param_1,long **param_2,long **param_3)

{
  long **pplVar1;
  long **pplVar2;
  
  pplVar1 = __niter_base<long**>(param_2);
  pplVar2 = __niter_base<long**>(param_1);
  __fill_a<long**,long*>(pplVar2,pplVar1,param_3);
  return;
}




/* std::_Vector_base<long*, std::allocator<long*> >::_M_get_Tp_allocator() const */

_Vector_base<long*,std::allocator<long*>> * __thiscall
std::_Vector_base<long*,std::allocator<long*>>::_M_get_Tp_allocator
          (_Vector_base<long*,std::allocator<long*>> *this)

{
  return this;
}




/* __normal_iterator<long* const*, std::vector<long*, std::allocator<long*> >
   >::__normal_iterator<long**>(__normal_iterator<long**, __enable_if<std::__are_same<long**,
   long**>::__value, std::vector<long*, std::allocator<long*> > >::__type> const&) */

void __thiscall
__normal_iterator<long*const*,std::vector<long*,std::allocator<long*>>>::__normal_iterator<long**>
          (__normal_iterator<long*const*,std::vector<long*,std::allocator<long*>>> *this,
          __normal_iterator *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)
           __normal_iterator<long**,std::vector<long*,std::allocator<long*>>>::base
                     ((__normal_iterator<long**,std::vector<long*,std::allocator<long*>>> *)param_1)
  ;
  *(undefined8 *)this = *puVar1;
  return;
}




/* long** std::__uninitialized_copy<true>::__uninit_copy<__normal_iterator<long* const*,
   std::vector<long*, std::allocator<long*> > >, long**>(__normal_iterator<long* const*,
   std::vector<long*, std::allocator<long*> > >, __normal_iterator<long* const*, std::vector<long*,
   std::allocator<long*> > >, long**) */

void std::__uninitialized_copy<true>::
     __uninit_copy<__normal_iterator<long*const*,std::vector<long*,std::allocator<long*>>>,long**>
               (undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  copy<__normal_iterator<long*const*,std::vector<long*,std::allocator<long*>>>,long**>
            (param_1,param_2,param_3);
  return;
}




/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* long** std::__copy_move_a<true, long**, long**>(long**, long**, long**) */

long ** std::__copy_move_a<true,long**,long**>(long **param_1,long **param_2,long **param_3)

{
  long **pplVar1;
  
  pplVar1 = __copy_move<true,true,std::random_access_iterator_tag>::__copy_m<long*>
                      (param_1,param_2,param_3);
  return pplVar1;
}




/* __normal_iterator<long* const*, std::vector<long*, std::allocator<long*> >
   >::__normal_iterator(long* const* const&) */

void __thiscall
__normal_iterator<long*const*,std::vector<long*,std::allocator<long*>>>::__normal_iterator
          (__normal_iterator<long*const*,std::vector<long*,std::allocator<long*>>> *this,
          long ***param_1)

{
  *(long ***)this = *param_1;
  return;
}




/* std::_Vector_base<long*, std::allocator<long*> >::_M_create_storage(unsigned long) */

void __thiscall
std::_Vector_base<long*,std::allocator<long*>>::_M_create_storage
          (_Vector_base<long*,std::allocator<long*>> *this,ulong param_1)

{
  undefined8 uVar1;
  
  uVar1 = _M_allocate(this,param_1);
  *(undefined8 *)this = uVar1;
  *(undefined8 *)(this + 8) = *(undefined8 *)this;
  *(ulong *)(this + 0x10) = param_1 * 8 + *(long *)this;
  return;
}




void bad6(void)

{
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




/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* long** std::__uninitialized_fill_n_a<long**, unsigned long, long*, long*>(long**, unsigned long,
   long* const&, std::allocator<long*>&) */

long ** std::__uninitialized_fill_n_a<long**,unsigned_long,long*,long*>
                  (long **param_1,ulong param_2,long **param_3,allocator *param_4)

{
  long **pplVar1;
  
  pplVar1 = uninitialized_fill_n<long**,unsigned_long,long*>(param_1,param_2,param_3);
  return pplVar1;
}




/* void new_allocator<long*>::construct<long*, long* const&>(long**, long* const&) */

void __thiscall
new_allocator<long*>::construct<long*,long*const&>
          (new_allocator<long*> *this,long **param_1,long **param_2)

{
  long *plVar1;
  long **pplVar2;
  undefined8 *puVar3;
  
  pplVar2 = std::forward<long*const&>((type *)param_2);
  plVar1 = *pplVar2;
  puVar3 = (undefined8 *)operator_new(8,param_1);
  *puVar3 = plVar1;
  return;
}




/* CWE690_NULL_Deref_From_Return__int64_t_calloc_72::goodB2G() */

void CWE690_NULL_Deref_From_Return__int64_t_calloc_72::goodB2G(void)

{
  long in_FS_OFFSET;
  void *local_68;
  undefined8 local_60;
  vector<long*,std::allocator<long*>> local_58 [32];
  undefined8 local_38 [3];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  std::vector<long*,std::allocator<long*>>::vector(local_58);
  local_68 = (void *)0x0;
  local_68 = calloc(1,8);
  local_60 = std::vector<long*,std::allocator<long*>>::end(local_58);
  __normal_iterator<long*const*,std::vector<long*,std::allocator<long*>>>::__normal_iterator<long**>
            ((__normal_iterator<long*const*,std::vector<long*,std::allocator<long*>>> *)local_38,
             (__normal_iterator *)&local_60);
                    /* try { // try from 001017bb to 00101850 has its CatchHandler @ 0010189c */
  std::vector<long*,std::allocator<long*>>::insert(local_58,local_38[0],1,&local_68);
  local_60 = std::vector<long*,std::allocator<long*>>::end(local_58);
  __normal_iterator<long*const*,std::vector<long*,std::allocator<long*>>>::__normal_iterator<long**>
            ((__normal_iterator<long*const*,std::vector<long*,std::allocator<long*>>> *)local_38,
             (__normal_iterator *)&local_60);
  std::vector<long*,std::allocator<long*>>::insert(local_58,local_38[0],1,&local_68);
  local_60 = std::vector<long*,std::allocator<long*>>::end(local_58);
  __normal_iterator<long*const*,std::vector<long*,std::allocator<long*>>>::__normal_iterator<long**>
            ((__normal_iterator<long*const*,std::vector<long*,std::allocator<long*>>> *)local_38,
             (__normal_iterator *)&local_60);
  std::vector<long*,std::allocator<long*>>::insert(local_58,local_38[0],1,&local_68);
  std::vector<long*,std::allocator<long*>>::vector
            ((vector<long*,std::allocator<long*>> *)local_38,(vector *)local_58);
                    /* try { // try from 00101858 to 0010185c has its CatchHandler @ 00101887 */
  goodB2GSink((vector)local_38);
  std::vector<long*,std::allocator<long*>>::~vector((vector<long*,std::allocator<long*>> *)local_38)
  ;
  std::vector<long*,std::allocator<long*>>::~vector(local_58);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




/* std::allocator_traits<std::allocator<long*>
   >::select_on_container_copy_construction(std::allocator<long*> const&) */

allocator *
std::allocator_traits<std::allocator<long*>>::select_on_container_copy_construction
          (allocator *param_1)

{
  allocator<long*>::allocator(param_1);
  return param_1;
}




/* long** std::uninitialized_copy<__normal_iterator<long* const*, std::vector<long*,
   std::allocator<long*> > >, long**>(__normal_iterator<long* const*, std::vector<long*,
   std::allocator<long*> > >, __normal_iterator<long* const*, std::vector<long*,
   std::allocator<long*> > >, long**) */

void std::
     uninitialized_copy<__normal_iterator<long*const*,std::vector<long*,std::allocator<long*>>>,long**>
               (undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  __uninitialized_copy<true>::
  __uninit_copy<__normal_iterator<long*const*,std::vector<long*,std::allocator<long*>>>,long**>
            (param_1,param_2,param_3);
  return;
}




/* std::vector<long*, std::allocator<long*> >::begin() const */

undefined8 __thiscall
std::vector<long*,std::allocator<long*>>::begin(vector<long*,std::allocator<long*>> *this)

{
  long in_FS_OFFSET;
  long **local_20;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_20 = *(long ***)this;
  __normal_iterator<long*const*,std::vector<long*,std::allocator<long*>>>::__normal_iterator
            ((__normal_iterator<long*const*,std::vector<long*,std::allocator<long*>>> *)&local_18,
             &local_20);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




/* std::vector<long*, std::allocator<long*> >::vector() */

void __thiscall
std::vector<long*,std::allocator<long*>>::vector(vector<long*,std::allocator<long*>> *this)

{
  _Vector_base<long*,std::allocator<long*>>::_Vector_base
            ((_Vector_base<long*,std::allocator<long*>> *)this);
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




void printLongLine(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




/* void std::_Destroy_aux<true>::__destroy<long**>(long**, long**) */

void std::_Destroy_aux<true>::__destroy<long**>(long **param_1,long **param_2)

{
  return;
}




/* std::vector<long*, std::allocator<long*> >::begin() */

undefined8 __thiscall
std::vector<long*,std::allocator<long*>>::begin(vector<long*,std::allocator<long*>> *this)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  __normal_iterator<long**,std::vector<long*,std::allocator<long*>>>::__normal_iterator
            ((__normal_iterator<long**,std::vector<long*,std::allocator<long*>>> *)&local_18,
             (long ***)this);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* long** std::uninitialized_copy<std::move_iterator<long**>, long**>(std::move_iterator<long**>,
   std::move_iterator<long**>, long**) */

long ** std::uninitialized_copy<std::move_iterator<long**>,long**>
                  (move_iterator param_1,move_iterator param_2,long **param_3)

{
  long **pplVar1;
  
  pplVar1 = __uninitialized_copy<true>::__uninit_copy<std::move_iterator<long**>,long**>
                      (param_1,param_2,param_3);
  return pplVar1;
}




/* void std::allocator_traits<std::allocator<long*> >::destroy<long*>(std::allocator<long*>&,
   long**) */

void std::allocator_traits<std::allocator<long*>>::destroy<long*>(allocator *param_1,long **param_2)

{
  new_allocator<long*>::destroy<long*>((long **)param_1);
  return;
}




/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* __enable_if<std::__is_scalar<long*>::__value, long**>::__type std::__fill_n_a<long**, unsigned
   long, long*>(long**, unsigned long, long* const&) */

__type std::__fill_n_a<long**,unsigned_long,long*>(long **param_1,ulong param_2,long **param_3)

{
  long *plVar1;
  long **local_20;
  ulong local_18;
  
  plVar1 = *param_3;
  local_20 = param_1;
  for (local_18 = param_2; local_18 != 0; local_18 = local_18 - 1) {
    *local_20 = plVar1;
    local_20 = local_20 + 1;
  }
  return (__type)local_20;
}




/* std::vector<long*, std::allocator<long*> >::size() const */

long __thiscall
std::vector<long*,std::allocator<long*>>::size(vector<long*,std::allocator<long*>> *this)

{
  return *(long *)(this + 8) - *(long *)this >> 3;
}




/* std::_Vector_base<long*, std::allocator<long*> >::_Vector_impl_data::_Vector_impl_data() */

void __thiscall
std::_Vector_base<long*,std::allocator<long*>>::_Vector_impl_data::_Vector_impl_data
          (_Vector_impl_data *this)

{
  *(undefined8 *)this = 0;
  *(undefined8 *)(this + 8) = 0;
  *(undefined8 *)(this + 0x10) = 0;
  return;
}




void bad7(void)

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




/* std::_Vector_base<long*, std::allocator<long*> >::_M_deallocate(long**, unsigned long) */

void __thiscall
std::_Vector_base<long*,std::allocator<long*>>::_M_deallocate
          (_Vector_base<long*,std::allocator<long*>> *this,long **param_1,ulong param_2)

{
  if (param_1 != (long **)0x0) {
    allocator_traits<std::allocator<long*>>::deallocate((allocator *)this,param_1,param_2);
  }
  return;
}




/* __normal_iterator<long**, std::vector<long*, std::allocator<long*> >
   >::TEMPNAMEPLACEHOLDERVALUE(long) const */

undefined8 __thiscall
__normal_iterator<long**,std::vector<long*,std::allocator<long*>>>::operator+
          (__normal_iterator<long**,std::vector<long*,std::allocator<long*>>> *this,long param_1)

{
  long in_FS_OFFSET;
  long **local_20;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_20 = (long **)(*(long *)this + param_1 * 8);
  __normal_iterator((__normal_iterator<long**,std::vector<long*,std::allocator<long*>>> *)&local_18,
                    &local_20);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




/* long** std::__uninitialized_copy_a<__normal_iterator<long* const*, std::vector<long*,
   std::allocator<long*> > >, long**, long*>(__normal_iterator<long* const*, std::vector<long*,
   std::allocator<long*> > >, __normal_iterator<long* const*, std::vector<long*,
   std::allocator<long*> > >, long**, std::allocator<long*>&) */

void std::
     __uninitialized_copy_a<__normal_iterator<long*const*,std::vector<long*,std::allocator<long*>>>,long**,long*>
               (undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  uninitialized_copy<__normal_iterator<long*const*,std::vector<long*,std::allocator<long*>>>,long**>
            (param_1,param_2,param_3);
  return;
}




/* std::vector<long*, std::allocator<long*> >::_S_max_size(std::allocator<long*> const&) */

ulong std::vector<long*,std::allocator<long*>>::_S_max_size(allocator *param_1)

{
  ulong *puVar1;
  long in_FS_OFFSET;
  ulong local_20;
  ulong local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_20 = 0xfffffffffffffff;
  local_18 = allocator_traits<std::allocator<long*>>::max_size(param_1);
  puVar1 = min<unsigned_long>(&local_20,&local_18);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return *puVar1;
}




/* std::_Vector_base<long*, std::allocator<long*> >::_Vector_base(unsigned long,
   std::allocator<long*> const&) */

void __thiscall
std::_Vector_base<long*,std::allocator<long*>>::_Vector_base
          (_Vector_base<long*,std::allocator<long*>> *this,ulong param_1,allocator *param_2)

{
  _Vector_impl::_Vector_impl((_Vector_impl *)this,param_2);
                    /* try { // try from 0010253e to 00102542 has its CatchHandler @ 00102545 */
  _M_create_storage(this,param_1);
  return;
}




/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* __enable_if<std::__is_scalar<long*>::__value, void>::__type std::__fill_a<long**, long*>(long**,
   long**, long* const&) */

__type std::__fill_a<long**,long*>(long **param_1,long **param_2,long **param_3)

{
  long *plVar1;
  long **local_20;
  
  plVar1 = *param_3;
  for (local_20 = param_1; local_20 != param_2; local_20 = local_20 + 1) {
    *local_20 = plVar1;
  }
  return (__type)local_20;
}




/* CWE690_NULL_Deref_From_Return__int64_t_calloc_72::goodB2GSink(std::vector<long*,
   std::allocator<long*> >) */

void CWE690_NULL_Deref_From_Return__int64_t_calloc_72::goodB2GSink(vector param_1)

{
  undefined8 *puVar1;
  undefined4 in_register_0000003c;
  
  puVar1 = (undefined8 *)
           std::vector<long*,std::allocator<long*>>::operator[]
                     ((vector<long*,std::allocator<long*>> *)CONCAT44(in_register_0000003c,param_1),
                      2);
  puVar1 = (undefined8 *)*puVar1;
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = 5;
    printLongLongLine(*puVar1);
    free(puVar1);
  }
  return;
}




/* CWE690_NULL_Deref_From_Return__int64_t_calloc_72::good() */

void CWE690_NULL_Deref_From_Return__int64_t_calloc_72::good(void)

{
  goodB2G();
  return;
}




/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* decltype (__miter_base(({parm#1}.base)())) std::__miter_base<long**>(std::move_iterator<long**>)
    */

void std::__miter_base<long**>(move_iterator param_1)

{
  long **pplVar1;
  undefined4 in_register_0000003c;
  undefined8 local_10;
  
  local_10 = CONCAT44(in_register_0000003c,param_1);
  pplVar1 = (long **)move_iterator<long**>::base((move_iterator<long**> *)&local_10);
  __miter_base<long**>(pplVar1);
  return;
}




undefined8 globalReturnsTrue(void)

{
  return 1;
}




void printShortLine(short param_1)

{
  printf("%hd\n",(ulong)(uint)(int)param_1);
  return;
}




/* operator new(unsigned long, void*) */

void * operator_new(ulong param_1,void *param_2)

{
  return param_2;
}




/* std::vector<long*, std::allocator<long*> >::_Temporary_value::~_Temporary_value() */

void __thiscall
std::vector<long*,std::allocator<long*>>::_Temporary_value::~_Temporary_value
          (_Temporary_value *this)

{
  long **pplVar1;
  
  pplVar1 = (long **)_M_ptr(this);
  allocator_traits<std::allocator<long*>>::destroy<long*>(*(allocator **)this,pplVar1);
  return;
}




void bad4(void)

{
  return;
}




/* std::_Vector_base<long*, std::allocator<long*> >::~_Vector_base() */

void __thiscall
std::_Vector_base<long*,std::allocator<long*>>::~_Vector_base
          (_Vector_base<long*,std::allocator<long*>> *this)

{
  _M_deallocate(this,*(long ***)this,*(long *)(this + 0x10) - *(long *)this >> 3);
  _Vector_impl::~_Vector_impl((_Vector_impl *)this);
  return;
}




void printDoubleLine(undefined8 param_1)

{
  printf("%g\n",param_1);
  return;
}




/* new_allocator<long*>::max_size() const */

undefined8 new_allocator<long*>::max_size(void)

{
  return 0xfffffffffffffff;
}




/* std::vector<long*, std::allocator<long*> >::_Temporary_value::_M_ptr() */

_Temporary_value * __thiscall
std::vector<long*,std::allocator<long*>>::_Temporary_value::_M_ptr(_Temporary_value *this)

{
  return this + 8;
}




/* std::allocator_traits<std::allocator<long*> >::max_size(std::allocator<long*> const&) */

void std::allocator_traits<std::allocator<long*>>::max_size(allocator *param_1)

{
  new_allocator<long*>::max_size();
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




/* void new_allocator<long*>::destroy<long*>(long**) */

void new_allocator<long*>::destroy<long*>(long **param_1)

{
  return;
}




/* CWE690_NULL_Deref_From_Return__int64_t_calloc_72::badSink(std::vector<long*,
   std::allocator<long*> >) */

void CWE690_NULL_Deref_From_Return__int64_t_calloc_72::badSink(vector param_1)

{
  undefined8 *puVar1;
  undefined4 in_register_0000003c;
  
  puVar1 = (undefined8 *)
           std::vector<long*,std::allocator<long*>>::operator[]
                     ((vector<long*,std::allocator<long*>> *)CONCAT44(in_register_0000003c,param_1),
                      2);
  puVar1 = (undefined8 *)*puVar1;
  *puVar1 = 5;
  printLongLongLine(*puVar1);
  free(puVar1);
  return;
}




/* std::vector<long*, std::allocator<long*> >::end() */

undefined8 __thiscall
std::vector<long*,std::allocator<long*>>::end(vector<long*,std::allocator<long*>> *this)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  __normal_iterator<long**,std::vector<long*,std::allocator<long*>>>::__normal_iterator
            ((__normal_iterator<long**,std::vector<long*,std::allocator<long*>>> *)&local_18,
             (long ***)(this + 8));
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




/* std::move_iterator<long**>::base() const */

undefined8 __thiscall std::move_iterator<long**>::base(move_iterator<long**> *this)

{
  return *(undefined8 *)this;
}




/* __normal_iterator<long**, std::vector<long*, std::allocator<long*> > >::base() const */

__normal_iterator<long**,std::vector<long*,std::allocator<long*>>> * __thiscall
__normal_iterator<long**,std::vector<long*,std::allocator<long*>>>::base
          (__normal_iterator<long**,std::vector<long*,std::allocator<long*>>> *this)

{
  return this;
}




void bad2(void)

{
  return;
}




/* void std::allocator_traits<std::allocator<long*> >::construct<long*, long*
   const&>(std::allocator<long*>&, long**, long* const&) */

void std::allocator_traits<std::allocator<long*>>::construct<long*,long*const&>
               (allocator *param_1,long **param_2,long **param_3)

{
  long **pplVar1;
  
  pplVar1 = forward<long*const&>((type *)param_3);
  new_allocator<long*>::construct<long*,long*const&>
            ((new_allocator<long*> *)param_1,param_2,pplVar1);
  return;
}




void good6(void)

{
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




void good3(void)

{
  return;
}




void good7(void)

{
  return;
}




/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* long** std::__copy_move_a2<true, long**, long**>(long**, long**, long**) */

long ** std::__copy_move_a2<true,long**,long**>(long **param_1,long **param_2,long **param_3)

{
  long **pplVar1;
  long **pplVar2;
  long **pplVar3;
  long **local_30;
  long **local_28;
  long **local_20;
  
  local_30 = param_3;
  local_28 = param_2;
  local_20 = param_1;
  pplVar1 = __niter_base<long**>(param_3);
  pplVar2 = __niter_base<long**>(local_28);
  pplVar3 = __niter_base<long**>(local_20);
  pplVar1 = __copy_move_a<true,long**,long**>(pplVar3,pplVar2,pplVar1);
  pplVar1 = __niter_wrap<long**>(&local_30,pplVar1);
  return pplVar1;
}




/* __normal_iterator<long**, std::vector<long*, std::allocator<long*> > >::difference_type
   TEMPNAMEPLACEHOLDERVALUE(__normal_iterator<long**, std::vector<long*, std::allocator<long*> > >
   const&, __normal_iterator<long**, std::vector<long*, std::allocator<long*> > > const&) */

difference_type operator-(__normal_iterator *param_1,__normal_iterator *param_2)

{
  long lVar1;
  long *plVar2;
  
  plVar2 = (long *)__normal_iterator<long**,std::vector<long*,std::allocator<long*>>>::base
                             ((__normal_iterator<long**,std::vector<long*,std::allocator<long*>>> *)
                              param_1);
  lVar1 = *plVar2;
  plVar2 = (long *)__normal_iterator<long**,std::vector<long*,std::allocator<long*>>>::base
                             ((__normal_iterator<long**,std::vector<long*,std::allocator<long*>>> *)
                              param_2);
  return (difference_type)(lVar1 - *plVar2 >> 3);
}




/* std::vector<long*, std::allocator<long*> >::insert(__normal_iterator<long* const*,
   std::vector<long*, std::allocator<long*> > >, unsigned long, long* const&) */

void __thiscall
std::vector<long*,std::allocator<long*>>::insert
          (vector<long*,std::allocator<long*>> *this,undefined8 param_2,undefined8 param_3,
          undefined8 param_4)

{
  difference_type dVar1;
  undefined4 extraout_var;
  undefined8 uVar2;
  long in_FS_OFFSET;
  undefined8 local_38;
  vector<long*,std::allocator<long*>> *local_30;
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
  uVar2 = __normal_iterator<long**,std::vector<long*,std::allocator<long*>>>::operator+
                    ((__normal_iterator<long**,std::vector<long*,std::allocator<long*>>> *)&local_20
                     ,local_18);
  _M_fill_insert(local_30,uVar2,param_3,param_4);
  local_20 = begin(local_30);
  __normal_iterator<long**,std::vector<long*,std::allocator<long*>>>::operator+
            ((__normal_iterator<long**,std::vector<long*,std::allocator<long*>>> *)&local_20,
             local_18);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




/* new_allocator<long*>::~new_allocator() */

void __thiscall new_allocator<long*>::~new_allocator(new_allocator<long*> *this)

{
  return;
}




/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* std::move_iterator<long**> std::make_move_iterator<long**>(long**) */

move_iterator std::make_move_iterator<long**>(long **param_1)

{
  long in_FS_OFFSET;
  move_iterator local_18 [2];
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  move_iterator<long**>::move_iterator((move_iterator<long**> *)local_18,param_1);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18[0];
}




/* std::_Vector_base<long*, std::allocator<long*> >::_Vector_impl::_Vector_impl() */

void __thiscall
std::_Vector_base<long*,std::allocator<long*>>::_Vector_impl::_Vector_impl(_Vector_impl *this)

{
  allocator<long*>::allocator();
  _Vector_impl_data::_Vector_impl_data((_Vector_impl_data *)this);
  return;
}




/* __alloc_traits<std::allocator<long*>, long*>::_S_select_on_copy(std::allocator<long*> const&) */

allocator * __alloc_traits<std::allocator<long*>,long*>::_S_select_on_copy(allocator *param_1)

{
  long lVar1;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  std::allocator_traits<std::allocator<long*>>::select_on_container_copy_construction(param_1);
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1;
}




/* long** std::__copy_move<false, true, std::random_access_iterator_tag>::__copy_m<long*>(long*
   const*, long* const*, long**) */

long ** std::__copy_move<false,true,std::random_access_iterator_tag>::__copy_m<long*>
                  (long **param_1,long **param_2,long **param_3)

{
  long lVar1;
  
  lVar1 = (long)param_2 - (long)param_1 >> 3;
  if (lVar1 != 0) {
    memmove(param_3,param_1,lVar1 * 8);
  }
  return param_3 + lVar1;
}




/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* long** std::__copy_move_backward_a2<true, long**, long**>(long**, long**, long**) */

long ** std::__copy_move_backward_a2<true,long**,long**>
                  (long **param_1,long **param_2,long **param_3)

{
  long **pplVar1;
  long **pplVar2;
  long **pplVar3;
  long **local_30;
  long **local_28;
  long **local_20;
  
  local_30 = param_3;
  local_28 = param_2;
  local_20 = param_1;
  pplVar1 = __niter_base<long**>(param_3);
  pplVar2 = __niter_base<long**>(local_28);
  pplVar3 = __niter_base<long**>(local_20);
  pplVar1 = __copy_move_backward_a<true,long**,long**>(pplVar3,pplVar2,pplVar1);
  pplVar1 = __niter_wrap<long**>(&local_30,pplVar1);
  return pplVar1;
}




/* std::vector<long*, std::allocator<long*> >::_M_check_len(unsigned long, char const*) const */

ulong __thiscall
std::vector<long*,std::allocator<long*>>::_M_check_len
          (vector<long*,std::allocator<long*>> *this,ulong param_1,char *param_2)

{
  long lVar1;
  long lVar2;
  ulong *puVar3;
  ulong uVar4;
  ulong uVar5;
  long in_FS_OFFSET;
  ulong local_48;
  vector<long*,std::allocator<long*>> *local_40;
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




/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* void std::_Destroy<long**>(long**, long**) */

void std::_Destroy<long**>(long **param_1,long **param_2)

{
  _Destroy_aux<true>::__destroy<long**>(param_1,param_2);
  return;
}




/* std::move_iterator<long**>::move_iterator(long**) */

void __thiscall
std::move_iterator<long**>::move_iterator(move_iterator<long**> *this,long **param_1)

{
  *(long ***)this = param_1;
  return;
}




/* std::_Vector_base<long*, std::allocator<long*> >::_Vector_impl::~_Vector_impl() */

void __thiscall
std::_Vector_base<long*,std::allocator<long*>>::_Vector_impl::~_Vector_impl(_Vector_impl *this)

{
  allocator<long*>::~allocator((allocator<long*> *)this);
  return;
}




void printFloatLine(float param_1)

{
  printf("%f\n",(double)param_1);
  return;
}




void printLine(char *param_1)

{
  if (param_1 != (char *)0x0) {
    puts(param_1);
  }
  return;
}




/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* long** std::__niter_base<long**>(long**) */

long ** std::__niter_base<long**>(long **param_1)

{
  return param_1;
}




/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* long** std::__uninitialized_move_a<long**, long**, std::allocator<long*> >(long**, long**,
   long**, std::allocator<long*>&) */

long ** std::__uninitialized_move_a<long**,long**,std::allocator<long*>>
                  (long **param_1,long **param_2,long **param_3,allocator *param_4)

{
  move_iterator mVar1;
  move_iterator mVar2;
  long **pplVar3;
  
  mVar1 = make_move_iterator<long**>(param_2);
  mVar2 = make_move_iterator<long**>(param_1);
  pplVar3 = __uninitialized_copy_a<std::move_iterator<long**>,long**,long*>
                      (mVar2,mVar1,param_3,param_4);
  return pplVar3;
}




/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* long* const& std::forward<long* const&>(std::remove_reference<long* const&>::type&) */

long ** std::forward<long*const&>(type *param_1)

{
  return (long **)param_1;
}




void bad3(void)

{
  return;
}




/* std::allocator<long*>::~allocator() */

void __thiscall std::allocator<long*>::~allocator(allocator<long*> *this)

{
  new_allocator<long*>::~new_allocator((new_allocator<long*> *)this);
  return;
}




undefined8 globalReturnsFalse(void)

{
  return 0;
}




void printStructLine(uint *param_1)

{
  printf("%d -- %d\n",(ulong)*param_1,(ulong)param_1[1]);
  return;
}




/* std::vector<long*, std::allocator<long*> >::cbegin() const */

undefined8 __thiscall
std::vector<long*,std::allocator<long*>>::cbegin(vector<long*,std::allocator<long*>> *this)

{
  long in_FS_OFFSET;
  long **local_20;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_20 = *(long ***)this;
  __normal_iterator<long*const*,std::vector<long*,std::allocator<long*>>>::__normal_iterator
            ((__normal_iterator<long*const*,std::vector<long*,std::allocator<long*>>> *)&local_18,
             &local_20);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* void std::_Destroy<long**, long*>(long**, long**, std::allocator<long*>&) */

void std::_Destroy<long**,long*>(long **param_1,long **param_2,allocator *param_3)

{
  _Destroy<long**>(param_1,param_2);
  return;
}




void bad9(void)

{
  return;
}




/* new_allocator<long*>::new_allocator() */

void new_allocator<long*>::new_allocator(void)

{
  return;
}




/* __normal_iterator<long* const*, std::vector<long*, std::allocator<long*> > >::difference_type
   TEMPNAMEPLACEHOLDERVALUE(__normal_iterator<long* const*, std::vector<long*, std::allocator<long*>
   > > const&, __normal_iterator<long* const*, std::vector<long*, std::allocator<long*> > > const&)
    */

difference_type operator-(__normal_iterator *param_1,__normal_iterator *param_2)

{
  long lVar1;
  long *plVar2;
  
  plVar2 = (long *)__normal_iterator<long*const*,std::vector<long*,std::allocator<long*>>>::base
                             ((__normal_iterator<long*const*,std::vector<long*,std::allocator<long*>>>
                               *)param_1);
  lVar1 = *plVar2;
  plVar2 = (long *)__normal_iterator<long*const*,std::vector<long*,std::allocator<long*>>>::base
                             ((__normal_iterator<long*const*,std::vector<long*,std::allocator<long*>>>
                               *)param_2);
  return (difference_type)(lVar1 - *plVar2 >> 3);
}




/* long** std::__uninitialized_fill_n<true>::__uninit_fill_n<long**, unsigned long, long*>(long**,
   unsigned long, long* const&) */

long ** std::__uninitialized_fill_n<true>::__uninit_fill_n<long**,unsigned_long,long*>
                  (long **param_1,ulong param_2,long **param_3)

{
  long **pplVar1;
  
  pplVar1 = fill_n<long**,unsigned_long,long*>(param_1,param_2,param_3);
  return pplVar1;
}




/* long** std::__copy_move_backward<true, true,
   std::random_access_iterator_tag>::__copy_move_b<long*>(long* const*, long* const*, long**) */

long ** std::__copy_move_backward<true,true,std::random_access_iterator_tag>::__copy_move_b<long*>
                  (long **param_1,long **param_2,long **param_3)

{
  long lVar1;
  
  lVar1 = (long)param_2 - (long)param_1 >> 3;
  if (lVar1 != 0) {
    memmove(param_3 + -lVar1,param_1,lVar1 * 8);
  }
  return param_3 + -lVar1;
}




void printWLine(long param_1)

{
  if (param_1 != 0) {
    wprintf(L"%ls\n",param_1);
  }
  return;
}




void good1(void)

{
  return;
}




void printLongLongLine(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




void FUN_00101020(void)

{
  (*(code *)PTR_00106ee0)();
  return;
}




/* std::_Vector_base<long*, std::allocator<long*> >::_M_get_Tp_allocator() */

_Vector_base<long*,std::allocator<long*>> * __thiscall
std::_Vector_base<long*,std::allocator<long*>>::_M_get_Tp_allocator
          (_Vector_base<long*,std::allocator<long*>> *this)

{
  return this;
}




void internal_start(long param_1)

{
  (**(code **)(param_1 + 8))(*(undefined8 *)(param_1 + 0x10));
                    /* WARNING: Subroutine does not return */
  pthread_exit((void *)0x0);
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




/* std::allocator_traits<std::allocator<long*> >::deallocate(std::allocator<long*>&, long**,
   unsigned long) */

void std::allocator_traits<std::allocator<long*>>::deallocate
               (allocator *param_1,long **param_2,ulong param_3)

{
  new_allocator<long*>::deallocate((long **)param_1,(ulong)param_2);
  return;
}




/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* std::move_iterator<long**> std::__make_move_if_noexcept_iterator<long*,
   std::move_iterator<long**> >(long**) */

move_iterator
std::__make_move_if_noexcept_iterator<long*,std::move_iterator<long**>>(long **param_1)

{
  long in_FS_OFFSET;
  move_iterator local_18 [2];
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  move_iterator<long**>::move_iterator((move_iterator<long**> *)local_18,param_1);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18[0];
}




/* new_allocator<long*>::allocate(unsigned long, void const*) */

void new_allocator<long*>::allocate(ulong param_1,void *param_2)

{
  void *pvVar1;
  
  pvVar1 = (void *)max_size();
  if (pvVar1 < param_2) {
    std::__throw_bad_alloc();
  }
  operator_new((long)param_2 << 3);
  return;
}




/* std::vector<long*, std::allocator<long*> >::_Temporary_value::_Temporary_value<long*
   const&>(std::vector<long*, std::allocator<long*> >*, long* const&) */

void __thiscall
std::vector<long*,std::allocator<long*>>::_Temporary_value::_Temporary_value<long*const&>
          (_Temporary_value *this,vector *param_1,long **param_2)

{
  long **pplVar1;
  long **pplVar2;
  
  *(vector **)this = param_1;
  pplVar1 = forward<long*const&>((type *)param_2);
  pplVar2 = (long **)_M_ptr(this);
  allocator_traits<std::allocator<long*>>::construct<long*,long*const&>
            (*(allocator **)this,pplVar2,pplVar1);
  return;
}




/* long* const* std::__niter_base<long* const*, std::vector<long*, std::allocator<long*> >
   >(__normal_iterator<long* const*, std::vector<long*, std::allocator<long*> > >) */

undefined8
std::__niter_base<long*const*,std::vector<long*,std::allocator<long*>>>(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined8 local_10;
  
  local_10 = param_1;
  puVar1 = (undefined8 *)
           __normal_iterator<long*const*,std::vector<long*,std::allocator<long*>>>::base
                     ((__normal_iterator<long*const*,std::vector<long*,std::allocator<long*>>> *)
                      &local_10);
  return *puVar1;
}




/* CWE690_NULL_Deref_From_Return__int64_t_calloc_72::bad() */

void CWE690_NULL_Deref_From_Return__int64_t_calloc_72::bad(void)

{
  long in_FS_OFFSET;
  void *local_68;
  undefined8 local_60;
  vector<long*,std::allocator<long*>> local_58 [32];
  undefined8 local_38 [3];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  std::vector<long*,std::allocator<long*>>::vector(local_58);
  local_68 = (void *)0x0;
  local_68 = calloc(1,8);
  local_60 = std::vector<long*,std::allocator<long*>>::end(local_58);
  __normal_iterator<long*const*,std::vector<long*,std::allocator<long*>>>::__normal_iterator<long**>
            ((__normal_iterator<long*const*,std::vector<long*,std::allocator<long*>>> *)local_38,
             (__normal_iterator *)&local_60);
                    /* try { // try from 00101633 to 001016c8 has its CatchHandler @ 00101714 */
  std::vector<long*,std::allocator<long*>>::insert(local_58,local_38[0],1,&local_68);
  local_60 = std::vector<long*,std::allocator<long*>>::end(local_58);
  __normal_iterator<long*const*,std::vector<long*,std::allocator<long*>>>::__normal_iterator<long**>
            ((__normal_iterator<long*const*,std::vector<long*,std::allocator<long*>>> *)local_38,
             (__normal_iterator *)&local_60);
  std::vector<long*,std::allocator<long*>>::insert(local_58,local_38[0],1,&local_68);
  local_60 = std::vector<long*,std::allocator<long*>>::end(local_58);
  __normal_iterator<long*const*,std::vector<long*,std::allocator<long*>>>::__normal_iterator<long**>
            ((__normal_iterator<long*const*,std::vector<long*,std::allocator<long*>>> *)local_38,
             (__normal_iterator *)&local_60);
  std::vector<long*,std::allocator<long*>>::insert(local_58,local_38[0],1,&local_68);
  std::vector<long*,std::allocator<long*>>::vector
            ((vector<long*,std::allocator<long*>> *)local_38,(vector *)local_58);
                    /* try { // try from 001016d0 to 001016d4 has its CatchHandler @ 001016ff */
  badSink((vector)local_38);
  std::vector<long*,std::allocator<long*>>::~vector((vector<long*,std::allocator<long*>> *)local_38)
  ;
  std::vector<long*,std::allocator<long*>>::~vector(local_58);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




/* __normal_iterator<long* const*, std::vector<long*, std::allocator<long*> > >
   std::__miter_base<__normal_iterator<long* const*, std::vector<long*, std::allocator<long*> > >
   >(__normal_iterator<long* const*, std::vector<long*, std::allocator<long*> > >) */

undefined8
std::__miter_base<__normal_iterator<long*const*,std::vector<long*,std::allocator<long*>>>>
          (undefined8 param_1)

{
  return param_1;
}




void good4(void)

{
  return;
}




void good5(void)

{
  return;
}




undefined8 stdThreadDestroy(void *param_1)

{
  free(param_1);
  return 1;
}




void printHexCharLine(char param_1)

{
  printf("%02x\n",(ulong)(uint)(int)param_1);
  return;
}




/* std::vector<long*, std::allocator<long*> >::_Temporary_value::_M_val() */

void __thiscall
std::vector<long*,std::allocator<long*>>::_Temporary_value::_M_val(_Temporary_value *this)

{
  _M_ptr(this);
  return;
}




/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* long** std::__niter_wrap<long**>(long** const&, long**) */

long ** std::__niter_wrap<long**>(long ***param_1,long **param_2)

{
  return param_2;
}




void good9(void)

{
  return;
}



