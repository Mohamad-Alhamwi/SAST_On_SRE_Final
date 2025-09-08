
/* CWE415_Double_Free__malloc_free_struct_72::good() */

void CWE415_Double_Free__malloc_free_struct_72::good(void)

{
  goodG2B();
  goodB2G();
  return;
}




/* void new_allocator<_twoIntsStruct*>::construct<_twoIntsStruct*, _twoIntsStruct*
   const&>(_twoIntsStruct**, _twoIntsStruct* const&) */

void __thiscall
new_allocator<_twoIntsStruct*>::construct<_twoIntsStruct*,_twoIntsStruct*const&>
          (new_allocator<_twoIntsStruct*> *this,_twoIntsStruct **param_1,_twoIntsStruct **param_2)

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




/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* _twoIntsStruct** std::__niter_wrap<_twoIntsStruct**>(_twoIntsStruct** const&, _twoIntsStruct**)
    */

_twoIntsStruct **
std::__niter_wrap<_twoIntsStruct**>(_twoIntsStruct ***param_1,_twoIntsStruct **param_2)

{
  return param_2;
}




/* std::vector<_twoIntsStruct*, std::allocator<_twoIntsStruct*> >::end() */

undefined8 __thiscall
std::vector<_twoIntsStruct*,std::allocator<_twoIntsStruct*>>::end
          (vector<_twoIntsStruct*,std::allocator<_twoIntsStruct*>> *this)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  __normal_iterator<_twoIntsStruct**,std::vector<_twoIntsStruct*,std::allocator<_twoIntsStruct*>>>::
  __normal_iterator((__normal_iterator<_twoIntsStruct**,std::vector<_twoIntsStruct*,std::allocator<_twoIntsStruct*>>>
                     *)&local_18,(_twoIntsStruct ***)(this + 8));
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* _twoIntsStruct** std::__miter_base<_twoIntsStruct**>(_twoIntsStruct**) */

_twoIntsStruct ** std::__miter_base<_twoIntsStruct**>(_twoIntsStruct **param_1)

{
  return param_1;
}




/* std::vector<_twoIntsStruct*, std::allocator<_twoIntsStruct*> >::max_size() const */

void __thiscall
std::vector<_twoIntsStruct*,std::allocator<_twoIntsStruct*>>::max_size
          (vector<_twoIntsStruct*,std::allocator<_twoIntsStruct*>> *this)

{
  allocator *paVar1;
  
  paVar1 = (allocator *)
           _Vector_base<_twoIntsStruct*,std::allocator<_twoIntsStruct*>>::_M_get_Tp_allocator
                     ((_Vector_base<_twoIntsStruct*,std::allocator<_twoIntsStruct*>> *)this);
  _S_max_size(paVar1);
  return;
}




/* new_allocator<_twoIntsStruct*>::new_allocator() */

void new_allocator<_twoIntsStruct*>::new_allocator(void)

{
  return;
}




/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* _twoIntsStruct** std::move_backward<_twoIntsStruct**, _twoIntsStruct**>(_twoIntsStruct**,
   _twoIntsStruct**, _twoIntsStruct**) */

_twoIntsStruct **
std::move_backward<_twoIntsStruct**,_twoIntsStruct**>
          (_twoIntsStruct **param_1,_twoIntsStruct **param_2,_twoIntsStruct **param_3)

{
  _twoIntsStruct **pp_Var1;
  _twoIntsStruct **pp_Var2;
  
  pp_Var1 = __miter_base<_twoIntsStruct**>(param_2);
  pp_Var2 = __miter_base<_twoIntsStruct**>(param_1);
  pp_Var1 = __copy_move_backward_a2<true,_twoIntsStruct**,_twoIntsStruct**>(pp_Var2,pp_Var1,param_3)
  ;
  return pp_Var1;
}




void printShortLine(short param_1)

{
  printf("%hd\n",(ulong)(uint)(int)param_1);
  return;
}




/* std::vector<_twoIntsStruct*, std::allocator<_twoIntsStruct*> >::_M_check_len(unsigned long, char
   const*) const */

ulong __thiscall
std::vector<_twoIntsStruct*,std::allocator<_twoIntsStruct*>>::_M_check_len
          (vector<_twoIntsStruct*,std::allocator<_twoIntsStruct*>> *this,ulong param_1,char *param_2
          )

{
  long lVar1;
  long lVar2;
  ulong *puVar3;
  ulong uVar4;
  ulong uVar5;
  long in_FS_OFFSET;
  ulong local_48;
  vector<_twoIntsStruct*,std::allocator<_twoIntsStruct*>> *local_40;
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
/* __enable_if<std::__is_scalar<_twoIntsStruct*>::__value, void>::__type
   std::__fill_a<_twoIntsStruct**, _twoIntsStruct*>(_twoIntsStruct**, _twoIntsStruct**,
   _twoIntsStruct* const&) */

__type std::__fill_a<_twoIntsStruct**,_twoIntsStruct*>
                 (_twoIntsStruct **param_1,_twoIntsStruct **param_2,_twoIntsStruct **param_3)

{
  _twoIntsStruct *p_Var1;
  _twoIntsStruct **local_20;
  
  p_Var1 = *param_3;
  for (local_20 = param_1; local_20 != param_2; local_20 = local_20 + 1) {
    *local_20 = p_Var1;
  }
  return (__type)local_20;
}




/* std::allocator_traits<std::allocator<_twoIntsStruct*> >::max_size(std::allocator<_twoIntsStruct*>
   const&) */

void std::allocator_traits<std::allocator<_twoIntsStruct*>>::max_size(allocator *param_1)

{
  new_allocator<_twoIntsStruct*>::max_size();
  return;
}




undefined8 globalReturnsTrue(void)

{
  return 1;
}




void stdThreadLockRelease(pthread_mutex_t *param_1)

{
  pthread_mutex_unlock(param_1);
  return;
}




/* CWE415_Double_Free__malloc_free_struct_72::bad() */

void CWE415_Double_Free__malloc_free_struct_72::bad(void)

{
  long in_FS_OFFSET;
  void *local_68;
  undefined8 local_60;
  vector<_twoIntsStruct*,std::allocator<_twoIntsStruct*>> local_58 [32];
  undefined8 local_38 [3];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  std::vector<_twoIntsStruct*,std::allocator<_twoIntsStruct*>>::vector(local_58);
  local_68 = (void *)0x0;
  local_68 = malloc(800);
  if (local_68 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  free(local_68);
  local_60 = std::vector<_twoIntsStruct*,std::allocator<_twoIntsStruct*>>::end(local_58);
  __normal_iterator<_twoIntsStruct*const*,std::vector<_twoIntsStruct*,std::allocator<_twoIntsStruct*>>>
  ::__normal_iterator<_twoIntsStruct**>
            ((__normal_iterator<_twoIntsStruct*const*,std::vector<_twoIntsStruct*,std::allocator<_twoIntsStruct*>>>
              *)local_38,(__normal_iterator *)&local_60);
                    /* try { // try from 0010163d to 001016d2 has its CatchHandler @ 0010171e */
  std::vector<_twoIntsStruct*,std::allocator<_twoIntsStruct*>>::insert
            (local_58,local_38[0],1,&local_68);
  local_60 = std::vector<_twoIntsStruct*,std::allocator<_twoIntsStruct*>>::end(local_58);
  __normal_iterator<_twoIntsStruct*const*,std::vector<_twoIntsStruct*,std::allocator<_twoIntsStruct*>>>
  ::__normal_iterator<_twoIntsStruct**>
            ((__normal_iterator<_twoIntsStruct*const*,std::vector<_twoIntsStruct*,std::allocator<_twoIntsStruct*>>>
              *)local_38,(__normal_iterator *)&local_60);
  std::vector<_twoIntsStruct*,std::allocator<_twoIntsStruct*>>::insert
            (local_58,local_38[0],1,&local_68);
  local_60 = std::vector<_twoIntsStruct*,std::allocator<_twoIntsStruct*>>::end(local_58);
  __normal_iterator<_twoIntsStruct*const*,std::vector<_twoIntsStruct*,std::allocator<_twoIntsStruct*>>>
  ::__normal_iterator<_twoIntsStruct**>
            ((__normal_iterator<_twoIntsStruct*const*,std::vector<_twoIntsStruct*,std::allocator<_twoIntsStruct*>>>
              *)local_38,(__normal_iterator *)&local_60);
  std::vector<_twoIntsStruct*,std::allocator<_twoIntsStruct*>>::insert
            (local_58,local_38[0],1,&local_68);
  std::vector<_twoIntsStruct*,std::allocator<_twoIntsStruct*>>::vector
            ((vector<_twoIntsStruct*,std::allocator<_twoIntsStruct*>> *)local_38,(vector *)local_58)
  ;
                    /* try { // try from 001016da to 001016de has its CatchHandler @ 00101709 */
  badSink((vector)local_38);
  std::vector<_twoIntsStruct*,std::allocator<_twoIntsStruct*>>::~vector
            ((vector<_twoIntsStruct*,std::allocator<_twoIntsStruct*>> *)local_38);
  std::vector<_twoIntsStruct*,std::allocator<_twoIntsStruct*>>::~vector(local_58);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void internal_start(long param_1)

{
  (**(code **)(param_1 + 8))(*(undefined8 *)(param_1 + 0x10));
                    /* WARNING: Subroutine does not return */
  pthread_exit((void *)0x0);
}




/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* void std::fill<_twoIntsStruct**, _twoIntsStruct*>(_twoIntsStruct**, _twoIntsStruct**,
   _twoIntsStruct* const&) */

void std::fill<_twoIntsStruct**,_twoIntsStruct*>
               (_twoIntsStruct **param_1,_twoIntsStruct **param_2,_twoIntsStruct **param_3)

{
  _twoIntsStruct **pp_Var1;
  _twoIntsStruct **pp_Var2;
  
  pp_Var1 = __niter_base<_twoIntsStruct**>(param_2);
  pp_Var2 = __niter_base<_twoIntsStruct**>(param_1);
  __fill_a<_twoIntsStruct**,_twoIntsStruct*>(pp_Var2,pp_Var1,param_3);
  return;
}




/* std::vector<_twoIntsStruct*, std::allocator<_twoIntsStruct*>
   >::_Temporary_value::~_Temporary_value() */

void __thiscall
std::vector<_twoIntsStruct*,std::allocator<_twoIntsStruct*>>::_Temporary_value::~_Temporary_value
          (_Temporary_value *this)

{
  _twoIntsStruct **pp_Var1;
  
  pp_Var1 = (_twoIntsStruct **)_M_ptr(this);
  allocator_traits<std::allocator<_twoIntsStruct*>>::destroy<_twoIntsStruct*>
            (*(allocator **)this,pp_Var1);
  return;
}




/* _twoIntsStruct** std::__uninitialized_fill_n<true>::__uninit_fill_n<_twoIntsStruct**, unsigned
   long, _twoIntsStruct*>(_twoIntsStruct**, unsigned long, _twoIntsStruct* const&) */

_twoIntsStruct **
std::__uninitialized_fill_n<true>::__uninit_fill_n<_twoIntsStruct**,unsigned_long,_twoIntsStruct*>
          (_twoIntsStruct **param_1,ulong param_2,_twoIntsStruct **param_3)

{
  _twoIntsStruct **pp_Var1;
  
  pp_Var1 = fill_n<_twoIntsStruct**,unsigned_long,_twoIntsStruct*>(param_1,param_2,param_3);
  return pp_Var1;
}




void printHexUnsignedCharLine(byte param_1)

{
  printf("%02x\n",(ulong)param_1);
  return;
}




/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* _twoIntsStruct** std::__copy_move_a<true, _twoIntsStruct**, _twoIntsStruct**>(_twoIntsStruct**,
   _twoIntsStruct**, _twoIntsStruct**) */

_twoIntsStruct **
std::__copy_move_a<true,_twoIntsStruct**,_twoIntsStruct**>
          (_twoIntsStruct **param_1,_twoIntsStruct **param_2,_twoIntsStruct **param_3)

{
  _twoIntsStruct **pp_Var1;
  
  pp_Var1 = __copy_move<true,true,std::random_access_iterator_tag>::__copy_m<_twoIntsStruct*>
                      (param_1,param_2,param_3);
  return pp_Var1;
}




/* std::allocator<_twoIntsStruct*>::allocator(std::allocator<_twoIntsStruct*> const&) */

void std::allocator<_twoIntsStruct*>::allocator(allocator *param_1)

{
  new_allocator<_twoIntsStruct*>::new_allocator((new_allocator *)param_1);
  return;
}




/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* _twoIntsStruct** std::__copy_move_backward_a2<true, _twoIntsStruct**,
   _twoIntsStruct**>(_twoIntsStruct**, _twoIntsStruct**, _twoIntsStruct**) */

_twoIntsStruct **
std::__copy_move_backward_a2<true,_twoIntsStruct**,_twoIntsStruct**>
          (_twoIntsStruct **param_1,_twoIntsStruct **param_2,_twoIntsStruct **param_3)

{
  _twoIntsStruct **pp_Var1;
  _twoIntsStruct **pp_Var2;
  _twoIntsStruct **pp_Var3;
  _twoIntsStruct **local_30;
  _twoIntsStruct **local_28;
  _twoIntsStruct **local_20;
  
  local_30 = param_3;
  local_28 = param_2;
  local_20 = param_1;
  pp_Var1 = __niter_base<_twoIntsStruct**>(param_3);
  pp_Var2 = __niter_base<_twoIntsStruct**>(local_28);
  pp_Var3 = __niter_base<_twoIntsStruct**>(local_20);
  pp_Var1 = __copy_move_backward_a<true,_twoIntsStruct**,_twoIntsStruct**>(pp_Var3,pp_Var2,pp_Var1);
  pp_Var1 = __niter_wrap<_twoIntsStruct**>(&local_30,pp_Var1);
  return pp_Var1;
}




/* std::vector<_twoIntsStruct*, std::allocator<_twoIntsStruct*> >::vector() */

void __thiscall
std::vector<_twoIntsStruct*,std::allocator<_twoIntsStruct*>>::vector
          (vector<_twoIntsStruct*,std::allocator<_twoIntsStruct*>> *this)

{
  _Vector_base<_twoIntsStruct*,std::allocator<_twoIntsStruct*>>::_Vector_base
            ((_Vector_base<_twoIntsStruct*,std::allocator<_twoIntsStruct*>> *)this);
  return;
}




void good6(void)

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




/* CWE415_Double_Free__malloc_free_struct_72::badSink(std::vector<_twoIntsStruct*,
   std::allocator<_twoIntsStruct*> >) */

void CWE415_Double_Free__malloc_free_struct_72::badSink(vector param_1)

{
  undefined8 *puVar1;
  undefined4 in_register_0000003c;
  
  puVar1 = (undefined8 *)
           std::vector<_twoIntsStruct*,std::allocator<_twoIntsStruct*>>::operator[]
                     ((vector<_twoIntsStruct*,std::allocator<_twoIntsStruct*>> *)
                      CONCAT44(in_register_0000003c,param_1),2);
  free((void *)*puVar1);
  return;
}




/* _twoIntsStruct** std::__copy_move_a2<false, __normal_iterator<_twoIntsStruct* const*,
   std::vector<_twoIntsStruct*, std::allocator<_twoIntsStruct*> > >,
   _twoIntsStruct**>(__normal_iterator<_twoIntsStruct* const*, std::vector<_twoIntsStruct*,
   std::allocator<_twoIntsStruct*> > >, __normal_iterator<_twoIntsStruct* const*,
   std::vector<_twoIntsStruct*, std::allocator<_twoIntsStruct*> > >, _twoIntsStruct**) */

void std::
     __copy_move_a2<false,__normal_iterator<_twoIntsStruct*const*,std::vector<_twoIntsStruct*,std::allocator<_twoIntsStruct*>>>,_twoIntsStruct**>
               (undefined8 param_1,undefined8 param_2,_twoIntsStruct **param_3)

{
  _twoIntsStruct **pp_Var1;
  _twoIntsStruct **pp_Var2;
  _twoIntsStruct **pp_Var3;
  _twoIntsStruct **local_30;
  undefined8 local_28;
  undefined8 local_20;
  
  local_30 = param_3;
  local_28 = param_2;
  local_20 = param_1;
  pp_Var1 = __niter_base<_twoIntsStruct**>(param_3);
  pp_Var2 = (_twoIntsStruct **)
            __niter_base<_twoIntsStruct*const*,std::vector<_twoIntsStruct*,std::allocator<_twoIntsStruct*>>>
                      (local_28);
  pp_Var3 = (_twoIntsStruct **)
            __niter_base<_twoIntsStruct*const*,std::vector<_twoIntsStruct*,std::allocator<_twoIntsStruct*>>>
                      (local_20);
  pp_Var1 = __copy_move_a<false,_twoIntsStruct*const*,_twoIntsStruct**>(pp_Var3,pp_Var2,pp_Var1);
  __niter_wrap<_twoIntsStruct**>(&local_30,pp_Var1);
  return;
}




void printLongLongLine(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




undefined8 stdThreadDestroy(void *param_1)

{
  free(param_1);
  return 1;
}




void printDoubleLine(undefined8 param_1)

{
  printf("%g\n",param_1);
  return;
}




/* new_allocator<_twoIntsStruct*>::allocate(unsigned long, void const*) */

void new_allocator<_twoIntsStruct*>::allocate(ulong param_1,void *param_2)

{
  void *pvVar1;
  
  pvVar1 = (void *)max_size();
  if (pvVar1 < param_2) {
    std::__throw_bad_alloc();
  }
  operator_new((long)param_2 << 3);
  return;
}




void stdThreadLockDestroy(pthread_mutex_t *param_1)

{
  pthread_mutex_destroy(param_1);
  free(param_1);
  return;
}




void good4(void)

{
  return;
}




/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* _twoIntsStruct** std::__copy_move_a2<true, _twoIntsStruct**, _twoIntsStruct**>(_twoIntsStruct**,
   _twoIntsStruct**, _twoIntsStruct**) */

_twoIntsStruct **
std::__copy_move_a2<true,_twoIntsStruct**,_twoIntsStruct**>
          (_twoIntsStruct **param_1,_twoIntsStruct **param_2,_twoIntsStruct **param_3)

{
  _twoIntsStruct **pp_Var1;
  _twoIntsStruct **pp_Var2;
  _twoIntsStruct **pp_Var3;
  _twoIntsStruct **local_30;
  _twoIntsStruct **local_28;
  _twoIntsStruct **local_20;
  
  local_30 = param_3;
  local_28 = param_2;
  local_20 = param_1;
  pp_Var1 = __niter_base<_twoIntsStruct**>(param_3);
  pp_Var2 = __niter_base<_twoIntsStruct**>(local_28);
  pp_Var3 = __niter_base<_twoIntsStruct**>(local_20);
  pp_Var1 = __copy_move_a<true,_twoIntsStruct**,_twoIntsStruct**>(pp_Var3,pp_Var2,pp_Var1);
  pp_Var1 = __niter_wrap<_twoIntsStruct**>(&local_30,pp_Var1);
  return pp_Var1;
}




/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* _twoIntsStruct* const& std::forward<_twoIntsStruct* const&>(std::remove_reference<_twoIntsStruct*
   const&>::type&) */

_twoIntsStruct ** std::forward<_twoIntsStruct*const&>(type *param_1)

{
  return (_twoIntsStruct **)param_1;
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




void bad7(void)

{
  return;
}




/* void std::allocator_traits<std::allocator<_twoIntsStruct*> >::construct<_twoIntsStruct*,
   _twoIntsStruct* const&>(std::allocator<_twoIntsStruct*>&, _twoIntsStruct**, _twoIntsStruct*
   const&) */

void std::allocator_traits<std::allocator<_twoIntsStruct*>>::
     construct<_twoIntsStruct*,_twoIntsStruct*const&>
               (allocator *param_1,_twoIntsStruct **param_2,_twoIntsStruct **param_3)

{
  _twoIntsStruct **pp_Var1;
  
  pp_Var1 = forward<_twoIntsStruct*const&>((type *)param_3);
  new_allocator<_twoIntsStruct*>::construct<_twoIntsStruct*,_twoIntsStruct*const&>
            ((new_allocator<_twoIntsStruct*> *)param_1,param_2,pp_Var1);
  return;
}




/* new_allocator<_twoIntsStruct*>::~new_allocator() */

void __thiscall new_allocator<_twoIntsStruct*>::~new_allocator(new_allocator<_twoIntsStruct*> *this)

{
  return;
}




/* std::_Vector_base<_twoIntsStruct*, std::allocator<_twoIntsStruct*> >::_M_allocate(unsigned long)
    */

undefined8 __thiscall
std::_Vector_base<_twoIntsStruct*,std::allocator<_twoIntsStruct*>>::_M_allocate
          (_Vector_base<_twoIntsStruct*,std::allocator<_twoIntsStruct*>> *this,ulong param_1)

{
  undefined8 uVar1;
  
  if (param_1 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = allocator_traits<std::allocator<_twoIntsStruct*>>::allocate((allocator *)this,param_1);
  }
  return uVar1;
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
    __isoc99_sscanf(local_18 * 2 + param_3,&DAT_001050a8,local_1c);
    *(char *)(local_18 + param_1) = local_1c[0];
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




/* std::vector<_twoIntsStruct*, std::allocator<_twoIntsStruct*> >::~vector() */

void __thiscall
std::vector<_twoIntsStruct*,std::allocator<_twoIntsStruct*>>::~vector
          (vector<_twoIntsStruct*,std::allocator<_twoIntsStruct*>> *this)

{
  allocator *paVar1;
  
  paVar1 = (allocator *)
           _Vector_base<_twoIntsStruct*,std::allocator<_twoIntsStruct*>>::_M_get_Tp_allocator
                     ((_Vector_base<_twoIntsStruct*,std::allocator<_twoIntsStruct*>> *)this);
  _Destroy<_twoIntsStruct**,_twoIntsStruct*>
            (*(_twoIntsStruct ***)this,*(_twoIntsStruct ***)(this + 8),paVar1);
  _Vector_base<_twoIntsStruct*,std::allocator<_twoIntsStruct*>>::~_Vector_base
            ((_Vector_base<_twoIntsStruct*,std::allocator<_twoIntsStruct*>> *)this);
  return;
}




void bad1(void)

{
  return;
}




/* __normal_iterator<_twoIntsStruct**, std::vector<_twoIntsStruct*, std::allocator<_twoIntsStruct*>
   > >::__normal_iterator(_twoIntsStruct** const&) */

void __thiscall
__normal_iterator<_twoIntsStruct**,std::vector<_twoIntsStruct*,std::allocator<_twoIntsStruct*>>>::
__normal_iterator(__normal_iterator<_twoIntsStruct**,std::vector<_twoIntsStruct*,std::allocator<_twoIntsStruct*>>>
                  *this,_twoIntsStruct ***param_1)

{
  *(_twoIntsStruct ***)this = *param_1;
  return;
}




/* __alloc_traits<std::allocator<_twoIntsStruct*>,
   _twoIntsStruct*>::_S_select_on_copy(std::allocator<_twoIntsStruct*> const&) */

allocator *
__alloc_traits<std::allocator<_twoIntsStruct*>,_twoIntsStruct*>::_S_select_on_copy
          (allocator *param_1)

{
  long lVar1;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  std::allocator_traits<std::allocator<_twoIntsStruct*>>::select_on_container_copy_construction
            (param_1);
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1;
}




/* std::vector<_twoIntsStruct*, std::allocator<_twoIntsStruct*> >::_Temporary_value::_M_val() */

void __thiscall
std::vector<_twoIntsStruct*,std::allocator<_twoIntsStruct*>>::_Temporary_value::_M_val
          (_Temporary_value *this)

{
  _M_ptr(this);
  return;
}




/* std::vector<_twoIntsStruct*, std::allocator<_twoIntsStruct*> >::begin() */

undefined8 __thiscall
std::vector<_twoIntsStruct*,std::allocator<_twoIntsStruct*>>::begin
          (vector<_twoIntsStruct*,std::allocator<_twoIntsStruct*>> *this)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  __normal_iterator<_twoIntsStruct**,std::vector<_twoIntsStruct*,std::allocator<_twoIntsStruct*>>>::
  __normal_iterator((__normal_iterator<_twoIntsStruct**,std::vector<_twoIntsStruct*,std::allocator<_twoIntsStruct*>>>
                     *)&local_18,(_twoIntsStruct ***)this);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




/* std::allocator<_twoIntsStruct*>::~allocator() */

void __thiscall std::allocator<_twoIntsStruct*>::~allocator(allocator<_twoIntsStruct*> *this)

{
  new_allocator<_twoIntsStruct*>::~new_allocator((new_allocator<_twoIntsStruct*> *)this);
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




/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* decltype (__miter_base(({parm#1}.base)()))
   std::__miter_base<_twoIntsStruct**>(std::move_iterator<_twoIntsStruct**>) */

void std::__miter_base<_twoIntsStruct**>(move_iterator param_1)

{
  _twoIntsStruct **pp_Var1;
  undefined4 in_register_0000003c;
  undefined8 local_10;
  
  local_10 = CONCAT44(in_register_0000003c,param_1);
  pp_Var1 = (_twoIntsStruct **)
            move_iterator<_twoIntsStruct**>::base((move_iterator<_twoIntsStruct**> *)&local_10);
  __miter_base<_twoIntsStruct**>(pp_Var1);
  return;
}




/* _twoIntsStruct** std::__uninitialized_copy_a<__normal_iterator<_twoIntsStruct* const*,
   std::vector<_twoIntsStruct*, std::allocator<_twoIntsStruct*> > >, _twoIntsStruct**,
   _twoIntsStruct*>(__normal_iterator<_twoIntsStruct* const*, std::vector<_twoIntsStruct*,
   std::allocator<_twoIntsStruct*> > >, __normal_iterator<_twoIntsStruct* const*,
   std::vector<_twoIntsStruct*, std::allocator<_twoIntsStruct*> > >, _twoIntsStruct**,
   std::allocator<_twoIntsStruct*>&) */

void std::
     __uninitialized_copy_a<__normal_iterator<_twoIntsStruct*const*,std::vector<_twoIntsStruct*,std::allocator<_twoIntsStruct*>>>,_twoIntsStruct**,_twoIntsStruct*>
               (undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  uninitialized_copy<__normal_iterator<_twoIntsStruct*const*,std::vector<_twoIntsStruct*,std::allocator<_twoIntsStruct*>>>,_twoIntsStruct**>
            (param_1,param_2,param_3);
  return;
}




/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* _twoIntsStruct** std::__uninitialized_move_if_noexcept_a<_twoIntsStruct**, _twoIntsStruct**,
   std::allocator<_twoIntsStruct*> >(_twoIntsStruct**, _twoIntsStruct**, _twoIntsStruct**,
   std::allocator<_twoIntsStruct*>&) */

_twoIntsStruct **
std::
__uninitialized_move_if_noexcept_a<_twoIntsStruct**,_twoIntsStruct**,std::allocator<_twoIntsStruct*>>
          (_twoIntsStruct **param_1,_twoIntsStruct **param_2,_twoIntsStruct **param_3,
          allocator *param_4)

{
  move_iterator mVar1;
  move_iterator mVar2;
  _twoIntsStruct **pp_Var3;
  
  mVar1 = __make_move_if_noexcept_iterator<_twoIntsStruct*,std::move_iterator<_twoIntsStruct**>>
                    (param_2);
  mVar2 = __make_move_if_noexcept_iterator<_twoIntsStruct*,std::move_iterator<_twoIntsStruct**>>
                    (param_1);
  pp_Var3 = __uninitialized_copy_a<std::move_iterator<_twoIntsStruct**>,_twoIntsStruct**,_twoIntsStruct*>
                      (mVar2,mVar1,param_3,param_4);
  return pp_Var3;
}




void bad2(void)

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




void printSizeTLine(undefined8 param_1)

{
  printf("%zu\n",param_1);
  return;
}




/* __normal_iterator<_twoIntsStruct**, std::vector<_twoIntsStruct*, std::allocator<_twoIntsStruct*>
   > >::difference_type TEMPNAMEPLACEHOLDERVALUE(__normal_iterator<_twoIntsStruct**,
   std::vector<_twoIntsStruct*, std::allocator<_twoIntsStruct*> > > const&,
   __normal_iterator<_twoIntsStruct**, std::vector<_twoIntsStruct*, std::allocator<_twoIntsStruct*>
   > > const&) */

difference_type operator-(__normal_iterator *param_1,__normal_iterator *param_2)

{
  long lVar1;
  long *plVar2;
  
  plVar2 = (long *)__normal_iterator<_twoIntsStruct**,std::vector<_twoIntsStruct*,std::allocator<_twoIntsStruct*>>>
                   ::base((__normal_iterator<_twoIntsStruct**,std::vector<_twoIntsStruct*,std::allocator<_twoIntsStruct*>>>
                           *)param_1);
  lVar1 = *plVar2;
  plVar2 = (long *)__normal_iterator<_twoIntsStruct**,std::vector<_twoIntsStruct*,std::allocator<_twoIntsStruct*>>>
                   ::base((__normal_iterator<_twoIntsStruct**,std::vector<_twoIntsStruct*,std::allocator<_twoIntsStruct*>>>
                           *)param_2);
  return (difference_type)(lVar1 - *plVar2 >> 3);
}




/* std::allocator_traits<std::allocator<_twoIntsStruct*>
   >::allocate(std::allocator<_twoIntsStruct*>&, unsigned long) */

void std::allocator_traits<std::allocator<_twoIntsStruct*>>::allocate
               (allocator *param_1,ulong param_2)

{
  new_allocator<_twoIntsStruct*>::allocate((ulong)param_1,(void *)param_2);
  return;
}




/* CWE415_Double_Free__malloc_free_struct_72::goodB2GSink(std::vector<_twoIntsStruct*,
   std::allocator<_twoIntsStruct*> >) */

void CWE415_Double_Free__malloc_free_struct_72::goodB2GSink(vector param_1)

{
  undefined4 in_register_0000003c;
  
  std::vector<_twoIntsStruct*,std::allocator<_twoIntsStruct*>>::operator[]
            ((vector<_twoIntsStruct*,std::allocator<_twoIntsStruct*>> *)
             CONCAT44(in_register_0000003c,param_1),2);
  return;
}




/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* _twoIntsStruct** std::__uninitialized_fill_n_a<_twoIntsStruct**, unsigned long, _twoIntsStruct*,
   _twoIntsStruct*>(_twoIntsStruct**, unsigned long, _twoIntsStruct* const&,
   std::allocator<_twoIntsStruct*>&) */

_twoIntsStruct **
std::__uninitialized_fill_n_a<_twoIntsStruct**,unsigned_long,_twoIntsStruct*,_twoIntsStruct*>
          (_twoIntsStruct **param_1,ulong param_2,_twoIntsStruct **param_3,allocator *param_4)

{
  _twoIntsStruct **pp_Var1;
  
  pp_Var1 = uninitialized_fill_n<_twoIntsStruct**,unsigned_long,_twoIntsStruct*>
                      (param_1,param_2,param_3);
  return pp_Var1;
}




/* std::allocator_traits<std::allocator<_twoIntsStruct*>
   >::select_on_container_copy_construction(std::allocator<_twoIntsStruct*> const&) */

allocator *
std::allocator_traits<std::allocator<_twoIntsStruct*>>::select_on_container_copy_construction
          (allocator *param_1)

{
  allocator<_twoIntsStruct*>::allocator(param_1);
  return param_1;
}




/* std::vector<_twoIntsStruct*, std::allocator<_twoIntsStruct*> >::size() const */

long __thiscall
std::vector<_twoIntsStruct*,std::allocator<_twoIntsStruct*>>::size
          (vector<_twoIntsStruct*,std::allocator<_twoIntsStruct*>> *this)

{
  return *(long *)(this + 8) - *(long *)this >> 3;
}




undefined8 main(void)

{
  time_t tVar1;
  
  tVar1 = time((time_t *)0x0);
  srand((uint)tVar1);
  printLine("Calling good()...");
  CWE415_Double_Free__malloc_free_struct_72::good();
  printLine("Finished good()");
  printLine("Calling bad()...");
  CWE415_Double_Free__malloc_free_struct_72::bad();
  printLine("Finished bad()");
  return 0;
}




/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* _twoIntsStruct** std::__niter_base<_twoIntsStruct**>(_twoIntsStruct**) */

_twoIntsStruct ** std::__niter_base<_twoIntsStruct**>(_twoIntsStruct **param_1)

{
  return param_1;
}




void printWLine(long param_1)

{
  if (param_1 != 0) {
    wprintf(L"%ls\n",param_1);
  }
  return;
}




/* std::_Vector_base<_twoIntsStruct*, std::allocator<_twoIntsStruct*>
   >::_Vector_impl::_Vector_impl(std::allocator<_twoIntsStruct*> const&) */

void __thiscall
std::_Vector_base<_twoIntsStruct*,std::allocator<_twoIntsStruct*>>::_Vector_impl::_Vector_impl
          (_Vector_impl *this,allocator *param_1)

{
  allocator<_twoIntsStruct*>::allocator((allocator *)this);
  _Vector_impl_data::_Vector_impl_data((_Vector_impl_data *)this);
  return;
}




/* __normal_iterator<_twoIntsStruct**, std::vector<_twoIntsStruct*, std::allocator<_twoIntsStruct*>
   > >::base() const */

__normal_iterator<_twoIntsStruct**,std::vector<_twoIntsStruct*,std::allocator<_twoIntsStruct*>>> *
__thiscall
__normal_iterator<_twoIntsStruct**,std::vector<_twoIntsStruct*,std::allocator<_twoIntsStruct*>>>::
base(__normal_iterator<_twoIntsStruct**,std::vector<_twoIntsStruct*,std::allocator<_twoIntsStruct*>>>
     *this)

{
  return this;
}




/* _twoIntsStruct** std::__uninitialized_copy<true>::__uninit_copy<__normal_iterator<_twoIntsStruct*
   const*, std::vector<_twoIntsStruct*, std::allocator<_twoIntsStruct*> > >,
   _twoIntsStruct**>(__normal_iterator<_twoIntsStruct* const*, std::vector<_twoIntsStruct*,
   std::allocator<_twoIntsStruct*> > >, __normal_iterator<_twoIntsStruct* const*,
   std::vector<_twoIntsStruct*, std::allocator<_twoIntsStruct*> > >, _twoIntsStruct**) */

void std::__uninitialized_copy<true>::
     __uninit_copy<__normal_iterator<_twoIntsStruct*const*,std::vector<_twoIntsStruct*,std::allocator<_twoIntsStruct*>>>,_twoIntsStruct**>
               (undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  copy<__normal_iterator<_twoIntsStruct*const*,std::vector<_twoIntsStruct*,std::allocator<_twoIntsStruct*>>>,_twoIntsStruct**>
            (param_1,param_2,param_3);
  return;
}




/* void std::_Destroy_aux<true>::__destroy<_twoIntsStruct**>(_twoIntsStruct**, _twoIntsStruct**) */

void std::_Destroy_aux<true>::__destroy<_twoIntsStruct**>
               (_twoIntsStruct **param_1,_twoIntsStruct **param_2)

{
  return;
}




/* new_allocator<_twoIntsStruct*>::max_size() const */

undefined8 new_allocator<_twoIntsStruct*>::max_size(void)

{
  return 0xfffffffffffffff;
}




/* __normal_iterator<_twoIntsStruct* const*, std::vector<_twoIntsStruct*,
   std::allocator<_twoIntsStruct*> > >::difference_type
   TEMPNAMEPLACEHOLDERVALUE(__normal_iterator<_twoIntsStruct* const*, std::vector<_twoIntsStruct*,
   std::allocator<_twoIntsStruct*> > > const&, __normal_iterator<_twoIntsStruct* const*,
   std::vector<_twoIntsStruct*, std::allocator<_twoIntsStruct*> > > const&) */

difference_type operator-(__normal_iterator *param_1,__normal_iterator *param_2)

{
  long lVar1;
  long *plVar2;
  
  plVar2 = (long *)__normal_iterator<_twoIntsStruct*const*,std::vector<_twoIntsStruct*,std::allocator<_twoIntsStruct*>>>
                   ::base((__normal_iterator<_twoIntsStruct*const*,std::vector<_twoIntsStruct*,std::allocator<_twoIntsStruct*>>>
                           *)param_1);
  lVar1 = *plVar2;
  plVar2 = (long *)__normal_iterator<_twoIntsStruct*const*,std::vector<_twoIntsStruct*,std::allocator<_twoIntsStruct*>>>
                   ::base((__normal_iterator<_twoIntsStruct*const*,std::vector<_twoIntsStruct*,std::allocator<_twoIntsStruct*>>>
                           *)param_2);
  return (difference_type)(lVar1 - *plVar2 >> 3);
}




/* __normal_iterator<_twoIntsStruct* const*, std::vector<_twoIntsStruct*,
   std::allocator<_twoIntsStruct*> >
   >::__normal_iterator<_twoIntsStruct**>(__normal_iterator<_twoIntsStruct**,
   __enable_if<std::__are_same<_twoIntsStruct**, _twoIntsStruct**>::__value,
   std::vector<_twoIntsStruct*, std::allocator<_twoIntsStruct*> > >::__type> const&) */

void __thiscall
__normal_iterator<_twoIntsStruct*const*,std::vector<_twoIntsStruct*,std::allocator<_twoIntsStruct*>>>
::__normal_iterator<_twoIntsStruct**>
          (__normal_iterator<_twoIntsStruct*const*,std::vector<_twoIntsStruct*,std::allocator<_twoIntsStruct*>>>
           *this,__normal_iterator *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)
           __normal_iterator<_twoIntsStruct**,std::vector<_twoIntsStruct*,std::allocator<_twoIntsStruct*>>>
           ::base((__normal_iterator<_twoIntsStruct**,std::vector<_twoIntsStruct*,std::allocator<_twoIntsStruct*>>>
                   *)param_1);
  *(undefined8 *)this = *puVar1;
  return;
}




void bad3(void)

{
  return;
}




/* _twoIntsStruct**
   std::__uninitialized_copy<true>::__uninit_copy<std::move_iterator<_twoIntsStruct**>,
   _twoIntsStruct**>(std::move_iterator<_twoIntsStruct**>, std::move_iterator<_twoIntsStruct**>,
   _twoIntsStruct**) */

_twoIntsStruct **
std::__uninitialized_copy<true>::
__uninit_copy<std::move_iterator<_twoIntsStruct**>,_twoIntsStruct**>
          (move_iterator param_1,move_iterator param_2,_twoIntsStruct **param_3)

{
  _twoIntsStruct **pp_Var1;
  
  pp_Var1 = copy<std::move_iterator<_twoIntsStruct**>,_twoIntsStruct**>(param_1,param_2,param_3);
  return pp_Var1;
}




/* std::vector<_twoIntsStruct*, std::allocator<_twoIntsStruct*>
   >::vector(std::vector<_twoIntsStruct*, std::allocator<_twoIntsStruct*> > const&) */

void __thiscall
std::vector<_twoIntsStruct*,std::allocator<_twoIntsStruct*>>::vector
          (vector<_twoIntsStruct*,std::allocator<_twoIntsStruct*>> *this,vector *param_1)

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
  _Vector_base<_twoIntsStruct*,std::allocator<_twoIntsStruct*>>::_M_get_Tp_allocator
            ((_Vector_base<_twoIntsStruct*,std::allocator<_twoIntsStruct*>> *)param_1);
  __alloc_traits<std::allocator<_twoIntsStruct*>,_twoIntsStruct*>::_S_select_on_copy(&local_31);
  uVar1 = size((vector<_twoIntsStruct*,std::allocator<_twoIntsStruct*>> *)param_1);
                    /* try { // try from 00101e00 to 00101e04 has its CatchHandler @ 00101e6d */
  _Vector_base<_twoIntsStruct*,std::allocator<_twoIntsStruct*>>::_Vector_base
            ((_Vector_base<_twoIntsStruct*,std::allocator<_twoIntsStruct*>> *)this,uVar1,&local_31);
  allocator<_twoIntsStruct*>::~allocator((allocator<_twoIntsStruct*> *)&local_31);
  uVar2 = _Vector_base<_twoIntsStruct*,std::allocator<_twoIntsStruct*>>::_M_get_Tp_allocator
                    ((_Vector_base<_twoIntsStruct*,std::allocator<_twoIntsStruct*>> *)this);
  uVar5 = *(undefined8 *)this;
  uVar3 = end((vector<_twoIntsStruct*,std::allocator<_twoIntsStruct*>> *)param_1);
  uVar4 = begin((vector<_twoIntsStruct*,std::allocator<_twoIntsStruct*>> *)param_1);
                    /* try { // try from 00101e4e to 00101e52 has its CatchHandler @ 00101e8b */
  uVar5 = __uninitialized_copy_a<__normal_iterator<_twoIntsStruct*const*,std::vector<_twoIntsStruct*,std::allocator<_twoIntsStruct*>>>,_twoIntsStruct**,_twoIntsStruct*>
                    (uVar4,uVar3,uVar5,uVar2);
  *(undefined8 *)(this + 8) = uVar5;
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




/* std::vector<_twoIntsStruct*, std::allocator<_twoIntsStruct*> >::cbegin() const */

undefined8 __thiscall
std::vector<_twoIntsStruct*,std::allocator<_twoIntsStruct*>>::cbegin
          (vector<_twoIntsStruct*,std::allocator<_twoIntsStruct*>> *this)

{
  long in_FS_OFFSET;
  _twoIntsStruct **local_20;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_20 = *(_twoIntsStruct ***)this;
  __normal_iterator<_twoIntsStruct*const*,std::vector<_twoIntsStruct*,std::allocator<_twoIntsStruct*>>>
  ::__normal_iterator((__normal_iterator<_twoIntsStruct*const*,std::vector<_twoIntsStruct*,std::allocator<_twoIntsStruct*>>>
                       *)&local_18,&local_20);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




/* std::_Vector_base<_twoIntsStruct*, std::allocator<_twoIntsStruct*> >::_M_get_Tp_allocator() const
    */

_Vector_base<_twoIntsStruct*,std::allocator<_twoIntsStruct*>> * __thiscall
std::_Vector_base<_twoIntsStruct*,std::allocator<_twoIntsStruct*>>::_M_get_Tp_allocator
          (_Vector_base<_twoIntsStruct*,std::allocator<_twoIntsStruct*>> *this)

{
  return this;
}




/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* _twoIntsStruct** std::uninitialized_copy<std::move_iterator<_twoIntsStruct**>,
   _twoIntsStruct**>(std::move_iterator<_twoIntsStruct**>, std::move_iterator<_twoIntsStruct**>,
   _twoIntsStruct**) */

_twoIntsStruct **
std::uninitialized_copy<std::move_iterator<_twoIntsStruct**>,_twoIntsStruct**>
          (move_iterator param_1,move_iterator param_2,_twoIntsStruct **param_3)

{
  _twoIntsStruct **pp_Var1;
  
  pp_Var1 = __uninitialized_copy<true>::
            __uninit_copy<std::move_iterator<_twoIntsStruct**>,_twoIntsStruct**>
                      (param_1,param_2,param_3);
  return pp_Var1;
}




/* __normal_iterator<_twoIntsStruct**, std::vector<_twoIntsStruct*, std::allocator<_twoIntsStruct*>
   > >::TEMPNAMEPLACEHOLDERVALUE(long) const */

undefined8 __thiscall
__normal_iterator<_twoIntsStruct**,std::vector<_twoIntsStruct*,std::allocator<_twoIntsStruct*>>>::
operator+(__normal_iterator<_twoIntsStruct**,std::vector<_twoIntsStruct*,std::allocator<_twoIntsStruct*>>>
          *this,long param_1)

{
  long in_FS_OFFSET;
  _twoIntsStruct **local_20;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_20 = (_twoIntsStruct **)(*(long *)this + param_1 * 8);
  __normal_iterator((__normal_iterator<_twoIntsStruct**,std::vector<_twoIntsStruct*,std::allocator<_twoIntsStruct*>>>
                     *)&local_18,&local_20);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* _twoIntsStruct** std::__uninitialized_copy_a<std::move_iterator<_twoIntsStruct**>,
   _twoIntsStruct**, _twoIntsStruct*>(std::move_iterator<_twoIntsStruct**>,
   std::move_iterator<_twoIntsStruct**>, _twoIntsStruct**, std::allocator<_twoIntsStruct*>&) */

_twoIntsStruct **
std::__uninitialized_copy_a<std::move_iterator<_twoIntsStruct**>,_twoIntsStruct**,_twoIntsStruct*>
          (move_iterator param_1,move_iterator param_2,_twoIntsStruct **param_3,allocator *param_4)

{
  _twoIntsStruct **pp_Var1;
  
  pp_Var1 = uninitialized_copy<std::move_iterator<_twoIntsStruct**>,_twoIntsStruct**>
                      (param_1,param_2,param_3);
  return pp_Var1;
}




/* std::vector<_twoIntsStruct*, std::allocator<_twoIntsStruct*> >::operator[](unsigned long) */

long __thiscall
std::vector<_twoIntsStruct*,std::allocator<_twoIntsStruct*>>::operator[]
          (vector<_twoIntsStruct*,std::allocator<_twoIntsStruct*>> *this,ulong param_1)

{
  return *(long *)this + param_1 * 8;
}




/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* _twoIntsStruct** std::copy<std::move_iterator<_twoIntsStruct**>,
   _twoIntsStruct**>(std::move_iterator<_twoIntsStruct**>, std::move_iterator<_twoIntsStruct**>,
   _twoIntsStruct**) */

_twoIntsStruct **
std::copy<std::move_iterator<_twoIntsStruct**>,_twoIntsStruct**>
          (move_iterator param_1,move_iterator param_2,_twoIntsStruct **param_3)

{
  _twoIntsStruct **pp_Var1;
  _twoIntsStruct **pp_Var2;
  
  pp_Var1 = (_twoIntsStruct **)__miter_base<_twoIntsStruct**>(param_2);
  pp_Var2 = (_twoIntsStruct **)__miter_base<_twoIntsStruct**>(param_1);
  pp_Var1 = __copy_move_a2<true,_twoIntsStruct**,_twoIntsStruct**>(pp_Var2,pp_Var1,param_3);
  return pp_Var1;
}




void printStructLine(uint *param_1)

{
  printf("%d -- %d\n",(ulong)*param_1,(ulong)param_1[1]);
  return;
}




/* _twoIntsStruct** std::__copy_move<true, true,
   std::random_access_iterator_tag>::__copy_m<_twoIntsStruct*>(_twoIntsStruct* const*,
   _twoIntsStruct* const*, _twoIntsStruct**) */

_twoIntsStruct **
std::__copy_move<true,true,std::random_access_iterator_tag>::__copy_m<_twoIntsStruct*>
          (_twoIntsStruct **param_1,_twoIntsStruct **param_2,_twoIntsStruct **param_3)

{
  long lVar1;
  
  lVar1 = (long)param_2 - (long)param_1 >> 3;
  if (lVar1 != 0) {
    memmove(param_3,param_1,lVar1 * 8);
  }
  return param_3 + lVar1;
}




/* CWE415_Double_Free__malloc_free_struct_72::goodG2B() */

void CWE415_Double_Free__malloc_free_struct_72::goodG2B(void)

{
  long in_FS_OFFSET;
  void *local_68;
  undefined8 local_60;
  vector<_twoIntsStruct*,std::allocator<_twoIntsStruct*>> local_58 [32];
  undefined8 local_38 [3];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  std::vector<_twoIntsStruct*,std::allocator<_twoIntsStruct*>>::vector(local_58);
  local_68 = (void *)0x0;
  local_68 = malloc(800);
  if (local_68 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  local_60 = std::vector<_twoIntsStruct*,std::allocator<_twoIntsStruct*>>::end(local_58);
  __normal_iterator<_twoIntsStruct*const*,std::vector<_twoIntsStruct*,std::allocator<_twoIntsStruct*>>>
  ::__normal_iterator<_twoIntsStruct**>
            ((__normal_iterator<_twoIntsStruct*const*,std::vector<_twoIntsStruct*,std::allocator<_twoIntsStruct*>>>
              *)local_38,(__normal_iterator *)&local_60);
                    /* try { // try from 001017d3 to 00101868 has its CatchHandler @ 001018b4 */
  std::vector<_twoIntsStruct*,std::allocator<_twoIntsStruct*>>::insert
            (local_58,local_38[0],1,&local_68);
  local_60 = std::vector<_twoIntsStruct*,std::allocator<_twoIntsStruct*>>::end(local_58);
  __normal_iterator<_twoIntsStruct*const*,std::vector<_twoIntsStruct*,std::allocator<_twoIntsStruct*>>>
  ::__normal_iterator<_twoIntsStruct**>
            ((__normal_iterator<_twoIntsStruct*const*,std::vector<_twoIntsStruct*,std::allocator<_twoIntsStruct*>>>
              *)local_38,(__normal_iterator *)&local_60);
  std::vector<_twoIntsStruct*,std::allocator<_twoIntsStruct*>>::insert
            (local_58,local_38[0],1,&local_68);
  local_60 = std::vector<_twoIntsStruct*,std::allocator<_twoIntsStruct*>>::end(local_58);
  __normal_iterator<_twoIntsStruct*const*,std::vector<_twoIntsStruct*,std::allocator<_twoIntsStruct*>>>
  ::__normal_iterator<_twoIntsStruct**>
            ((__normal_iterator<_twoIntsStruct*const*,std::vector<_twoIntsStruct*,std::allocator<_twoIntsStruct*>>>
              *)local_38,(__normal_iterator *)&local_60);
  std::vector<_twoIntsStruct*,std::allocator<_twoIntsStruct*>>::insert
            (local_58,local_38[0],1,&local_68);
  std::vector<_twoIntsStruct*,std::allocator<_twoIntsStruct*>>::vector
            ((vector<_twoIntsStruct*,std::allocator<_twoIntsStruct*>> *)local_38,(vector *)local_58)
  ;
                    /* try { // try from 00101870 to 00101874 has its CatchHandler @ 0010189f */
  goodG2BSink((vector)local_38);
  std::vector<_twoIntsStruct*,std::allocator<_twoIntsStruct*>>::~vector
            ((vector<_twoIntsStruct*,std::allocator<_twoIntsStruct*>> *)local_38);
  std::vector<_twoIntsStruct*,std::allocator<_twoIntsStruct*>>::~vector(local_58);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* void std::_Destroy<_twoIntsStruct**>(_twoIntsStruct**, _twoIntsStruct**) */

void std::_Destroy<_twoIntsStruct**>(_twoIntsStruct **param_1,_twoIntsStruct **param_2)

{
  _Destroy_aux<true>::__destroy<_twoIntsStruct**>(param_1,param_2);
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




void good9(void)

{
  return;
}




/* std::_Vector_base<_twoIntsStruct*, std::allocator<_twoIntsStruct*> >::_Vector_base() */

void __thiscall
std::_Vector_base<_twoIntsStruct*,std::allocator<_twoIntsStruct*>>::_Vector_base
          (_Vector_base<_twoIntsStruct*,std::allocator<_twoIntsStruct*>> *this)

{
  _Vector_impl::_Vector_impl((_Vector_impl *)this);
  return;
}




void printHexCharLine(char param_1)

{
  printf("%02x\n",(ulong)(uint)(int)param_1);
  return;
}




/* _twoIntsStruct** std::__copy_move_backward<true, true,
   std::random_access_iterator_tag>::__copy_move_b<_twoIntsStruct*>(_twoIntsStruct* const*,
   _twoIntsStruct* const*, _twoIntsStruct**) */

_twoIntsStruct **
std::__copy_move_backward<true,true,std::random_access_iterator_tag>::__copy_move_b<_twoIntsStruct*>
          (_twoIntsStruct **param_1,_twoIntsStruct **param_2,_twoIntsStruct **param_3)

{
  long lVar1;
  
  lVar1 = (long)param_2 - (long)param_1 >> 3;
  if (lVar1 != 0) {
    memmove(param_3 + -lVar1,param_1,lVar1 * 8);
  }
  return param_3 + -lVar1;
}




/* std::_Vector_base<_twoIntsStruct*, std::allocator<_twoIntsStruct*> >::_M_create_storage(unsigned
   long) */

void __thiscall
std::_Vector_base<_twoIntsStruct*,std::allocator<_twoIntsStruct*>>::_M_create_storage
          (_Vector_base<_twoIntsStruct*,std::allocator<_twoIntsStruct*>> *this,ulong param_1)

{
  undefined8 uVar1;
  
  uVar1 = _M_allocate(this,param_1);
  *(undefined8 *)this = uVar1;
  *(undefined8 *)(this + 8) = *(undefined8 *)this;
  *(ulong *)(this + 0x10) = param_1 * 8 + *(long *)this;
  return;
}




/* _twoIntsStruct** std::copy<__normal_iterator<_twoIntsStruct* const*, std::vector<_twoIntsStruct*,
   std::allocator<_twoIntsStruct*> > >, _twoIntsStruct**>(__normal_iterator<_twoIntsStruct* const*,
   std::vector<_twoIntsStruct*, std::allocator<_twoIntsStruct*> > >,
   __normal_iterator<_twoIntsStruct* const*, std::vector<_twoIntsStruct*,
   std::allocator<_twoIntsStruct*> > >, _twoIntsStruct**) */

void std::
     copy<__normal_iterator<_twoIntsStruct*const*,std::vector<_twoIntsStruct*,std::allocator<_twoIntsStruct*>>>,_twoIntsStruct**>
               (undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = __miter_base<__normal_iterator<_twoIntsStruct*const*,std::vector<_twoIntsStruct*,std::allocator<_twoIntsStruct*>>>>
                    (param_2);
  uVar2 = __miter_base<__normal_iterator<_twoIntsStruct*const*,std::vector<_twoIntsStruct*,std::allocator<_twoIntsStruct*>>>>
                    (param_1);
  __copy_move_a2<false,__normal_iterator<_twoIntsStruct*const*,std::vector<_twoIntsStruct*,std::allocator<_twoIntsStruct*>>>,_twoIntsStruct**>
            (uVar2,uVar1,param_3);
  return;
}




void bad8(void)

{
  return;
}




/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* std::move_iterator<_twoIntsStruct**> std::__make_move_if_noexcept_iterator<_twoIntsStruct*,
   std::move_iterator<_twoIntsStruct**> >(_twoIntsStruct**) */

move_iterator
std::__make_move_if_noexcept_iterator<_twoIntsStruct*,std::move_iterator<_twoIntsStruct**>>
          (_twoIntsStruct **param_1)

{
  long in_FS_OFFSET;
  move_iterator local_18 [2];
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  move_iterator<_twoIntsStruct**>::move_iterator
            ((move_iterator<_twoIntsStruct**> *)local_18,param_1);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18[0];
}




/* std::_Vector_base<_twoIntsStruct*, std::allocator<_twoIntsStruct*>
   >::_Vector_impl::_Vector_impl() */

void __thiscall
std::_Vector_base<_twoIntsStruct*,std::allocator<_twoIntsStruct*>>::_Vector_impl::_Vector_impl
          (_Vector_impl *this)

{
  allocator<_twoIntsStruct*>::allocator();
  _Vector_impl_data::_Vector_impl_data((_Vector_impl_data *)this);
  return;
}




/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* _twoIntsStruct** std::__copy_move_a<false, _twoIntsStruct* const*,
   _twoIntsStruct**>(_twoIntsStruct* const*, _twoIntsStruct* const*, _twoIntsStruct**) */

_twoIntsStruct **
std::__copy_move_a<false,_twoIntsStruct*const*,_twoIntsStruct**>
          (_twoIntsStruct **param_1,_twoIntsStruct **param_2,_twoIntsStruct **param_3)

{
  _twoIntsStruct **pp_Var1;
  
  pp_Var1 = __copy_move<false,true,std::random_access_iterator_tag>::__copy_m<_twoIntsStruct*>
                      (param_1,param_2,param_3);
  return pp_Var1;
}




/* std::_Vector_base<_twoIntsStruct*, std::allocator<_twoIntsStruct*>
   >::_M_deallocate(_twoIntsStruct**, unsigned long) */

void __thiscall
std::_Vector_base<_twoIntsStruct*,std::allocator<_twoIntsStruct*>>::_M_deallocate
          (_Vector_base<_twoIntsStruct*,std::allocator<_twoIntsStruct*>> *this,
          _twoIntsStruct **param_1,ulong param_2)

{
  if (param_1 != (_twoIntsStruct **)0x0) {
    allocator_traits<std::allocator<_twoIntsStruct*>>::deallocate((allocator *)this,param_1,param_2)
    ;
  }
  return;
}




void good7(void)

{
  return;
}




/* new_allocator<_twoIntsStruct*>::deallocate(_twoIntsStruct**, unsigned long) */

void new_allocator<_twoIntsStruct*>::deallocate(_twoIntsStruct **param_1,ulong param_2)

{
  operator_delete((void *)param_2);
  return;
}




void good2(void)

{
  return;
}




void printLongLine(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




undefined8 globalReturnsFalse(void)

{
  return 0;
}




void good3(void)

{
  return;
}




/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* __enable_if<std::__is_scalar<_twoIntsStruct*>::__value, _twoIntsStruct**>::__type
   std::__fill_n_a<_twoIntsStruct**, unsigned long, _twoIntsStruct*>(_twoIntsStruct**, unsigned
   long, _twoIntsStruct* const&) */

__type std::__fill_n_a<_twoIntsStruct**,unsigned_long,_twoIntsStruct*>
                 (_twoIntsStruct **param_1,ulong param_2,_twoIntsStruct **param_3)

{
  _twoIntsStruct *p_Var1;
  _twoIntsStruct **local_20;
  ulong local_18;
  
  p_Var1 = *param_3;
  local_20 = param_1;
  for (local_18 = param_2; local_18 != 0; local_18 = local_18 - 1) {
    *local_20 = p_Var1;
    local_20 = local_20 + 1;
  }
  return (__type)local_20;
}




/* __normal_iterator<_twoIntsStruct* const*, std::vector<_twoIntsStruct*,
   std::allocator<_twoIntsStruct*> > >::base() const */

__normal_iterator<_twoIntsStruct*const*,std::vector<_twoIntsStruct*,std::allocator<_twoIntsStruct*>>>
* __thiscall
__normal_iterator<_twoIntsStruct*const*,std::vector<_twoIntsStruct*,std::allocator<_twoIntsStruct*>>>
::base(__normal_iterator<_twoIntsStruct*const*,std::vector<_twoIntsStruct*,std::allocator<_twoIntsStruct*>>>
       *this)

{
  return this;
}




/* std::_Vector_base<_twoIntsStruct*, std::allocator<_twoIntsStruct*> >::~_Vector_base() */

void __thiscall
std::_Vector_base<_twoIntsStruct*,std::allocator<_twoIntsStruct*>>::~_Vector_base
          (_Vector_base<_twoIntsStruct*,std::allocator<_twoIntsStruct*>> *this)

{
  _M_deallocate(this,*(_twoIntsStruct ***)this,*(long *)(this + 0x10) - *(long *)this >> 3);
  _Vector_impl::~_Vector_impl((_Vector_impl *)this);
  return;
}




/* std::vector<_twoIntsStruct*, std::allocator<_twoIntsStruct*>
   >::insert(__normal_iterator<_twoIntsStruct* const*, std::vector<_twoIntsStruct*,
   std::allocator<_twoIntsStruct*> > >, unsigned long, _twoIntsStruct* const&) */

void __thiscall
std::vector<_twoIntsStruct*,std::allocator<_twoIntsStruct*>>::insert
          (vector<_twoIntsStruct*,std::allocator<_twoIntsStruct*>> *this,undefined8 param_2,
          undefined8 param_3,undefined8 param_4)

{
  difference_type dVar1;
  undefined4 extraout_var;
  undefined8 uVar2;
  long in_FS_OFFSET;
  undefined8 local_38;
  vector<_twoIntsStruct*,std::allocator<_twoIntsStruct*>> *local_30;
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
  uVar2 = __normal_iterator<_twoIntsStruct**,std::vector<_twoIntsStruct*,std::allocator<_twoIntsStruct*>>>
          ::operator+((__normal_iterator<_twoIntsStruct**,std::vector<_twoIntsStruct*,std::allocator<_twoIntsStruct*>>>
                       *)&local_20,local_18);
  _M_fill_insert(local_30,uVar2,param_3,param_4);
  local_20 = begin(local_30);
  __normal_iterator<_twoIntsStruct**,std::vector<_twoIntsStruct*,std::allocator<_twoIntsStruct*>>>::
  operator+((__normal_iterator<_twoIntsStruct**,std::vector<_twoIntsStruct*,std::allocator<_twoIntsStruct*>>>
             *)&local_20,local_18);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




/* std::vector<_twoIntsStruct*, std::allocator<_twoIntsStruct*> >::_Temporary_value::_M_ptr() */

_Temporary_value * __thiscall
std::vector<_twoIntsStruct*,std::allocator<_twoIntsStruct*>>::_Temporary_value::_M_ptr
          (_Temporary_value *this)

{
  return this + 8;
}




/* operator new(unsigned long, void*) */

void * operator_new(ulong param_1,void *param_2)

{
  return param_2;
}




/* std::vector<_twoIntsStruct*, std::allocator<_twoIntsStruct*>
   >::_M_fill_insert(__normal_iterator<_twoIntsStruct**, std::vector<_twoIntsStruct*,
   std::allocator<_twoIntsStruct*> > >, unsigned long, _twoIntsStruct* const&) */

void __thiscall
std::vector<_twoIntsStruct*,std::allocator<_twoIntsStruct*>>::_M_fill_insert
          (vector<_twoIntsStruct*,std::allocator<_twoIntsStruct*>> *this,undefined8 param_2,
          ulong param_3,_twoIntsStruct **param_4)

{
  long lVar1;
  difference_type dVar2;
  undefined4 extraout_var;
  allocator *paVar3;
  undefined8 *puVar4;
  long *plVar5;
  _twoIntsStruct **pp_Var6;
  undefined4 extraout_var_00;
  long in_FS_OFFSET;
  undefined8 local_88;
  vector<_twoIntsStruct*,std::allocator<_twoIntsStruct*>> *local_80;
  undefined8 local_78;
  _twoIntsStruct **local_70;
  ulong local_68;
  long local_60;
  _twoIntsStruct **local_58;
  _twoIntsStruct **local_50;
  ulong local_48;
  _twoIntsStruct **local_40;
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
      local_70 = (_twoIntsStruct **)
                 _Vector_base<_twoIntsStruct*,std::allocator<_twoIntsStruct*>>::_M_allocate
                           ((_Vector_base<_twoIntsStruct*,std::allocator<_twoIntsStruct*>> *)
                            local_80,local_68);
      local_58 = local_70;
      paVar3 = (allocator *)
               _Vector_base<_twoIntsStruct*,std::allocator<_twoIntsStruct*>>::_M_get_Tp_allocator
                         ((_Vector_base<_twoIntsStruct*,std::allocator<_twoIntsStruct*>> *)local_80)
      ;
                    /* try { // try from 00102370 to 001023fb has its CatchHandler @ 001024b3 */
      __uninitialized_fill_n_a<_twoIntsStruct**,unsigned_long,_twoIntsStruct*,_twoIntsStruct*>
                (local_58 + local_60,param_3,param_4,paVar3);
      local_70 = (_twoIntsStruct **)0x0;
      paVar3 = (allocator *)
               _Vector_base<_twoIntsStruct*,std::allocator<_twoIntsStruct*>>::_M_get_Tp_allocator
                         ((_Vector_base<_twoIntsStruct*,std::allocator<_twoIntsStruct*>> *)local_80)
      ;
      puVar4 = (undefined8 *)
               __normal_iterator<_twoIntsStruct**,std::vector<_twoIntsStruct*,std::allocator<_twoIntsStruct*>>>
               ::base((__normal_iterator<_twoIntsStruct**,std::vector<_twoIntsStruct*,std::allocator<_twoIntsStruct*>>>
                       *)&local_88);
      local_70 = __uninitialized_move_if_noexcept_a<_twoIntsStruct**,_twoIntsStruct**,std::allocator<_twoIntsStruct*>>
                           (*(_twoIntsStruct ***)local_80,(_twoIntsStruct **)*puVar4,local_58,paVar3
                           );
      local_70 = local_70 + param_3;
      paVar3 = (allocator *)
               _Vector_base<_twoIntsStruct*,std::allocator<_twoIntsStruct*>>::_M_get_Tp_allocator
                         ((_Vector_base<_twoIntsStruct*,std::allocator<_twoIntsStruct*>> *)local_80)
      ;
      pp_Var6 = *(_twoIntsStruct ***)(local_80 + 8);
      puVar4 = (undefined8 *)
               __normal_iterator<_twoIntsStruct**,std::vector<_twoIntsStruct*,std::allocator<_twoIntsStruct*>>>
               ::base((__normal_iterator<_twoIntsStruct**,std::vector<_twoIntsStruct*,std::allocator<_twoIntsStruct*>>>
                       *)&local_88);
      local_70 = __uninitialized_move_if_noexcept_a<_twoIntsStruct**,_twoIntsStruct**,std::allocator<_twoIntsStruct*>>
                           ((_twoIntsStruct **)*puVar4,pp_Var6,local_70,paVar3);
      paVar3 = (allocator *)
               _Vector_base<_twoIntsStruct*,std::allocator<_twoIntsStruct*>>::_M_get_Tp_allocator
                         ((_Vector_base<_twoIntsStruct*,std::allocator<_twoIntsStruct*>> *)local_80)
      ;
      _Destroy<_twoIntsStruct**,_twoIntsStruct*>
                (*(_twoIntsStruct ***)local_80,*(_twoIntsStruct ***)(local_80 + 8),paVar3);
      _Vector_base<_twoIntsStruct*,std::allocator<_twoIntsStruct*>>::_M_deallocate
                ((_Vector_base<_twoIntsStruct*,std::allocator<_twoIntsStruct*>> *)local_80,
                 *(_twoIntsStruct ***)local_80,*(long *)(local_80 + 0x10) - *(long *)local_80 >> 3);
      *(_twoIntsStruct ***)local_80 = local_58;
      *(_twoIntsStruct ***)(local_80 + 8) = local_70;
      *(_twoIntsStruct ***)(local_80 + 0x10) = local_58 + local_68;
    }
    else {
      _Temporary_value::_Temporary_value<_twoIntsStruct*const&>(local_38,(vector *)this,param_4);
                    /* try { // try from 001020f0 to 001022c3 has its CatchHandler @ 00102495 */
      local_50 = (_twoIntsStruct **)_Temporary_value::_M_val(local_38);
      local_78 = end(local_80);
      dVar2 = operator-((__normal_iterator *)&local_78,(__normal_iterator *)&local_88);
      local_48 = CONCAT44(extraout_var,dVar2);
      local_40 = *(_twoIntsStruct ***)(local_80 + 8);
      if (param_3 < local_48) {
        paVar3 = (allocator *)
                 _Vector_base<_twoIntsStruct*,std::allocator<_twoIntsStruct*>>::_M_get_Tp_allocator
                           ((_Vector_base<_twoIntsStruct*,std::allocator<_twoIntsStruct*>> *)
                            local_80);
        __uninitialized_move_a<_twoIntsStruct**,_twoIntsStruct**,std::allocator<_twoIntsStruct*>>
                  ((_twoIntsStruct **)(param_3 * -8 + *(long *)(local_80 + 8)),
                   *(_twoIntsStruct ***)(local_80 + 8),*(_twoIntsStruct ***)(local_80 + 8),paVar3);
        *(ulong *)(local_80 + 8) = param_3 * 8 + *(long *)(local_80 + 8);
        pp_Var6 = local_40 + -param_3;
        puVar4 = (undefined8 *)
                 __normal_iterator<_twoIntsStruct**,std::vector<_twoIntsStruct*,std::allocator<_twoIntsStruct*>>>
                 ::base((__normal_iterator<_twoIntsStruct**,std::vector<_twoIntsStruct*,std::allocator<_twoIntsStruct*>>>
                         *)&local_88);
        move_backward<_twoIntsStruct**,_twoIntsStruct**>
                  ((_twoIntsStruct **)*puVar4,pp_Var6,local_40);
        plVar5 = (long *)__normal_iterator<_twoIntsStruct**,std::vector<_twoIntsStruct*,std::allocator<_twoIntsStruct*>>>
                         ::base((__normal_iterator<_twoIntsStruct**,std::vector<_twoIntsStruct*,std::allocator<_twoIntsStruct*>>>
                                 *)&local_88);
        lVar1 = *plVar5;
        puVar4 = (undefined8 *)
                 __normal_iterator<_twoIntsStruct**,std::vector<_twoIntsStruct*,std::allocator<_twoIntsStruct*>>>
                 ::base((__normal_iterator<_twoIntsStruct**,std::vector<_twoIntsStruct*,std::allocator<_twoIntsStruct*>>>
                         *)&local_88);
        fill<_twoIntsStruct**,_twoIntsStruct*>
                  ((_twoIntsStruct **)*puVar4,(_twoIntsStruct **)(lVar1 + param_3 * 8),local_50);
      }
      else {
        paVar3 = (allocator *)
                 _Vector_base<_twoIntsStruct*,std::allocator<_twoIntsStruct*>>::_M_get_Tp_allocator
                           ((_Vector_base<_twoIntsStruct*,std::allocator<_twoIntsStruct*>> *)
                            local_80);
        pp_Var6 = __uninitialized_fill_n_a<_twoIntsStruct**,unsigned_long,_twoIntsStruct*,_twoIntsStruct*>
                            (*(_twoIntsStruct ***)(local_80 + 8),param_3 - local_48,local_50,paVar3)
        ;
        *(_twoIntsStruct ***)(local_80 + 8) = pp_Var6;
        paVar3 = (allocator *)
                 _Vector_base<_twoIntsStruct*,std::allocator<_twoIntsStruct*>>::_M_get_Tp_allocator
                           ((_Vector_base<_twoIntsStruct*,std::allocator<_twoIntsStruct*>> *)
                            local_80);
        pp_Var6 = *(_twoIntsStruct ***)(local_80 + 8);
        puVar4 = (undefined8 *)
                 __normal_iterator<_twoIntsStruct**,std::vector<_twoIntsStruct*,std::allocator<_twoIntsStruct*>>>
                 ::base((__normal_iterator<_twoIntsStruct**,std::vector<_twoIntsStruct*,std::allocator<_twoIntsStruct*>>>
                         *)&local_88);
        __uninitialized_move_a<_twoIntsStruct**,_twoIntsStruct**,std::allocator<_twoIntsStruct*>>
                  ((_twoIntsStruct **)*puVar4,local_40,pp_Var6,paVar3);
        *(ulong *)(local_80 + 8) = local_48 * 8 + *(long *)(local_80 + 8);
        puVar4 = (undefined8 *)
                 __normal_iterator<_twoIntsStruct**,std::vector<_twoIntsStruct*,std::allocator<_twoIntsStruct*>>>
                 ::base((__normal_iterator<_twoIntsStruct**,std::vector<_twoIntsStruct*,std::allocator<_twoIntsStruct*>>>
                         *)&local_88);
        fill<_twoIntsStruct**,_twoIntsStruct*>((_twoIntsStruct **)*puVar4,local_40,local_50);
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




/* _twoIntsStruct* const* std::__niter_base<_twoIntsStruct* const*, std::vector<_twoIntsStruct*,
   std::allocator<_twoIntsStruct*> > >(__normal_iterator<_twoIntsStruct* const*,
   std::vector<_twoIntsStruct*, std::allocator<_twoIntsStruct*> > >) */

undefined8
std::
__niter_base<_twoIntsStruct*const*,std::vector<_twoIntsStruct*,std::allocator<_twoIntsStruct*>>>
          (undefined8 param_1)

{
  undefined8 *puVar1;
  undefined8 local_10;
  
  local_10 = param_1;
  puVar1 = (undefined8 *)
           __normal_iterator<_twoIntsStruct*const*,std::vector<_twoIntsStruct*,std::allocator<_twoIntsStruct*>>>
           ::base((__normal_iterator<_twoIntsStruct*const*,std::vector<_twoIntsStruct*,std::allocator<_twoIntsStruct*>>>
                   *)&local_10);
  return *puVar1;
}




/* void std::allocator_traits<std::allocator<_twoIntsStruct*>
   >::destroy<_twoIntsStruct*>(std::allocator<_twoIntsStruct*>&, _twoIntsStruct**) */

void std::allocator_traits<std::allocator<_twoIntsStruct*>>::destroy<_twoIntsStruct*>
               (allocator *param_1,_twoIntsStruct **param_2)

{
  new_allocator<_twoIntsStruct*>::destroy<_twoIntsStruct*>((_twoIntsStruct **)param_1);
  return;
}




/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* _twoIntsStruct** std::__uninitialized_move_a<_twoIntsStruct**, _twoIntsStruct**,
   std::allocator<_twoIntsStruct*> >(_twoIntsStruct**, _twoIntsStruct**, _twoIntsStruct**,
   std::allocator<_twoIntsStruct*>&) */

_twoIntsStruct **
std::__uninitialized_move_a<_twoIntsStruct**,_twoIntsStruct**,std::allocator<_twoIntsStruct*>>
          (_twoIntsStruct **param_1,_twoIntsStruct **param_2,_twoIntsStruct **param_3,
          allocator *param_4)

{
  move_iterator mVar1;
  move_iterator mVar2;
  _twoIntsStruct **pp_Var3;
  
  mVar1 = make_move_iterator<_twoIntsStruct**>(param_2);
  mVar2 = make_move_iterator<_twoIntsStruct**>(param_1);
  pp_Var3 = __uninitialized_copy_a<std::move_iterator<_twoIntsStruct**>,_twoIntsStruct**,_twoIntsStruct*>
                      (mVar2,mVar1,param_3,param_4);
  return pp_Var3;
}




/* std::vector<_twoIntsStruct*, std::allocator<_twoIntsStruct*> >::end() const */

undefined8 __thiscall
std::vector<_twoIntsStruct*,std::allocator<_twoIntsStruct*>>::end
          (vector<_twoIntsStruct*,std::allocator<_twoIntsStruct*>> *this)

{
  long in_FS_OFFSET;
  _twoIntsStruct **local_20;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_20 = *(_twoIntsStruct ***)(this + 8);
  __normal_iterator<_twoIntsStruct*const*,std::vector<_twoIntsStruct*,std::allocator<_twoIntsStruct*>>>
  ::__normal_iterator((__normal_iterator<_twoIntsStruct*const*,std::vector<_twoIntsStruct*,std::allocator<_twoIntsStruct*>>>
                       *)&local_18,&local_20);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




/* new_allocator<_twoIntsStruct*>::new_allocator(new_allocator<_twoIntsStruct*> const&) */

void new_allocator<_twoIntsStruct*>::new_allocator(new_allocator *param_1)

{
  return;
}




/* CWE415_Double_Free__malloc_free_struct_72::goodB2G() */

void CWE415_Double_Free__malloc_free_struct_72::goodB2G(void)

{
  long in_FS_OFFSET;
  void *local_68;
  undefined8 local_60;
  vector<_twoIntsStruct*,std::allocator<_twoIntsStruct*>> local_58 [32];
  undefined8 local_38 [3];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  std::vector<_twoIntsStruct*,std::allocator<_twoIntsStruct*>>::vector(local_58);
  local_68 = (void *)0x0;
  local_68 = malloc(800);
  if (local_68 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  free(local_68);
  local_60 = std::vector<_twoIntsStruct*,std::allocator<_twoIntsStruct*>>::end(local_58);
  __normal_iterator<_twoIntsStruct*const*,std::vector<_twoIntsStruct*,std::allocator<_twoIntsStruct*>>>
  ::__normal_iterator<_twoIntsStruct**>
            ((__normal_iterator<_twoIntsStruct*const*,std::vector<_twoIntsStruct*,std::allocator<_twoIntsStruct*>>>
              *)local_38,(__normal_iterator *)&local_60);
                    /* try { // try from 00101975 to 00101a0a has its CatchHandler @ 00101a56 */
  std::vector<_twoIntsStruct*,std::allocator<_twoIntsStruct*>>::insert
            (local_58,local_38[0],1,&local_68);
  local_60 = std::vector<_twoIntsStruct*,std::allocator<_twoIntsStruct*>>::end(local_58);
  __normal_iterator<_twoIntsStruct*const*,std::vector<_twoIntsStruct*,std::allocator<_twoIntsStruct*>>>
  ::__normal_iterator<_twoIntsStruct**>
            ((__normal_iterator<_twoIntsStruct*const*,std::vector<_twoIntsStruct*,std::allocator<_twoIntsStruct*>>>
              *)local_38,(__normal_iterator *)&local_60);
  std::vector<_twoIntsStruct*,std::allocator<_twoIntsStruct*>>::insert
            (local_58,local_38[0],1,&local_68);
  local_60 = std::vector<_twoIntsStruct*,std::allocator<_twoIntsStruct*>>::end(local_58);
  __normal_iterator<_twoIntsStruct*const*,std::vector<_twoIntsStruct*,std::allocator<_twoIntsStruct*>>>
  ::__normal_iterator<_twoIntsStruct**>
            ((__normal_iterator<_twoIntsStruct*const*,std::vector<_twoIntsStruct*,std::allocator<_twoIntsStruct*>>>
              *)local_38,(__normal_iterator *)&local_60);
  std::vector<_twoIntsStruct*,std::allocator<_twoIntsStruct*>>::insert
            (local_58,local_38[0],1,&local_68);
  std::vector<_twoIntsStruct*,std::allocator<_twoIntsStruct*>>::vector
            ((vector<_twoIntsStruct*,std::allocator<_twoIntsStruct*>> *)local_38,(vector *)local_58)
  ;
                    /* try { // try from 00101a12 to 00101a16 has its CatchHandler @ 00101a41 */
  goodB2GSink((vector)local_38);
  std::vector<_twoIntsStruct*,std::allocator<_twoIntsStruct*>>::~vector
            ((vector<_twoIntsStruct*,std::allocator<_twoIntsStruct*>> *)local_38);
  std::vector<_twoIntsStruct*,std::allocator<_twoIntsStruct*>>::~vector(local_58);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void printLine(char *param_1)

{
  if (param_1 != (char *)0x0) {
    puts(param_1);
  }
  return;
}




/* _twoIntsStruct** std::__copy_move<false, true,
   std::random_access_iterator_tag>::__copy_m<_twoIntsStruct*>(_twoIntsStruct* const*,
   _twoIntsStruct* const*, _twoIntsStruct**) */

_twoIntsStruct **
std::__copy_move<false,true,std::random_access_iterator_tag>::__copy_m<_twoIntsStruct*>
          (_twoIntsStruct **param_1,_twoIntsStruct **param_2,_twoIntsStruct **param_3)

{
  long lVar1;
  
  lVar1 = (long)param_2 - (long)param_1 >> 3;
  if (lVar1 != 0) {
    memmove(param_3,param_1,lVar1 * 8);
  }
  return param_3 + lVar1;
}




/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* std::move_iterator<_twoIntsStruct**> std::make_move_iterator<_twoIntsStruct**>(_twoIntsStruct**)
    */

move_iterator std::make_move_iterator<_twoIntsStruct**>(_twoIntsStruct **param_1)

{
  long in_FS_OFFSET;
  move_iterator local_18 [2];
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  move_iterator<_twoIntsStruct**>::move_iterator
            ((move_iterator<_twoIntsStruct**> *)local_18,param_1);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18[0];
}




/* std::vector<_twoIntsStruct*, std::allocator<_twoIntsStruct*>
   >::_Temporary_value::_Temporary_value<_twoIntsStruct* const&>(std::vector<_twoIntsStruct*,
   std::allocator<_twoIntsStruct*> >*, _twoIntsStruct* const&) */

void __thiscall
std::vector<_twoIntsStruct*,std::allocator<_twoIntsStruct*>>::_Temporary_value::
_Temporary_value<_twoIntsStruct*const&>
          (_Temporary_value *this,vector *param_1,_twoIntsStruct **param_2)

{
  _twoIntsStruct **pp_Var1;
  _twoIntsStruct **pp_Var2;
  
  *(vector **)this = param_1;
  pp_Var1 = forward<_twoIntsStruct*const&>((type *)param_2);
  pp_Var2 = (_twoIntsStruct **)_M_ptr(this);
  allocator_traits<std::allocator<_twoIntsStruct*>>::
  construct<_twoIntsStruct*,_twoIntsStruct*const&>(*(allocator **)this,pp_Var2,pp_Var1);
  return;
}




/* _twoIntsStruct** std::uninitialized_copy<__normal_iterator<_twoIntsStruct* const*,
   std::vector<_twoIntsStruct*, std::allocator<_twoIntsStruct*> > >,
   _twoIntsStruct**>(__normal_iterator<_twoIntsStruct* const*, std::vector<_twoIntsStruct*,
   std::allocator<_twoIntsStruct*> > >, __normal_iterator<_twoIntsStruct* const*,
   std::vector<_twoIntsStruct*, std::allocator<_twoIntsStruct*> > >, _twoIntsStruct**) */

void std::
     uninitialized_copy<__normal_iterator<_twoIntsStruct*const*,std::vector<_twoIntsStruct*,std::allocator<_twoIntsStruct*>>>,_twoIntsStruct**>
               (undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  __uninitialized_copy<true>::
  __uninit_copy<__normal_iterator<_twoIntsStruct*const*,std::vector<_twoIntsStruct*,std::allocator<_twoIntsStruct*>>>,_twoIntsStruct**>
            (param_1,param_2,param_3);
  return;
}




void good8(void)

{
  return;
}




/* std::_Vector_base<_twoIntsStruct*, std::allocator<_twoIntsStruct*>
   >::_Vector_impl::~_Vector_impl() */

void __thiscall
std::_Vector_base<_twoIntsStruct*,std::allocator<_twoIntsStruct*>>::_Vector_impl::~_Vector_impl
          (_Vector_impl *this)

{
  allocator<_twoIntsStruct*>::~allocator((allocator<_twoIntsStruct*> *)this);
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




/* std::_Vector_base<_twoIntsStruct*, std::allocator<_twoIntsStruct*> >::_M_get_Tp_allocator() */

_Vector_base<_twoIntsStruct*,std::allocator<_twoIntsStruct*>> * __thiscall
std::_Vector_base<_twoIntsStruct*,std::allocator<_twoIntsStruct*>>::_M_get_Tp_allocator
          (_Vector_base<_twoIntsStruct*,std::allocator<_twoIntsStruct*>> *this)

{
  return this;
}




/* std::_Vector_base<_twoIntsStruct*, std::allocator<_twoIntsStruct*>
   >::_Vector_impl_data::_Vector_impl_data() */

void __thiscall
std::_Vector_base<_twoIntsStruct*,std::allocator<_twoIntsStruct*>>::_Vector_impl_data::
_Vector_impl_data(_Vector_impl_data *this)

{
  *(undefined8 *)this = 0;
  *(undefined8 *)(this + 8) = 0;
  *(undefined8 *)(this + 0x10) = 0;
  return;
}




void bad5(void)

{
  return;
}




/* std::_Vector_base<_twoIntsStruct*, std::allocator<_twoIntsStruct*> >::_Vector_base(unsigned long,
   std::allocator<_twoIntsStruct*> const&) */

void __thiscall
std::_Vector_base<_twoIntsStruct*,std::allocator<_twoIntsStruct*>>::_Vector_base
          (_Vector_base<_twoIntsStruct*,std::allocator<_twoIntsStruct*>> *this,ulong param_1,
          allocator *param_2)

{
  _Vector_impl::_Vector_impl((_Vector_impl *)this,param_2);
                    /* try { // try from 001026fc to 00102700 has its CatchHandler @ 00102703 */
  _M_create_storage(this,param_1);
  return;
}




/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* void std::_Destroy<_twoIntsStruct**, _twoIntsStruct*>(_twoIntsStruct**, _twoIntsStruct**,
   std::allocator<_twoIntsStruct*>&) */

void std::_Destroy<_twoIntsStruct**,_twoIntsStruct*>
               (_twoIntsStruct **param_1,_twoIntsStruct **param_2,allocator *param_3)

{
  _Destroy<_twoIntsStruct**>(param_1,param_2);
  return;
}




/* std::move_iterator<_twoIntsStruct**>::move_iterator(_twoIntsStruct**) */

void __thiscall
std::move_iterator<_twoIntsStruct**>::move_iterator
          (move_iterator<_twoIntsStruct**> *this,_twoIntsStruct **param_1)

{
  *(_twoIntsStruct ***)this = param_1;
  return;
}




/* std::vector<_twoIntsStruct*, std::allocator<_twoIntsStruct*>
   >::_S_max_size(std::allocator<_twoIntsStruct*> const&) */

ulong std::vector<_twoIntsStruct*,std::allocator<_twoIntsStruct*>>::_S_max_size(allocator *param_1)

{
  ulong *puVar1;
  long in_FS_OFFSET;
  ulong local_20;
  ulong local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_20 = 0xfffffffffffffff;
  local_18 = allocator_traits<std::allocator<_twoIntsStruct*>>::max_size(param_1);
  puVar1 = min<unsigned_long>(&local_20,&local_18);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return *puVar1;
}




/* std::move_iterator<_twoIntsStruct**>::base() const */

undefined8 __thiscall
std::move_iterator<_twoIntsStruct**>::base(move_iterator<_twoIntsStruct**> *this)

{
  return *(undefined8 *)this;
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
    __isoc99_swscanf(local_18 * 8 + param_3,&DAT_001050b0,local_1c);
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




/* std::allocator<_twoIntsStruct*>::allocator() */

void std::allocator<_twoIntsStruct*>::allocator(void)

{
  new_allocator<_twoIntsStruct*>::new_allocator();
  return;
}




void bad6(void)

{
  return;
}




void printUnsignedLine(uint param_1)

{
  printf("%u\n",(ulong)param_1);
  return;
}




/* std::vector<_twoIntsStruct*, std::allocator<_twoIntsStruct*> >::begin() const */

undefined8 __thiscall
std::vector<_twoIntsStruct*,std::allocator<_twoIntsStruct*>>::begin
          (vector<_twoIntsStruct*,std::allocator<_twoIntsStruct*>> *this)

{
  long in_FS_OFFSET;
  _twoIntsStruct **local_20;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_20 = *(_twoIntsStruct ***)this;
  __normal_iterator<_twoIntsStruct*const*,std::vector<_twoIntsStruct*,std::allocator<_twoIntsStruct*>>>
  ::__normal_iterator((__normal_iterator<_twoIntsStruct*const*,std::vector<_twoIntsStruct*,std::allocator<_twoIntsStruct*>>>
                       *)&local_18,&local_20);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00101020(void)

{
  (*(code *)PTR_00107ee0)();
  return;
}




/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* _twoIntsStruct** std::uninitialized_fill_n<_twoIntsStruct**, unsigned long,
   _twoIntsStruct*>(_twoIntsStruct**, unsigned long, _twoIntsStruct* const&) */

_twoIntsStruct **
std::uninitialized_fill_n<_twoIntsStruct**,unsigned_long,_twoIntsStruct*>
          (_twoIntsStruct **param_1,ulong param_2,_twoIntsStruct **param_3)

{
  _twoIntsStruct **pp_Var1;
  
  pp_Var1 = __uninitialized_fill_n<true>::
            __uninit_fill_n<_twoIntsStruct**,unsigned_long,_twoIntsStruct*>(param_1,param_2,param_3)
  ;
  return pp_Var1;
}




/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* _twoIntsStruct** std::__copy_move_backward_a<true, _twoIntsStruct**,
   _twoIntsStruct**>(_twoIntsStruct**, _twoIntsStruct**, _twoIntsStruct**) */

_twoIntsStruct **
std::__copy_move_backward_a<true,_twoIntsStruct**,_twoIntsStruct**>
          (_twoIntsStruct **param_1,_twoIntsStruct **param_2,_twoIntsStruct **param_3)

{
  _twoIntsStruct **pp_Var1;
  
  pp_Var1 = __copy_move_backward<true,true,std::random_access_iterator_tag>::
            __copy_move_b<_twoIntsStruct*>(param_1,param_2,param_3);
  return pp_Var1;
}




/* std::allocator_traits<std::allocator<_twoIntsStruct*>
   >::deallocate(std::allocator<_twoIntsStruct*>&, _twoIntsStruct**, unsigned long) */

void std::allocator_traits<std::allocator<_twoIntsStruct*>>::deallocate
               (allocator *param_1,_twoIntsStruct **param_2,ulong param_3)

{
  new_allocator<_twoIntsStruct*>::deallocate((_twoIntsStruct **)param_1,(ulong)param_2);
  return;
}




/* __normal_iterator<_twoIntsStruct* const*, std::vector<_twoIntsStruct*,
   std::allocator<_twoIntsStruct*> > > std::__miter_base<__normal_iterator<_twoIntsStruct* const*,
   std::vector<_twoIntsStruct*, std::allocator<_twoIntsStruct*> > >
   >(__normal_iterator<_twoIntsStruct* const*, std::vector<_twoIntsStruct*,
   std::allocator<_twoIntsStruct*> > >) */

undefined8
std::
__miter_base<__normal_iterator<_twoIntsStruct*const*,std::vector<_twoIntsStruct*,std::allocator<_twoIntsStruct*>>>>
          (undefined8 param_1)

{
  return param_1;
}




/* CWE415_Double_Free__malloc_free_struct_72::goodG2BSink(std::vector<_twoIntsStruct*,
   std::allocator<_twoIntsStruct*> >) */

void CWE415_Double_Free__malloc_free_struct_72::goodG2BSink(vector param_1)

{
  undefined8 *puVar1;
  undefined4 in_register_0000003c;
  
  puVar1 = (undefined8 *)
           std::vector<_twoIntsStruct*,std::allocator<_twoIntsStruct*>>::operator[]
                     ((vector<_twoIntsStruct*,std::allocator<_twoIntsStruct*>> *)
                      CONCAT44(in_register_0000003c,param_1),2);
  free((void *)*puVar1);
  return;
}




/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* _twoIntsStruct** std::fill_n<_twoIntsStruct**, unsigned long, _twoIntsStruct*>(_twoIntsStruct**,
   unsigned long, _twoIntsStruct* const&) */

_twoIntsStruct **
std::fill_n<_twoIntsStruct**,unsigned_long,_twoIntsStruct*>
          (_twoIntsStruct **param_1,ulong param_2,_twoIntsStruct **param_3)

{
  __type _Var1;
  _twoIntsStruct **pp_Var2;
  undefined4 extraout_var;
  _twoIntsStruct **local_10;
  
  local_10 = param_1;
  pp_Var2 = __niter_base<_twoIntsStruct**>(param_1);
  _Var1 = __fill_n_a<_twoIntsStruct**,unsigned_long,_twoIntsStruct*>(pp_Var2,param_2,param_3);
  pp_Var2 = __niter_wrap<_twoIntsStruct**>
                      (&local_10,(_twoIntsStruct **)CONCAT44(extraout_var,_Var1));
  return pp_Var2;
}




void stdThreadLockAcquire(pthread_mutex_t *param_1)

{
  pthread_mutex_lock(param_1);
  return;
}




int globalReturnsTrueOrFalse(void)

{
  int iVar1;
  
  iVar1 = rand();
  return iVar1 % 2;
}




void good1(void)

{
  return;
}




void bad9(void)

{
  return;
}




void printFloatLine(float param_1)

{
  printf("%f\n",(double)param_1);
  return;
}




/* __normal_iterator<_twoIntsStruct* const*, std::vector<_twoIntsStruct*,
   std::allocator<_twoIntsStruct*> > >::__normal_iterator(_twoIntsStruct* const* const&) */

void __thiscall
__normal_iterator<_twoIntsStruct*const*,std::vector<_twoIntsStruct*,std::allocator<_twoIntsStruct*>>>
::__normal_iterator(__normal_iterator<_twoIntsStruct*const*,std::vector<_twoIntsStruct*,std::allocator<_twoIntsStruct*>>>
                    *this,_twoIntsStruct ***param_1)

{
  *(_twoIntsStruct ***)this = *param_1;
  return;
}




/* void new_allocator<_twoIntsStruct*>::destroy<_twoIntsStruct*>(_twoIntsStruct**) */

void new_allocator<_twoIntsStruct*>::destroy<_twoIntsStruct*>(_twoIntsStruct **param_1)

{
  return;
}




void good5(void)

{
  return;
}



