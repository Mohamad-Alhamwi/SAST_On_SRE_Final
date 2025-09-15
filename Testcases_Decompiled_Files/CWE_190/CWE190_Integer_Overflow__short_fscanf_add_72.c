
/* std::allocator<short>::allocator() */

void std::allocator<short>::allocator(void)

{
  new_allocator<short>::new_allocator();
  return;
}




/* new_allocator<short>::new_allocator(new_allocator<short> const&) */

void new_allocator<short>::new_allocator(new_allocator *param_1)

{
  return;
}




void printShortLine(short param_1)

{
  printf("%hd\n",(ulong)(uint)(int)param_1);
  return;
}




void printHexCharLine(char param_1)

{
  printf("%02x\n",(ulong)(uint)(int)param_1);
  return;
}




/* CWE190_Integer_Overflow__short_fscanf_add_72::bad() */

void CWE190_Integer_Overflow__short_fscanf_add_72::bad(void)

{
  long in_FS_OFFSET;
  undefined2 local_62;
  undefined8 local_60;
  vector<short,std::allocator<short>> local_58 [32];
  undefined8 local_38 [3];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  std::vector<short,std::allocator<short>>::vector(local_58);
  local_62 = 0;
                    /* try { // try from 00101531 to 00101605 has its CatchHandler @ 00101651 */
  __isoc99_fscanf(stdin,&DAT_00104005,&local_62);
  local_60 = std::vector<short,std::allocator<short>>::end(local_58);
  __normal_iterator<short_const*,std::vector<short,std::allocator<short>>>::
  __normal_iterator<short*>
            ((__normal_iterator<short_const*,std::vector<short,std::allocator<short>>> *)local_38,
             (__normal_iterator *)&local_60);
  std::vector<short,std::allocator<short>>::insert(local_58,local_38[0],1,&local_62);
  local_60 = std::vector<short,std::allocator<short>>::end(local_58);
  __normal_iterator<short_const*,std::vector<short,std::allocator<short>>>::
  __normal_iterator<short*>
            ((__normal_iterator<short_const*,std::vector<short,std::allocator<short>>> *)local_38,
             (__normal_iterator *)&local_60);
  std::vector<short,std::allocator<short>>::insert(local_58,local_38[0],1,&local_62);
  local_60 = std::vector<short,std::allocator<short>>::end(local_58);
  __normal_iterator<short_const*,std::vector<short,std::allocator<short>>>::
  __normal_iterator<short*>
            ((__normal_iterator<short_const*,std::vector<short,std::allocator<short>>> *)local_38,
             (__normal_iterator *)&local_60);
  std::vector<short,std::allocator<short>>::insert(local_58,local_38[0],1,&local_62);
  std::vector<short,std::allocator<short>>::vector
            ((vector<short,std::allocator<short>> *)local_38,(vector *)local_58);
                    /* try { // try from 0010160d to 00101611 has its CatchHandler @ 0010163c */
  badSink(local_38);
  std::vector<short,std::allocator<short>>::~vector((vector<short,std::allocator<short>> *)local_38)
  ;
  std::vector<short,std::allocator<short>>::~vector(local_58);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




/* std::vector<short, std::allocator<short> >::begin() */

undefined8 __thiscall
std::vector<short,std::allocator<short>>::begin(vector<short,std::allocator<short>> *this)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  __normal_iterator<short*,std::vector<short,std::allocator<short>>>::__normal_iterator
            ((__normal_iterator<short*,std::vector<short,std::allocator<short>>> *)&local_18,
             (short **)this);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




/* short* std::__copy_move<false, true, std::random_access_iterator_tag>::__copy_m<short>(short
   const*, short const*, short*) */

short * std::__copy_move<false,true,std::random_access_iterator_tag>::__copy_m<short>
                  (short *param_1,short *param_2,short *param_3)

{
  long lVar1;
  
  lVar1 = (long)param_2 - (long)param_1 >> 1;
  if (lVar1 != 0) {
    memmove(param_3,param_1,lVar1 * 2);
  }
  return param_3 + lVar1;
}




/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* short* std::fill_n<short*, unsigned long, short>(short*, unsigned long, short const&) */

short * std::fill_n<short*,unsigned_long,short>(short *param_1,ulong param_2,short *param_3)

{
  __type _Var1;
  short *psVar2;
  undefined4 extraout_var;
  short *local_10;
  
  local_10 = param_1;
  psVar2 = __niter_base<short*>(param_1);
  _Var1 = __fill_n_a<short*,unsigned_long,short>(psVar2,param_2,param_3);
  psVar2 = __niter_wrap<short*>(&local_10,(short *)CONCAT44(extraout_var,_Var1));
  return psVar2;
}




/* CWE190_Integer_Overflow__short_fscanf_add_72::goodG2BSink(std::vector<short,
   std::allocator<short> >) */

void CWE190_Integer_Overflow__short_fscanf_add_72::goodG2BSink
               (vector<short,std::allocator<short>> *param_1)

{
  short *psVar1;
  
  psVar1 = (short *)std::vector<short,std::allocator<short>>::operator[](param_1,2);
  printIntLine((int)(short)(*psVar1 + 1));
  return;
}




/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* short* std::__uninitialized_move_if_noexcept_a<short*, short*, std::allocator<short> >(short*,
   short*, short*, std::allocator<short>&) */

short * std::__uninitialized_move_if_noexcept_a<short*,short*,std::allocator<short>>
                  (short *param_1,short *param_2,short *param_3,allocator *param_4)

{
  move_iterator mVar1;
  move_iterator mVar2;
  short *psVar3;
  
  mVar1 = __make_move_if_noexcept_iterator<short,std::move_iterator<short*>>(param_2);
  mVar2 = __make_move_if_noexcept_iterator<short,std::move_iterator<short*>>(param_1);
  psVar3 = __uninitialized_copy_a<std::move_iterator<short*>,short*,short>
                     (mVar2,mVar1,param_3,param_4);
  return psVar3;
}




/* std::vector<short, std::allocator<short> >::_S_max_size(std::allocator<short> const&) */

ulong std::vector<short,std::allocator<short>>::_S_max_size(allocator *param_1)

{
  ulong *puVar1;
  long in_FS_OFFSET;
  ulong local_20;
  ulong local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_20 = 0x3fffffffffffffff;
  local_18 = allocator_traits<std::allocator<short>>::max_size(param_1);
  puVar1 = min<unsigned_long>(&local_20,&local_18);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return *puVar1;
}




/* short* std::__copy_move_backward<true, true,
   std::random_access_iterator_tag>::__copy_move_b<short>(short const*, short const*, short*) */

short * std::__copy_move_backward<true,true,std::random_access_iterator_tag>::__copy_move_b<short>
                  (short *param_1,short *param_2,short *param_3)

{
  long lVar1;
  
  lVar1 = (long)param_2 - (long)param_1 >> 1;
  if (lVar1 != 0) {
    memmove(param_3 + -lVar1,param_1,lVar1 * 2);
  }
  return param_3 + -lVar1;
}




/* void std::allocator_traits<std::allocator<short> >::construct<short, short
   const&>(std::allocator<short>&, short*, short const&) */

void std::allocator_traits<std::allocator<short>>::construct<short,short_const&>
               (allocator *param_1,short *param_2,short *param_3)

{
  short *psVar1;
  
  psVar1 = forward<short_const&>((type *)param_3);
  new_allocator<short>::construct<short,short_const&>
            ((new_allocator<short> *)param_1,param_2,psVar1);
  return;
}




/* short* std::__uninitialized_fill_n<true>::__uninit_fill_n<short*, unsigned long, short>(short*,
   unsigned long, short const&) */

short * std::__uninitialized_fill_n<true>::__uninit_fill_n<short*,unsigned_long,short>
                  (short *param_1,ulong param_2,short *param_3)

{
  short *psVar1;
  
  psVar1 = fill_n<short*,unsigned_long,short>(param_1,param_2,param_3);
  return psVar1;
}




void bad6(void)

{
  return;
}




/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* short* std::__uninitialized_copy_a<std::move_iterator<short*>, short*,
   short>(std::move_iterator<short*>, std::move_iterator<short*>, short*, std::allocator<short>&) */

short * std::__uninitialized_copy_a<std::move_iterator<short*>,short*,short>
                  (move_iterator param_1,move_iterator param_2,short *param_3,allocator *param_4)

{
  short *psVar1;
  
  psVar1 = uninitialized_copy<std::move_iterator<short*>,short*>(param_1,param_2,param_3);
  return psVar1;
}




void FUN_00101020(void)

{
  (*(code *)PTR_00106ee0)();
  return;
}




/* short* std::copy<__normal_iterator<short const*, std::vector<short, std::allocator<short> > >,
   short*>(__normal_iterator<short const*, std::vector<short, std::allocator<short> > >,
   __normal_iterator<short const*, std::vector<short, std::allocator<short> > >, short*) */

void std::copy<__normal_iterator<short_const*,std::vector<short,std::allocator<short>>>,short*>
               (undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = __miter_base<__normal_iterator<short_const*,std::vector<short,std::allocator<short>>>>
                    (param_2);
  uVar2 = __miter_base<__normal_iterator<short_const*,std::vector<short,std::allocator<short>>>>
                    (param_1);
  __copy_move_a2<false,__normal_iterator<short_const*,std::vector<short,std::allocator<short>>>,short*>
            (uVar2,uVar1,param_3);
  return;
}




/* short* std::__copy_move<true, true, std::random_access_iterator_tag>::__copy_m<short>(short
   const*, short const*, short*) */

short * std::__copy_move<true,true,std::random_access_iterator_tag>::__copy_m<short>
                  (short *param_1,short *param_2,short *param_3)

{
  long lVar1;
  
  lVar1 = (long)param_2 - (long)param_1 >> 1;
  if (lVar1 != 0) {
    memmove(param_3,param_1,lVar1 * 2);
  }
  return param_3 + lVar1;
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
    __isoc99_swscanf(local_18 * 8 + param_3,&DAT_001040f8,local_1c);
    *(char *)(local_18 + param_1) = local_1c[0];
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




/* __normal_iterator<short const*, std::vector<short, std::allocator<short> >
   >::__normal_iterator<short*>(__normal_iterator<short*, __enable_if<std::__are_same<short*,
   short*>::__value, std::vector<short, std::allocator<short> > >::__type> const&) */

void __thiscall
__normal_iterator<short_const*,std::vector<short,std::allocator<short>>>::__normal_iterator<short*>
          (__normal_iterator<short_const*,std::vector<short,std::allocator<short>>> *this,
          __normal_iterator *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)
           __normal_iterator<short*,std::vector<short,std::allocator<short>>>::base
                     ((__normal_iterator<short*,std::vector<short,std::allocator<short>>> *)param_1)
  ;
  *(undefined8 *)this = *puVar1;
  return;
}




/* void std::allocator_traits<std::allocator<short> >::destroy<short>(std::allocator<short>&,
   short*) */

void std::allocator_traits<std::allocator<short>>::destroy<short>(allocator *param_1,short *param_2)

{
  new_allocator<short>::destroy<short>((short *)param_1);
  return;
}




/* new_allocator<short>::deallocate(short*, unsigned long) */

void new_allocator<short>::deallocate(short *param_1,ulong param_2)

{
  operator_delete((void *)param_2);
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




void bad1(void)

{
  return;
}




/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* __enable_if<std::__is_scalar<short>::__value, void>::__type std::__fill_a<short*, short>(short*,
   short*, short const&) */

__type std::__fill_a<short*,short>(short *param_1,short *param_2,short *param_3)

{
  short sVar1;
  short *local_20;
  
  sVar1 = *param_3;
  for (local_20 = param_1; local_20 != param_2; local_20 = local_20 + 1) {
    *local_20 = sVar1;
  }
  return (__type)local_20;
}




/* std::move_iterator<short*>::base() const */

undefined8 __thiscall std::move_iterator<short*>::base(move_iterator<short*> *this)

{
  return *(undefined8 *)this;
}




/* __normal_iterator<short*, std::vector<short, std::allocator<short> > >::__normal_iterator(short*
   const&) */

void __thiscall
__normal_iterator<short*,std::vector<short,std::allocator<short>>>::__normal_iterator
          (__normal_iterator<short*,std::vector<short,std::allocator<short>>> *this,short **param_1)

{
  *(short **)this = *param_1;
  return;
}




undefined8 globalReturnsTrue(void)

{
  return 1;
}




/* std::allocator<short>::~allocator() */

void __thiscall std::allocator<short>::~allocator(allocator<short> *this)

{
  new_allocator<short>::~new_allocator((new_allocator<short> *)this);
  return;
}




void good1(void)

{
  return;
}




void bad9(void)

{
  return;
}




/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* short* std::uninitialized_copy<std::move_iterator<short*>, short*>(std::move_iterator<short*>,
   std::move_iterator<short*>, short*) */

short * std::uninitialized_copy<std::move_iterator<short*>,short*>
                  (move_iterator param_1,move_iterator param_2,short *param_3)

{
  short *psVar1;
  
  psVar1 = __uninitialized_copy<true>::__uninit_copy<std::move_iterator<short*>,short*>
                     (param_1,param_2,param_3);
  return psVar1;
}




void stdThreadLockAcquire(pthread_mutex_t *param_1)

{
  pthread_mutex_lock(param_1);
  return;
}




void printHexUnsignedCharLine(byte param_1)

{
  printf("%02x\n",(ulong)param_1);
  return;
}




void good7(void)

{
  return;
}




/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* __enable_if<std::__is_scalar<short>::__value, short*>::__type std::__fill_n_a<short*, unsigned
   long, short>(short*, unsigned long, short const&) */

__type std::__fill_n_a<short*,unsigned_long,short>(short *param_1,ulong param_2,short *param_3)

{
  short sVar1;
  short *local_20;
  ulong local_10;
  
  sVar1 = *param_3;
  local_20 = param_1;
  for (local_10 = param_2; local_10 != 0; local_10 = local_10 - 1) {
    *local_20 = sVar1;
    local_20 = local_20 + 1;
  }
  return (__type)local_20;
}




/* short const* std::__niter_base<short const*, std::vector<short, std::allocator<short> >
   >(__normal_iterator<short const*, std::vector<short, std::allocator<short> > >) */

undefined8
std::__niter_base<short_const*,std::vector<short,std::allocator<short>>>(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined8 local_10;
  
  local_10 = param_1;
  puVar1 = (undefined8 *)
           __normal_iterator<short_const*,std::vector<short,std::allocator<short>>>::base
                     ((__normal_iterator<short_const*,std::vector<short,std::allocator<short>>> *)
                      &local_10);
  return *puVar1;
}




/* std::vector<short, std::allocator<short> >::begin() const */

undefined8 __thiscall
std::vector<short,std::allocator<short>>::begin(vector<short,std::allocator<short>> *this)

{
  long in_FS_OFFSET;
  short *local_20;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_20 = *(short **)this;
  __normal_iterator<short_const*,std::vector<short,std::allocator<short>>>::__normal_iterator
            ((__normal_iterator<short_const*,std::vector<short,std::allocator<short>>> *)&local_18,
             &local_20);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* short* std::__miter_base<short*>(short*) */

short * std::__miter_base<short*>(short *param_1)

{
  return param_1;
}




/* std::vector<short, std::allocator<short> >::_M_fill_insert(__normal_iterator<short*,
   std::vector<short, std::allocator<short> > >, unsigned long, short const&) */

void __thiscall
std::vector<short,std::allocator<short>>::_M_fill_insert
          (vector<short,std::allocator<short>> *this,undefined8 param_2,ulong param_3,short *param_4
          )

{
  long lVar1;
  difference_type dVar2;
  undefined4 extraout_var;
  allocator *paVar3;
  undefined8 *puVar4;
  long *plVar5;
  short *psVar6;
  undefined4 extraout_var_00;
  long in_FS_OFFSET;
  undefined8 local_88;
  vector<short,std::allocator<short>> *local_80;
  undefined8 local_78;
  short *local_70;
  ulong local_68;
  long local_60;
  short *local_58;
  short *local_50;
  ulong local_48;
  short *local_40;
  _Temporary_value local_38 [24];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  local_88 = param_2;
  local_80 = this;
  if (param_3 != 0) {
    if ((ulong)(*(long *)(this + 0x10) - *(long *)(this + 8) >> 1) < param_3) {
      local_68 = _M_check_len(this,param_3,"vector::_M_fill_insert");
      local_78 = begin(local_80);
      dVar2 = operator-((__normal_iterator *)&local_88,(__normal_iterator *)&local_78);
      local_60 = CONCAT44(extraout_var_00,dVar2);
      local_70 = (short *)_Vector_base<short,std::allocator<short>>::_M_allocate
                                    ((_Vector_base<short,std::allocator<short>> *)local_80,local_68)
      ;
      local_58 = local_70;
      paVar3 = (allocator *)
               _Vector_base<short,std::allocator<short>>::_M_get_Tp_allocator
                         ((_Vector_base<short,std::allocator<short>> *)local_80);
                    /* try { // try from 00102268 to 001022f2 has its CatchHandler @ 001023a5 */
      __uninitialized_fill_n_a<short*,unsigned_long,short,short>
                (local_58 + local_60,param_3,param_4,paVar3);
      local_70 = (short *)0x0;
      paVar3 = (allocator *)
               _Vector_base<short,std::allocator<short>>::_M_get_Tp_allocator
                         ((_Vector_base<short,std::allocator<short>> *)local_80);
      puVar4 = (undefined8 *)
               __normal_iterator<short*,std::vector<short,std::allocator<short>>>::base
                         ((__normal_iterator<short*,std::vector<short,std::allocator<short>>> *)
                          &local_88);
      local_70 = __uninitialized_move_if_noexcept_a<short*,short*,std::allocator<short>>
                           (*(short **)local_80,(short *)*puVar4,local_58,paVar3);
      local_70 = local_70 + param_3;
      paVar3 = (allocator *)
               _Vector_base<short,std::allocator<short>>::_M_get_Tp_allocator
                         ((_Vector_base<short,std::allocator<short>> *)local_80);
      psVar6 = *(short **)(local_80 + 8);
      puVar4 = (undefined8 *)
               __normal_iterator<short*,std::vector<short,std::allocator<short>>>::base
                         ((__normal_iterator<short*,std::vector<short,std::allocator<short>>> *)
                          &local_88);
      local_70 = __uninitialized_move_if_noexcept_a<short*,short*,std::allocator<short>>
                           ((short *)*puVar4,psVar6,local_70,paVar3);
      paVar3 = (allocator *)
               _Vector_base<short,std::allocator<short>>::_M_get_Tp_allocator
                         ((_Vector_base<short,std::allocator<short>> *)local_80);
      _Destroy<short*,short>(*(short **)local_80,*(short **)(local_80 + 8),paVar3);
      _Vector_base<short,std::allocator<short>>::_M_deallocate
                ((_Vector_base<short,std::allocator<short>> *)local_80,*(short **)local_80,
                 *(long *)(local_80 + 0x10) - *(long *)local_80 >> 1);
      *(short **)local_80 = local_58;
      *(short **)(local_80 + 8) = local_70;
      *(short **)(local_80 + 0x10) = local_58 + local_68;
    }
    else {
      _Temporary_value::_Temporary_value<short_const&>(local_38,(vector *)this,param_4);
                    /* try { // try from 00101ff1 to 001021bf has its CatchHandler @ 00102387 */
      local_50 = (short *)_Temporary_value::_M_val(local_38);
      local_78 = end(local_80);
      dVar2 = operator-((__normal_iterator *)&local_78,(__normal_iterator *)&local_88);
      local_48 = CONCAT44(extraout_var,dVar2);
      local_40 = *(short **)(local_80 + 8);
      if (param_3 < local_48) {
        paVar3 = (allocator *)
                 _Vector_base<short,std::allocator<short>>::_M_get_Tp_allocator
                           ((_Vector_base<short,std::allocator<short>> *)local_80);
        __uninitialized_move_a<short*,short*,std::allocator<short>>
                  ((short *)(param_3 * -2 + *(long *)(local_80 + 8)),*(short **)(local_80 + 8),
                   *(short **)(local_80 + 8),paVar3);
        *(ulong *)(local_80 + 8) = param_3 * 2 + *(long *)(local_80 + 8);
        psVar6 = local_40 + -param_3;
        puVar4 = (undefined8 *)
                 __normal_iterator<short*,std::vector<short,std::allocator<short>>>::base
                           ((__normal_iterator<short*,std::vector<short,std::allocator<short>>> *)
                            &local_88);
        move_backward<short*,short*>((short *)*puVar4,psVar6,local_40);
        plVar5 = (long *)__normal_iterator<short*,std::vector<short,std::allocator<short>>>::base
                                   ((__normal_iterator<short*,std::vector<short,std::allocator<short>>>
                                     *)&local_88);
        lVar1 = *plVar5;
        puVar4 = (undefined8 *)
                 __normal_iterator<short*,std::vector<short,std::allocator<short>>>::base
                           ((__normal_iterator<short*,std::vector<short,std::allocator<short>>> *)
                            &local_88);
        fill<short*,short>((short *)*puVar4,(short *)(lVar1 + param_3 * 2),local_50);
      }
      else {
        paVar3 = (allocator *)
                 _Vector_base<short,std::allocator<short>>::_M_get_Tp_allocator
                           ((_Vector_base<short,std::allocator<short>> *)local_80);
        psVar6 = __uninitialized_fill_n_a<short*,unsigned_long,short,short>
                           (*(short **)(local_80 + 8),param_3 - local_48,local_50,paVar3);
        *(short **)(local_80 + 8) = psVar6;
        paVar3 = (allocator *)
                 _Vector_base<short,std::allocator<short>>::_M_get_Tp_allocator
                           ((_Vector_base<short,std::allocator<short>> *)local_80);
        psVar6 = *(short **)(local_80 + 8);
        puVar4 = (undefined8 *)
                 __normal_iterator<short*,std::vector<short,std::allocator<short>>>::base
                           ((__normal_iterator<short*,std::vector<short,std::allocator<short>>> *)
                            &local_88);
        __uninitialized_move_a<short*,short*,std::allocator<short>>
                  ((short *)*puVar4,local_40,psVar6,paVar3);
        *(ulong *)(local_80 + 8) = local_48 * 2 + *(long *)(local_80 + 8);
        puVar4 = (undefined8 *)
                 __normal_iterator<short*,std::vector<short,std::allocator<short>>>::base
                           ((__normal_iterator<short*,std::vector<short,std::allocator<short>>> *)
                            &local_88);
        fill<short*,short>((short *)*puVar4,local_40,local_50);
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




/* std::move_iterator<short*>::move_iterator(short*) */

void __thiscall
std::move_iterator<short*>::move_iterator(move_iterator<short*> *this,short *param_1)

{
  *(short **)this = param_1;
  return;
}




undefined8 main(void)

{
  time_t tVar1;
  
  tVar1 = time((time_t *)0x0);
  srand((uint)tVar1);
  printLine("Calling good()...");
  CWE190_Integer_Overflow__short_fscanf_add_72::good();
  printLine("Finished good()");
  printLine("Calling bad()...");
  CWE190_Integer_Overflow__short_fscanf_add_72::bad();
  printLine("Finished bad()");
  return 0;
}




/* std::allocator_traits<std::allocator<short> >::deallocate(std::allocator<short>&, short*,
   unsigned long) */

void std::allocator_traits<std::allocator<short>>::deallocate
               (allocator *param_1,short *param_2,ulong param_3)

{
  new_allocator<short>::deallocate((short *)param_1,(ulong)param_2);
  return;
}




/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* short* std::__uninitialized_move_a<short*, short*, std::allocator<short> >(short*, short*,
   short*, std::allocator<short>&) */

short * std::__uninitialized_move_a<short*,short*,std::allocator<short>>
                  (short *param_1,short *param_2,short *param_3,allocator *param_4)

{
  move_iterator mVar1;
  move_iterator mVar2;
  short *psVar3;
  
  mVar1 = make_move_iterator<short*>(param_2);
  mVar2 = make_move_iterator<short*>(param_1);
  psVar3 = __uninitialized_copy_a<std::move_iterator<short*>,short*,short>
                     (mVar2,mVar1,param_3,param_4);
  return psVar3;
}




/* void std::_Destroy_aux<true>::__destroy<short*>(short*, short*) */

void std::_Destroy_aux<true>::__destroy<short*>(short *param_1,short *param_2)

{
  return;
}




/* std::vector<short, std::allocator<short> >::_Temporary_value::~_Temporary_value() */

void __thiscall
std::vector<short,std::allocator<short>>::_Temporary_value::~_Temporary_value
          (_Temporary_value *this)

{
  short *psVar1;
  
  psVar1 = (short *)_M_ptr(this);
  allocator_traits<std::allocator<short>>::destroy<short>(*(allocator **)this,psVar1);
  return;
}




/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* short* std::__copy_move_backward_a<true, short*, short*>(short*, short*, short*) */

short * std::__copy_move_backward_a<true,short*,short*>
                  (short *param_1,short *param_2,short *param_3)

{
  short *psVar1;
  
  psVar1 = __copy_move_backward<true,true,std::random_access_iterator_tag>::__copy_move_b<short>
                     (param_1,param_2,param_3);
  return psVar1;
}




/* std::vector<short, std::allocator<short> >::cbegin() const */

undefined8 __thiscall
std::vector<short,std::allocator<short>>::cbegin(vector<short,std::allocator<short>> *this)

{
  long in_FS_OFFSET;
  short *local_20;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_20 = *(short **)this;
  __normal_iterator<short_const*,std::vector<short,std::allocator<short>>>::__normal_iterator
            ((__normal_iterator<short_const*,std::vector<short,std::allocator<short>>> *)&local_18,
             &local_20);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




/* CWE190_Integer_Overflow__short_fscanf_add_72::goodB2GSink(std::vector<short,
   std::allocator<short> >) */

void CWE190_Integer_Overflow__short_fscanf_add_72::goodB2GSink
               (vector<short,std::allocator<short>> *param_1)

{
  short *psVar1;
  
  psVar1 = (short *)std::vector<short,std::allocator<short>>::operator[](param_1,2);
  if (*psVar1 == 0x7fff) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    printIntLine((int)(short)(*psVar1 + 1));
  }
  return;
}




void good6(void)

{
  return;
}




/* std::_Vector_base<short, std::allocator<short> >::_M_allocate(unsigned long) */

undefined8 __thiscall
std::_Vector_base<short,std::allocator<short>>::_M_allocate
          (_Vector_base<short,std::allocator<short>> *this,ulong param_1)

{
  undefined8 uVar1;
  
  if (param_1 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = allocator_traits<std::allocator<short>>::allocate((allocator *)this,param_1);
  }
  return uVar1;
}




/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* short* std::__copy_move_backward_a2<true, short*, short*>(short*, short*, short*) */

short * std::__copy_move_backward_a2<true,short*,short*>
                  (short *param_1,short *param_2,short *param_3)

{
  short *psVar1;
  short *psVar2;
  short *psVar3;
  short *local_30;
  short *local_28;
  short *local_20;
  
  local_30 = param_3;
  local_28 = param_2;
  local_20 = param_1;
  psVar1 = __niter_base<short*>(param_3);
  psVar2 = __niter_base<short*>(local_28);
  psVar3 = __niter_base<short*>(local_20);
  psVar1 = __copy_move_backward_a<true,short*,short*>(psVar3,psVar2,psVar1);
  psVar1 = __niter_wrap<short*>(&local_30,psVar1);
  return psVar1;
}




void internal_start(long param_1)

{
  (**(code **)(param_1 + 8))(*(undefined8 *)(param_1 + 0x10));
                    /* WARNING: Subroutine does not return */
  pthread_exit((void *)0x0);
}




/* std::vector<short, std::allocator<short> >::_Temporary_value::_M_ptr() */

_Temporary_value * __thiscall
std::vector<short,std::allocator<short>>::_Temporary_value::_M_ptr(_Temporary_value *this)

{
  return this + 8;
}




/* std::vector<short, std::allocator<short> >::operator[](unsigned long) */

long __thiscall
std::vector<short,std::allocator<short>>::operator[]
          (vector<short,std::allocator<short>> *this,ulong param_1)

{
  return *(long *)this + param_1 * 2;
}




/* std::vector<short, std::allocator<short> >::~vector() */

void __thiscall
std::vector<short,std::allocator<short>>::~vector(vector<short,std::allocator<short>> *this)

{
  allocator *paVar1;
  
  paVar1 = (allocator *)
           _Vector_base<short,std::allocator<short>>::_M_get_Tp_allocator
                     ((_Vector_base<short,std::allocator<short>> *)this);
  _Destroy<short*,short>(*(short **)this,*(short **)(this + 8),paVar1);
  _Vector_base<short,std::allocator<short>>::~_Vector_base
            ((_Vector_base<short,std::allocator<short>> *)this);
  return;
}




/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* std::move_iterator<short*> std::make_move_iterator<short*>(short*) */

move_iterator std::make_move_iterator<short*>(short *param_1)

{
  long in_FS_OFFSET;
  move_iterator local_18 [2];
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  move_iterator<short*>::move_iterator((move_iterator<short*> *)local_18,param_1);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18[0];
}




/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* short* std::__niter_base<short*>(short*) */

short * std::__niter_base<short*>(short *param_1)

{
  return param_1;
}




/* __normal_iterator<short*, std::vector<short, std::allocator<short> > >::difference_type
   TEMPNAMEPLACEHOLDERVALUE(__normal_iterator<short*, std::vector<short, std::allocator<short> > >
   const&, __normal_iterator<short*, std::vector<short, std::allocator<short> > > const&) */

difference_type operator-(__normal_iterator *param_1,__normal_iterator *param_2)

{
  long lVar1;
  long *plVar2;
  
  plVar2 = (long *)__normal_iterator<short*,std::vector<short,std::allocator<short>>>::base
                             ((__normal_iterator<short*,std::vector<short,std::allocator<short>>> *)
                              param_1);
  lVar1 = *plVar2;
  plVar2 = (long *)__normal_iterator<short*,std::vector<short,std::allocator<short>>>::base
                             ((__normal_iterator<short*,std::vector<short,std::allocator<short>>> *)
                              param_2);
  return (difference_type)(lVar1 - *plVar2 >> 1);
}




/* std::_Vector_base<short, std::allocator<short> >::_Vector_impl_data::_Vector_impl_data() */

void __thiscall
std::_Vector_base<short,std::allocator<short>>::_Vector_impl_data::_Vector_impl_data
          (_Vector_impl_data *this)

{
  *(undefined8 *)this = 0;
  *(undefined8 *)(this + 8) = 0;
  *(undefined8 *)(this + 0x10) = 0;
  return;
}




/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* short* std::__copy_move_a<true, short*, short*>(short*, short*, short*) */

short * std::__copy_move_a<true,short*,short*>(short *param_1,short *param_2,short *param_3)

{
  short *psVar1;
  
  psVar1 = __copy_move<true,true,std::random_access_iterator_tag>::__copy_m<short>
                     (param_1,param_2,param_3);
  return psVar1;
}




/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* std::move_iterator<short*> std::__make_move_if_noexcept_iterator<short,
   std::move_iterator<short*> >(short*) */

move_iterator
std::__make_move_if_noexcept_iterator<short,std::move_iterator<short*>>(short *param_1)

{
  long in_FS_OFFSET;
  move_iterator local_18 [2];
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  move_iterator<short*>::move_iterator((move_iterator<short*> *)local_18,param_1);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18[0];
}




void bad4(void)

{
  return;
}




/* std::allocator_traits<std::allocator<short> >::max_size(std::allocator<short> const&) */

void std::allocator_traits<std::allocator<short>>::max_size(allocator *param_1)

{
  new_allocator<short>::max_size();
  return;
}




/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* void std::_Destroy<short*>(short*, short*) */

void std::_Destroy<short*>(short *param_1,short *param_2)

{
  _Destroy_aux<true>::__destroy<short*>(param_1,param_2);
  return;
}




void printIntLine(uint param_1)

{
  printf("%d\n",(ulong)param_1);
  return;
}




/* short* std::__copy_move_a2<false, __normal_iterator<short const*, std::vector<short,
   std::allocator<short> > >, short*>(__normal_iterator<short const*, std::vector<short,
   std::allocator<short> > >, __normal_iterator<short const*, std::vector<short,
   std::allocator<short> > >, short*) */

void std::
     __copy_move_a2<false,__normal_iterator<short_const*,std::vector<short,std::allocator<short>>>,short*>
               (undefined8 param_1,undefined8 param_2,short *param_3)

{
  short *psVar1;
  short *psVar2;
  short *psVar3;
  short *local_30;
  undefined8 local_28;
  undefined8 local_20;
  
  local_30 = param_3;
  local_28 = param_2;
  local_20 = param_1;
  psVar1 = __niter_base<short*>(param_3);
  psVar2 = (short *)__niter_base<short_const*,std::vector<short,std::allocator<short>>>(local_28);
  psVar3 = (short *)__niter_base<short_const*,std::vector<short,std::allocator<short>>>(local_20);
  psVar1 = __copy_move_a<false,short_const*,short*>(psVar3,psVar2,psVar1);
  __niter_wrap<short*>(&local_30,psVar1);
  return;
}




undefined8 globalReturnsFalse(void)

{
  return 0;
}




/* __normal_iterator<short const*, std::vector<short, std::allocator<short> > >::base() const */

__normal_iterator<short_const*,std::vector<short,std::allocator<short>>> * __thiscall
__normal_iterator<short_const*,std::vector<short,std::allocator<short>>>::base
          (__normal_iterator<short_const*,std::vector<short,std::allocator<short>>> *this)

{
  return this;
}




/* __normal_iterator<short*, std::vector<short, std::allocator<short> >
   >::TEMPNAMEPLACEHOLDERVALUE(long) const */

undefined8 __thiscall
__normal_iterator<short*,std::vector<short,std::allocator<short>>>::operator+
          (__normal_iterator<short*,std::vector<short,std::allocator<short>>> *this,long param_1)

{
  long in_FS_OFFSET;
  short *local_20;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_20 = (short *)(*(long *)this + param_1 * 2);
  __normal_iterator((__normal_iterator<short*,std::vector<short,std::allocator<short>>> *)&local_18,
                    &local_20);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void printStructLine(uint *param_1)

{
  printf("%d -- %d\n",(ulong)*param_1,(ulong)param_1[1]);
  return;
}




/* __alloc_traits<std::allocator<short>, short>::_S_select_on_copy(std::allocator<short> const&) */

allocator * __alloc_traits<std::allocator<short>,short>::_S_select_on_copy(allocator *param_1)

{
  long lVar1;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  std::allocator_traits<std::allocator<short>>::select_on_container_copy_construction(param_1);
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1;
}




/* __normal_iterator<short const*, std::vector<short, std::allocator<short> >
   >::__normal_iterator(short const* const&) */

void __thiscall
__normal_iterator<short_const*,std::vector<short,std::allocator<short>>>::__normal_iterator
          (__normal_iterator<short_const*,std::vector<short,std::allocator<short>>> *this,
          short **param_1)

{
  *(short **)this = *param_1;
  return;
}




/* short* std::__uninitialized_copy<true>::__uninit_copy<std::move_iterator<short*>,
   short*>(std::move_iterator<short*>, std::move_iterator<short*>, short*) */

short * std::__uninitialized_copy<true>::__uninit_copy<std::move_iterator<short*>,short*>
                  (move_iterator param_1,move_iterator param_2,short *param_3)

{
  short *psVar1;
  
  psVar1 = copy<std::move_iterator<short*>,short*>(param_1,param_2,param_3);
  return psVar1;
}




/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* short* std::move_backward<short*, short*>(short*, short*, short*) */

short * std::move_backward<short*,short*>(short *param_1,short *param_2,short *param_3)

{
  short *psVar1;
  short *psVar2;
  
  psVar1 = __miter_base<short*>(param_2);
  psVar2 = __miter_base<short*>(param_1);
  psVar1 = __copy_move_backward_a2<true,short*,short*>(psVar2,psVar1,param_3);
  return psVar1;
}




void printLongLongLine(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




/* std::vector<short, std::allocator<short> >::_Temporary_value::_M_val() */

void __thiscall
std::vector<short,std::allocator<short>>::_Temporary_value::_M_val(_Temporary_value *this)

{
  _M_ptr(this);
  return;
}




/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* short* std::__copy_move_a2<true, short*, short*>(short*, short*, short*) */

short * std::__copy_move_a2<true,short*,short*>(short *param_1,short *param_2,short *param_3)

{
  short *psVar1;
  short *psVar2;
  short *psVar3;
  short *local_30;
  short *local_28;
  short *local_20;
  
  local_30 = param_3;
  local_28 = param_2;
  local_20 = param_1;
  psVar1 = __niter_base<short*>(param_3);
  psVar2 = __niter_base<short*>(local_28);
  psVar3 = __niter_base<short*>(local_20);
  psVar1 = __copy_move_a<true,short*,short*>(psVar3,psVar2,psVar1);
  psVar1 = __niter_wrap<short*>(&local_30,psVar1);
  return psVar1;
}




/* std::_Vector_base<short, std::allocator<short> >::_Vector_impl::_Vector_impl() */

void __thiscall
std::_Vector_base<short,std::allocator<short>>::_Vector_impl::_Vector_impl(_Vector_impl *this)

{
  allocator<short>::allocator();
  _Vector_impl_data::_Vector_impl_data((_Vector_impl_data *)this);
  return;
}




/* std::vector<short, std::allocator<short> >::end() */

undefined8 __thiscall
std::vector<short,std::allocator<short>>::end(vector<short,std::allocator<short>> *this)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  __normal_iterator<short*,std::vector<short,std::allocator<short>>>::__normal_iterator
            ((__normal_iterator<short*,std::vector<short,std::allocator<short>>> *)&local_18,
             (short **)(this + 8));
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void good2(void)

{
  return;
}




void stdThreadLockRelease(pthread_mutex_t *param_1)

{
  pthread_mutex_unlock(param_1);
  return;
}




void bad2(void)

{
  return;
}




/* std::vector<short, std::allocator<short> >::insert(__normal_iterator<short const*,
   std::vector<short, std::allocator<short> > >, unsigned long, short const&) */

void __thiscall
std::vector<short,std::allocator<short>>::insert
          (vector<short,std::allocator<short>> *this,undefined8 param_2,undefined8 param_3,
          undefined8 param_4)

{
  difference_type dVar1;
  undefined4 extraout_var;
  undefined8 uVar2;
  long in_FS_OFFSET;
  undefined8 local_38;
  vector<short,std::allocator<short>> *local_30;
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
  uVar2 = __normal_iterator<short*,std::vector<short,std::allocator<short>>>::operator+
                    ((__normal_iterator<short*,std::vector<short,std::allocator<short>>> *)&local_20
                     ,local_18);
  _M_fill_insert(local_30,uVar2,param_3,param_4);
  local_20 = begin(local_30);
  __normal_iterator<short*,std::vector<short,std::allocator<short>>>::operator+
            ((__normal_iterator<short*,std::vector<short,std::allocator<short>>> *)&local_20,
             local_18);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




/* std::allocator<short>::allocator(std::allocator<short> const&) */

void std::allocator<short>::allocator(allocator *param_1)

{
  new_allocator<short>::new_allocator((new_allocator *)param_1);
  return;
}




/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* void std::_Destroy<short*, short>(short*, short*, std::allocator<short>&) */

void std::_Destroy<short*,short>(short *param_1,short *param_2,allocator *param_3)

{
  _Destroy<short*>(param_1,param_2);
  return;
}




/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* short* std::uninitialized_fill_n<short*, unsigned long, short>(short*, unsigned long, short
   const&) */

short * std::uninitialized_fill_n<short*,unsigned_long,short>
                  (short *param_1,ulong param_2,short *param_3)

{
  short *psVar1;
  
  psVar1 = __uninitialized_fill_n<true>::__uninit_fill_n<short*,unsigned_long,short>
                     (param_1,param_2,param_3);
  return psVar1;
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
/* unsigned long const& std::min<unsigned long>(unsigned long const&, unsigned long const&) */

ulong * std::min<unsigned_long>(ulong *param_1,ulong *param_2)

{
  if (*param_2 < *param_1) {
    param_1 = param_2;
  }
  return param_1;
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




void printDoubleLine(undefined8 param_1)

{
  printf("%g\n",param_1);
  return;
}




void printLine(char *param_1)

{
  if (param_1 != (char *)0x0) {
    puts(param_1);
  }
  return;
}




/* std::vector<short, std::allocator<short> >::vector() */

void __thiscall
std::vector<short,std::allocator<short>>::vector(vector<short,std::allocator<short>> *this)

{
  _Vector_base<short,std::allocator<short>>::_Vector_base
            ((_Vector_base<short,std::allocator<short>> *)this);
  return;
}




/* __normal_iterator<short*, std::vector<short, std::allocator<short> > >::base() const */

__normal_iterator<short*,std::vector<short,std::allocator<short>>> * __thiscall
__normal_iterator<short*,std::vector<short,std::allocator<short>>>::base
          (__normal_iterator<short*,std::vector<short,std::allocator<short>>> *this)

{
  return this;
}




void good5(void)

{
  return;
}




/* std::vector<short, std::allocator<short> >::end() const */

undefined8 __thiscall
std::vector<short,std::allocator<short>>::end(vector<short,std::allocator<short>> *this)

{
  long in_FS_OFFSET;
  short *local_20;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_20 = *(short **)(this + 8);
  __normal_iterator<short_const*,std::vector<short,std::allocator<short>>>::__normal_iterator
            ((__normal_iterator<short_const*,std::vector<short,std::allocator<short>>> *)&local_18,
             &local_20);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




/* std::_Vector_base<short, std::allocator<short> >::_Vector_base() */

void __thiscall
std::_Vector_base<short,std::allocator<short>>::_Vector_base
          (_Vector_base<short,std::allocator<short>> *this)

{
  _Vector_impl::_Vector_impl((_Vector_impl *)this);
  return;
}




/* std::vector<short, std::allocator<short> >::max_size() const */

void __thiscall
std::vector<short,std::allocator<short>>::max_size(vector<short,std::allocator<short>> *this)

{
  allocator *paVar1;
  
  paVar1 = (allocator *)
           _Vector_base<short,std::allocator<short>>::_M_get_Tp_allocator
                     ((_Vector_base<short,std::allocator<short>> *)this);
  _S_max_size(paVar1);
  return;
}




/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* short* std::__niter_wrap<short*>(short* const&, short*) */

short * std::__niter_wrap<short*>(short **param_1,short *param_2)

{
  return param_2;
}




/* __normal_iterator<short const*, std::vector<short, std::allocator<short> > >
   std::__miter_base<__normal_iterator<short const*, std::vector<short, std::allocator<short> > >
   >(__normal_iterator<short const*, std::vector<short, std::allocator<short> > >) */

undefined8
std::__miter_base<__normal_iterator<short_const*,std::vector<short,std::allocator<short>>>>
          (undefined8 param_1)

{
  return param_1;
}




void bad8(void)

{
  return;
}




void good3(void)

{
  return;
}




/* CWE190_Integer_Overflow__short_fscanf_add_72::goodB2G() */

void CWE190_Integer_Overflow__short_fscanf_add_72::goodB2G(void)

{
  long in_FS_OFFSET;
  undefined2 local_62;
  undefined8 local_60;
  vector<short,std::allocator<short>> local_58 [32];
  undefined8 local_38 [3];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  std::vector<short,std::allocator<short>>::vector(local_58);
  local_62 = 0;
                    /* try { // try from 0010183c to 00101910 has its CatchHandler @ 0010195c */
  __isoc99_fscanf(stdin,&DAT_00104005,&local_62);
  local_60 = std::vector<short,std::allocator<short>>::end(local_58);
  __normal_iterator<short_const*,std::vector<short,std::allocator<short>>>::
  __normal_iterator<short*>
            ((__normal_iterator<short_const*,std::vector<short,std::allocator<short>>> *)local_38,
             (__normal_iterator *)&local_60);
  std::vector<short,std::allocator<short>>::insert(local_58,local_38[0],1,&local_62);
  local_60 = std::vector<short,std::allocator<short>>::end(local_58);
  __normal_iterator<short_const*,std::vector<short,std::allocator<short>>>::
  __normal_iterator<short*>
            ((__normal_iterator<short_const*,std::vector<short,std::allocator<short>>> *)local_38,
             (__normal_iterator *)&local_60);
  std::vector<short,std::allocator<short>>::insert(local_58,local_38[0],1,&local_62);
  local_60 = std::vector<short,std::allocator<short>>::end(local_58);
  __normal_iterator<short_const*,std::vector<short,std::allocator<short>>>::
  __normal_iterator<short*>
            ((__normal_iterator<short_const*,std::vector<short,std::allocator<short>>> *)local_38,
             (__normal_iterator *)&local_60);
  std::vector<short,std::allocator<short>>::insert(local_58,local_38[0],1,&local_62);
  std::vector<short,std::allocator<short>>::vector
            ((vector<short,std::allocator<short>> *)local_38,(vector *)local_58);
                    /* try { // try from 00101918 to 0010191c has its CatchHandler @ 00101947 */
  goodB2GSink(local_38);
  std::vector<short,std::allocator<short>>::~vector((vector<short,std::allocator<short>> *)local_38)
  ;
  std::vector<short,std::allocator<short>>::~vector(local_58);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




/* std::_Vector_base<short, std::allocator<short> >::_M_create_storage(unsigned long) */

void __thiscall
std::_Vector_base<short,std::allocator<short>>::_M_create_storage
          (_Vector_base<short,std::allocator<short>> *this,ulong param_1)

{
  undefined8 uVar1;
  
  uVar1 = _M_allocate(this,param_1);
  *(undefined8 *)this = uVar1;
  *(undefined8 *)(this + 8) = *(undefined8 *)this;
  *(ulong *)(this + 0x10) = param_1 * 2 + *(long *)this;
  return;
}




/* __normal_iterator<short const*, std::vector<short, std::allocator<short> > >::difference_type
   TEMPNAMEPLACEHOLDERVALUE(__normal_iterator<short const*, std::vector<short, std::allocator<short>
   > > const&, __normal_iterator<short const*, std::vector<short, std::allocator<short> > > const&)
    */

difference_type operator-(__normal_iterator *param_1,__normal_iterator *param_2)

{
  long lVar1;
  long *plVar2;
  
  plVar2 = (long *)__normal_iterator<short_const*,std::vector<short,std::allocator<short>>>::base
                             ((__normal_iterator<short_const*,std::vector<short,std::allocator<short>>>
                               *)param_1);
  lVar1 = *plVar2;
  plVar2 = (long *)__normal_iterator<short_const*,std::vector<short,std::allocator<short>>>::base
                             ((__normal_iterator<short_const*,std::vector<short,std::allocator<short>>>
                               *)param_2);
  return (difference_type)(lVar1 - *plVar2 >> 1);
}




/* new_allocator<short>::allocate(unsigned long, void const*) */

void new_allocator<short>::allocate(ulong param_1,void *param_2)

{
  void *pvVar1;
  
  pvVar1 = (void *)max_size();
  if (pvVar1 < param_2) {
    std::__throw_bad_alloc();
  }
  operator_new((long)param_2 * 2);
  return;
}




/* void new_allocator<short>::destroy<short>(short*) */

void new_allocator<short>::destroy<short>(short *param_1)

{
  return;
}




/* std::vector<short, std::allocator<short> >::size() const */

long __thiscall
std::vector<short,std::allocator<short>>::size(vector<short,std::allocator<short>> *this)

{
  return *(long *)(this + 8) - *(long *)this >> 1;
}




/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* short* std::copy<std::move_iterator<short*>, short*>(std::move_iterator<short*>,
   std::move_iterator<short*>, short*) */

short * std::copy<std::move_iterator<short*>,short*>
                  (move_iterator param_1,move_iterator param_2,short *param_3)

{
  short *psVar1;
  short *psVar2;
  
  psVar1 = (short *)__miter_base<short*>(param_2);
  psVar2 = (short *)__miter_base<short*>(param_1);
  psVar1 = __copy_move_a2<true,short*,short*>(psVar2,psVar1,param_3);
  return psVar1;
}




/* new_allocator<short>::~new_allocator() */

void __thiscall new_allocator<short>::~new_allocator(new_allocator<short> *this)

{
  return;
}




/* std::vector<short, std::allocator<short> >::_Temporary_value::_Temporary_value<short
   const&>(std::vector<short, std::allocator<short> >*, short const&) */

void __thiscall
std::vector<short,std::allocator<short>>::_Temporary_value::_Temporary_value<short_const&>
          (_Temporary_value *this,vector *param_1,short *param_2)

{
  short *psVar1;
  short *psVar2;
  
  *(vector **)this = param_1;
  psVar1 = forward<short_const&>((type *)param_2);
  psVar2 = (short *)_M_ptr(this);
  allocator_traits<std::allocator<short>>::construct<short,short_const&>
            (*(allocator **)this,psVar2,psVar1);
  return;
}




void good4(void)

{
  return;
}




/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* short const& std::forward<short const&>(std::remove_reference<short const&>::type&) */

short * std::forward<short_const&>(type *param_1)

{
  return (short *)param_1;
}




/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* short* std::__copy_move_a<false, short const*, short*>(short const*, short const*, short*) */

short * std::__copy_move_a<false,short_const*,short*>(short *param_1,short *param_2,short *param_3)

{
  short *psVar1;
  
  psVar1 = __copy_move<false,true,std::random_access_iterator_tag>::__copy_m<short>
                     (param_1,param_2,param_3);
  return psVar1;
}




/* std::vector<short, std::allocator<short> >::_M_check_len(unsigned long, char const*) const */

ulong __thiscall
std::vector<short,std::allocator<short>>::_M_check_len
          (vector<short,std::allocator<short>> *this,ulong param_1,char *param_2)

{
  long lVar1;
  long lVar2;
  ulong *puVar3;
  ulong uVar4;
  ulong uVar5;
  long in_FS_OFFSET;
  ulong local_48;
  vector<short,std::allocator<short>> *local_40;
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




void printWLine(long param_1)

{
  if (param_1 != 0) {
    wprintf(L"%ls\n",param_1);
  }
  return;
}




/* std::vector<short, std::allocator<short> >::vector(std::vector<short, std::allocator<short> >
   const&) */

void __thiscall
std::vector<short,std::allocator<short>>::vector
          (vector<short,std::allocator<short>> *this,vector *param_1)

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
  _Vector_base<short,std::allocator<short>>::_M_get_Tp_allocator
            ((_Vector_base<short,std::allocator<short>> *)param_1);
  __alloc_traits<std::allocator<short>,short>::_S_select_on_copy(&local_31);
  uVar1 = size((vector<short,std::allocator<short>> *)param_1);
                    /* try { // try from 00101d04 to 00101d08 has its CatchHandler @ 00101d71 */
  _Vector_base<short,std::allocator<short>>::_Vector_base
            ((_Vector_base<short,std::allocator<short>> *)this,uVar1,&local_31);
  allocator<short>::~allocator((allocator<short> *)&local_31);
  uVar2 = _Vector_base<short,std::allocator<short>>::_M_get_Tp_allocator
                    ((_Vector_base<short,std::allocator<short>> *)this);
  uVar5 = *(undefined8 *)this;
  uVar3 = end((vector<short,std::allocator<short>> *)param_1);
  uVar4 = begin((vector<short,std::allocator<short>> *)param_1);
                    /* try { // try from 00101d52 to 00101d56 has its CatchHandler @ 00101d8f */
  uVar5 = __uninitialized_copy_a<__normal_iterator<short_const*,std::vector<short,std::allocator<short>>>,short*,short>
                    (uVar4,uVar3,uVar5,uVar2);
  *(undefined8 *)(this + 8) = uVar5;
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void bad3(void)

{
  return;
}




void good8(void)

{
  return;
}




/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* decltype (__miter_base(({parm#1}.base)())) std::__miter_base<short*>(std::move_iterator<short*>)
    */

void std::__miter_base<short*>(move_iterator param_1)

{
  short *psVar1;
  undefined4 in_register_0000003c;
  undefined8 local_10;
  
  local_10 = CONCAT44(in_register_0000003c,param_1);
  psVar1 = (short *)move_iterator<short*>::base((move_iterator<short*> *)&local_10);
  __miter_base<short*>(psVar1);
  return;
}




/* short* std::uninitialized_copy<__normal_iterator<short const*, std::vector<short,
   std::allocator<short> > >, short*>(__normal_iterator<short const*, std::vector<short,
   std::allocator<short> > >, __normal_iterator<short const*, std::vector<short,
   std::allocator<short> > >, short*) */

void std::
     uninitialized_copy<__normal_iterator<short_const*,std::vector<short,std::allocator<short>>>,short*>
               (undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  __uninitialized_copy<true>::
  __uninit_copy<__normal_iterator<short_const*,std::vector<short,std::allocator<short>>>,short*>
            (param_1,param_2,param_3);
  return;
}




/* short* std::__uninitialized_copy<true>::__uninit_copy<__normal_iterator<short const*,
   std::vector<short, std::allocator<short> > >, short*>(__normal_iterator<short const*,
   std::vector<short, std::allocator<short> > >, __normal_iterator<short const*, std::vector<short,
   std::allocator<short> > >, short*) */

void std::__uninitialized_copy<true>::
     __uninit_copy<__normal_iterator<short_const*,std::vector<short,std::allocator<short>>>,short*>
               (undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  copy<__normal_iterator<short_const*,std::vector<short,std::allocator<short>>>,short*>
            (param_1,param_2,param_3);
  return;
}




/* new_allocator<short>::max_size() const */

undefined8 new_allocator<short>::max_size(void)

{
  return 0x3fffffffffffffff;
}




/* std::_Vector_base<short, std::allocator<short> >::_M_get_Tp_allocator() */

_Vector_base<short,std::allocator<short>> * __thiscall
std::_Vector_base<short,std::allocator<short>>::_M_get_Tp_allocator
          (_Vector_base<short,std::allocator<short>> *this)

{
  return this;
}




void stdThreadLockDestroy(pthread_mutex_t *param_1)

{
  pthread_mutex_destroy(param_1);
  free(param_1);
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




/* short* std::__uninitialized_copy_a<__normal_iterator<short const*, std::vector<short,
   std::allocator<short> > >, short*, short>(__normal_iterator<short const*, std::vector<short,
   std::allocator<short> > >, __normal_iterator<short const*, std::vector<short,
   std::allocator<short> > >, short*, std::allocator<short>&) */

void std::
     __uninitialized_copy_a<__normal_iterator<short_const*,std::vector<short,std::allocator<short>>>,short*,short>
               (undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  uninitialized_copy<__normal_iterator<short_const*,std::vector<short,std::allocator<short>>>,short*>
            (param_1,param_2,param_3);
  return;
}




/* std::_Vector_base<short, std::allocator<short> >::_Vector_base(unsigned long,
   std::allocator<short> const&) */

void __thiscall
std::_Vector_base<short,std::allocator<short>>::_Vector_base
          (_Vector_base<short,std::allocator<short>> *this,ulong param_1,allocator *param_2)

{
  _Vector_impl::_Vector_impl((_Vector_impl *)this,param_2);
                    /* try { // try from 001025e4 to 001025e8 has its CatchHandler @ 001025eb */
  _M_create_storage(this,param_1);
  return;
}




/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* void std::fill<short*, short>(short*, short*, short const&) */

void std::fill<short*,short>(short *param_1,short *param_2,short *param_3)

{
  short *psVar1;
  short *psVar2;
  
  psVar1 = __niter_base<short*>(param_2);
  psVar2 = __niter_base<short*>(param_1);
  __fill_a<short*,short>(psVar2,psVar1,param_3);
  return;
}




/* new_allocator<short>::new_allocator() */

void new_allocator<short>::new_allocator(void)

{
  return;
}




void printLongLine(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




/* std::_Vector_base<short, std::allocator<short> >::_M_deallocate(short*, unsigned long) */

void __thiscall
std::_Vector_base<short,std::allocator<short>>::_M_deallocate
          (_Vector_base<short,std::allocator<short>> *this,short *param_1,ulong param_2)

{
  if (param_1 != (short *)0x0) {
    allocator_traits<std::allocator<short>>::deallocate((allocator *)this,param_1,param_2);
  }
  return;
}




void printUnsignedLine(uint param_1)

{
  printf("%u\n",(ulong)param_1);
  return;
}




void good9(void)

{
  return;
}




/* CWE190_Integer_Overflow__short_fscanf_add_72::goodG2B() */

void CWE190_Integer_Overflow__short_fscanf_add_72::goodG2B(void)

{
  long in_FS_OFFSET;
  undefined2 local_62;
  undefined8 local_60;
  vector<short,std::allocator<short>> local_58 [32];
  undefined8 local_38 [3];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  std::vector<short,std::allocator<short>>::vector(local_58);
  local_62 = 2;
  local_60 = std::vector<short,std::allocator<short>>::end(local_58);
  __normal_iterator<short_const*,std::vector<short,std::allocator<short>>>::
  __normal_iterator<short*>
            ((__normal_iterator<short_const*,std::vector<short,std::allocator<short>>> *)local_38,
             (__normal_iterator *)&local_60);
                    /* try { // try from 001016e9 to 0010177e has its CatchHandler @ 001017ca */
  std::vector<short,std::allocator<short>>::insert(local_58,local_38[0],1,&local_62);
  local_60 = std::vector<short,std::allocator<short>>::end(local_58);
  __normal_iterator<short_const*,std::vector<short,std::allocator<short>>>::
  __normal_iterator<short*>
            ((__normal_iterator<short_const*,std::vector<short,std::allocator<short>>> *)local_38,
             (__normal_iterator *)&local_60);
  std::vector<short,std::allocator<short>>::insert(local_58,local_38[0],1,&local_62);
  local_60 = std::vector<short,std::allocator<short>>::end(local_58);
  __normal_iterator<short_const*,std::vector<short,std::allocator<short>>>::
  __normal_iterator<short*>
            ((__normal_iterator<short_const*,std::vector<short,std::allocator<short>>> *)local_38,
             (__normal_iterator *)&local_60);
  std::vector<short,std::allocator<short>>::insert(local_58,local_38[0],1,&local_62);
  std::vector<short,std::allocator<short>>::vector
            ((vector<short,std::allocator<short>> *)local_38,(vector *)local_58);
                    /* try { // try from 00101786 to 0010178a has its CatchHandler @ 001017b5 */
  goodG2BSink(local_38);
  std::vector<short,std::allocator<short>>::~vector((vector<short,std::allocator<short>> *)local_38)
  ;
  std::vector<short,std::allocator<short>>::~vector(local_58);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




/* std::allocator_traits<std::allocator<short> >::allocate(std::allocator<short>&, unsigned long) */

void std::allocator_traits<std::allocator<short>>::allocate(allocator *param_1,ulong param_2)

{
  new_allocator<short>::allocate((ulong)param_1,(void *)param_2);
  return;
}




void bad5(void)

{
  return;
}




/* CWE190_Integer_Overflow__short_fscanf_add_72::good() */

void CWE190_Integer_Overflow__short_fscanf_add_72::good(void)

{
  goodG2B();
  goodB2G();
  return;
}




/* std::_Vector_base<short, std::allocator<short> >::_M_get_Tp_allocator() const */

_Vector_base<short,std::allocator<short>> * __thiscall
std::_Vector_base<short,std::allocator<short>>::_M_get_Tp_allocator
          (_Vector_base<short,std::allocator<short>> *this)

{
  return this;
}




undefined8 stdThreadDestroy(void *param_1)

{
  free(param_1);
  return 1;
}




/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* short* std::__uninitialized_fill_n_a<short*, unsigned long, short, short>(short*, unsigned long,
   short const&, std::allocator<short>&) */

short * std::__uninitialized_fill_n_a<short*,unsigned_long,short,short>
                  (short *param_1,ulong param_2,short *param_3,allocator *param_4)

{
  short *psVar1;
  
  psVar1 = uninitialized_fill_n<short*,unsigned_long,short>(param_1,param_2,param_3);
  return psVar1;
}




/* operator new(unsigned long, void*) */

void * operator_new(ulong param_1,void *param_2)

{
  return param_2;
}




/* CWE190_Integer_Overflow__short_fscanf_add_72::badSink(std::vector<short, std::allocator<short> >)
    */

void CWE190_Integer_Overflow__short_fscanf_add_72::badSink
               (vector<short,std::allocator<short>> *param_1)

{
  short *psVar1;
  
  psVar1 = (short *)std::vector<short,std::allocator<short>>::operator[](param_1,2);
  printIntLine((int)(short)(*psVar1 + 1));
  return;
}




void printSizeTLine(undefined8 param_1)

{
  printf("%zu\n",param_1);
  return;
}




/* std::allocator_traits<std::allocator<short>
   >::select_on_container_copy_construction(std::allocator<short> const&) */

allocator *
std::allocator_traits<std::allocator<short>>::select_on_container_copy_construction
          (allocator *param_1)

{
  allocator<short>::allocator(param_1);
  return param_1;
}




int globalReturnsTrueOrFalse(void)

{
  int iVar1;
  
  iVar1 = rand();
  return iVar1 % 2;
}




/* std::_Vector_base<short, std::allocator<short> >::~_Vector_base() */

void __thiscall
std::_Vector_base<short,std::allocator<short>>::~_Vector_base
          (_Vector_base<short,std::allocator<short>> *this)

{
  _M_deallocate(this,*(short **)this,*(long *)(this + 0x10) - *(long *)this >> 1);
  _Vector_impl::~_Vector_impl((_Vector_impl *)this);
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
    __isoc99_sscanf(local_18 * 2 + param_3,&DAT_001040f0,local_1c);
    *(char *)(local_18 + param_1) = local_1c[0];
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




/* std::_Vector_base<short, std::allocator<short> >::_Vector_impl::~_Vector_impl() */

void __thiscall
std::_Vector_base<short,std::allocator<short>>::_Vector_impl::~_Vector_impl(_Vector_impl *this)

{
  allocator<short>::~allocator((allocator<short> *)this);
  return;
}




void bad7(void)

{
  return;
}




/* std::_Vector_base<short, std::allocator<short>
   >::_Vector_impl::_Vector_impl(std::allocator<short> const&) */

void __thiscall
std::_Vector_base<short,std::allocator<short>>::_Vector_impl::_Vector_impl
          (_Vector_impl *this,allocator *param_1)

{
  allocator<short>::allocator((allocator *)this);
  _Vector_impl_data::_Vector_impl_data((_Vector_impl_data *)this);
  return;
}




void printFloatLine(float param_1)

{
  printf("%f\n",(double)param_1);
  return;
}




/* void new_allocator<short>::construct<short, short const&>(short*, short const&) */

void __thiscall
new_allocator<short>::construct<short,short_const&>
          (new_allocator<short> *this,short *param_1,short *param_2)

{
  short sVar1;
  short *psVar2;
  
  psVar2 = std::forward<short_const&>((type *)param_2);
  sVar1 = *psVar2;
  psVar2 = (short *)operator_new(2,param_1);
  *psVar2 = sVar1;
  return;
}



