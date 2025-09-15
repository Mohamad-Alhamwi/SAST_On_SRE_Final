
/* CWE190_Integer_Overflow__unsigned_int_max_square_72::good() */

void CWE190_Integer_Overflow__unsigned_int_max_square_72::good(void)

{
  goodG2B();
  goodB2G();
  return;
}




/* std::_Vector_base<unsigned int, std::allocator<unsigned int> >::_Vector_impl::_Vector_impl() */

void __thiscall
std::_Vector_base<unsigned_int,std::allocator<unsigned_int>>::_Vector_impl::_Vector_impl
          (_Vector_impl *this)

{
  allocator<unsigned_int>::allocator();
  _Vector_impl_data::_Vector_impl_data((_Vector_impl_data *)this);
  return;
}




/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* unsigned int* std::__copy_move_backward_a2<true, unsigned int*, unsigned int*>(unsigned int*,
   unsigned int*, unsigned int*) */

uint * std::__copy_move_backward_a2<true,unsigned_int*,unsigned_int*>
                 (uint *param_1,uint *param_2,uint *param_3)

{
  uint *puVar1;
  uint *puVar2;
  uint *puVar3;
  uint *local_30;
  uint *local_28;
  uint *local_20;
  
  local_30 = param_3;
  local_28 = param_2;
  local_20 = param_1;
  puVar1 = __niter_base<unsigned_int*>(param_3);
  puVar2 = __niter_base<unsigned_int*>(local_28);
  puVar3 = __niter_base<unsigned_int*>(local_20);
  puVar1 = __copy_move_backward_a<true,unsigned_int*,unsigned_int*>(puVar3,puVar2,puVar1);
  puVar1 = __niter_wrap<unsigned_int*>(&local_30,puVar1);
  return puVar1;
}




void bad5(void)

{
  return;
}




void internal_start(long param_1)

{
  (**(code **)(param_1 + 8))(*(undefined8 *)(param_1 + 0x10));
                    /* WARNING: Subroutine does not return */
  pthread_exit((void *)0x0);
}




/* __normal_iterator<unsigned int const*, std::vector<unsigned int, std::allocator<unsigned int> >
   >::base() const */

__normal_iterator<unsigned_int_const*,std::vector<unsigned_int,std::allocator<unsigned_int>>> *
__thiscall
__normal_iterator<unsigned_int_const*,std::vector<unsigned_int,std::allocator<unsigned_int>>>::base
          (__normal_iterator<unsigned_int_const*,std::vector<unsigned_int,std::allocator<unsigned_int>>>
           *this)

{
  return this;
}




/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* std::move_iterator<unsigned int*> std::__make_move_if_noexcept_iterator<unsigned int,
   std::move_iterator<unsigned int*> >(unsigned int*) */

move_iterator
std::__make_move_if_noexcept_iterator<unsigned_int,std::move_iterator<unsigned_int*>>(uint *param_1)

{
  long in_FS_OFFSET;
  move_iterator local_18 [2];
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  move_iterator<unsigned_int*>::move_iterator((move_iterator<unsigned_int*> *)local_18,param_1);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18[0];
}




/* new_allocator<unsigned int>::~new_allocator() */

void __thiscall new_allocator<unsigned_int>::~new_allocator(new_allocator<unsigned_int> *this)

{
  return;
}




/* std::vector<unsigned int, std::allocator<unsigned int> >::_M_check_len(unsigned long, char
   const*) const */

ulong __thiscall
std::vector<unsigned_int,std::allocator<unsigned_int>>::_M_check_len
          (vector<unsigned_int,std::allocator<unsigned_int>> *this,ulong param_1,char *param_2)

{
  long lVar1;
  long lVar2;
  ulong *puVar3;
  ulong uVar4;
  ulong uVar5;
  long in_FS_OFFSET;
  ulong local_48;
  vector<unsigned_int,std::allocator<unsigned_int>> *local_40;
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




void good3(void)

{
  return;
}




/* new_allocator<unsigned int>::new_allocator() */

void new_allocator<unsigned_int>::new_allocator(void)

{
  return;
}




void good8(void)

{
  return;
}




/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* unsigned int* std::__copy_move_a<false, unsigned int const*, unsigned int*>(unsigned int const*,
   unsigned int const*, unsigned int*) */

uint * std::__copy_move_a<false,unsigned_int_const*,unsigned_int*>
                 (uint *param_1,uint *param_2,uint *param_3)

{
  uint *puVar1;
  
  puVar1 = __copy_move<false,true,std::random_access_iterator_tag>::__copy_m<unsigned_int>
                     (param_1,param_2,param_3);
  return puVar1;
}




/* std::_Vector_base<unsigned int, std::allocator<unsigned int> >::_M_get_Tp_allocator() const */

_Vector_base<unsigned_int,std::allocator<unsigned_int>> * __thiscall
std::_Vector_base<unsigned_int,std::allocator<unsigned_int>>::_M_get_Tp_allocator
          (_Vector_base<unsigned_int,std::allocator<unsigned_int>> *this)

{
  return this;
}




/* __normal_iterator<unsigned int const*, std::vector<unsigned int, std::allocator<unsigned int> >
   >::__normal_iterator<unsigned int*>(__normal_iterator<unsigned int*,
   __enable_if<std::__are_same<unsigned int*, unsigned int*>::__value, std::vector<unsigned int,
   std::allocator<unsigned int> > >::__type> const&) */

void __thiscall
__normal_iterator<unsigned_int_const*,std::vector<unsigned_int,std::allocator<unsigned_int>>>::
__normal_iterator<unsigned_int*>
          (__normal_iterator<unsigned_int_const*,std::vector<unsigned_int,std::allocator<unsigned_int>>>
           *this,__normal_iterator *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)
           __normal_iterator<unsigned_int*,std::vector<unsigned_int,std::allocator<unsigned_int>>>::
           base((__normal_iterator<unsigned_int*,std::vector<unsigned_int,std::allocator<unsigned_int>>>
                 *)param_1);
  *(undefined8 *)this = *puVar1;
  return;
}




void printShortLine(short param_1)

{
  printf("%hd\n",(ulong)(uint)(int)param_1);
  return;
}




/* std::vector<unsigned int, std::allocator<unsigned int>
   >::_M_fill_insert(__normal_iterator<unsigned int*, std::vector<unsigned int,
   std::allocator<unsigned int> > >, unsigned long, unsigned int const&) */

void __thiscall
std::vector<unsigned_int,std::allocator<unsigned_int>>::_M_fill_insert
          (vector<unsigned_int,std::allocator<unsigned_int>> *this,undefined8 param_2,ulong param_3,
          uint *param_4)

{
  long lVar1;
  difference_type dVar2;
  undefined4 extraout_var;
  allocator *paVar3;
  undefined8 *puVar4;
  long *plVar5;
  uint *puVar6;
  undefined4 extraout_var_00;
  long in_FS_OFFSET;
  undefined8 local_88;
  vector<unsigned_int,std::allocator<unsigned_int>> *local_80;
  undefined8 local_78;
  uint *local_70;
  ulong local_68;
  long local_60;
  uint *local_58;
  uint *local_50;
  ulong local_48;
  uint *local_40;
  _Temporary_value local_38 [24];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  local_88 = param_2;
  local_80 = this;
  if (param_3 != 0) {
    if ((ulong)(*(long *)(this + 0x10) - *(long *)(this + 8) >> 2) < param_3) {
      local_68 = _M_check_len(this,param_3,"vector::_M_fill_insert");
      local_78 = begin(local_80);
      dVar2 = operator-((__normal_iterator *)&local_88,(__normal_iterator *)&local_78);
      local_60 = CONCAT44(extraout_var_00,dVar2);
      local_70 = (uint *)_Vector_base<unsigned_int,std::allocator<unsigned_int>>::_M_allocate
                                   ((_Vector_base<unsigned_int,std::allocator<unsigned_int>> *)
                                    local_80,local_68);
      local_58 = local_70;
      paVar3 = (allocator *)
               _Vector_base<unsigned_int,std::allocator<unsigned_int>>::_M_get_Tp_allocator
                         ((_Vector_base<unsigned_int,std::allocator<unsigned_int>> *)local_80);
                    /* try { // try from 00102348 to 001023d3 has its CatchHandler @ 0010248b */
      __uninitialized_fill_n_a<unsigned_int*,unsigned_long,unsigned_int,unsigned_int>
                (local_58 + local_60,param_3,param_4,paVar3);
      local_70 = (uint *)0x0;
      paVar3 = (allocator *)
               _Vector_base<unsigned_int,std::allocator<unsigned_int>>::_M_get_Tp_allocator
                         ((_Vector_base<unsigned_int,std::allocator<unsigned_int>> *)local_80);
      puVar4 = (undefined8 *)
               __normal_iterator<unsigned_int*,std::vector<unsigned_int,std::allocator<unsigned_int>>>
               ::base((__normal_iterator<unsigned_int*,std::vector<unsigned_int,std::allocator<unsigned_int>>>
                       *)&local_88);
      local_70 = __uninitialized_move_if_noexcept_a<unsigned_int*,unsigned_int*,std::allocator<unsigned_int>>
                           (*(uint **)local_80,(uint *)*puVar4,local_58,paVar3);
      local_70 = local_70 + param_3;
      paVar3 = (allocator *)
               _Vector_base<unsigned_int,std::allocator<unsigned_int>>::_M_get_Tp_allocator
                         ((_Vector_base<unsigned_int,std::allocator<unsigned_int>> *)local_80);
      puVar6 = *(uint **)(local_80 + 8);
      puVar4 = (undefined8 *)
               __normal_iterator<unsigned_int*,std::vector<unsigned_int,std::allocator<unsigned_int>>>
               ::base((__normal_iterator<unsigned_int*,std::vector<unsigned_int,std::allocator<unsigned_int>>>
                       *)&local_88);
      local_70 = __uninitialized_move_if_noexcept_a<unsigned_int*,unsigned_int*,std::allocator<unsigned_int>>
                           ((uint *)*puVar4,puVar6,local_70,paVar3);
      paVar3 = (allocator *)
               _Vector_base<unsigned_int,std::allocator<unsigned_int>>::_M_get_Tp_allocator
                         ((_Vector_base<unsigned_int,std::allocator<unsigned_int>> *)local_80);
      _Destroy<unsigned_int*,unsigned_int>(*(uint **)local_80,*(uint **)(local_80 + 8),paVar3);
      _Vector_base<unsigned_int,std::allocator<unsigned_int>>::_M_deallocate
                ((_Vector_base<unsigned_int,std::allocator<unsigned_int>> *)local_80,
                 *(uint **)local_80,*(long *)(local_80 + 0x10) - *(long *)local_80 >> 2);
      *(uint **)local_80 = local_58;
      *(uint **)(local_80 + 8) = local_70;
      *(uint **)(local_80 + 0x10) = local_58 + local_68;
    }
    else {
      _Temporary_value::_Temporary_value<unsigned_int_const&>(local_38,(vector *)this,param_4);
                    /* try { // try from 001020c8 to 0010229b has its CatchHandler @ 0010246d */
      local_50 = (uint *)_Temporary_value::_M_val(local_38);
      local_78 = end(local_80);
      dVar2 = operator-((__normal_iterator *)&local_78,(__normal_iterator *)&local_88);
      local_48 = CONCAT44(extraout_var,dVar2);
      local_40 = *(uint **)(local_80 + 8);
      if (param_3 < local_48) {
        paVar3 = (allocator *)
                 _Vector_base<unsigned_int,std::allocator<unsigned_int>>::_M_get_Tp_allocator
                           ((_Vector_base<unsigned_int,std::allocator<unsigned_int>> *)local_80);
        __uninitialized_move_a<unsigned_int*,unsigned_int*,std::allocator<unsigned_int>>
                  ((uint *)(param_3 * -4 + *(long *)(local_80 + 8)),*(uint **)(local_80 + 8),
                   *(uint **)(local_80 + 8),paVar3);
        *(ulong *)(local_80 + 8) = param_3 * 4 + *(long *)(local_80 + 8);
        puVar6 = local_40 + -param_3;
        puVar4 = (undefined8 *)
                 __normal_iterator<unsigned_int*,std::vector<unsigned_int,std::allocator<unsigned_int>>>
                 ::base((__normal_iterator<unsigned_int*,std::vector<unsigned_int,std::allocator<unsigned_int>>>
                         *)&local_88);
        move_backward<unsigned_int*,unsigned_int*>((uint *)*puVar4,puVar6,local_40);
        plVar5 = (long *)__normal_iterator<unsigned_int*,std::vector<unsigned_int,std::allocator<unsigned_int>>>
                         ::base((__normal_iterator<unsigned_int*,std::vector<unsigned_int,std::allocator<unsigned_int>>>
                                 *)&local_88);
        lVar1 = *plVar5;
        puVar4 = (undefined8 *)
                 __normal_iterator<unsigned_int*,std::vector<unsigned_int,std::allocator<unsigned_int>>>
                 ::base((__normal_iterator<unsigned_int*,std::vector<unsigned_int,std::allocator<unsigned_int>>>
                         *)&local_88);
        fill<unsigned_int*,unsigned_int>((uint *)*puVar4,(uint *)(lVar1 + param_3 * 4),local_50);
      }
      else {
        paVar3 = (allocator *)
                 _Vector_base<unsigned_int,std::allocator<unsigned_int>>::_M_get_Tp_allocator
                           ((_Vector_base<unsigned_int,std::allocator<unsigned_int>> *)local_80);
        puVar6 = __uninitialized_fill_n_a<unsigned_int*,unsigned_long,unsigned_int,unsigned_int>
                           (*(uint **)(local_80 + 8),param_3 - local_48,local_50,paVar3);
        *(uint **)(local_80 + 8) = puVar6;
        paVar3 = (allocator *)
                 _Vector_base<unsigned_int,std::allocator<unsigned_int>>::_M_get_Tp_allocator
                           ((_Vector_base<unsigned_int,std::allocator<unsigned_int>> *)local_80);
        puVar6 = *(uint **)(local_80 + 8);
        puVar4 = (undefined8 *)
                 __normal_iterator<unsigned_int*,std::vector<unsigned_int,std::allocator<unsigned_int>>>
                 ::base((__normal_iterator<unsigned_int*,std::vector<unsigned_int,std::allocator<unsigned_int>>>
                         *)&local_88);
        __uninitialized_move_a<unsigned_int*,unsigned_int*,std::allocator<unsigned_int>>
                  ((uint *)*puVar4,local_40,puVar6,paVar3);
        *(ulong *)(local_80 + 8) = local_48 * 4 + *(long *)(local_80 + 8);
        puVar4 = (undefined8 *)
                 __normal_iterator<unsigned_int*,std::vector<unsigned_int,std::allocator<unsigned_int>>>
                 ::base((__normal_iterator<unsigned_int*,std::vector<unsigned_int,std::allocator<unsigned_int>>>
                         *)&local_88);
        fill<unsigned_int*,unsigned_int>((uint *)*puVar4,local_40,local_50);
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




void printLongLongLine(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




void good6(void)

{
  return;
}




/* CWE190_Integer_Overflow__unsigned_int_max_square_72::bad() */

void CWE190_Integer_Overflow__unsigned_int_max_square_72::bad(void)

{
  long in_FS_OFFSET;
  undefined4 local_64;
  undefined8 local_60;
  vector<unsigned_int,std::allocator<unsigned_int>> local_58 [32];
  undefined8 local_38 [3];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  std::vector<unsigned_int,std::allocator<unsigned_int>>::vector(local_58);
  local_64 = 0xffffffff;
  local_60 = std::vector<unsigned_int,std::allocator<unsigned_int>>::end(local_58);
  __normal_iterator<unsigned_int_const*,std::vector<unsigned_int,std::allocator<unsigned_int>>>::
  __normal_iterator<unsigned_int*>
            ((__normal_iterator<unsigned_int_const*,std::vector<unsigned_int,std::allocator<unsigned_int>>>
              *)local_38,(__normal_iterator *)&local_60);
                    /* try { // try from 00101656 to 001016eb has its CatchHandler @ 00101737 */
  std::vector<unsigned_int,std::allocator<unsigned_int>>::insert(local_58,local_38[0],1,&local_64);
  local_60 = std::vector<unsigned_int,std::allocator<unsigned_int>>::end(local_58);
  __normal_iterator<unsigned_int_const*,std::vector<unsigned_int,std::allocator<unsigned_int>>>::
  __normal_iterator<unsigned_int*>
            ((__normal_iterator<unsigned_int_const*,std::vector<unsigned_int,std::allocator<unsigned_int>>>
              *)local_38,(__normal_iterator *)&local_60);
  std::vector<unsigned_int,std::allocator<unsigned_int>>::insert(local_58,local_38[0],1,&local_64);
  local_60 = std::vector<unsigned_int,std::allocator<unsigned_int>>::end(local_58);
  __normal_iterator<unsigned_int_const*,std::vector<unsigned_int,std::allocator<unsigned_int>>>::
  __normal_iterator<unsigned_int*>
            ((__normal_iterator<unsigned_int_const*,std::vector<unsigned_int,std::allocator<unsigned_int>>>
              *)local_38,(__normal_iterator *)&local_60);
  std::vector<unsigned_int,std::allocator<unsigned_int>>::insert(local_58,local_38[0],1,&local_64);
  std::vector<unsigned_int,std::allocator<unsigned_int>>::vector
            ((vector<unsigned_int,std::allocator<unsigned_int>> *)local_38,(vector *)local_58);
                    /* try { // try from 001016f3 to 001016f7 has its CatchHandler @ 00101722 */
  badSink((vector)local_38);
  std::vector<unsigned_int,std::allocator<unsigned_int>>::~vector
            ((vector<unsigned_int,std::allocator<unsigned_int>> *)local_38);
  std::vector<unsigned_int,std::allocator<unsigned_int>>::~vector(local_58);
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




/* void std::_Destroy_aux<true>::__destroy<unsigned int*>(unsigned int*, unsigned int*) */

void std::_Destroy_aux<true>::__destroy<unsigned_int*>(uint *param_1,uint *param_2)

{
  return;
}




/* unsigned int* std::__copy_move<true, true, std::random_access_iterator_tag>::__copy_m<unsigned
   int>(unsigned int const*, unsigned int const*, unsigned int*) */

uint * std::__copy_move<true,true,std::random_access_iterator_tag>::__copy_m<unsigned_int>
                 (uint *param_1,uint *param_2,uint *param_3)

{
  long lVar1;
  
  lVar1 = (long)param_2 - (long)param_1 >> 2;
  if (lVar1 != 0) {
    memmove(param_3,param_1,lVar1 * 4);
  }
  return param_3 + lVar1;
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




/* std::vector<unsigned int, std::allocator<unsigned int> >::vector(std::vector<unsigned int,
   std::allocator<unsigned int> > const&) */

void __thiscall
std::vector<unsigned_int,std::allocator<unsigned_int>>::vector
          (vector<unsigned_int,std::allocator<unsigned_int>> *this,vector *param_1)

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
  _Vector_base<unsigned_int,std::allocator<unsigned_int>>::_M_get_Tp_allocator
            ((_Vector_base<unsigned_int,std::allocator<unsigned_int>> *)param_1);
  __alloc_traits<std::allocator<unsigned_int>,unsigned_int>::_S_select_on_copy(&local_31);
  uVar1 = size((vector<unsigned_int,std::allocator<unsigned_int>> *)param_1);
                    /* try { // try from 00101dd8 to 00101ddc has its CatchHandler @ 00101e45 */
  _Vector_base<unsigned_int,std::allocator<unsigned_int>>::_Vector_base
            ((_Vector_base<unsigned_int,std::allocator<unsigned_int>> *)this,uVar1,&local_31);
  allocator<unsigned_int>::~allocator((allocator<unsigned_int> *)&local_31);
  uVar2 = _Vector_base<unsigned_int,std::allocator<unsigned_int>>::_M_get_Tp_allocator
                    ((_Vector_base<unsigned_int,std::allocator<unsigned_int>> *)this);
  uVar5 = *(undefined8 *)this;
  uVar3 = end((vector<unsigned_int,std::allocator<unsigned_int>> *)param_1);
  uVar4 = begin((vector<unsigned_int,std::allocator<unsigned_int>> *)param_1);
                    /* try { // try from 00101e26 to 00101e2a has its CatchHandler @ 00101e63 */
  uVar5 = __uninitialized_copy_a<__normal_iterator<unsigned_int_const*,std::vector<unsigned_int,std::allocator<unsigned_int>>>,unsigned_int*,unsigned_int>
                    (uVar4,uVar3,uVar5,uVar2);
  *(undefined8 *)(this + 8) = uVar5;
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* void std::_Destroy<unsigned int*>(unsigned int*, unsigned int*) */

void std::_Destroy<unsigned_int*>(uint *param_1,uint *param_2)

{
  _Destroy_aux<true>::__destroy<unsigned_int*>(param_1,param_2);
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




/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* unsigned int const& std::forward<unsigned int const&>(std::remove_reference<unsigned int
   const&>::type&) */

uint * std::forward<unsigned_int_const&>(type *param_1)

{
  return (uint *)param_1;
}




/* std::vector<unsigned int, std::allocator<unsigned int> >::_Temporary_value::_M_val() */

void __thiscall
std::vector<unsigned_int,std::allocator<unsigned_int>>::_Temporary_value::_M_val
          (_Temporary_value *this)

{
  _M_ptr(this);
  return;
}




/* CWE190_Integer_Overflow__unsigned_int_max_square_72::goodG2BSink(std::vector<unsigned int,
   std::allocator<unsigned int> >) */

void CWE190_Integer_Overflow__unsigned_int_max_square_72::goodG2BSink(vector param_1)

{
  int *piVar1;
  undefined4 in_register_0000003c;
  
  piVar1 = (int *)std::vector<unsigned_int,std::allocator<unsigned_int>>::operator[]
                            ((vector<unsigned_int,std::allocator<unsigned_int>> *)
                             CONCAT44(in_register_0000003c,param_1),2);
  printUnsignedLine(*piVar1 * *piVar1);
  return;
}




/* std::_Vector_base<unsigned int, std::allocator<unsigned int> >::_M_get_Tp_allocator() */

_Vector_base<unsigned_int,std::allocator<unsigned_int>> * __thiscall
std::_Vector_base<unsigned_int,std::allocator<unsigned_int>>::_M_get_Tp_allocator
          (_Vector_base<unsigned_int,std::allocator<unsigned_int>> *this)

{
  return this;
}




undefined8 stdThreadDestroy(void *param_1)

{
  free(param_1);
  return 1;
}




/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* void std::fill<unsigned int*, unsigned int>(unsigned int*, unsigned int*, unsigned int const&) */

void std::fill<unsigned_int*,unsigned_int>(uint *param_1,uint *param_2,uint *param_3)

{
  uint *puVar1;
  uint *puVar2;
  
  puVar1 = __niter_base<unsigned_int*>(param_2);
  puVar2 = __niter_base<unsigned_int*>(param_1);
  __fill_a<unsigned_int*,unsigned_int>(puVar2,puVar1,param_3);
  return;
}




/* __normal_iterator<unsigned int*, std::vector<unsigned int, std::allocator<unsigned int> >
   >::__normal_iterator(unsigned int* const&) */

void __thiscall
__normal_iterator<unsigned_int*,std::vector<unsigned_int,std::allocator<unsigned_int>>>::
__normal_iterator(__normal_iterator<unsigned_int*,std::vector<unsigned_int,std::allocator<unsigned_int>>>
                  *this,uint **param_1)

{
  *(uint **)this = *param_1;
  return;
}




undefined8 globalReturnsTrue(void)

{
  return 1;
}




/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* unsigned int* std::__uninitialized_fill_n_a<unsigned int*, unsigned long, unsigned int, unsigned
   int>(unsigned int*, unsigned long, unsigned int const&, std::allocator<unsigned int>&) */

uint * std::__uninitialized_fill_n_a<unsigned_int*,unsigned_long,unsigned_int,unsigned_int>
                 (uint *param_1,ulong param_2,uint *param_3,allocator *param_4)

{
  uint *puVar1;
  
  puVar1 = uninitialized_fill_n<unsigned_int*,unsigned_long,unsigned_int>(param_1,param_2,param_3);
  return puVar1;
}




undefined8 globalReturnsFalse(void)

{
  return 0;
}




/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* unsigned int* std::uninitialized_copy<std::move_iterator<unsigned int*>, unsigned
   int*>(std::move_iterator<unsigned int*>, std::move_iterator<unsigned int*>, unsigned int*) */

uint * std::uninitialized_copy<std::move_iterator<unsigned_int*>,unsigned_int*>
                 (move_iterator param_1,move_iterator param_2,uint *param_3)

{
  uint *puVar1;
  
  puVar1 = __uninitialized_copy<true>::
           __uninit_copy<std::move_iterator<unsigned_int*>,unsigned_int*>(param_1,param_2,param_3);
  return puVar1;
}




void printSizeTLine(undefined8 param_1)

{
  printf("%zu\n",param_1);
  return;
}




/* std::allocator_traits<std::allocator<unsigned int> >::allocate(std::allocator<unsigned int>&,
   unsigned long) */

void std::allocator_traits<std::allocator<unsigned_int>>::allocate(allocator *param_1,ulong param_2)

{
  new_allocator<unsigned_int>::allocate((ulong)param_1,(void *)param_2);
  return;
}




void FUN_00101020(void)

{
  (*(code *)PTR_00106ee8)();
  return;
}




/* std::vector<unsigned int, std::allocator<unsigned int> >::_S_max_size(std::allocator<unsigned
   int> const&) */

ulong std::vector<unsigned_int,std::allocator<unsigned_int>>::_S_max_size(allocator *param_1)

{
  ulong *puVar1;
  long in_FS_OFFSET;
  ulong local_20;
  ulong local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_20 = 0x1fffffffffffffff;
  local_18 = allocator_traits<std::allocator<unsigned_int>>::max_size(param_1);
  puVar1 = min<unsigned_long>(&local_20,&local_18);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return *puVar1;
}




/* std::vector<unsigned int, std::allocator<unsigned int> >::_Temporary_value::~_Temporary_value()
    */

void __thiscall
std::vector<unsigned_int,std::allocator<unsigned_int>>::_Temporary_value::~_Temporary_value
          (_Temporary_value *this)

{
  uint *puVar1;
  
  puVar1 = (uint *)_M_ptr(this);
  allocator_traits<std::allocator<unsigned_int>>::destroy<unsigned_int>(*(allocator **)this,puVar1);
  return;
}




/* __normal_iterator<unsigned int*, std::vector<unsigned int, std::allocator<unsigned int> >
   >::difference_type TEMPNAMEPLACEHOLDERVALUE(__normal_iterator<unsigned int*, std::vector<unsigned
   int, std::allocator<unsigned int> > > const&, __normal_iterator<unsigned int*,
   std::vector<unsigned int, std::allocator<unsigned int> > > const&) */

difference_type operator-(__normal_iterator *param_1,__normal_iterator *param_2)

{
  long lVar1;
  long *plVar2;
  
  plVar2 = (long *)__normal_iterator<unsigned_int*,std::vector<unsigned_int,std::allocator<unsigned_int>>>
                   ::base((__normal_iterator<unsigned_int*,std::vector<unsigned_int,std::allocator<unsigned_int>>>
                           *)param_1);
  lVar1 = *plVar2;
  plVar2 = (long *)__normal_iterator<unsigned_int*,std::vector<unsigned_int,std::allocator<unsigned_int>>>
                   ::base((__normal_iterator<unsigned_int*,std::vector<unsigned_int,std::allocator<unsigned_int>>>
                           *)param_2);
  return (difference_type)(lVar1 - *plVar2 >> 2);
}




/* new_allocator<unsigned int>::max_size() const */

undefined8 new_allocator<unsigned_int>::max_size(void)

{
  return 0x1fffffffffffffff;
}




void printLine(char *param_1)

{
  if (param_1 != (char *)0x0) {
    puts(param_1);
  }
  return;
}




/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* unsigned int* std::fill_n<unsigned int*, unsigned long, unsigned int>(unsigned int*, unsigned
   long, unsigned int const&) */

uint * std::fill_n<unsigned_int*,unsigned_long,unsigned_int>
                 (uint *param_1,ulong param_2,uint *param_3)

{
  __type _Var1;
  uint *puVar2;
  undefined4 extraout_var;
  uint *local_10;
  
  local_10 = param_1;
  puVar2 = __niter_base<unsigned_int*>(param_1);
  _Var1 = __fill_n_a<unsigned_int*,unsigned_long,unsigned_int>(puVar2,param_2,param_3);
  puVar2 = __niter_wrap<unsigned_int*>(&local_10,(uint *)CONCAT44(extraout_var,_Var1));
  return puVar2;
}




/* std::vector<unsigned int, std::allocator<unsigned int> >::max_size() const */

void __thiscall
std::vector<unsigned_int,std::allocator<unsigned_int>>::max_size
          (vector<unsigned_int,std::allocator<unsigned_int>> *this)

{
  allocator *paVar1;
  
  paVar1 = (allocator *)
           _Vector_base<unsigned_int,std::allocator<unsigned_int>>::_M_get_Tp_allocator
                     ((_Vector_base<unsigned_int,std::allocator<unsigned_int>> *)this);
  _S_max_size(paVar1);
  return;
}




void good9(void)

{
  return;
}




/* std::vector<unsigned int, std::allocator<unsigned int> >::begin() const */

undefined8 __thiscall
std::vector<unsigned_int,std::allocator<unsigned_int>>::begin
          (vector<unsigned_int,std::allocator<unsigned_int>> *this)

{
  long in_FS_OFFSET;
  uint *local_20;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_20 = *(uint **)this;
  __normal_iterator<unsigned_int_const*,std::vector<unsigned_int,std::allocator<unsigned_int>>>::
  __normal_iterator((__normal_iterator<unsigned_int_const*,std::vector<unsigned_int,std::allocator<unsigned_int>>>
                     *)&local_18,&local_20);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




/* unsigned int const* std::__niter_base<unsigned int const*, std::vector<unsigned int,
   std::allocator<unsigned int> > >(__normal_iterator<unsigned int const*, std::vector<unsigned int,
   std::allocator<unsigned int> > >) */

undefined8
std::__niter_base<unsigned_int_const*,std::vector<unsigned_int,std::allocator<unsigned_int>>>
          (undefined8 param_1)

{
  undefined8 *puVar1;
  undefined8 local_10;
  
  local_10 = param_1;
  puVar1 = (undefined8 *)
           __normal_iterator<unsigned_int_const*,std::vector<unsigned_int,std::allocator<unsigned_int>>>
           ::base((__normal_iterator<unsigned_int_const*,std::vector<unsigned_int,std::allocator<unsigned_int>>>
                   *)&local_10);
  return *puVar1;
}




void printHexCharLine(char param_1)

{
  printf("%02x\n",(ulong)(uint)(int)param_1);
  return;
}




/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* void std::_Destroy<unsigned int*, unsigned int>(unsigned int*, unsigned int*,
   std::allocator<unsigned int>&) */

void std::_Destroy<unsigned_int*,unsigned_int>(uint *param_1,uint *param_2,allocator *param_3)

{
  _Destroy<unsigned_int*>(param_1,param_2);
  return;
}




/* std::vector<unsigned int, std::allocator<unsigned int> >::begin() */

undefined8 __thiscall
std::vector<unsigned_int,std::allocator<unsigned_int>>::begin
          (vector<unsigned_int,std::allocator<unsigned_int>> *this)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  __normal_iterator<unsigned_int*,std::vector<unsigned_int,std::allocator<unsigned_int>>>::
  __normal_iterator((__normal_iterator<unsigned_int*,std::vector<unsigned_int,std::allocator<unsigned_int>>>
                     *)&local_18,(uint **)this);
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




void bad1(void)

{
  return;
}




/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* std::abs(long) */

long std::abs(long param_1)

{
  return (param_1 >> 0x3f ^ param_1) - (param_1 >> 0x3f);
}




void printLongLine(undefined8 param_1)

{
  printf("%ld\n",param_1);
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




/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* unsigned long const& std::min<unsigned long>(unsigned long const&, unsigned long const&) */

ulong * std::min<unsigned_long>(ulong *param_1,ulong *param_2)

{
  if (*param_2 < *param_1) {
    param_1 = param_2;
  }
  return param_1;
}




undefined8 main(void)

{
  time_t tVar1;
  
  tVar1 = time((time_t *)0x0);
  srand((uint)tVar1);
  printLine("Calling good()...");
  CWE190_Integer_Overflow__unsigned_int_max_square_72::good();
  printLine("Finished good()");
  printLine("Calling bad()...");
  CWE190_Integer_Overflow__unsigned_int_max_square_72::bad();
  printLine("Finished bad()");
  return 0;
}




void good5(void)

{
  return;
}




/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* unsigned int* std::__miter_base<unsigned int*>(unsigned int*) */

uint * std::__miter_base<unsigned_int*>(uint *param_1)

{
  return param_1;
}




void printHexUnsignedCharLine(byte param_1)

{
  printf("%02x\n",(ulong)param_1);
  return;
}




/* new_allocator<unsigned int>::allocate(unsigned long, void const*) */

void new_allocator<unsigned_int>::allocate(ulong param_1,void *param_2)

{
  void *pvVar1;
  
  pvVar1 = (void *)max_size();
  if (pvVar1 < param_2) {
    std::__throw_bad_alloc();
  }
  operator_new((long)param_2 << 2);
  return;
}




void bad4(void)

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
    __isoc99_sscanf(local_18 * 2 + param_3,&DAT_001040e8,local_1c);
    *(char *)(local_18 + param_1) = local_1c[0];
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




/* unsigned int* std::__uninitialized_copy<true>::__uninit_copy<std::move_iterator<unsigned int*>,
   unsigned int*>(std::move_iterator<unsigned int*>, std::move_iterator<unsigned int*>, unsigned
   int*) */

uint * std::__uninitialized_copy<true>::
       __uninit_copy<std::move_iterator<unsigned_int*>,unsigned_int*>
                 (move_iterator param_1,move_iterator param_2,uint *param_3)

{
  uint *puVar1;
  
  puVar1 = copy<std::move_iterator<unsigned_int*>,unsigned_int*>(param_1,param_2,param_3);
  return puVar1;
}




/* new_allocator<unsigned int>::new_allocator(new_allocator<unsigned int> const&) */

void new_allocator<unsigned_int>::new_allocator(new_allocator *param_1)

{
  return;
}




/* std::_Vector_base<unsigned int, std::allocator<unsigned int> >::_Vector_base() */

void __thiscall
std::_Vector_base<unsigned_int,std::allocator<unsigned_int>>::_Vector_base
          (_Vector_base<unsigned_int,std::allocator<unsigned_int>> *this)

{
  _Vector_impl::_Vector_impl((_Vector_impl *)this);
  return;
}




/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* unsigned int* std::move_backward<unsigned int*, unsigned int*>(unsigned int*, unsigned int*,
   unsigned int*) */

uint * std::move_backward<unsigned_int*,unsigned_int*>(uint *param_1,uint *param_2,uint *param_3)

{
  uint *puVar1;
  uint *puVar2;
  
  puVar1 = __miter_base<unsigned_int*>(param_2);
  puVar2 = __miter_base<unsigned_int*>(param_1);
  puVar1 = __copy_move_backward_a2<true,unsigned_int*,unsigned_int*>(puVar2,puVar1,param_3);
  return puVar1;
}




/* void new_allocator<unsigned int>::construct<unsigned int, unsigned int const&>(unsigned int*,
   unsigned int const&) */

void __thiscall
new_allocator<unsigned_int>::construct<unsigned_int,unsigned_int_const&>
          (new_allocator<unsigned_int> *this,uint *param_1,uint *param_2)

{
  uint uVar1;
  uint *puVar2;
  
  puVar2 = std::forward<unsigned_int_const&>((type *)param_2);
  uVar1 = *puVar2;
  puVar2 = (uint *)operator_new(4,param_1);
  *puVar2 = uVar1;
  return;
}




/* unsigned int* std::copy<__normal_iterator<unsigned int const*, std::vector<unsigned int,
   std::allocator<unsigned int> > >, unsigned int*>(__normal_iterator<unsigned int const*,
   std::vector<unsigned int, std::allocator<unsigned int> > >, __normal_iterator<unsigned int
   const*, std::vector<unsigned int, std::allocator<unsigned int> > >, unsigned int*) */

void std::
     copy<__normal_iterator<unsigned_int_const*,std::vector<unsigned_int,std::allocator<unsigned_int>>>,unsigned_int*>
               (undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = __miter_base<__normal_iterator<unsigned_int_const*,std::vector<unsigned_int,std::allocator<unsigned_int>>>>
                    (param_2);
  uVar2 = __miter_base<__normal_iterator<unsigned_int_const*,std::vector<unsigned_int,std::allocator<unsigned_int>>>>
                    (param_1);
  __copy_move_a2<false,__normal_iterator<unsigned_int_const*,std::vector<unsigned_int,std::allocator<unsigned_int>>>,unsigned_int*>
            (uVar2,uVar1,param_3);
  return;
}




void stdThreadLockAcquire(pthread_mutex_t *param_1)

{
  pthread_mutex_lock(param_1);
  return;
}




/* unsigned int* std::uninitialized_copy<__normal_iterator<unsigned int const*, std::vector<unsigned
   int, std::allocator<unsigned int> > >, unsigned int*>(__normal_iterator<unsigned int const*,
   std::vector<unsigned int, std::allocator<unsigned int> > >, __normal_iterator<unsigned int
   const*, std::vector<unsigned int, std::allocator<unsigned int> > >, unsigned int*) */

void std::
     uninitialized_copy<__normal_iterator<unsigned_int_const*,std::vector<unsigned_int,std::allocator<unsigned_int>>>,unsigned_int*>
               (undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  __uninitialized_copy<true>::
  __uninit_copy<__normal_iterator<unsigned_int_const*,std::vector<unsigned_int,std::allocator<unsigned_int>>>,unsigned_int*>
            (param_1,param_2,param_3);
  return;
}




/* __normal_iterator<unsigned int const*, std::vector<unsigned int, std::allocator<unsigned int> > >
   std::__miter_base<__normal_iterator<unsigned int const*, std::vector<unsigned int,
   std::allocator<unsigned int> > > >(__normal_iterator<unsigned int const*, std::vector<unsigned
   int, std::allocator<unsigned int> > >) */

undefined8
std::
__miter_base<__normal_iterator<unsigned_int_const*,std::vector<unsigned_int,std::allocator<unsigned_int>>>>
          (undefined8 param_1)

{
  return param_1;
}




/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* unsigned int* std::__uninitialized_move_a<unsigned int*, unsigned int*, std::allocator<unsigned
   int> >(unsigned int*, unsigned int*, unsigned int*, std::allocator<unsigned int>&) */

uint * std::__uninitialized_move_a<unsigned_int*,unsigned_int*,std::allocator<unsigned_int>>
                 (uint *param_1,uint *param_2,uint *param_3,allocator *param_4)

{
  move_iterator mVar1;
  move_iterator mVar2;
  uint *puVar3;
  
  mVar1 = make_move_iterator<unsigned_int*>(param_2);
  mVar2 = make_move_iterator<unsigned_int*>(param_1);
  puVar3 = __uninitialized_copy_a<std::move_iterator<unsigned_int*>,unsigned_int*,unsigned_int>
                     (mVar2,mVar1,param_3,param_4);
  return puVar3;
}




void bad8(void)

{
  return;
}




/* std::allocator_traits<std::allocator<unsigned int> >::max_size(std::allocator<unsigned int>
   const&) */

void std::allocator_traits<std::allocator<unsigned_int>>::max_size(allocator *param_1)

{
  new_allocator<unsigned_int>::max_size();
  return;
}




void good2(void)

{
  return;
}




/* CWE190_Integer_Overflow__unsigned_int_max_square_72::badSink(std::vector<unsigned int,
   std::allocator<unsigned int> >) */

void CWE190_Integer_Overflow__unsigned_int_max_square_72::badSink(vector param_1)

{
  int *piVar1;
  undefined4 in_register_0000003c;
  
  piVar1 = (int *)std::vector<unsigned_int,std::allocator<unsigned_int>>::operator[]
                            ((vector<unsigned_int,std::allocator<unsigned_int>> *)
                             CONCAT44(in_register_0000003c,param_1),2);
  printUnsignedLine(*piVar1 * *piVar1);
  return;
}




/* std::vector<unsigned int, std::allocator<unsigned int> >::operator[](unsigned long) */

long __thiscall
std::vector<unsigned_int,std::allocator<unsigned_int>>::operator[]
          (vector<unsigned_int,std::allocator<unsigned_int>> *this,ulong param_1)

{
  return *(long *)this + param_1 * 4;
}




/* CWE190_Integer_Overflow__unsigned_int_max_square_72::goodG2B() */

void CWE190_Integer_Overflow__unsigned_int_max_square_72::goodG2B(void)

{
  long in_FS_OFFSET;
  undefined4 local_64;
  undefined8 local_60;
  vector<unsigned_int,std::allocator<unsigned_int>> local_58 [32];
  undefined8 local_38 [3];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  std::vector<unsigned_int,std::allocator<unsigned_int>>::vector(local_58);
  local_64 = 2;
  local_60 = std::vector<unsigned_int,std::allocator<unsigned_int>>::end(local_58);
  __normal_iterator<unsigned_int_const*,std::vector<unsigned_int,std::allocator<unsigned_int>>>::
  __normal_iterator<unsigned_int*>
            ((__normal_iterator<unsigned_int_const*,std::vector<unsigned_int,std::allocator<unsigned_int>>>
              *)local_38,(__normal_iterator *)&local_60);
                    /* try { // try from 001017d1 to 00101866 has its CatchHandler @ 001018b2 */
  std::vector<unsigned_int,std::allocator<unsigned_int>>::insert(local_58,local_38[0],1,&local_64);
  local_60 = std::vector<unsigned_int,std::allocator<unsigned_int>>::end(local_58);
  __normal_iterator<unsigned_int_const*,std::vector<unsigned_int,std::allocator<unsigned_int>>>::
  __normal_iterator<unsigned_int*>
            ((__normal_iterator<unsigned_int_const*,std::vector<unsigned_int,std::allocator<unsigned_int>>>
              *)local_38,(__normal_iterator *)&local_60);
  std::vector<unsigned_int,std::allocator<unsigned_int>>::insert(local_58,local_38[0],1,&local_64);
  local_60 = std::vector<unsigned_int,std::allocator<unsigned_int>>::end(local_58);
  __normal_iterator<unsigned_int_const*,std::vector<unsigned_int,std::allocator<unsigned_int>>>::
  __normal_iterator<unsigned_int*>
            ((__normal_iterator<unsigned_int_const*,std::vector<unsigned_int,std::allocator<unsigned_int>>>
              *)local_38,(__normal_iterator *)&local_60);
  std::vector<unsigned_int,std::allocator<unsigned_int>>::insert(local_58,local_38[0],1,&local_64);
  std::vector<unsigned_int,std::allocator<unsigned_int>>::vector
            ((vector<unsigned_int,std::allocator<unsigned_int>> *)local_38,(vector *)local_58);
                    /* try { // try from 0010186e to 00101872 has its CatchHandler @ 0010189d */
  goodG2BSink((vector)local_38);
  std::vector<unsigned_int,std::allocator<unsigned_int>>::~vector
            ((vector<unsigned_int,std::allocator<unsigned_int>> *)local_38);
  std::vector<unsigned_int,std::allocator<unsigned_int>>::~vector(local_58);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* unsigned int* std::__copy_move_a2<true, unsigned int*, unsigned int*>(unsigned int*, unsigned
   int*, unsigned int*) */

uint * std::__copy_move_a2<true,unsigned_int*,unsigned_int*>
                 (uint *param_1,uint *param_2,uint *param_3)

{
  uint *puVar1;
  uint *puVar2;
  uint *puVar3;
  uint *local_30;
  uint *local_28;
  uint *local_20;
  
  local_30 = param_3;
  local_28 = param_2;
  local_20 = param_1;
  puVar1 = __niter_base<unsigned_int*>(param_3);
  puVar2 = __niter_base<unsigned_int*>(local_28);
  puVar3 = __niter_base<unsigned_int*>(local_20);
  puVar1 = __copy_move_a<true,unsigned_int*,unsigned_int*>(puVar3,puVar2,puVar1);
  puVar1 = __niter_wrap<unsigned_int*>(&local_30,puVar1);
  return puVar1;
}




/* std::_Vector_base<unsigned int, std::allocator<unsigned int> >::_M_allocate(unsigned long) */

undefined8 __thiscall
std::_Vector_base<unsigned_int,std::allocator<unsigned_int>>::_M_allocate
          (_Vector_base<unsigned_int,std::allocator<unsigned_int>> *this,ulong param_1)

{
  undefined8 uVar1;
  
  if (param_1 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = allocator_traits<std::allocator<unsigned_int>>::allocate((allocator *)this,param_1);
  }
  return uVar1;
}




void stdThreadLockRelease(pthread_mutex_t *param_1)

{
  pthread_mutex_unlock(param_1);
  return;
}




/* __normal_iterator<unsigned int*, std::vector<unsigned int, std::allocator<unsigned int> >
   >::base() const */

__normal_iterator<unsigned_int*,std::vector<unsigned_int,std::allocator<unsigned_int>>> * __thiscall
__normal_iterator<unsigned_int*,std::vector<unsigned_int,std::allocator<unsigned_int>>>::base
          (__normal_iterator<unsigned_int*,std::vector<unsigned_int,std::allocator<unsigned_int>>>
           *this)

{
  return this;
}




/* std::_Vector_base<unsigned int, std::allocator<unsigned int>
   >::_Vector_impl::_Vector_impl(std::allocator<unsigned int> const&) */

void __thiscall
std::_Vector_base<unsigned_int,std::allocator<unsigned_int>>::_Vector_impl::_Vector_impl
          (_Vector_impl *this,allocator *param_1)

{
  allocator<unsigned_int>::allocator((allocator *)this);
  _Vector_impl_data::_Vector_impl_data((_Vector_impl_data *)this);
  return;
}




/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* std::move_iterator<unsigned int*> std::make_move_iterator<unsigned int*>(unsigned int*) */

move_iterator std::make_move_iterator<unsigned_int*>(uint *param_1)

{
  long in_FS_OFFSET;
  move_iterator local_18 [2];
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  move_iterator<unsigned_int*>::move_iterator((move_iterator<unsigned_int*> *)local_18,param_1);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18[0];
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




/* std::allocator<unsigned int>::allocator() */

void std::allocator<unsigned_int>::allocator(void)

{
  new_allocator<unsigned_int>::new_allocator();
  return;
}




/* void std::allocator_traits<std::allocator<unsigned int> >::construct<unsigned int, unsigned int
   const&>(std::allocator<unsigned int>&, unsigned int*, unsigned int const&) */

void std::allocator_traits<std::allocator<unsigned_int>>::
     construct<unsigned_int,unsigned_int_const&>(allocator *param_1,uint *param_2,uint *param_3)

{
  uint *puVar1;
  
  puVar1 = forward<unsigned_int_const&>((type *)param_3);
  new_allocator<unsigned_int>::construct<unsigned_int,unsigned_int_const&>
            ((new_allocator<unsigned_int> *)param_1,param_2,puVar1);
  return;
}




/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* unsigned int* std::__copy_move_backward_a<true, unsigned int*, unsigned int*>(unsigned int*,
   unsigned int*, unsigned int*) */

uint * std::__copy_move_backward_a<true,unsigned_int*,unsigned_int*>
                 (uint *param_1,uint *param_2,uint *param_3)

{
  uint *puVar1;
  
  puVar1 = __copy_move_backward<true,true,std::random_access_iterator_tag>::
           __copy_move_b<unsigned_int>(param_1,param_2,param_3);
  return puVar1;
}




/* void std::allocator_traits<std::allocator<unsigned int> >::destroy<unsigned
   int>(std::allocator<unsigned int>&, unsigned int*) */

void std::allocator_traits<std::allocator<unsigned_int>>::destroy<unsigned_int>
               (allocator *param_1,uint *param_2)

{
  new_allocator<unsigned_int>::destroy<unsigned_int>((uint *)param_1);
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




/* std::vector<unsigned int, std::allocator<unsigned int> >::end() */

undefined8 __thiscall
std::vector<unsigned_int,std::allocator<unsigned_int>>::end
          (vector<unsigned_int,std::allocator<unsigned_int>> *this)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  __normal_iterator<unsigned_int*,std::vector<unsigned_int,std::allocator<unsigned_int>>>::
  __normal_iterator((__normal_iterator<unsigned_int*,std::vector<unsigned_int,std::allocator<unsigned_int>>>
                     *)&local_18,(uint **)(this + 8));
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




/* std::vector<unsigned int, std::allocator<unsigned int> >::~vector() */

void __thiscall
std::vector<unsigned_int,std::allocator<unsigned_int>>::~vector
          (vector<unsigned_int,std::allocator<unsigned_int>> *this)

{
  allocator *paVar1;
  
  paVar1 = (allocator *)
           _Vector_base<unsigned_int,std::allocator<unsigned_int>>::_M_get_Tp_allocator
                     ((_Vector_base<unsigned_int,std::allocator<unsigned_int>> *)this);
  _Destroy<unsigned_int*,unsigned_int>(*(uint **)this,*(uint **)(this + 8),paVar1);
  _Vector_base<unsigned_int,std::allocator<unsigned_int>>::~_Vector_base
            ((_Vector_base<unsigned_int,std::allocator<unsigned_int>> *)this);
  return;
}




/* std::move_iterator<unsigned int*>::base() const */

undefined8 __thiscall std::move_iterator<unsigned_int*>::base(move_iterator<unsigned_int*> *this)

{
  return *(undefined8 *)this;
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




/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* unsigned int* std::uninitialized_fill_n<unsigned int*, unsigned long, unsigned int>(unsigned
   int*, unsigned long, unsigned int const&) */

uint * std::uninitialized_fill_n<unsigned_int*,unsigned_long,unsigned_int>
                 (uint *param_1,ulong param_2,uint *param_3)

{
  uint *puVar1;
  
  puVar1 = __uninitialized_fill_n<true>::__uninit_fill_n<unsigned_int*,unsigned_long,unsigned_int>
                     (param_1,param_2,param_3);
  return puVar1;
}




/* std::vector<unsigned int, std::allocator<unsigned int> >::end() const */

undefined8 __thiscall
std::vector<unsigned_int,std::allocator<unsigned_int>>::end
          (vector<unsigned_int,std::allocator<unsigned_int>> *this)

{
  long in_FS_OFFSET;
  uint *local_20;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_20 = *(uint **)(this + 8);
  __normal_iterator<unsigned_int_const*,std::vector<unsigned_int,std::allocator<unsigned_int>>>::
  __normal_iterator((__normal_iterator<unsigned_int_const*,std::vector<unsigned_int,std::allocator<unsigned_int>>>
                     *)&local_18,&local_20);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




/* unsigned int* std::__uninitialized_copy<true>::__uninit_copy<__normal_iterator<unsigned int
   const*, std::vector<unsigned int, std::allocator<unsigned int> > >, unsigned
   int*>(__normal_iterator<unsigned int const*, std::vector<unsigned int, std::allocator<unsigned
   int> > >, __normal_iterator<unsigned int const*, std::vector<unsigned int,
   std::allocator<unsigned int> > >, unsigned int*) */

void std::__uninitialized_copy<true>::
     __uninit_copy<__normal_iterator<unsigned_int_const*,std::vector<unsigned_int,std::allocator<unsigned_int>>>,unsigned_int*>
               (undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  copy<__normal_iterator<unsigned_int_const*,std::vector<unsigned_int,std::allocator<unsigned_int>>>,unsigned_int*>
            (param_1,param_2,param_3);
  return;
}




/* std::_Vector_base<unsigned int, std::allocator<unsigned int> >::_M_deallocate(unsigned int*,
   unsigned long) */

void __thiscall
std::_Vector_base<unsigned_int,std::allocator<unsigned_int>>::_M_deallocate
          (_Vector_base<unsigned_int,std::allocator<unsigned_int>> *this,uint *param_1,ulong param_2
          )

{
  if (param_1 != (uint *)0x0) {
    allocator_traits<std::allocator<unsigned_int>>::deallocate((allocator *)this,param_1,param_2);
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
    __isoc99_swscanf(local_18 * 8 + param_3,&DAT_001040f0,local_1c);
    *(char *)(local_18 + param_1) = local_1c[0];
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




/* operator new(unsigned long, void*) */

void * operator_new(ulong param_1,void *param_2)

{
  return param_2;
}




/* unsigned int* std::__copy_move_backward<true, true,
   std::random_access_iterator_tag>::__copy_move_b<unsigned int>(unsigned int const*, unsigned int
   const*, unsigned int*) */

uint * std::__copy_move_backward<true,true,std::random_access_iterator_tag>::
       __copy_move_b<unsigned_int>(uint *param_1,uint *param_2,uint *param_3)

{
  long lVar1;
  
  lVar1 = (long)param_2 - (long)param_1 >> 2;
  if (lVar1 != 0) {
    memmove(param_3 + -lVar1,param_1,lVar1 * 4);
  }
  return param_3 + -lVar1;
}




void printIntLine(uint param_1)

{
  printf("%d\n",(ulong)param_1);
  return;
}




int globalReturnsTrueOrFalse(void)

{
  int iVar1;
  
  iVar1 = rand();
  return iVar1 % 2;
}




/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* __enable_if<std::__is_scalar<unsigned int>::__value, unsigned int*>::__type
   std::__fill_n_a<unsigned int*, unsigned long, unsigned int>(unsigned int*, unsigned long,
   unsigned int const&) */

__type std::__fill_n_a<unsigned_int*,unsigned_long,unsigned_int>
                 (uint *param_1,ulong param_2,uint *param_3)

{
  uint uVar1;
  uint *local_20;
  ulong local_10;
  
  uVar1 = *param_3;
  local_20 = param_1;
  for (local_10 = param_2; local_10 != 0; local_10 = local_10 - 1) {
    *local_20 = uVar1;
    local_20 = local_20 + 1;
  }
  return (__type)local_20;
}




/* std::vector<unsigned int, std::allocator<unsigned int> >::insert(__normal_iterator<unsigned int
   const*, std::vector<unsigned int, std::allocator<unsigned int> > >, unsigned long, unsigned int
   const&) */

void __thiscall
std::vector<unsigned_int,std::allocator<unsigned_int>>::insert
          (vector<unsigned_int,std::allocator<unsigned_int>> *this,undefined8 param_2,
          undefined8 param_3,undefined8 param_4)

{
  difference_type dVar1;
  undefined4 extraout_var;
  undefined8 uVar2;
  long in_FS_OFFSET;
  undefined8 local_38;
  vector<unsigned_int,std::allocator<unsigned_int>> *local_30;
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
  uVar2 = __normal_iterator<unsigned_int*,std::vector<unsigned_int,std::allocator<unsigned_int>>>::
          operator+((__normal_iterator<unsigned_int*,std::vector<unsigned_int,std::allocator<unsigned_int>>>
                     *)&local_20,local_18);
  _M_fill_insert(local_30,uVar2,param_3,param_4);
  local_20 = begin(local_30);
  __normal_iterator<unsigned_int*,std::vector<unsigned_int,std::allocator<unsigned_int>>>::operator+
            ((__normal_iterator<unsigned_int*,std::vector<unsigned_int,std::allocator<unsigned_int>>>
              *)&local_20,local_18);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




/* std::vector<unsigned int, std::allocator<unsigned int>
   >::_Temporary_value::_Temporary_value<unsigned int const&>(std::vector<unsigned int,
   std::allocator<unsigned int> >*, unsigned int const&) */

void __thiscall
std::vector<unsigned_int,std::allocator<unsigned_int>>::_Temporary_value::
_Temporary_value<unsigned_int_const&>(_Temporary_value *this,vector *param_1,uint *param_2)

{
  uint *puVar1;
  uint *puVar2;
  
  *(vector **)this = param_1;
  puVar1 = forward<unsigned_int_const&>((type *)param_2);
  puVar2 = (uint *)_M_ptr(this);
  allocator_traits<std::allocator<unsigned_int>>::construct<unsigned_int,unsigned_int_const&>
            (*(allocator **)this,puVar2,puVar1);
  return;
}




/* CWE190_Integer_Overflow__unsigned_int_max_square_72::goodB2G() */

void CWE190_Integer_Overflow__unsigned_int_max_square_72::goodB2G(void)

{
  long in_FS_OFFSET;
  undefined4 local_64;
  undefined8 local_60;
  vector<unsigned_int,std::allocator<unsigned_int>> local_58 [32];
  undefined8 local_38 [3];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  std::vector<unsigned_int,std::allocator<unsigned_int>>::vector(local_58);
  local_64 = 0xffffffff;
  local_60 = std::vector<unsigned_int,std::allocator<unsigned_int>>::end(local_58);
  __normal_iterator<unsigned_int_const*,std::vector<unsigned_int,std::allocator<unsigned_int>>>::
  __normal_iterator<unsigned_int*>
            ((__normal_iterator<unsigned_int_const*,std::vector<unsigned_int,std::allocator<unsigned_int>>>
              *)local_38,(__normal_iterator *)&local_60);
                    /* try { // try from 0010194c to 001019e1 has its CatchHandler @ 00101a2d */
  std::vector<unsigned_int,std::allocator<unsigned_int>>::insert(local_58,local_38[0],1,&local_64);
  local_60 = std::vector<unsigned_int,std::allocator<unsigned_int>>::end(local_58);
  __normal_iterator<unsigned_int_const*,std::vector<unsigned_int,std::allocator<unsigned_int>>>::
  __normal_iterator<unsigned_int*>
            ((__normal_iterator<unsigned_int_const*,std::vector<unsigned_int,std::allocator<unsigned_int>>>
              *)local_38,(__normal_iterator *)&local_60);
  std::vector<unsigned_int,std::allocator<unsigned_int>>::insert(local_58,local_38[0],1,&local_64);
  local_60 = std::vector<unsigned_int,std::allocator<unsigned_int>>::end(local_58);
  __normal_iterator<unsigned_int_const*,std::vector<unsigned_int,std::allocator<unsigned_int>>>::
  __normal_iterator<unsigned_int*>
            ((__normal_iterator<unsigned_int_const*,std::vector<unsigned_int,std::allocator<unsigned_int>>>
              *)local_38,(__normal_iterator *)&local_60);
  std::vector<unsigned_int,std::allocator<unsigned_int>>::insert(local_58,local_38[0],1,&local_64);
  std::vector<unsigned_int,std::allocator<unsigned_int>>::vector
            ((vector<unsigned_int,std::allocator<unsigned_int>> *)local_38,(vector *)local_58);
                    /* try { // try from 001019e9 to 001019ed has its CatchHandler @ 00101a18 */
  goodB2GSink((vector)local_38);
  std::vector<unsigned_int,std::allocator<unsigned_int>>::~vector
            ((vector<unsigned_int,std::allocator<unsigned_int>> *)local_38);
  std::vector<unsigned_int,std::allocator<unsigned_int>>::~vector(local_58);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




/* std::_Vector_base<unsigned int, std::allocator<unsigned int> >::_Vector_base(unsigned long,
   std::allocator<unsigned int> const&) */

void __thiscall
std::_Vector_base<unsigned_int,std::allocator<unsigned_int>>::_Vector_base
          (_Vector_base<unsigned_int,std::allocator<unsigned_int>> *this,ulong param_1,
          allocator *param_2)

{
  _Vector_impl::_Vector_impl((_Vector_impl *)this,param_2);
                    /* try { // try from 001026d4 to 001026d8 has its CatchHandler @ 001026db */
  _M_create_storage(this,param_1);
  return;
}




void bad3(void)

{
  return;
}




void good1(void)

{
  return;
}




/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* unsigned int* std::__copy_move_a<true, unsigned int*, unsigned int*>(unsigned int*, unsigned
   int*, unsigned int*) */

uint * std::__copy_move_a<true,unsigned_int*,unsigned_int*>
                 (uint *param_1,uint *param_2,uint *param_3)

{
  uint *puVar1;
  
  puVar1 = __copy_move<true,true,std::random_access_iterator_tag>::__copy_m<unsigned_int>
                     (param_1,param_2,param_3);
  return puVar1;
}




/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* unsigned int* std::__niter_base<unsigned int*>(unsigned int*) */

uint * std::__niter_base<unsigned_int*>(uint *param_1)

{
  return param_1;
}




void printStructLine(uint *param_1)

{
  printf("%d -- %d\n",(ulong)*param_1,(ulong)param_1[1]);
  return;
}




/* std::_Vector_base<unsigned int, std::allocator<unsigned int> >::_Vector_impl::~_Vector_impl() */

void __thiscall
std::_Vector_base<unsigned_int,std::allocator<unsigned_int>>::_Vector_impl::~_Vector_impl
          (_Vector_impl *this)

{
  allocator<unsigned_int>::~allocator((allocator<unsigned_int> *)this);
  return;
}




/* std::vector<unsigned int, std::allocator<unsigned int> >::_Temporary_value::_M_ptr() */

_Temporary_value * __thiscall
std::vector<unsigned_int,std::allocator<unsigned_int>>::_Temporary_value::_M_ptr
          (_Temporary_value *this)

{
  return this + 8;
}




/* new_allocator<unsigned int>::deallocate(unsigned int*, unsigned long) */

void new_allocator<unsigned_int>::deallocate(uint *param_1,ulong param_2)

{
  operator_delete((void *)param_2);
  return;
}




/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* unsigned int* std::__niter_wrap<unsigned int*>(unsigned int* const&, unsigned int*) */

uint * std::__niter_wrap<unsigned_int*>(uint **param_1,uint *param_2)

{
  return param_2;
}




/* std::move_iterator<unsigned int*>::move_iterator(unsigned int*) */

void __thiscall
std::move_iterator<unsigned_int*>::move_iterator(move_iterator<unsigned_int*> *this,uint *param_1)

{
  *(uint **)this = param_1;
  return;
}




/* unsigned int* std::__copy_move_a2<false, __normal_iterator<unsigned int const*,
   std::vector<unsigned int, std::allocator<unsigned int> > >, unsigned
   int*>(__normal_iterator<unsigned int const*, std::vector<unsigned int, std::allocator<unsigned
   int> > >, __normal_iterator<unsigned int const*, std::vector<unsigned int,
   std::allocator<unsigned int> > >, unsigned int*) */

void std::
     __copy_move_a2<false,__normal_iterator<unsigned_int_const*,std::vector<unsigned_int,std::allocator<unsigned_int>>>,unsigned_int*>
               (undefined8 param_1,undefined8 param_2,uint *param_3)

{
  uint *puVar1;
  uint *puVar2;
  uint *puVar3;
  uint *local_30;
  undefined8 local_28;
  undefined8 local_20;
  
  local_30 = param_3;
  local_28 = param_2;
  local_20 = param_1;
  puVar1 = __niter_base<unsigned_int*>(param_3);
  puVar2 = (uint *)__niter_base<unsigned_int_const*,std::vector<unsigned_int,std::allocator<unsigned_int>>>
                             (local_28);
  puVar3 = (uint *)__niter_base<unsigned_int_const*,std::vector<unsigned_int,std::allocator<unsigned_int>>>
                             (local_20);
  puVar1 = __copy_move_a<false,unsigned_int_const*,unsigned_int*>(puVar3,puVar2,puVar1);
  __niter_wrap<unsigned_int*>(&local_30,puVar1);
  return;
}




/* std::vector<unsigned int, std::allocator<unsigned int> >::vector() */

void __thiscall
std::vector<unsigned_int,std::allocator<unsigned_int>>::vector
          (vector<unsigned_int,std::allocator<unsigned_int>> *this)

{
  _Vector_base<unsigned_int,std::allocator<unsigned_int>>::_Vector_base
            ((_Vector_base<unsigned_int,std::allocator<unsigned_int>> *)this);
  return;
}




/* unsigned int* std::__uninitialized_fill_n<true>::__uninit_fill_n<unsigned int*, unsigned long,
   unsigned int>(unsigned int*, unsigned long, unsigned int const&) */

uint * std::__uninitialized_fill_n<true>::__uninit_fill_n<unsigned_int*,unsigned_long,unsigned_int>
                 (uint *param_1,ulong param_2,uint *param_3)

{
  uint *puVar1;
  
  puVar1 = fill_n<unsigned_int*,unsigned_long,unsigned_int>(param_1,param_2,param_3);
  return puVar1;
}




/* std::allocator_traits<std::allocator<unsigned int> >::deallocate(std::allocator<unsigned int>&,
   unsigned int*, unsigned long) */

void std::allocator_traits<std::allocator<unsigned_int>>::deallocate
               (allocator *param_1,uint *param_2,ulong param_3)

{
  new_allocator<unsigned_int>::deallocate((uint *)param_1,(ulong)param_2);
  return;
}




void bad7(void)

{
  return;
}




/* unsigned int* std::__uninitialized_copy_a<__normal_iterator<unsigned int const*,
   std::vector<unsigned int, std::allocator<unsigned int> > >, unsigned int*, unsigned
   int>(__normal_iterator<unsigned int const*, std::vector<unsigned int, std::allocator<unsigned
   int> > >, __normal_iterator<unsigned int const*, std::vector<unsigned int,
   std::allocator<unsigned int> > >, unsigned int*, std::allocator<unsigned int>&) */

void std::
     __uninitialized_copy_a<__normal_iterator<unsigned_int_const*,std::vector<unsigned_int,std::allocator<unsigned_int>>>,unsigned_int*,unsigned_int>
               (undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  uninitialized_copy<__normal_iterator<unsigned_int_const*,std::vector<unsigned_int,std::allocator<unsigned_int>>>,unsigned_int*>
            (param_1,param_2,param_3);
  return;
}




/* std::allocator_traits<std::allocator<unsigned int>
   >::select_on_container_copy_construction(std::allocator<unsigned int> const&) */

allocator *
std::allocator_traits<std::allocator<unsigned_int>>::select_on_container_copy_construction
          (allocator *param_1)

{
  allocator<unsigned_int>::allocator(param_1);
  return param_1;
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




/* std::_Vector_base<unsigned int, std::allocator<unsigned int>
   >::_Vector_impl_data::_Vector_impl_data() */

void __thiscall
std::_Vector_base<unsigned_int,std::allocator<unsigned_int>>::_Vector_impl_data::_Vector_impl_data
          (_Vector_impl_data *this)

{
  *(undefined8 *)this = 0;
  *(undefined8 *)(this + 8) = 0;
  *(undefined8 *)(this + 0x10) = 0;
  return;
}




/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* unsigned int* std::__uninitialized_copy_a<std::move_iterator<unsigned int*>, unsigned int*,
   unsigned int>(std::move_iterator<unsigned int*>, std::move_iterator<unsigned int*>, unsigned
   int*, std::allocator<unsigned int>&) */

uint * std::__uninitialized_copy_a<std::move_iterator<unsigned_int*>,unsigned_int*,unsigned_int>
                 (move_iterator param_1,move_iterator param_2,uint *param_3,allocator *param_4)

{
  uint *puVar1;
  
  puVar1 = uninitialized_copy<std::move_iterator<unsigned_int*>,unsigned_int*>
                     (param_1,param_2,param_3);
  return puVar1;
}




/* __normal_iterator<unsigned int*, std::vector<unsigned int, std::allocator<unsigned int> >
   >::TEMPNAMEPLACEHOLDERVALUE(long) const */

undefined8 __thiscall
__normal_iterator<unsigned_int*,std::vector<unsigned_int,std::allocator<unsigned_int>>>::operator+
          (__normal_iterator<unsigned_int*,std::vector<unsigned_int,std::allocator<unsigned_int>>>
           *this,long param_1)

{
  long in_FS_OFFSET;
  uint *local_20;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_20 = (uint *)(*(long *)this + param_1 * 4);
  __normal_iterator((__normal_iterator<unsigned_int*,std::vector<unsigned_int,std::allocator<unsigned_int>>>
                     *)&local_18,&local_20);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




/* void new_allocator<unsigned int>::destroy<unsigned int>(unsigned int*) */

void new_allocator<unsigned_int>::destroy<unsigned_int>(uint *param_1)

{
  return;
}




/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* unsigned int* std::copy<std::move_iterator<unsigned int*>, unsigned
   int*>(std::move_iterator<unsigned int*>, std::move_iterator<unsigned int*>, unsigned int*) */

uint * std::copy<std::move_iterator<unsigned_int*>,unsigned_int*>
                 (move_iterator param_1,move_iterator param_2,uint *param_3)

{
  uint *puVar1;
  uint *puVar2;
  
  puVar1 = (uint *)__miter_base<unsigned_int*>(param_2);
  puVar2 = (uint *)__miter_base<unsigned_int*>(param_1);
  puVar1 = __copy_move_a2<true,unsigned_int*,unsigned_int*>(puVar2,puVar1,param_3);
  return puVar1;
}




/* std::allocator<unsigned int>::~allocator() */

void __thiscall std::allocator<unsigned_int>::~allocator(allocator<unsigned_int> *this)

{
  new_allocator<unsigned_int>::~new_allocator((new_allocator<unsigned_int> *)this);
  return;
}




/* __normal_iterator<unsigned int const*, std::vector<unsigned int, std::allocator<unsigned int> >
   >::difference_type TEMPNAMEPLACEHOLDERVALUE(__normal_iterator<unsigned int const*,
   std::vector<unsigned int, std::allocator<unsigned int> > > const&, __normal_iterator<unsigned int
   const*, std::vector<unsigned int, std::allocator<unsigned int> > > const&) */

difference_type operator-(__normal_iterator *param_1,__normal_iterator *param_2)

{
  long lVar1;
  long *plVar2;
  
  plVar2 = (long *)__normal_iterator<unsigned_int_const*,std::vector<unsigned_int,std::allocator<unsigned_int>>>
                   ::base((__normal_iterator<unsigned_int_const*,std::vector<unsigned_int,std::allocator<unsigned_int>>>
                           *)param_1);
  lVar1 = *plVar2;
  plVar2 = (long *)__normal_iterator<unsigned_int_const*,std::vector<unsigned_int,std::allocator<unsigned_int>>>
                   ::base((__normal_iterator<unsigned_int_const*,std::vector<unsigned_int,std::allocator<unsigned_int>>>
                           *)param_2);
  return (difference_type)(lVar1 - *plVar2 >> 2);
}




/* std::_Vector_base<unsigned int, std::allocator<unsigned int> >::~_Vector_base() */

void __thiscall
std::_Vector_base<unsigned_int,std::allocator<unsigned_int>>::~_Vector_base
          (_Vector_base<unsigned_int,std::allocator<unsigned_int>> *this)

{
  _M_deallocate(this,*(uint **)this,*(long *)(this + 0x10) - *(long *)this >> 2);
  _Vector_impl::~_Vector_impl((_Vector_impl *)this);
  return;
}




/* __alloc_traits<std::allocator<unsigned int>, unsigned
   int>::_S_select_on_copy(std::allocator<unsigned int> const&) */

allocator *
__alloc_traits<std::allocator<unsigned_int>,unsigned_int>::_S_select_on_copy(allocator *param_1)

{
  long lVar1;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  std::allocator_traits<std::allocator<unsigned_int>>::select_on_container_copy_construction
            (param_1);
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1;
}




/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* unsigned int* std::__uninitialized_move_if_noexcept_a<unsigned int*, unsigned int*,
   std::allocator<unsigned int> >(unsigned int*, unsigned int*, unsigned int*,
   std::allocator<unsigned int>&) */

uint * std::
       __uninitialized_move_if_noexcept_a<unsigned_int*,unsigned_int*,std::allocator<unsigned_int>>
                 (uint *param_1,uint *param_2,uint *param_3,allocator *param_4)

{
  move_iterator mVar1;
  move_iterator mVar2;
  uint *puVar3;
  
  mVar1 = __make_move_if_noexcept_iterator<unsigned_int,std::move_iterator<unsigned_int*>>(param_2);
  mVar2 = __make_move_if_noexcept_iterator<unsigned_int,std::move_iterator<unsigned_int*>>(param_1);
  puVar3 = __uninitialized_copy_a<std::move_iterator<unsigned_int*>,unsigned_int*,unsigned_int>
                     (mVar2,mVar1,param_3,param_4);
  return puVar3;
}




/* std::allocator<unsigned int>::allocator(std::allocator<unsigned int> const&) */

void std::allocator<unsigned_int>::allocator(allocator *param_1)

{
  new_allocator<unsigned_int>::new_allocator((new_allocator *)param_1);
  return;
}




/* __normal_iterator<unsigned int const*, std::vector<unsigned int, std::allocator<unsigned int> >
   >::__normal_iterator(unsigned int const* const&) */

void __thiscall
__normal_iterator<unsigned_int_const*,std::vector<unsigned_int,std::allocator<unsigned_int>>>::
__normal_iterator(__normal_iterator<unsigned_int_const*,std::vector<unsigned_int,std::allocator<unsigned_int>>>
                  *this,uint **param_1)

{
  *(uint **)this = *param_1;
  return;
}




void good7(void)

{
  return;
}




void bad9(void)

{
  return;
}




/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* decltype (__miter_base(({parm#1}.base)())) std::__miter_base<unsigned
   int*>(std::move_iterator<unsigned int*>) */

void std::__miter_base<unsigned_int*>(move_iterator param_1)

{
  uint *puVar1;
  undefined4 in_register_0000003c;
  undefined8 local_10;
  
  local_10 = CONCAT44(in_register_0000003c,param_1);
  puVar1 = (uint *)move_iterator<unsigned_int*>::base((move_iterator<unsigned_int*> *)&local_10);
  __miter_base<unsigned_int*>(puVar1);
  return;
}




/* CWE190_Integer_Overflow__unsigned_int_max_square_72::goodB2GSink(std::vector<unsigned int,
   std::allocator<unsigned int> >) */

void CWE190_Integer_Overflow__unsigned_int_max_square_72::goodB2GSink(vector param_1)

{
  uint uVar1;
  uint *puVar2;
  long lVar3;
  undefined4 in_register_0000003c;
  
  puVar2 = (uint *)std::vector<unsigned_int,std::allocator<unsigned_int>>::operator[]
                             ((vector<unsigned_int,std::allocator<unsigned_int>> *)
                              CONCAT44(in_register_0000003c,param_1),2);
  uVar1 = *puVar2;
  lVar3 = std::abs((ulong)uVar1);
  if (lVar3 < 0xffff) {
    printUnsignedLine(uVar1 * uVar1);
  }
  else {
    printLine("data value is too large to perform arithmetic safely.");
  }
  return;
}




void stdThreadLockDestroy(pthread_mutex_t *param_1)

{
  pthread_mutex_destroy(param_1);
  free(param_1);
  return;
}




/* unsigned int* std::__copy_move<false, true, std::random_access_iterator_tag>::__copy_m<unsigned
   int>(unsigned int const*, unsigned int const*, unsigned int*) */

uint * std::__copy_move<false,true,std::random_access_iterator_tag>::__copy_m<unsigned_int>
                 (uint *param_1,uint *param_2,uint *param_3)

{
  long lVar1;
  
  lVar1 = (long)param_2 - (long)param_1 >> 2;
  if (lVar1 != 0) {
    memmove(param_3,param_1,lVar1 * 4);
  }
  return param_3 + lVar1;
}




void bad6(void)

{
  return;
}




/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* __enable_if<std::__is_scalar<unsigned int>::__value, void>::__type std::__fill_a<unsigned int*,
   unsigned int>(unsigned int*, unsigned int*, unsigned int const&) */

__type std::__fill_a<unsigned_int*,unsigned_int>(uint *param_1,uint *param_2,uint *param_3)

{
  uint uVar1;
  uint *local_20;
  
  uVar1 = *param_3;
  for (local_20 = param_1; local_20 != param_2; local_20 = local_20 + 1) {
    *local_20 = uVar1;
  }
  return (__type)local_20;
}




/* std::vector<unsigned int, std::allocator<unsigned int> >::cbegin() const */

undefined8 __thiscall
std::vector<unsigned_int,std::allocator<unsigned_int>>::cbegin
          (vector<unsigned_int,std::allocator<unsigned_int>> *this)

{
  long in_FS_OFFSET;
  uint *local_20;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_20 = *(uint **)this;
  __normal_iterator<unsigned_int_const*,std::vector<unsigned_int,std::allocator<unsigned_int>>>::
  __normal_iterator((__normal_iterator<unsigned_int_const*,std::vector<unsigned_int,std::allocator<unsigned_int>>>
                     *)&local_18,&local_20);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




/* std::vector<unsigned int, std::allocator<unsigned int> >::size() const */

long __thiscall
std::vector<unsigned_int,std::allocator<unsigned_int>>::size
          (vector<unsigned_int,std::allocator<unsigned_int>> *this)

{
  return *(long *)(this + 8) - *(long *)this >> 2;
}




/* std::_Vector_base<unsigned int, std::allocator<unsigned int> >::_M_create_storage(unsigned long)
    */

void __thiscall
std::_Vector_base<unsigned_int,std::allocator<unsigned_int>>::_M_create_storage
          (_Vector_base<unsigned_int,std::allocator<unsigned_int>> *this,ulong param_1)

{
  undefined8 uVar1;
  
  uVar1 = _M_allocate(this,param_1);
  *(undefined8 *)this = uVar1;
  *(undefined8 *)(this + 8) = *(undefined8 *)this;
  *(ulong *)(this + 0x10) = param_1 * 4 + *(long *)this;
  return;
}



