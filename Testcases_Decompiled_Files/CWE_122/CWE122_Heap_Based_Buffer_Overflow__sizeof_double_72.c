
/* std::vector<double*, std::allocator<double*> >::begin() const */

undefined8 __thiscall
std::vector<double*,std::allocator<double*>>::begin(vector<double*,std::allocator<double*>> *this)

{
  long in_FS_OFFSET;
  double **local_20;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_20 = *(double ***)this;
  __normal_iterator<double*const*,std::vector<double*,std::allocator<double*>>>::__normal_iterator
            ((__normal_iterator<double*const*,std::vector<double*,std::allocator<double*>>> *)
             &local_18,&local_20);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




/* double** std::uninitialized_copy<__normal_iterator<double* const*, std::vector<double*,
   std::allocator<double*> > >, double**>(__normal_iterator<double* const*, std::vector<double*,
   std::allocator<double*> > >, __normal_iterator<double* const*, std::vector<double*,
   std::allocator<double*> > >, double**) */

void std::
     uninitialized_copy<__normal_iterator<double*const*,std::vector<double*,std::allocator<double*>>>,double**>
               (undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  __uninitialized_copy<true>::
  __uninit_copy<__normal_iterator<double*const*,std::vector<double*,std::allocator<double*>>>,double**>
            (param_1,param_2,param_3);
  return;
}




/* std::vector<double*, std::allocator<double*> >::_Temporary_value::_M_ptr() */

_Temporary_value * __thiscall
std::vector<double*,std::allocator<double*>>::_Temporary_value::_M_ptr(_Temporary_value *this)

{
  return this + 8;
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




int globalReturnsTrueOrFalse(void)

{
  int iVar1;
  
  iVar1 = rand();
  return iVar1 % 2;
}




/* std::_Vector_base<double*, std::allocator<double*> >::_Vector_impl_data::_Vector_impl_data() */

void __thiscall
std::_Vector_base<double*,std::allocator<double*>>::_Vector_impl_data::_Vector_impl_data
          (_Vector_impl_data *this)

{
  *(undefined8 *)this = 0;
  *(undefined8 *)(this + 8) = 0;
  *(undefined8 *)(this + 0x10) = 0;
  return;
}




/* std::vector<double*, std::allocator<double*> >::_Temporary_value::_M_val() */

void __thiscall
std::vector<double*,std::allocator<double*>>::_Temporary_value::_M_val(_Temporary_value *this)

{
  _M_ptr(this);
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




/* std::move_iterator<double**>::move_iterator(double**) */

void __thiscall
std::move_iterator<double**>::move_iterator(move_iterator<double**> *this,double **param_1)

{
  *(double ***)this = param_1;
  return;
}




/* std::vector<double*, std::allocator<double*> >::vector(std::vector<double*,
   std::allocator<double*> > const&) */

void __thiscall
std::vector<double*,std::allocator<double*>>::vector
          (vector<double*,std::allocator<double*>> *this,vector *param_1)

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
  _Vector_base<double*,std::allocator<double*>>::_M_get_Tp_allocator
            ((_Vector_base<double*,std::allocator<double*>> *)param_1);
  __alloc_traits<std::allocator<double*>,double*>::_S_select_on_copy(&local_31);
  uVar1 = size((vector<double*,std::allocator<double*>> *)param_1);
                    /* try { // try from 00101c66 to 00101c6a has its CatchHandler @ 00101cd3 */
  _Vector_base<double*,std::allocator<double*>>::_Vector_base
            ((_Vector_base<double*,std::allocator<double*>> *)this,uVar1,&local_31);
  allocator<double*>::~allocator((allocator<double*> *)&local_31);
  uVar2 = _Vector_base<double*,std::allocator<double*>>::_M_get_Tp_allocator
                    ((_Vector_base<double*,std::allocator<double*>> *)this);
  uVar5 = *(undefined8 *)this;
  uVar3 = end((vector<double*,std::allocator<double*>> *)param_1);
  uVar4 = begin((vector<double*,std::allocator<double*>> *)param_1);
                    /* try { // try from 00101cb4 to 00101cb8 has its CatchHandler @ 00101cf1 */
  uVar5 = __uninitialized_copy_a<__normal_iterator<double*const*,std::vector<double*,std::allocator<double*>>>,double**,double*>
                    (uVar4,uVar3,uVar5,uVar2);
  *(undefined8 *)(this + 8) = uVar5;
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* double** std::fill_n<double**, unsigned long, double*>(double**, unsigned long, double* const&)
    */

double ** std::fill_n<double**,unsigned_long,double*>
                    (double **param_1,ulong param_2,double **param_3)

{
  __type _Var1;
  double **ppdVar2;
  undefined4 extraout_var;
  double **local_10;
  
  local_10 = param_1;
  ppdVar2 = __niter_base<double**>(param_1);
  _Var1 = __fill_n_a<double**,unsigned_long,double*>(ppdVar2,param_2,param_3);
  ppdVar2 = __niter_wrap<double**>(&local_10,(double **)CONCAT44(extraout_var,_Var1));
  return ppdVar2;
}




void stdThreadLockDestroy(pthread_mutex_t *param_1)

{
  pthread_mutex_destroy(param_1);
  free(param_1);
  return;
}




/* new_allocator<double*>::max_size() const */

undefined8 new_allocator<double*>::max_size(void)

{
  return 0xfffffffffffffff;
}




/* std::allocator<double*>::allocator() */

void std::allocator<double*>::allocator(void)

{
  new_allocator<double*>::new_allocator();
  return;
}




/* operator new(unsigned long, void*) */

void * operator_new(ulong param_1,void *param_2)

{
  return param_2;
}




void printLongLongLine(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




void good8(void)

{
  return;
}




/* __alloc_traits<std::allocator<double*>, double*>::_S_select_on_copy(std::allocator<double*>
   const&) */

allocator * __alloc_traits<std::allocator<double*>,double*>::_S_select_on_copy(allocator *param_1)

{
  long lVar1;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  std::allocator_traits<std::allocator<double*>>::select_on_container_copy_construction(param_1);
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1;
}




/* std::vector<double*, std::allocator<double*> >::vector() */

void __thiscall
std::vector<double*,std::allocator<double*>>::vector(vector<double*,std::allocator<double*>> *this)

{
  _Vector_base<double*,std::allocator<double*>>::_Vector_base
            ((_Vector_base<double*,std::allocator<double*>> *)this);
  return;
}




/* std::allocator_traits<std::allocator<double*> >::max_size(std::allocator<double*> const&) */

void std::allocator_traits<std::allocator<double*>>::max_size(allocator *param_1)

{
  new_allocator<double*>::max_size();
  return;
}




/* std::_Vector_base<double*, std::allocator<double*> >::_Vector_base() */

void __thiscall
std::_Vector_base<double*,std::allocator<double*>>::_Vector_base
          (_Vector_base<double*,std::allocator<double*>> *this)

{
  _Vector_impl::_Vector_impl((_Vector_impl *)this);
  return;
}




/* new_allocator<double*>::allocate(unsigned long, void const*) */

void new_allocator<double*>::allocate(ulong param_1,void *param_2)

{
  void *pvVar1;
  
  pvVar1 = (void *)max_size();
  if (pvVar1 < param_2) {
    std::__throw_bad_alloc();
  }
  operator_new((long)param_2 << 3);
  return;
}




void good1(void)

{
  return;
}




/* std::_Vector_base<double*, std::allocator<double*>
   >::_Vector_impl::_Vector_impl(std::allocator<double*> const&) */

void __thiscall
std::_Vector_base<double*,std::allocator<double*>>::_Vector_impl::_Vector_impl
          (_Vector_impl *this,allocator *param_1)

{
  allocator<double*>::allocator((allocator *)this);
  _Vector_impl_data::_Vector_impl_data((_Vector_impl_data *)this);
  return;
}




/* __normal_iterator<double* const*, std::vector<double*, std::allocator<double*> >
   >::__normal_iterator<double**>(__normal_iterator<double**, __enable_if<std::__are_same<double**,
   double**>::__value, std::vector<double*, std::allocator<double*> > >::__type> const&) */

void __thiscall
__normal_iterator<double*const*,std::vector<double*,std::allocator<double*>>>::
__normal_iterator<double**>
          (__normal_iterator<double*const*,std::vector<double*,std::allocator<double*>>> *this,
          __normal_iterator *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)
           __normal_iterator<double**,std::vector<double*,std::allocator<double*>>>::base
                     ((__normal_iterator<double**,std::vector<double*,std::allocator<double*>>> *)
                      param_1);
  *(undefined8 *)this = *puVar1;
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




/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* __enable_if<std::__is_scalar<double*>::__value, double**>::__type std::__fill_n_a<double**,
   unsigned long, double*>(double**, unsigned long, double* const&) */

__type std::__fill_n_a<double**,unsigned_long,double*>
                 (double **param_1,ulong param_2,double **param_3)

{
  double *pdVar1;
  double **local_20;
  ulong local_18;
  
  pdVar1 = *param_3;
  local_20 = param_1;
  for (local_18 = param_2; local_18 != 0; local_18 = local_18 - 1) {
    *local_20 = pdVar1;
    local_20 = local_20 + 1;
  }
  return (__type)local_20;
}




void printFloatLine(float param_1)

{
  printf("%f\n",(double)param_1);
  return;
}




/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* void std::_Destroy<double**>(double**, double**) */

void std::_Destroy<double**>(double **param_1,double **param_2)

{
  _Destroy_aux<true>::__destroy<double**>(param_1,param_2);
  return;
}




void good9(void)

{
  return;
}




/* std::vector<double*, std::allocator<double*> >::_M_fill_insert(__normal_iterator<double**,
   std::vector<double*, std::allocator<double*> > >, unsigned long, double* const&) */

void __thiscall
std::vector<double*,std::allocator<double*>>::_M_fill_insert
          (vector<double*,std::allocator<double*>> *this,undefined8 param_2,ulong param_3,
          double **param_4)

{
  long lVar1;
  difference_type dVar2;
  undefined4 extraout_var;
  allocator *paVar3;
  undefined8 *puVar4;
  long *plVar5;
  double **ppdVar6;
  undefined4 extraout_var_00;
  long in_FS_OFFSET;
  undefined8 local_88;
  vector<double*,std::allocator<double*>> *local_80;
  undefined8 local_78;
  double **local_70;
  ulong local_68;
  long local_60;
  double **local_58;
  double **local_50;
  ulong local_48;
  double **local_40;
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
      local_70 = (double **)
                 _Vector_base<double*,std::allocator<double*>>::_M_allocate
                           ((_Vector_base<double*,std::allocator<double*>> *)local_80,local_68);
      local_58 = local_70;
      paVar3 = (allocator *)
               _Vector_base<double*,std::allocator<double*>>::_M_get_Tp_allocator
                         ((_Vector_base<double*,std::allocator<double*>> *)local_80);
                    /* try { // try from 001021d6 to 00102261 has its CatchHandler @ 00102319 */
      __uninitialized_fill_n_a<double**,unsigned_long,double*,double*>
                (local_58 + local_60,param_3,param_4,paVar3);
      local_70 = (double **)0x0;
      paVar3 = (allocator *)
               _Vector_base<double*,std::allocator<double*>>::_M_get_Tp_allocator
                         ((_Vector_base<double*,std::allocator<double*>> *)local_80);
      puVar4 = (undefined8 *)
               __normal_iterator<double**,std::vector<double*,std::allocator<double*>>>::base
                         ((__normal_iterator<double**,std::vector<double*,std::allocator<double*>>>
                           *)&local_88);
      local_70 = __uninitialized_move_if_noexcept_a<double**,double**,std::allocator<double*>>
                           (*(double ***)local_80,(double **)*puVar4,local_58,paVar3);
      local_70 = local_70 + param_3;
      paVar3 = (allocator *)
               _Vector_base<double*,std::allocator<double*>>::_M_get_Tp_allocator
                         ((_Vector_base<double*,std::allocator<double*>> *)local_80);
      ppdVar6 = *(double ***)(local_80 + 8);
      puVar4 = (undefined8 *)
               __normal_iterator<double**,std::vector<double*,std::allocator<double*>>>::base
                         ((__normal_iterator<double**,std::vector<double*,std::allocator<double*>>>
                           *)&local_88);
      local_70 = __uninitialized_move_if_noexcept_a<double**,double**,std::allocator<double*>>
                           ((double **)*puVar4,ppdVar6,local_70,paVar3);
      paVar3 = (allocator *)
               _Vector_base<double*,std::allocator<double*>>::_M_get_Tp_allocator
                         ((_Vector_base<double*,std::allocator<double*>> *)local_80);
      _Destroy<double**,double*>(*(double ***)local_80,*(double ***)(local_80 + 8),paVar3);
      _Vector_base<double*,std::allocator<double*>>::_M_deallocate
                ((_Vector_base<double*,std::allocator<double*>> *)local_80,*(double ***)local_80,
                 *(long *)(local_80 + 0x10) - *(long *)local_80 >> 3);
      *(double ***)local_80 = local_58;
      *(double ***)(local_80 + 8) = local_70;
      *(double ***)(local_80 + 0x10) = local_58 + local_68;
    }
    else {
      _Temporary_value::_Temporary_value<double*const&>(local_38,(vector *)this,param_4);
                    /* try { // try from 00101f56 to 00102129 has its CatchHandler @ 001022fb */
      local_50 = (double **)_Temporary_value::_M_val(local_38);
      local_78 = end(local_80);
      dVar2 = operator-((__normal_iterator *)&local_78,(__normal_iterator *)&local_88);
      local_48 = CONCAT44(extraout_var,dVar2);
      local_40 = *(double ***)(local_80 + 8);
      if (param_3 < local_48) {
        paVar3 = (allocator *)
                 _Vector_base<double*,std::allocator<double*>>::_M_get_Tp_allocator
                           ((_Vector_base<double*,std::allocator<double*>> *)local_80);
        __uninitialized_move_a<double**,double**,std::allocator<double*>>
                  ((double **)(param_3 * -8 + *(long *)(local_80 + 8)),*(double ***)(local_80 + 8),
                   *(double ***)(local_80 + 8),paVar3);
        *(ulong *)(local_80 + 8) = param_3 * 8 + *(long *)(local_80 + 8);
        ppdVar6 = local_40 + -param_3;
        puVar4 = (undefined8 *)
                 __normal_iterator<double**,std::vector<double*,std::allocator<double*>>>::base
                           ((__normal_iterator<double**,std::vector<double*,std::allocator<double*>>>
                             *)&local_88);
        move_backward<double**,double**>((double **)*puVar4,ppdVar6,local_40);
        plVar5 = (long *)__normal_iterator<double**,std::vector<double*,std::allocator<double*>>>::
                         base((__normal_iterator<double**,std::vector<double*,std::allocator<double*>>>
                               *)&local_88);
        lVar1 = *plVar5;
        puVar4 = (undefined8 *)
                 __normal_iterator<double**,std::vector<double*,std::allocator<double*>>>::base
                           ((__normal_iterator<double**,std::vector<double*,std::allocator<double*>>>
                             *)&local_88);
        fill<double**,double*>((double **)*puVar4,(double **)(lVar1 + param_3 * 8),local_50);
      }
      else {
        paVar3 = (allocator *)
                 _Vector_base<double*,std::allocator<double*>>::_M_get_Tp_allocator
                           ((_Vector_base<double*,std::allocator<double*>> *)local_80);
        ppdVar6 = __uninitialized_fill_n_a<double**,unsigned_long,double*,double*>
                            (*(double ***)(local_80 + 8),param_3 - local_48,local_50,paVar3);
        *(double ***)(local_80 + 8) = ppdVar6;
        paVar3 = (allocator *)
                 _Vector_base<double*,std::allocator<double*>>::_M_get_Tp_allocator
                           ((_Vector_base<double*,std::allocator<double*>> *)local_80);
        ppdVar6 = *(double ***)(local_80 + 8);
        puVar4 = (undefined8 *)
                 __normal_iterator<double**,std::vector<double*,std::allocator<double*>>>::base
                           ((__normal_iterator<double**,std::vector<double*,std::allocator<double*>>>
                             *)&local_88);
        __uninitialized_move_a<double**,double**,std::allocator<double*>>
                  ((double **)*puVar4,local_40,ppdVar6,paVar3);
        *(ulong *)(local_80 + 8) = local_48 * 8 + *(long *)(local_80 + 8);
        puVar4 = (undefined8 *)
                 __normal_iterator<double**,std::vector<double*,std::allocator<double*>>>::base
                           ((__normal_iterator<double**,std::vector<double*,std::allocator<double*>>>
                             *)&local_88);
        fill<double**,double*>((double **)*puVar4,local_40,local_50);
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




void bad3(void)

{
  return;
}




/* new_allocator<double*>::deallocate(double**, unsigned long) */

void new_allocator<double*>::deallocate(double **param_1,ulong param_2)

{
  operator_delete((void *)param_2);
  return;
}




void good3(void)

{
  return;
}




/* std::_Vector_base<double*, std::allocator<double*> >::_M_create_storage(unsigned long) */

void __thiscall
std::_Vector_base<double*,std::allocator<double*>>::_M_create_storage
          (_Vector_base<double*,std::allocator<double*>> *this,ulong param_1)

{
  undefined8 uVar1;
  
  uVar1 = _M_allocate(this,param_1);
  *(undefined8 *)this = uVar1;
  *(undefined8 *)(this + 8) = *(undefined8 *)this;
  *(ulong *)(this + 0x10) = param_1 * 8 + *(long *)this;
  return;
}




void bad9(void)

{
  return;
}




/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* double** std::__copy_move_a<true, double**, double**>(double**, double**, double**) */

double ** std::__copy_move_a<true,double**,double**>
                    (double **param_1,double **param_2,double **param_3)

{
  double **ppdVar1;
  
  ppdVar1 = __copy_move<true,true,std::random_access_iterator_tag>::__copy_m<double*>
                      (param_1,param_2,param_3);
  return ppdVar1;
}




/* std::_Vector_base<double*, std::allocator<double*> >::_Vector_impl::_Vector_impl() */

void __thiscall
std::_Vector_base<double*,std::allocator<double*>>::_Vector_impl::_Vector_impl(_Vector_impl *this)

{
  allocator<double*>::allocator();
  _Vector_impl_data::_Vector_impl_data((_Vector_impl_data *)this);
  return;
}




/* double** std::__copy_move<true, true, std::random_access_iterator_tag>::__copy_m<double*>(double*
   const*, double* const*, double**) */

double ** std::__copy_move<true,true,std::random_access_iterator_tag>::__copy_m<double*>
                    (double **param_1,double **param_2,double **param_3)

{
  long lVar1;
  
  lVar1 = (long)param_2 - (long)param_1 >> 3;
  if (lVar1 != 0) {
    memmove(param_3,param_1,lVar1 * 8);
  }
  return param_3 + lVar1;
}




/* std::vector<double*, std::allocator<double*> >::_M_check_len(unsigned long, char const*) const */

ulong __thiscall
std::vector<double*,std::allocator<double*>>::_M_check_len
          (vector<double*,std::allocator<double*>> *this,ulong param_1,char *param_2)

{
  long lVar1;
  long lVar2;
  ulong *puVar3;
  ulong uVar4;
  ulong uVar5;
  long in_FS_OFFSET;
  ulong local_48;
  vector<double*,std::allocator<double*>> *local_40;
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




/* __normal_iterator<double* const*, std::vector<double*, std::allocator<double*> > >
   std::__miter_base<__normal_iterator<double* const*, std::vector<double*, std::allocator<double*>
   > > >(__normal_iterator<double* const*, std::vector<double*, std::allocator<double*> > >) */

undefined8
std::__miter_base<__normal_iterator<double*const*,std::vector<double*,std::allocator<double*>>>>
          (undefined8 param_1)

{
  return param_1;
}




/* std::vector<double*, std::allocator<double*> >::_Temporary_value::~_Temporary_value() */

void __thiscall
std::vector<double*,std::allocator<double*>>::_Temporary_value::~_Temporary_value
          (_Temporary_value *this)

{
  double **ppdVar1;
  
  ppdVar1 = (double **)_M_ptr(this);
  allocator_traits<std::allocator<double*>>::destroy<double*>(*(allocator **)this,ppdVar1);
  return;
}




/* std::_Vector_base<double*, std::allocator<double*> >::_M_get_Tp_allocator() */

_Vector_base<double*,std::allocator<double*>> * __thiscall
std::_Vector_base<double*,std::allocator<double*>>::_M_get_Tp_allocator
          (_Vector_base<double*,std::allocator<double*>> *this)

{
  return this;
}




/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* double** std::__uninitialized_copy_a<std::move_iterator<double**>, double**,
   double*>(std::move_iterator<double**>, std::move_iterator<double**>, double**,
   std::allocator<double*>&) */

double ** std::__uninitialized_copy_a<std::move_iterator<double**>,double**,double*>
                    (move_iterator param_1,move_iterator param_2,double **param_3,allocator *param_4
                    )

{
  double **ppdVar1;
  
  ppdVar1 = uninitialized_copy<std::move_iterator<double**>,double**>(param_1,param_2,param_3);
  return ppdVar1;
}




/* std::allocator_traits<std::allocator<double*> >::allocate(std::allocator<double*>&, unsigned
   long) */

void std::allocator_traits<std::allocator<double*>>::allocate(allocator *param_1,ulong param_2)

{
  new_allocator<double*>::allocate((ulong)param_1,(void *)param_2);
  return;
}




/* double** std::copy<__normal_iterator<double* const*, std::vector<double*, std::allocator<double*>
   > >, double**>(__normal_iterator<double* const*, std::vector<double*, std::allocator<double*> >
   >, __normal_iterator<double* const*, std::vector<double*, std::allocator<double*> > >, double**)
    */

void std::
     copy<__normal_iterator<double*const*,std::vector<double*,std::allocator<double*>>>,double**>
               (undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = __miter_base<__normal_iterator<double*const*,std::vector<double*,std::allocator<double*>>>>
                    (param_2);
  uVar2 = __miter_base<__normal_iterator<double*const*,std::vector<double*,std::allocator<double*>>>>
                    (param_1);
  __copy_move_a2<false,__normal_iterator<double*const*,std::vector<double*,std::allocator<double*>>>,double**>
            (uVar2,uVar1,param_3);
  return;
}




/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* double** std::uninitialized_fill_n<double**, unsigned long, double*>(double**, unsigned long,
   double* const&) */

double ** std::uninitialized_fill_n<double**,unsigned_long,double*>
                    (double **param_1,ulong param_2,double **param_3)

{
  double **ppdVar1;
  
  ppdVar1 = __uninitialized_fill_n<true>::__uninit_fill_n<double**,unsigned_long,double*>
                      (param_1,param_2,param_3);
  return ppdVar1;
}




/* __normal_iterator<double* const*, std::vector<double*, std::allocator<double*> > >::base() const
    */

__normal_iterator<double*const*,std::vector<double*,std::allocator<double*>>> * __thiscall
__normal_iterator<double*const*,std::vector<double*,std::allocator<double*>>>::base
          (__normal_iterator<double*const*,std::vector<double*,std::allocator<double*>>> *this)

{
  return this;
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




void bad8(void)

{
  return;
}




/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* double* const& std::forward<double* const&>(std::remove_reference<double* const&>::type&) */

double ** std::forward<double*const&>(type *param_1)

{
  return (double **)param_1;
}




/* void new_allocator<double*>::destroy<double*>(double**) */

void new_allocator<double*>::destroy<double*>(double **param_1)

{
  return;
}




/* double** std::__copy_move_a2<false, __normal_iterator<double* const*, std::vector<double*,
   std::allocator<double*> > >, double**>(__normal_iterator<double* const*, std::vector<double*,
   std::allocator<double*> > >, __normal_iterator<double* const*, std::vector<double*,
   std::allocator<double*> > >, double**) */

void std::
     __copy_move_a2<false,__normal_iterator<double*const*,std::vector<double*,std::allocator<double*>>>,double**>
               (undefined8 param_1,undefined8 param_2,double **param_3)

{
  double **ppdVar1;
  double **ppdVar2;
  double **ppdVar3;
  double **local_30;
  undefined8 local_28;
  undefined8 local_20;
  
  local_30 = param_3;
  local_28 = param_2;
  local_20 = param_1;
  ppdVar1 = __niter_base<double**>(param_3);
  ppdVar2 = (double **)
            __niter_base<double*const*,std::vector<double*,std::allocator<double*>>>(local_28);
  ppdVar3 = (double **)
            __niter_base<double*const*,std::vector<double*,std::allocator<double*>>>(local_20);
  ppdVar1 = __copy_move_a<false,double*const*,double**>(ppdVar3,ppdVar2,ppdVar1);
  __niter_wrap<double**>(&local_30,ppdVar1);
  return;
}




/* double** std::__uninitialized_copy<true>::__uninit_copy<std::move_iterator<double**>,
   double**>(std::move_iterator<double**>, std::move_iterator<double**>, double**) */

double ** std::__uninitialized_copy<true>::__uninit_copy<std::move_iterator<double**>,double**>
                    (move_iterator param_1,move_iterator param_2,double **param_3)

{
  double **ppdVar1;
  
  ppdVar1 = copy<std::move_iterator<double**>,double**>(param_1,param_2,param_3);
  return ppdVar1;
}




void printUnsignedLine(uint param_1)

{
  printf("%u\n",(ulong)param_1);
  return;
}




/* __normal_iterator<double**, std::vector<double*, std::allocator<double*> >
   >::TEMPNAMEPLACEHOLDERVALUE(long) const */

undefined8 __thiscall
__normal_iterator<double**,std::vector<double*,std::allocator<double*>>>::operator+
          (__normal_iterator<double**,std::vector<double*,std::allocator<double*>>> *this,
          long param_1)

{
  long in_FS_OFFSET;
  double **local_20;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_20 = (double **)(*(long *)this + param_1 * 8);
  __normal_iterator((__normal_iterator<double**,std::vector<double*,std::allocator<double*>>> *)
                    &local_18,&local_20);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
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
/* double** std::copy<std::move_iterator<double**>, double**>(std::move_iterator<double**>,
   std::move_iterator<double**>, double**) */

double ** std::copy<std::move_iterator<double**>,double**>
                    (move_iterator param_1,move_iterator param_2,double **param_3)

{
  double **ppdVar1;
  double **ppdVar2;
  
  ppdVar1 = (double **)__miter_base<double**>(param_2);
  ppdVar2 = (double **)__miter_base<double**>(param_1);
  ppdVar1 = __copy_move_a2<true,double**,double**>(ppdVar2,ppdVar1,param_3);
  return ppdVar1;
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




undefined8 main(void)

{
  time_t tVar1;
  
  tVar1 = time((time_t *)0x0);
  srand((uint)tVar1);
  printLine("Calling good()...");
  CWE122_Heap_Based_Buffer_Overflow__sizeof_double_72::good();
  printLine("Finished good()");
  printLine("Calling bad()...");
  CWE122_Heap_Based_Buffer_Overflow__sizeof_double_72::bad();
  printLine("Finished bad()");
  return 0;
}




/* std::vector<double*, std::allocator<double*> >::end() const */

undefined8 __thiscall
std::vector<double*,std::allocator<double*>>::end(vector<double*,std::allocator<double*>> *this)

{
  long in_FS_OFFSET;
  double **local_20;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_20 = *(double ***)(this + 8);
  __normal_iterator<double*const*,std::vector<double*,std::allocator<double*>>>::__normal_iterator
            ((__normal_iterator<double*const*,std::vector<double*,std::allocator<double*>>> *)
             &local_18,&local_20);
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




void stdThreadLockAcquire(pthread_mutex_t *param_1)

{
  pthread_mutex_lock(param_1);
  return;
}




/* double* const* std::__niter_base<double* const*, std::vector<double*, std::allocator<double*> >
   >(__normal_iterator<double* const*, std::vector<double*, std::allocator<double*> > >) */

undefined8
std::__niter_base<double*const*,std::vector<double*,std::allocator<double*>>>(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined8 local_10;
  
  local_10 = param_1;
  puVar1 = (undefined8 *)
           __normal_iterator<double*const*,std::vector<double*,std::allocator<double*>>>::base
                     ((__normal_iterator<double*const*,std::vector<double*,std::allocator<double*>>>
                       *)&local_10);
  return *puVar1;
}




/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* double** std::__miter_base<double**>(double**) */

double ** std::__miter_base<double**>(double **param_1)

{
  return param_1;
}




void printStructLine(uint *param_1)

{
  printf("%d -- %d\n",(ulong)*param_1,(ulong)param_1[1]);
  return;
}




/* std::vector<double*, std::allocator<double*> >::insert(__normal_iterator<double* const*,
   std::vector<double*, std::allocator<double*> > >, unsigned long, double* const&) */

void __thiscall
std::vector<double*,std::allocator<double*>>::insert
          (vector<double*,std::allocator<double*>> *this,undefined8 param_2,undefined8 param_3,
          undefined8 param_4)

{
  difference_type dVar1;
  undefined4 extraout_var;
  undefined8 uVar2;
  long in_FS_OFFSET;
  undefined8 local_38;
  vector<double*,std::allocator<double*>> *local_30;
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
  uVar2 = __normal_iterator<double**,std::vector<double*,std::allocator<double*>>>::operator+
                    ((__normal_iterator<double**,std::vector<double*,std::allocator<double*>>> *)
                     &local_20,local_18);
  _M_fill_insert(local_30,uVar2,param_3,param_4);
  local_20 = begin(local_30);
  __normal_iterator<double**,std::vector<double*,std::allocator<double*>>>::operator+
            ((__normal_iterator<double**,std::vector<double*,std::allocator<double*>>> *)&local_20,
             local_18);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




/* double** std::__copy_move<false, true,
   std::random_access_iterator_tag>::__copy_m<double*>(double* const*, double* const*, double**) */

double ** std::__copy_move<false,true,std::random_access_iterator_tag>::__copy_m<double*>
                    (double **param_1,double **param_2,double **param_3)

{
  long lVar1;
  
  lVar1 = (long)param_2 - (long)param_1 >> 3;
  if (lVar1 != 0) {
    memmove(param_3,param_1,lVar1 * 8);
  }
  return param_3 + lVar1;
}




void bad1(void)

{
  return;
}




/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* double** std::__niter_base<double**>(double**) */

double ** std::__niter_base<double**>(double **param_1)

{
  return param_1;
}




/* __normal_iterator<double**, std::vector<double*, std::allocator<double*> > >::difference_type
   TEMPNAMEPLACEHOLDERVALUE(__normal_iterator<double**, std::vector<double*, std::allocator<double*>
   > > const&, __normal_iterator<double**, std::vector<double*, std::allocator<double*> > > const&)
    */

difference_type operator-(__normal_iterator *param_1,__normal_iterator *param_2)

{
  long lVar1;
  long *plVar2;
  
  plVar2 = (long *)__normal_iterator<double**,std::vector<double*,std::allocator<double*>>>::base
                             ((__normal_iterator<double**,std::vector<double*,std::allocator<double*>>>
                               *)param_1);
  lVar1 = *plVar2;
  plVar2 = (long *)__normal_iterator<double**,std::vector<double*,std::allocator<double*>>>::base
                             ((__normal_iterator<double**,std::vector<double*,std::allocator<double*>>>
                               *)param_2);
  return (difference_type)(lVar1 - *plVar2 >> 3);
}




/* std::vector<double*, std::allocator<double*> >::end() */

undefined8 __thiscall
std::vector<double*,std::allocator<double*>>::end(vector<double*,std::allocator<double*>> *this)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  __normal_iterator<double**,std::vector<double*,std::allocator<double*>>>::__normal_iterator
            ((__normal_iterator<double**,std::vector<double*,std::allocator<double*>>> *)&local_18,
             (double ***)(this + 8));
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




/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* double** std::move_backward<double**, double**>(double**, double**, double**) */

double ** std::move_backward<double**,double**>(double **param_1,double **param_2,double **param_3)

{
  double **ppdVar1;
  double **ppdVar2;
  
  ppdVar1 = __miter_base<double**>(param_2);
  ppdVar2 = __miter_base<double**>(param_1);
  ppdVar1 = __copy_move_backward_a2<true,double**,double**>(ppdVar2,ppdVar1,param_3);
  return ppdVar1;
}




/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* double** std::__copy_move_backward_a2<true, double**, double**>(double**, double**, double**) */

double ** std::__copy_move_backward_a2<true,double**,double**>
                    (double **param_1,double **param_2,double **param_3)

{
  double **ppdVar1;
  double **ppdVar2;
  double **ppdVar3;
  double **local_30;
  double **local_28;
  double **local_20;
  
  local_30 = param_3;
  local_28 = param_2;
  local_20 = param_1;
  ppdVar1 = __niter_base<double**>(param_3);
  ppdVar2 = __niter_base<double**>(local_28);
  ppdVar3 = __niter_base<double**>(local_20);
  ppdVar1 = __copy_move_backward_a<true,double**,double**>(ppdVar3,ppdVar2,ppdVar1);
  ppdVar1 = __niter_wrap<double**>(&local_30,ppdVar1);
  return ppdVar1;
}




/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* std::move_iterator<double**> std::__make_move_if_noexcept_iterator<double*,
   std::move_iterator<double**> >(double**) */

move_iterator
std::__make_move_if_noexcept_iterator<double*,std::move_iterator<double**>>(double **param_1)

{
  long in_FS_OFFSET;
  move_iterator local_18 [2];
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  move_iterator<double**>::move_iterator((move_iterator<double**> *)local_18,param_1);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18[0];
}




/* new_allocator<double*>::~new_allocator() */

void __thiscall new_allocator<double*>::~new_allocator(new_allocator<double*> *this)

{
  return;
}




undefined8 globalReturnsTrue(void)

{
  return 1;
}




/* std::vector<double*, std::allocator<double*> >::max_size() const */

void __thiscall
std::vector<double*,std::allocator<double*>>::max_size
          (vector<double*,std::allocator<double*>> *this)

{
  allocator *paVar1;
  
  paVar1 = (allocator *)
           _Vector_base<double*,std::allocator<double*>>::_M_get_Tp_allocator
                     ((_Vector_base<double*,std::allocator<double*>> *)this);
  _S_max_size(paVar1);
  return;
}




void printIntLine(uint param_1)

{
  printf("%d\n",(ulong)param_1);
  return;
}




/* __normal_iterator<double* const*, std::vector<double*, std::allocator<double*> >
   >::difference_type TEMPNAMEPLACEHOLDERVALUE(__normal_iterator<double* const*,
   std::vector<double*, std::allocator<double*> > > const&, __normal_iterator<double* const*,
   std::vector<double*, std::allocator<double*> > > const&) */

difference_type operator-(__normal_iterator *param_1,__normal_iterator *param_2)

{
  long lVar1;
  long *plVar2;
  
  plVar2 = (long *)__normal_iterator<double*const*,std::vector<double*,std::allocator<double*>>>::
                   base((__normal_iterator<double*const*,std::vector<double*,std::allocator<double*>>>
                         *)param_1);
  lVar1 = *plVar2;
  plVar2 = (long *)__normal_iterator<double*const*,std::vector<double*,std::allocator<double*>>>::
                   base((__normal_iterator<double*const*,std::vector<double*,std::allocator<double*>>>
                         *)param_2);
  return (difference_type)(lVar1 - *plVar2 >> 3);
}




/* std::vector<double*, std::allocator<double*> >::size() const */

long __thiscall
std::vector<double*,std::allocator<double*>>::size(vector<double*,std::allocator<double*>> *this)

{
  return *(long *)(this + 8) - *(long *)this >> 3;
}




void bad4(void)

{
  return;
}




undefined8 stdThreadDestroy(void *param_1)

{
  free(param_1);
  return 1;
}




/* std::_Vector_base<double*, std::allocator<double*> >::_M_get_Tp_allocator() const */

_Vector_base<double*,std::allocator<double*>> * __thiscall
std::_Vector_base<double*,std::allocator<double*>>::_M_get_Tp_allocator
          (_Vector_base<double*,std::allocator<double*>> *this)

{
  return this;
}




/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* double** std::__copy_move_backward_a<true, double**, double**>(double**, double**, double**) */

double ** std::__copy_move_backward_a<true,double**,double**>
                    (double **param_1,double **param_2,double **param_3)

{
  double **ppdVar1;
  
  ppdVar1 = __copy_move_backward<true,true,std::random_access_iterator_tag>::__copy_move_b<double*>
                      (param_1,param_2,param_3);
  return ppdVar1;
}




/* CWE122_Heap_Based_Buffer_Overflow__sizeof_double_72::goodG2BSink(std::vector<double*,
   std::allocator<double*> >) */

void CWE122_Heap_Based_Buffer_Overflow__sizeof_double_72::goodG2BSink(vector param_1)

{
  undefined8 *puVar1;
  undefined4 in_register_0000003c;
  
  puVar1 = (undefined8 *)
           std::vector<double*,std::allocator<double*>>::operator[]
                     ((vector<double*,std::allocator<double*>> *)
                      CONCAT44(in_register_0000003c,param_1),2);
  puVar1 = (undefined8 *)*puVar1;
  printDoubleLine(*puVar1);
  free(puVar1);
  return;
}




/* CWE122_Heap_Based_Buffer_Overflow__sizeof_double_72::bad() */

void CWE122_Heap_Based_Buffer_Overflow__sizeof_double_72::bad(void)

{
  long in_FS_OFFSET;
  undefined8 *local_68;
  undefined8 local_60;
  vector<double*,std::allocator<double*>> local_58 [32];
  undefined8 local_38 [3];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  std::vector<double*,std::allocator<double*>>::vector(local_58);
  local_68 = (undefined8 *)0x0;
  local_68 = (undefined8 *)malloc(8);
  if (local_68 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  *local_68 = DAT_00104068;
  local_60 = std::vector<double*,std::allocator<double*>>::end(local_58);
  __normal_iterator<double*const*,std::vector<double*,std::allocator<double*>>>::
  __normal_iterator<double**>
            ((__normal_iterator<double*const*,std::vector<double*,std::allocator<double*>>> *)
             local_38,(__normal_iterator *)&local_60);
                    /* try { // try from 00101639 to 001016ce has its CatchHandler @ 0010171a */
  std::vector<double*,std::allocator<double*>>::insert(local_58,local_38[0],1,&local_68);
  local_60 = std::vector<double*,std::allocator<double*>>::end(local_58);
  __normal_iterator<double*const*,std::vector<double*,std::allocator<double*>>>::
  __normal_iterator<double**>
            ((__normal_iterator<double*const*,std::vector<double*,std::allocator<double*>>> *)
             local_38,(__normal_iterator *)&local_60);
  std::vector<double*,std::allocator<double*>>::insert(local_58,local_38[0],1,&local_68);
  local_60 = std::vector<double*,std::allocator<double*>>::end(local_58);
  __normal_iterator<double*const*,std::vector<double*,std::allocator<double*>>>::
  __normal_iterator<double**>
            ((__normal_iterator<double*const*,std::vector<double*,std::allocator<double*>>> *)
             local_38,(__normal_iterator *)&local_60);
  std::vector<double*,std::allocator<double*>>::insert(local_58,local_38[0],1,&local_68);
  std::vector<double*,std::allocator<double*>>::vector
            ((vector<double*,std::allocator<double*>> *)local_38,(vector *)local_58);
                    /* try { // try from 001016d6 to 001016da has its CatchHandler @ 00101705 */
  badSink((vector)local_38);
  std::vector<double*,std::allocator<double*>>::~vector
            ((vector<double*,std::allocator<double*>> *)local_38);
  std::vector<double*,std::allocator<double*>>::~vector(local_58);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




/* std::allocator_traits<std::allocator<double*> >::deallocate(std::allocator<double*>&, double**,
   unsigned long) */

void std::allocator_traits<std::allocator<double*>>::deallocate
               (allocator *param_1,double **param_2,ulong param_3)

{
  new_allocator<double*>::deallocate((double **)param_1,(ulong)param_2);
  return;
}




void good6(void)

{
  return;
}




/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* double** std::__copy_move_a<false, double* const*, double**>(double* const*, double* const*,
   double**) */

double ** std::__copy_move_a<false,double*const*,double**>
                    (double **param_1,double **param_2,double **param_3)

{
  double **ppdVar1;
  
  ppdVar1 = __copy_move<false,true,std::random_access_iterator_tag>::__copy_m<double*>
                      (param_1,param_2,param_3);
  return ppdVar1;
}




void good4(void)

{
  return;
}




void printHexUnsignedCharLine(byte param_1)

{
  printf("%02x\n",(ulong)param_1);
  return;
}




/* std::vector<double*, std::allocator<double*> >::cbegin() const */

undefined8 __thiscall
std::vector<double*,std::allocator<double*>>::cbegin(vector<double*,std::allocator<double*>> *this)

{
  long in_FS_OFFSET;
  double **local_20;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_20 = *(double ***)this;
  __normal_iterator<double*const*,std::vector<double*,std::allocator<double*>>>::__normal_iterator
            ((__normal_iterator<double*const*,std::vector<double*,std::allocator<double*>>> *)
             &local_18,&local_20);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* double** std::__uninitialized_move_if_noexcept_a<double**, double**, std::allocator<double*>
   >(double**, double**, double**, std::allocator<double*>&) */

double ** std::__uninitialized_move_if_noexcept_a<double**,double**,std::allocator<double*>>
                    (double **param_1,double **param_2,double **param_3,allocator *param_4)

{
  move_iterator mVar1;
  move_iterator mVar2;
  double **ppdVar3;
  
  mVar1 = __make_move_if_noexcept_iterator<double*,std::move_iterator<double**>>(param_2);
  mVar2 = __make_move_if_noexcept_iterator<double*,std::move_iterator<double**>>(param_1);
  ppdVar3 = __uninitialized_copy_a<std::move_iterator<double**>,double**,double*>
                      (mVar2,mVar1,param_3,param_4);
  return ppdVar3;
}




/* std::vector<double*, std::allocator<double*> >::~vector() */

void __thiscall
std::vector<double*,std::allocator<double*>>::~vector(vector<double*,std::allocator<double*>> *this)

{
  allocator *paVar1;
  
  paVar1 = (allocator *)
           _Vector_base<double*,std::allocator<double*>>::_M_get_Tp_allocator
                     ((_Vector_base<double*,std::allocator<double*>> *)this);
  _Destroy<double**,double*>(*(double ***)this,*(double ***)(this + 8),paVar1);
  _Vector_base<double*,std::allocator<double*>>::~_Vector_base
            ((_Vector_base<double*,std::allocator<double*>> *)this);
  return;
}




/* __normal_iterator<double* const*, std::vector<double*, std::allocator<double*> >
   >::__normal_iterator(double* const* const&) */

void __thiscall
__normal_iterator<double*const*,std::vector<double*,std::allocator<double*>>>::__normal_iterator
          (__normal_iterator<double*const*,std::vector<double*,std::allocator<double*>>> *this,
          double ***param_1)

{
  *(double ***)this = *param_1;
  return;
}




void bad7(void)

{
  return;
}




/* void std::allocator_traits<std::allocator<double*> >::construct<double*, double*
   const&>(std::allocator<double*>&, double**, double* const&) */

void std::allocator_traits<std::allocator<double*>>::construct<double*,double*const&>
               (allocator *param_1,double **param_2,double **param_3)

{
  double **ppdVar1;
  
  ppdVar1 = forward<double*const&>((type *)param_3);
  new_allocator<double*>::construct<double*,double*const&>
            ((new_allocator<double*> *)param_1,param_2,ppdVar1);
  return;
}




/* __normal_iterator<double**, std::vector<double*, std::allocator<double*> > >::base() const */

__normal_iterator<double**,std::vector<double*,std::allocator<double*>>> * __thiscall
__normal_iterator<double**,std::vector<double*,std::allocator<double*>>>::base
          (__normal_iterator<double**,std::vector<double*,std::allocator<double*>>> *this)

{
  return this;
}




/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* double** std::__copy_move_a2<true, double**, double**>(double**, double**, double**) */

double ** std::__copy_move_a2<true,double**,double**>
                    (double **param_1,double **param_2,double **param_3)

{
  double **ppdVar1;
  double **ppdVar2;
  double **ppdVar3;
  double **local_30;
  double **local_28;
  double **local_20;
  
  local_30 = param_3;
  local_28 = param_2;
  local_20 = param_1;
  ppdVar1 = __niter_base<double**>(param_3);
  ppdVar2 = __niter_base<double**>(local_28);
  ppdVar3 = __niter_base<double**>(local_20);
  ppdVar1 = __copy_move_a<true,double**,double**>(ppdVar3,ppdVar2,ppdVar1);
  ppdVar1 = __niter_wrap<double**>(&local_30,ppdVar1);
  return ppdVar1;
}




void bad5(void)

{
  return;
}




/* double** std::__uninitialized_fill_n<true>::__uninit_fill_n<double**, unsigned long,
   double*>(double**, unsigned long, double* const&) */

double ** std::__uninitialized_fill_n<true>::__uninit_fill_n<double**,unsigned_long,double*>
                    (double **param_1,ulong param_2,double **param_3)

{
  double **ppdVar1;
  
  ppdVar1 = fill_n<double**,unsigned_long,double*>(param_1,param_2,param_3);
  return ppdVar1;
}




/* void std::_Destroy_aux<true>::__destroy<double**>(double**, double**) */

void std::_Destroy_aux<true>::__destroy<double**>(double **param_1,double **param_2)

{
  return;
}




/* std::vector<double*, std::allocator<double*> >::_Temporary_value::_Temporary_value<double*
   const&>(std::vector<double*, std::allocator<double*> >*, double* const&) */

void __thiscall
std::vector<double*,std::allocator<double*>>::_Temporary_value::_Temporary_value<double*const&>
          (_Temporary_value *this,vector *param_1,double **param_2)

{
  double **ppdVar1;
  double **ppdVar2;
  
  *(vector **)this = param_1;
  ppdVar1 = forward<double*const&>((type *)param_2);
  ppdVar2 = (double **)_M_ptr(this);
  allocator_traits<std::allocator<double*>>::construct<double*,double*const&>
            (*(allocator **)this,ppdVar2,ppdVar1);
  return;
}




/* std::vector<double*, std::allocator<double*> >::operator[](unsigned long) */

long __thiscall
std::vector<double*,std::allocator<double*>>::operator[]
          (vector<double*,std::allocator<double*>> *this,ulong param_1)

{
  return *(long *)this + param_1 * 8;
}




/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* double** std::__uninitialized_move_a<double**, double**, std::allocator<double*> >(double**,
   double**, double**, std::allocator<double*>&) */

double ** std::__uninitialized_move_a<double**,double**,std::allocator<double*>>
                    (double **param_1,double **param_2,double **param_3,allocator *param_4)

{
  move_iterator mVar1;
  move_iterator mVar2;
  double **ppdVar3;
  
  mVar1 = make_move_iterator<double**>(param_2);
  mVar2 = make_move_iterator<double**>(param_1);
  ppdVar3 = __uninitialized_copy_a<std::move_iterator<double**>,double**,double*>
                      (mVar2,mVar1,param_3,param_4);
  return ppdVar3;
}




/* std::move_iterator<double**>::base() const */

undefined8 __thiscall std::move_iterator<double**>::base(move_iterator<double**> *this)

{
  return *(undefined8 *)this;
}




/* double** std::__uninitialized_copy_a<__normal_iterator<double* const*, std::vector<double*,
   std::allocator<double*> > >, double**, double*>(__normal_iterator<double* const*,
   std::vector<double*, std::allocator<double*> > >, __normal_iterator<double* const*,
   std::vector<double*, std::allocator<double*> > >, double**, std::allocator<double*>&) */

void std::
     __uninitialized_copy_a<__normal_iterator<double*const*,std::vector<double*,std::allocator<double*>>>,double**,double*>
               (undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  uninitialized_copy<__normal_iterator<double*const*,std::vector<double*,std::allocator<double*>>>,double**>
            (param_1,param_2,param_3);
  return;
}




/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* __enable_if<std::__is_scalar<double*>::__value, void>::__type std::__fill_a<double**,
   double*>(double**, double**, double* const&) */

__type std::__fill_a<double**,double*>(double **param_1,double **param_2,double **param_3)

{
  double *pdVar1;
  double **local_20;
  
  pdVar1 = *param_3;
  for (local_20 = param_1; local_20 != param_2; local_20 = local_20 + 1) {
    *local_20 = pdVar1;
  }
  return (__type)local_20;
}




void bad6(void)

{
  return;
}




/* double** std::__copy_move_backward<true, true,
   std::random_access_iterator_tag>::__copy_move_b<double*>(double* const*, double* const*,
   double**) */

double ** std::__copy_move_backward<true,true,std::random_access_iterator_tag>::
          __copy_move_b<double*>(double **param_1,double **param_2,double **param_3)

{
  long lVar1;
  
  lVar1 = (long)param_2 - (long)param_1 >> 3;
  if (lVar1 != 0) {
    memmove(param_3 + -lVar1,param_1,lVar1 * 8);
  }
  return param_3 + -lVar1;
}




void printLine(char *param_1)

{
  if (param_1 != (char *)0x0) {
    puts(param_1);
  }
  return;
}




/* void new_allocator<double*>::construct<double*, double* const&>(double**, double* const&) */

void __thiscall
new_allocator<double*>::construct<double*,double*const&>
          (new_allocator<double*> *this,double **param_1,double **param_2)

{
  double *pdVar1;
  double **ppdVar2;
  undefined8 *puVar3;
  
  ppdVar2 = std::forward<double*const&>((type *)param_2);
  pdVar1 = *ppdVar2;
  puVar3 = (undefined8 *)operator_new(8,param_1);
  *puVar3 = pdVar1;
  return;
}




void printDoubleLine(undefined8 param_1)

{
  printf("%g\n",param_1);
  return;
}




/* std::_Vector_base<double*, std::allocator<double*> >::_Vector_base(unsigned long,
   std::allocator<double*> const&) */

void __thiscall
std::_Vector_base<double*,std::allocator<double*>>::_Vector_base
          (_Vector_base<double*,std::allocator<double*>> *this,ulong param_1,allocator *param_2)

{
  _Vector_impl::_Vector_impl((_Vector_impl *)this,param_2);
                    /* try { // try from 00102562 to 00102566 has its CatchHandler @ 00102569 */
  _M_create_storage(this,param_1);
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




void internal_start(long param_1)

{
  (**(code **)(param_1 + 8))(*(undefined8 *)(param_1 + 0x10));
                    /* WARNING: Subroutine does not return */
  pthread_exit((void *)0x0);
}




void printWLine(long param_1)

{
  if (param_1 != 0) {
    wprintf(L"%ls\n",param_1);
  }
  return;
}




/* std::vector<double*, std::allocator<double*> >::_S_max_size(std::allocator<double*> const&) */

ulong std::vector<double*,std::allocator<double*>>::_S_max_size(allocator *param_1)

{
  ulong *puVar1;
  long in_FS_OFFSET;
  ulong local_20;
  ulong local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_20 = 0xfffffffffffffff;
  local_18 = allocator_traits<std::allocator<double*>>::max_size(param_1);
  puVar1 = min<unsigned_long>(&local_20,&local_18);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return *puVar1;
}




/* std::_Vector_base<double*, std::allocator<double*> >::_Vector_impl::~_Vector_impl() */

void __thiscall
std::_Vector_base<double*,std::allocator<double*>>::_Vector_impl::~_Vector_impl(_Vector_impl *this)

{
  allocator<double*>::~allocator((allocator<double*> *)this);
  return;
}




/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* decltype (__miter_base(({parm#1}.base)()))
   std::__miter_base<double**>(std::move_iterator<double**>) */

void std::__miter_base<double**>(move_iterator param_1)

{
  double **ppdVar1;
  undefined4 in_register_0000003c;
  undefined8 local_10;
  
  local_10 = CONCAT44(in_register_0000003c,param_1);
  ppdVar1 = (double **)move_iterator<double**>::base((move_iterator<double**> *)&local_10);
  __miter_base<double**>(ppdVar1);
  return;
}




/* new_allocator<double*>::new_allocator() */

void new_allocator<double*>::new_allocator(void)

{
  return;
}




/* std::_Vector_base<double*, std::allocator<double*> >::~_Vector_base() */

void __thiscall
std::_Vector_base<double*,std::allocator<double*>>::~_Vector_base
          (_Vector_base<double*,std::allocator<double*>> *this)

{
  _M_deallocate(this,*(double ***)this,*(long *)(this + 0x10) - *(long *)this >> 3);
  _Vector_impl::~_Vector_impl((_Vector_impl *)this);
  return;
}




/* void std::allocator_traits<std::allocator<double*> >::destroy<double*>(std::allocator<double*>&,
   double**) */

void std::allocator_traits<std::allocator<double*>>::destroy<double*>
               (allocator *param_1,double **param_2)

{
  new_allocator<double*>::destroy<double*>((double **)param_1);
  return;
}




/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* double** std::__uninitialized_fill_n_a<double**, unsigned long, double*, double*>(double**,
   unsigned long, double* const&, std::allocator<double*>&) */

double ** std::__uninitialized_fill_n_a<double**,unsigned_long,double*,double*>
                    (double **param_1,ulong param_2,double **param_3,allocator *param_4)

{
  double **ppdVar1;
  
  ppdVar1 = uninitialized_fill_n<double**,unsigned_long,double*>(param_1,param_2,param_3);
  return ppdVar1;
}




/* CWE122_Heap_Based_Buffer_Overflow__sizeof_double_72::badSink(std::vector<double*,
   std::allocator<double*> >) */

void CWE122_Heap_Based_Buffer_Overflow__sizeof_double_72::badSink(vector param_1)

{
  undefined8 *puVar1;
  undefined4 in_register_0000003c;
  
  puVar1 = (undefined8 *)
           std::vector<double*,std::allocator<double*>>::operator[]
                     ((vector<double*,std::allocator<double*>> *)
                      CONCAT44(in_register_0000003c,param_1),2);
  puVar1 = (undefined8 *)*puVar1;
  printDoubleLine(*puVar1);
  free(puVar1);
  return;
}




/* std::allocator_traits<std::allocator<double*>
   >::select_on_container_copy_construction(std::allocator<double*> const&) */

allocator *
std::allocator_traits<std::allocator<double*>>::select_on_container_copy_construction
          (allocator *param_1)

{
  allocator<double*>::allocator(param_1);
  return param_1;
}




/* new_allocator<double*>::new_allocator(new_allocator<double*> const&) */

void new_allocator<double*>::new_allocator(new_allocator *param_1)

{
  return;
}




/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* std::move_iterator<double**> std::make_move_iterator<double**>(double**) */

move_iterator std::make_move_iterator<double**>(double **param_1)

{
  long in_FS_OFFSET;
  move_iterator local_18 [2];
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  move_iterator<double**>::move_iterator((move_iterator<double**> *)local_18,param_1);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18[0];
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
    __isoc99_swscanf(local_18 * 8 + param_3,&DAT_001040c0,local_1c);
    *(char *)(local_18 + param_1) = local_1c[0];
  }
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




/* CWE122_Heap_Based_Buffer_Overflow__sizeof_double_72::good() */

void CWE122_Heap_Based_Buffer_Overflow__sizeof_double_72::good(void)

{
  goodG2B();
  return;
}




void stdThreadLockRelease(pthread_mutex_t *param_1)

{
  pthread_mutex_unlock(param_1);
  return;
}




/* std::_Vector_base<double*, std::allocator<double*> >::_M_deallocate(double**, unsigned long) */

void __thiscall
std::_Vector_base<double*,std::allocator<double*>>::_M_deallocate
          (_Vector_base<double*,std::allocator<double*>> *this,double **param_1,ulong param_2)

{
  if (param_1 != (double **)0x0) {
    allocator_traits<std::allocator<double*>>::deallocate((allocator *)this,param_1,param_2);
  }
  return;
}




/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* void std::fill<double**, double*>(double**, double**, double* const&) */

void std::fill<double**,double*>(double **param_1,double **param_2,double **param_3)

{
  double **ppdVar1;
  double **ppdVar2;
  
  ppdVar1 = __niter_base<double**>(param_2);
  ppdVar2 = __niter_base<double**>(param_1);
  __fill_a<double**,double*>(ppdVar2,ppdVar1,param_3);
  return;
}




/* double** std::__uninitialized_copy<true>::__uninit_copy<__normal_iterator<double* const*,
   std::vector<double*, std::allocator<double*> > >, double**>(__normal_iterator<double* const*,
   std::vector<double*, std::allocator<double*> > >, __normal_iterator<double* const*,
   std::vector<double*, std::allocator<double*> > >, double**) */

void std::__uninitialized_copy<true>::
     __uninit_copy<__normal_iterator<double*const*,std::vector<double*,std::allocator<double*>>>,double**>
               (undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  copy<__normal_iterator<double*const*,std::vector<double*,std::allocator<double*>>>,double**>
            (param_1,param_2,param_3);
  return;
}




/* CWE122_Heap_Based_Buffer_Overflow__sizeof_double_72::goodG2B() */

void CWE122_Heap_Based_Buffer_Overflow__sizeof_double_72::goodG2B(void)

{
  long in_FS_OFFSET;
  undefined8 *local_68;
  undefined8 local_60;
  vector<double*,std::allocator<double*>> local_58 [32];
  undefined8 local_38 [3];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  std::vector<double*,std::allocator<double*>>::vector(local_58);
  local_68 = (undefined8 *)0x0;
  local_68 = (undefined8 *)malloc(8);
  if (local_68 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  *local_68 = DAT_00104068;
  local_60 = std::vector<double*,std::allocator<double*>>::end(local_58);
  __normal_iterator<double*const*,std::vector<double*,std::allocator<double*>>>::
  __normal_iterator<double**>
            ((__normal_iterator<double*const*,std::vector<double*,std::allocator<double*>>> *)
             local_38,(__normal_iterator *)&local_60);
                    /* try { // try from 001017df to 00101874 has its CatchHandler @ 001018c0 */
  std::vector<double*,std::allocator<double*>>::insert(local_58,local_38[0],1,&local_68);
  local_60 = std::vector<double*,std::allocator<double*>>::end(local_58);
  __normal_iterator<double*const*,std::vector<double*,std::allocator<double*>>>::
  __normal_iterator<double**>
            ((__normal_iterator<double*const*,std::vector<double*,std::allocator<double*>>> *)
             local_38,(__normal_iterator *)&local_60);
  std::vector<double*,std::allocator<double*>>::insert(local_58,local_38[0],1,&local_68);
  local_60 = std::vector<double*,std::allocator<double*>>::end(local_58);
  __normal_iterator<double*const*,std::vector<double*,std::allocator<double*>>>::
  __normal_iterator<double**>
            ((__normal_iterator<double*const*,std::vector<double*,std::allocator<double*>>> *)
             local_38,(__normal_iterator *)&local_60);
  std::vector<double*,std::allocator<double*>>::insert(local_58,local_38[0],1,&local_68);
  std::vector<double*,std::allocator<double*>>::vector
            ((vector<double*,std::allocator<double*>> *)local_38,(vector *)local_58);
                    /* try { // try from 0010187c to 00101880 has its CatchHandler @ 001018ab */
  goodG2BSink((vector)local_38);
  std::vector<double*,std::allocator<double*>>::~vector
            ((vector<double*,std::allocator<double*>> *)local_38);
  std::vector<double*,std::allocator<double*>>::~vector(local_58);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* void std::_Destroy<double**, double*>(double**, double**, std::allocator<double*>&) */

void std::_Destroy<double**,double*>(double **param_1,double **param_2,allocator *param_3)

{
  _Destroy<double**>(param_1,param_2);
  return;
}




void FUN_00101020(void)

{
  (*(code *)PTR_00106ee0)();
  return;
}




void printSizeTLine(undefined8 param_1)

{
  printf("%zu\n",param_1);
  return;
}




undefined8 globalReturnsFalse(void)

{
  return 0;
}




/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* double** std::uninitialized_copy<std::move_iterator<double**>,
   double**>(std::move_iterator<double**>, std::move_iterator<double**>, double**) */

double ** std::uninitialized_copy<std::move_iterator<double**>,double**>
                    (move_iterator param_1,move_iterator param_2,double **param_3)

{
  double **ppdVar1;
  
  ppdVar1 = __uninitialized_copy<true>::__uninit_copy<std::move_iterator<double**>,double**>
                      (param_1,param_2,param_3);
  return ppdVar1;
}




void bad2(void)

{
  return;
}




/* std::vector<double*, std::allocator<double*> >::begin() */

undefined8 __thiscall
std::vector<double*,std::allocator<double*>>::begin(vector<double*,std::allocator<double*>> *this)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  __normal_iterator<double**,std::vector<double*,std::allocator<double*>>>::__normal_iterator
            ((__normal_iterator<double**,std::vector<double*,std::allocator<double*>>> *)&local_18,
             (double ***)this);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




/* std::allocator<double*>::allocator(std::allocator<double*> const&) */

void std::allocator<double*>::allocator(allocator *param_1)

{
  new_allocator<double*>::new_allocator((new_allocator *)param_1);
  return;
}




void good7(void)

{
  return;
}




/* __normal_iterator<double**, std::vector<double*, std::allocator<double*> >
   >::__normal_iterator(double** const&) */

void __thiscall
__normal_iterator<double**,std::vector<double*,std::allocator<double*>>>::__normal_iterator
          (__normal_iterator<double**,std::vector<double*,std::allocator<double*>>> *this,
          double ***param_1)

{
  *(double ***)this = *param_1;
  return;
}




/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* double** std::__niter_wrap<double**>(double** const&, double**) */

double ** std::__niter_wrap<double**>(double ***param_1,double **param_2)

{
  return param_2;
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
    __isoc99_sscanf(local_18 * 2 + param_3,&DAT_001040b8,local_1c);
    *(char *)(local_18 + param_1) = local_1c[0];
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




/* std::allocator<double*>::~allocator() */

void __thiscall std::allocator<double*>::~allocator(allocator<double*> *this)

{
  new_allocator<double*>::~new_allocator((new_allocator<double*> *)this);
  return;
}




/* std::_Vector_base<double*, std::allocator<double*> >::_M_allocate(unsigned long) */

undefined8 __thiscall
std::_Vector_base<double*,std::allocator<double*>>::_M_allocate
          (_Vector_base<double*,std::allocator<double*>> *this,ulong param_1)

{
  undefined8 uVar1;
  
  if (param_1 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = allocator_traits<std::allocator<double*>>::allocate((allocator *)this,param_1);
  }
  return uVar1;
}



