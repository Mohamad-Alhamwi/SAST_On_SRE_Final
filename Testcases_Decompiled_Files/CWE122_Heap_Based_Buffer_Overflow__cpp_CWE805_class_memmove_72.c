
/* CWE122_Heap_Based_Buffer_Overflow__cpp_CWE805_class_memmove_72::badSink(std::vector<TwoIntsClass*,
   std::allocator<TwoIntsClass*> >) */

void CWE122_Heap_Based_Buffer_Overflow__cpp_CWE805_class_memmove_72::badSink(vector param_1)

{
  undefined4 *__dest;
  undefined8 *puVar1;
  undefined4 in_register_0000003c;
  long in_FS_OFFSET;
  ulong local_348;
  undefined4 local_338 [202];
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  puVar1 = (undefined8 *)
           std::vector<TwoIntsClass*,std::allocator<TwoIntsClass*>>::operator[]
                     ((vector<TwoIntsClass*,std::allocator<TwoIntsClass*>> *)
                      CONCAT44(in_register_0000003c,param_1),2);
  __dest = (undefined4 *)*puVar1;
  for (local_348 = 0; local_348 < 100; local_348 = local_348 + 1) {
    local_338[local_348 * 2] = 0;
    local_338[local_348 * 2 + 1] = 0;
  }
  memmove(__dest,local_338,800);
  printIntLine(*__dest);
  if (__dest != (undefined4 *)0x0) {
    operator_delete__(__dest);
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
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




/* void new_allocator<TwoIntsClass*>::construct<TwoIntsClass*, TwoIntsClass* const&>(TwoIntsClass**,
   TwoIntsClass* const&) */

void __thiscall
new_allocator<TwoIntsClass*>::construct<TwoIntsClass*,TwoIntsClass*const&>
          (new_allocator<TwoIntsClass*> *this,TwoIntsClass **param_1,TwoIntsClass **param_2)

{
  TwoIntsClass *pTVar1;
  TwoIntsClass **ppTVar2;
  undefined8 *puVar3;
  
  ppTVar2 = std::forward<TwoIntsClass*const&>((type *)param_2);
  pTVar1 = *ppTVar2;
  puVar3 = (undefined8 *)operator_new(8,param_1);
  *puVar3 = pTVar1;
  return;
}




/* std::vector<TwoIntsClass*, std::allocator<TwoIntsClass*> >::vector() */

void __thiscall
std::vector<TwoIntsClass*,std::allocator<TwoIntsClass*>>::vector
          (vector<TwoIntsClass*,std::allocator<TwoIntsClass*>> *this)

{
  _Vector_base<TwoIntsClass*,std::allocator<TwoIntsClass*>>::_Vector_base
            ((_Vector_base<TwoIntsClass*,std::allocator<TwoIntsClass*>> *)this);
  return;
}




/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* TwoIntsClass* const& std::forward<TwoIntsClass* const&>(std::remove_reference<TwoIntsClass*
   const&>::type&) */

TwoIntsClass ** std::forward<TwoIntsClass*const&>(type *param_1)

{
  return (TwoIntsClass **)param_1;
}




/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* TwoIntsClass** std::__miter_base<TwoIntsClass**>(TwoIntsClass**) */

TwoIntsClass ** std::__miter_base<TwoIntsClass**>(TwoIntsClass **param_1)

{
  return param_1;
}




/* std::_Vector_base<TwoIntsClass*, std::allocator<TwoIntsClass*> >::_M_get_Tp_allocator() const */

_Vector_base<TwoIntsClass*,std::allocator<TwoIntsClass*>> * __thiscall
std::_Vector_base<TwoIntsClass*,std::allocator<TwoIntsClass*>>::_M_get_Tp_allocator
          (_Vector_base<TwoIntsClass*,std::allocator<TwoIntsClass*>> *this)

{
  return this;
}




/* std::vector<TwoIntsClass*, std::allocator<TwoIntsClass*>
   >::_Temporary_value::_Temporary_value<TwoIntsClass* const&>(std::vector<TwoIntsClass*,
   std::allocator<TwoIntsClass*> >*, TwoIntsClass* const&) */

void __thiscall
std::vector<TwoIntsClass*,std::allocator<TwoIntsClass*>>::_Temporary_value::
_Temporary_value<TwoIntsClass*const&>(_Temporary_value *this,vector *param_1,TwoIntsClass **param_2)

{
  TwoIntsClass **ppTVar1;
  TwoIntsClass **ppTVar2;
  
  *(vector **)this = param_1;
  ppTVar1 = forward<TwoIntsClass*const&>((type *)param_2);
  ppTVar2 = (TwoIntsClass **)_M_ptr(this);
  allocator_traits<std::allocator<TwoIntsClass*>>::construct<TwoIntsClass*,TwoIntsClass*const&>
            (*(allocator **)this,ppTVar2,ppTVar1);
  return;
}




/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* TwoIntsClass** std::__copy_move_a<true, TwoIntsClass**, TwoIntsClass**>(TwoIntsClass**,
   TwoIntsClass**, TwoIntsClass**) */

TwoIntsClass **
std::__copy_move_a<true,TwoIntsClass**,TwoIntsClass**>
          (TwoIntsClass **param_1,TwoIntsClass **param_2,TwoIntsClass **param_3)

{
  TwoIntsClass **ppTVar1;
  
  ppTVar1 = __copy_move<true,true,std::random_access_iterator_tag>::__copy_m<TwoIntsClass*>
                      (param_1,param_2,param_3);
  return ppTVar1;
}




/* __normal_iterator<TwoIntsClass**, std::vector<TwoIntsClass*, std::allocator<TwoIntsClass*> >
   >::difference_type TEMPNAMEPLACEHOLDERVALUE(__normal_iterator<TwoIntsClass**,
   std::vector<TwoIntsClass*, std::allocator<TwoIntsClass*> > > const&,
   __normal_iterator<TwoIntsClass**, std::vector<TwoIntsClass*, std::allocator<TwoIntsClass*> > >
   const&) */

difference_type operator-(__normal_iterator *param_1,__normal_iterator *param_2)

{
  long lVar1;
  long *plVar2;
  
  plVar2 = (long *)__normal_iterator<TwoIntsClass**,std::vector<TwoIntsClass*,std::allocator<TwoIntsClass*>>>
                   ::base((__normal_iterator<TwoIntsClass**,std::vector<TwoIntsClass*,std::allocator<TwoIntsClass*>>>
                           *)param_1);
  lVar1 = *plVar2;
  plVar2 = (long *)__normal_iterator<TwoIntsClass**,std::vector<TwoIntsClass*,std::allocator<TwoIntsClass*>>>
                   ::base((__normal_iterator<TwoIntsClass**,std::vector<TwoIntsClass*,std::allocator<TwoIntsClass*>>>
                           *)param_2);
  return (difference_type)(lVar1 - *plVar2 >> 3);
}




/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* std::move_iterator<TwoIntsClass**> std::make_move_iterator<TwoIntsClass**>(TwoIntsClass**) */

move_iterator std::make_move_iterator<TwoIntsClass**>(TwoIntsClass **param_1)

{
  long in_FS_OFFSET;
  move_iterator local_18 [2];
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  move_iterator<TwoIntsClass**>::move_iterator((move_iterator<TwoIntsClass**> *)local_18,param_1);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18[0];
}




/* new_allocator<TwoIntsClass*>::allocate(unsigned long, void const*) */

void new_allocator<TwoIntsClass*>::allocate(ulong param_1,void *param_2)

{
  void *pvVar1;
  
  pvVar1 = (void *)max_size();
  if (pvVar1 < param_2) {
    std::__throw_bad_alloc();
  }
  operator_new((long)param_2 << 3);
  return;
}




void printDoubleLine(undefined8 param_1)

{
  printf("%g\n",param_1);
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




void bad5(void)

{
  return;
}




/* std::vector<TwoIntsClass*, std::allocator<TwoIntsClass*> >::_Temporary_value::~_Temporary_value()
    */

void __thiscall
std::vector<TwoIntsClass*,std::allocator<TwoIntsClass*>>::_Temporary_value::~_Temporary_value
          (_Temporary_value *this)

{
  TwoIntsClass **ppTVar1;
  
  ppTVar1 = (TwoIntsClass **)_M_ptr(this);
  allocator_traits<std::allocator<TwoIntsClass*>>::destroy<TwoIntsClass*>
            (*(allocator **)this,ppTVar1);
  return;
}




/* std::allocator_traits<std::allocator<TwoIntsClass*> >::deallocate(std::allocator<TwoIntsClass*>&,
   TwoIntsClass**, unsigned long) */

void std::allocator_traits<std::allocator<TwoIntsClass*>>::deallocate
               (allocator *param_1,TwoIntsClass **param_2,ulong param_3)

{
  new_allocator<TwoIntsClass*>::deallocate((TwoIntsClass **)param_1,(ulong)param_2);
  return;
}




/* void new_allocator<TwoIntsClass*>::destroy<TwoIntsClass*>(TwoIntsClass**) */

void new_allocator<TwoIntsClass*>::destroy<TwoIntsClass*>(TwoIntsClass **param_1)

{
  return;
}




void stdThreadLockDestroy(pthread_mutex_t *param_1)

{
  pthread_mutex_destroy(param_1);
  free(param_1);
  return;
}




void printLongLongLine(undefined8 param_1)

{
  printf("%ld\n",param_1);
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




/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* TwoIntsClass** std::__copy_move_a<false, TwoIntsClass* const*, TwoIntsClass**>(TwoIntsClass*
   const*, TwoIntsClass* const*, TwoIntsClass**) */

TwoIntsClass **
std::__copy_move_a<false,TwoIntsClass*const*,TwoIntsClass**>
          (TwoIntsClass **param_1,TwoIntsClass **param_2,TwoIntsClass **param_3)

{
  TwoIntsClass **ppTVar1;
  
  ppTVar1 = __copy_move<false,true,std::random_access_iterator_tag>::__copy_m<TwoIntsClass*>
                      (param_1,param_2,param_3);
  return ppTVar1;
}




/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* TwoIntsClass** std::__uninitialized_fill_n_a<TwoIntsClass**, unsigned long, TwoIntsClass*,
   TwoIntsClass*>(TwoIntsClass**, unsigned long, TwoIntsClass* const&,
   std::allocator<TwoIntsClass*>&) */

TwoIntsClass **
std::__uninitialized_fill_n_a<TwoIntsClass**,unsigned_long,TwoIntsClass*,TwoIntsClass*>
          (TwoIntsClass **param_1,ulong param_2,TwoIntsClass **param_3,allocator *param_4)

{
  TwoIntsClass **ppTVar1;
  
  ppTVar1 = uninitialized_fill_n<TwoIntsClass**,unsigned_long,TwoIntsClass*>
                      (param_1,param_2,param_3);
  return ppTVar1;
}




/* void std::allocator_traits<std::allocator<TwoIntsClass*> >::construct<TwoIntsClass*,
   TwoIntsClass* const&>(std::allocator<TwoIntsClass*>&, TwoIntsClass**, TwoIntsClass* const&) */

void std::allocator_traits<std::allocator<TwoIntsClass*>>::
     construct<TwoIntsClass*,TwoIntsClass*const&>
               (allocator *param_1,TwoIntsClass **param_2,TwoIntsClass **param_3)

{
  TwoIntsClass **ppTVar1;
  
  ppTVar1 = forward<TwoIntsClass*const&>((type *)param_3);
  new_allocator<TwoIntsClass*>::construct<TwoIntsClass*,TwoIntsClass*const&>
            ((new_allocator<TwoIntsClass*> *)param_1,param_2,ppTVar1);
  return;
}




/* CWE122_Heap_Based_Buffer_Overflow__cpp_CWE805_class_memmove_72::good() */

void CWE122_Heap_Based_Buffer_Overflow__cpp_CWE805_class_memmove_72::good(void)

{
  goodG2B();
  return;
}




void good1(void)

{
  return;
}




/* TwoIntsClass** std::copy<__normal_iterator<TwoIntsClass* const*, std::vector<TwoIntsClass*,
   std::allocator<TwoIntsClass*> > >, TwoIntsClass**>(__normal_iterator<TwoIntsClass* const*,
   std::vector<TwoIntsClass*, std::allocator<TwoIntsClass*> > >, __normal_iterator<TwoIntsClass*
   const*, std::vector<TwoIntsClass*, std::allocator<TwoIntsClass*> > >, TwoIntsClass**) */

void std::
     copy<__normal_iterator<TwoIntsClass*const*,std::vector<TwoIntsClass*,std::allocator<TwoIntsClass*>>>,TwoIntsClass**>
               (undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = __miter_base<__normal_iterator<TwoIntsClass*const*,std::vector<TwoIntsClass*,std::allocator<TwoIntsClass*>>>>
                    (param_2);
  uVar2 = __miter_base<__normal_iterator<TwoIntsClass*const*,std::vector<TwoIntsClass*,std::allocator<TwoIntsClass*>>>>
                    (param_1);
  __copy_move_a2<false,__normal_iterator<TwoIntsClass*const*,std::vector<TwoIntsClass*,std::allocator<TwoIntsClass*>>>,TwoIntsClass**>
            (uVar2,uVar1,param_3);
  return;
}




/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* TwoIntsClass** std::fill_n<TwoIntsClass**, unsigned long, TwoIntsClass*>(TwoIntsClass**, unsigned
   long, TwoIntsClass* const&) */

TwoIntsClass **
std::fill_n<TwoIntsClass**,unsigned_long,TwoIntsClass*>
          (TwoIntsClass **param_1,ulong param_2,TwoIntsClass **param_3)

{
  __type _Var1;
  TwoIntsClass **ppTVar2;
  undefined4 extraout_var;
  TwoIntsClass **local_10;
  
  local_10 = param_1;
  ppTVar2 = __niter_base<TwoIntsClass**>(param_1);
  _Var1 = __fill_n_a<TwoIntsClass**,unsigned_long,TwoIntsClass*>(ppTVar2,param_2,param_3);
  ppTVar2 = __niter_wrap<TwoIntsClass**>(&local_10,(TwoIntsClass **)CONCAT44(extraout_var,_Var1));
  return ppTVar2;
}




void printWLine(long param_1)

{
  if (param_1 != 0) {
    wprintf(L"%ls\n",param_1);
  }
  return;
}




void bad8(void)

{
  return;
}




void printSizeTLine(undefined8 param_1)

{
  printf("%zu\n",param_1);
  return;
}




/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* TwoIntsClass** std::uninitialized_copy<std::move_iterator<TwoIntsClass**>,
   TwoIntsClass**>(std::move_iterator<TwoIntsClass**>, std::move_iterator<TwoIntsClass**>,
   TwoIntsClass**) */

TwoIntsClass **
std::uninitialized_copy<std::move_iterator<TwoIntsClass**>,TwoIntsClass**>
          (move_iterator param_1,move_iterator param_2,TwoIntsClass **param_3)

{
  TwoIntsClass **ppTVar1;
  
  ppTVar1 = __uninitialized_copy<true>::
            __uninit_copy<std::move_iterator<TwoIntsClass**>,TwoIntsClass**>
                      (param_1,param_2,param_3);
  return ppTVar1;
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




undefined8 globalReturnsFalse(void)

{
  return 0;
}




/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* TwoIntsClass** std::copy<std::move_iterator<TwoIntsClass**>,
   TwoIntsClass**>(std::move_iterator<TwoIntsClass**>, std::move_iterator<TwoIntsClass**>,
   TwoIntsClass**) */

TwoIntsClass **
std::copy<std::move_iterator<TwoIntsClass**>,TwoIntsClass**>
          (move_iterator param_1,move_iterator param_2,TwoIntsClass **param_3)

{
  TwoIntsClass **ppTVar1;
  TwoIntsClass **ppTVar2;
  
  ppTVar1 = (TwoIntsClass **)__miter_base<TwoIntsClass**>(param_2);
  ppTVar2 = (TwoIntsClass **)__miter_base<TwoIntsClass**>(param_1);
  ppTVar1 = __copy_move_a2<true,TwoIntsClass**,TwoIntsClass**>(ppTVar2,ppTVar1,param_3);
  return ppTVar1;
}




/* std::_Vector_base<TwoIntsClass*, std::allocator<TwoIntsClass*> >::_M_create_storage(unsigned
   long) */

void __thiscall
std::_Vector_base<TwoIntsClass*,std::allocator<TwoIntsClass*>>::_M_create_storage
          (_Vector_base<TwoIntsClass*,std::allocator<TwoIntsClass*>> *this,ulong param_1)

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




void bad2(void)

{
  return;
}




/* TwoIntsClass** std::uninitialized_copy<__normal_iterator<TwoIntsClass* const*,
   std::vector<TwoIntsClass*, std::allocator<TwoIntsClass*> > >,
   TwoIntsClass**>(__normal_iterator<TwoIntsClass* const*, std::vector<TwoIntsClass*,
   std::allocator<TwoIntsClass*> > >, __normal_iterator<TwoIntsClass* const*,
   std::vector<TwoIntsClass*, std::allocator<TwoIntsClass*> > >, TwoIntsClass**) */

void std::
     uninitialized_copy<__normal_iterator<TwoIntsClass*const*,std::vector<TwoIntsClass*,std::allocator<TwoIntsClass*>>>,TwoIntsClass**>
               (undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  __uninitialized_copy<true>::
  __uninit_copy<__normal_iterator<TwoIntsClass*const*,std::vector<TwoIntsClass*,std::allocator<TwoIntsClass*>>>,TwoIntsClass**>
            (param_1,param_2,param_3);
  return;
}




/* __normal_iterator<TwoIntsClass* const*, std::vector<TwoIntsClass*, std::allocator<TwoIntsClass*>
   > >::__normal_iterator<TwoIntsClass**>(__normal_iterator<TwoIntsClass**,
   __enable_if<std::__are_same<TwoIntsClass**, TwoIntsClass**>::__value, std::vector<TwoIntsClass*,
   std::allocator<TwoIntsClass*> > >::__type> const&) */

void __thiscall
__normal_iterator<TwoIntsClass*const*,std::vector<TwoIntsClass*,std::allocator<TwoIntsClass*>>>::
__normal_iterator<TwoIntsClass**>
          (__normal_iterator<TwoIntsClass*const*,std::vector<TwoIntsClass*,std::allocator<TwoIntsClass*>>>
           *this,__normal_iterator *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)
           __normal_iterator<TwoIntsClass**,std::vector<TwoIntsClass*,std::allocator<TwoIntsClass*>>>
           ::base((__normal_iterator<TwoIntsClass**,std::vector<TwoIntsClass*,std::allocator<TwoIntsClass*>>>
                   *)param_1);
  *(undefined8 *)this = *puVar1;
  return;
}




/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* TwoIntsClass** std::__uninitialized_move_a<TwoIntsClass**, TwoIntsClass**,
   std::allocator<TwoIntsClass*> >(TwoIntsClass**, TwoIntsClass**, TwoIntsClass**,
   std::allocator<TwoIntsClass*>&) */

TwoIntsClass **
std::__uninitialized_move_a<TwoIntsClass**,TwoIntsClass**,std::allocator<TwoIntsClass*>>
          (TwoIntsClass **param_1,TwoIntsClass **param_2,TwoIntsClass **param_3,allocator *param_4)

{
  move_iterator mVar1;
  move_iterator mVar2;
  TwoIntsClass **ppTVar3;
  
  mVar1 = make_move_iterator<TwoIntsClass**>(param_2);
  mVar2 = make_move_iterator<TwoIntsClass**>(param_1);
  ppTVar3 = __uninitialized_copy_a<std::move_iterator<TwoIntsClass**>,TwoIntsClass**,TwoIntsClass*>
                      (mVar2,mVar1,param_3,param_4);
  return ppTVar3;
}




void good8(void)

{
  return;
}




void printUnsignedLine(uint param_1)

{
  printf("%u\n",(ulong)param_1);
  return;
}




/* std::_Vector_base<TwoIntsClass*, std::allocator<TwoIntsClass*> >::_Vector_base() */

void __thiscall
std::_Vector_base<TwoIntsClass*,std::allocator<TwoIntsClass*>>::_Vector_base
          (_Vector_base<TwoIntsClass*,std::allocator<TwoIntsClass*>> *this)

{
  _Vector_impl::_Vector_impl((_Vector_impl *)this);
  return;
}




void good5(void)

{
  return;
}




/* std::_Vector_base<TwoIntsClass*, std::allocator<TwoIntsClass*>
   >::_Vector_impl_data::_Vector_impl_data() */

void __thiscall
std::_Vector_base<TwoIntsClass*,std::allocator<TwoIntsClass*>>::_Vector_impl_data::_Vector_impl_data
          (_Vector_impl_data *this)

{
  *(undefined8 *)this = 0;
  *(undefined8 *)(this + 8) = 0;
  *(undefined8 *)(this + 0x10) = 0;
  return;
}




/* __normal_iterator<TwoIntsClass* const*, std::vector<TwoIntsClass*, std::allocator<TwoIntsClass*>
   > >::difference_type TEMPNAMEPLACEHOLDERVALUE(__normal_iterator<TwoIntsClass* const*,
   std::vector<TwoIntsClass*, std::allocator<TwoIntsClass*> > > const&,
   __normal_iterator<TwoIntsClass* const*, std::vector<TwoIntsClass*, std::allocator<TwoIntsClass*>
   > > const&) */

difference_type operator-(__normal_iterator *param_1,__normal_iterator *param_2)

{
  long lVar1;
  long *plVar2;
  
  plVar2 = (long *)__normal_iterator<TwoIntsClass*const*,std::vector<TwoIntsClass*,std::allocator<TwoIntsClass*>>>
                   ::base((__normal_iterator<TwoIntsClass*const*,std::vector<TwoIntsClass*,std::allocator<TwoIntsClass*>>>
                           *)param_1);
  lVar1 = *plVar2;
  plVar2 = (long *)__normal_iterator<TwoIntsClass*const*,std::vector<TwoIntsClass*,std::allocator<TwoIntsClass*>>>
                   ::base((__normal_iterator<TwoIntsClass*const*,std::vector<TwoIntsClass*,std::allocator<TwoIntsClass*>>>
                           *)param_2);
  return (difference_type)(lVar1 - *plVar2 >> 3);
}




/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* void std::_Destroy<TwoIntsClass**>(TwoIntsClass**, TwoIntsClass**) */

void std::_Destroy<TwoIntsClass**>(TwoIntsClass **param_1,TwoIntsClass **param_2)

{
  _Destroy_aux<true>::__destroy<TwoIntsClass**>(param_1,param_2);
  return;
}




/* __normal_iterator<TwoIntsClass**, std::vector<TwoIntsClass*, std::allocator<TwoIntsClass*> >
   >::__normal_iterator(TwoIntsClass** const&) */

void __thiscall
__normal_iterator<TwoIntsClass**,std::vector<TwoIntsClass*,std::allocator<TwoIntsClass*>>>::
__normal_iterator(__normal_iterator<TwoIntsClass**,std::vector<TwoIntsClass*,std::allocator<TwoIntsClass*>>>
                  *this,TwoIntsClass ***param_1)

{
  *(TwoIntsClass ***)this = *param_1;
  return;
}




/* operator new(unsigned long, void*) */

void * operator_new(ulong param_1,void *param_2)

{
  return param_2;
}




/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* TwoIntsClass** std::__copy_move_backward_a2<true, TwoIntsClass**, TwoIntsClass**>(TwoIntsClass**,
   TwoIntsClass**, TwoIntsClass**) */

TwoIntsClass **
std::__copy_move_backward_a2<true,TwoIntsClass**,TwoIntsClass**>
          (TwoIntsClass **param_1,TwoIntsClass **param_2,TwoIntsClass **param_3)

{
  TwoIntsClass **ppTVar1;
  TwoIntsClass **ppTVar2;
  TwoIntsClass **ppTVar3;
  TwoIntsClass **local_30;
  TwoIntsClass **local_28;
  TwoIntsClass **local_20;
  
  local_30 = param_3;
  local_28 = param_2;
  local_20 = param_1;
  ppTVar1 = __niter_base<TwoIntsClass**>(param_3);
  ppTVar2 = __niter_base<TwoIntsClass**>(local_28);
  ppTVar3 = __niter_base<TwoIntsClass**>(local_20);
  ppTVar1 = __copy_move_backward_a<true,TwoIntsClass**,TwoIntsClass**>(ppTVar3,ppTVar2,ppTVar1);
  ppTVar1 = __niter_wrap<TwoIntsClass**>(&local_30,ppTVar1);
  return ppTVar1;
}




/* TwoIntsClass** std::__copy_move_a2<false, __normal_iterator<TwoIntsClass* const*,
   std::vector<TwoIntsClass*, std::allocator<TwoIntsClass*> > >,
   TwoIntsClass**>(__normal_iterator<TwoIntsClass* const*, std::vector<TwoIntsClass*,
   std::allocator<TwoIntsClass*> > >, __normal_iterator<TwoIntsClass* const*,
   std::vector<TwoIntsClass*, std::allocator<TwoIntsClass*> > >, TwoIntsClass**) */

void std::
     __copy_move_a2<false,__normal_iterator<TwoIntsClass*const*,std::vector<TwoIntsClass*,std::allocator<TwoIntsClass*>>>,TwoIntsClass**>
               (undefined8 param_1,undefined8 param_2,TwoIntsClass **param_3)

{
  TwoIntsClass **ppTVar1;
  TwoIntsClass **ppTVar2;
  TwoIntsClass **ppTVar3;
  TwoIntsClass **local_30;
  undefined8 local_28;
  undefined8 local_20;
  
  local_30 = param_3;
  local_28 = param_2;
  local_20 = param_1;
  ppTVar1 = __niter_base<TwoIntsClass**>(param_3);
  ppTVar2 = (TwoIntsClass **)
            __niter_base<TwoIntsClass*const*,std::vector<TwoIntsClass*,std::allocator<TwoIntsClass*>>>
                      (local_28);
  ppTVar3 = (TwoIntsClass **)
            __niter_base<TwoIntsClass*const*,std::vector<TwoIntsClass*,std::allocator<TwoIntsClass*>>>
                      (local_20);
  ppTVar1 = __copy_move_a<false,TwoIntsClass*const*,TwoIntsClass**>(ppTVar3,ppTVar2,ppTVar1);
  __niter_wrap<TwoIntsClass**>(&local_30,ppTVar1);
  return;
}




/* __alloc_traits<std::allocator<TwoIntsClass*>,
   TwoIntsClass*>::_S_select_on_copy(std::allocator<TwoIntsClass*> const&) */

allocator *
__alloc_traits<std::allocator<TwoIntsClass*>,TwoIntsClass*>::_S_select_on_copy(allocator *param_1)

{
  long lVar1;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  std::allocator_traits<std::allocator<TwoIntsClass*>>::select_on_container_copy_construction
            (param_1);
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1;
}




/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* TwoIntsClass** std::move_backward<TwoIntsClass**, TwoIntsClass**>(TwoIntsClass**, TwoIntsClass**,
   TwoIntsClass**) */

TwoIntsClass **
std::move_backward<TwoIntsClass**,TwoIntsClass**>
          (TwoIntsClass **param_1,TwoIntsClass **param_2,TwoIntsClass **param_3)

{
  TwoIntsClass **ppTVar1;
  TwoIntsClass **ppTVar2;
  
  ppTVar1 = __miter_base<TwoIntsClass**>(param_2);
  ppTVar2 = __miter_base<TwoIntsClass**>(param_1);
  ppTVar1 = __copy_move_backward_a2<true,TwoIntsClass**,TwoIntsClass**>(ppTVar2,ppTVar1,param_3);
  return ppTVar1;
}




void stdThreadLockRelease(pthread_mutex_t *param_1)

{
  pthread_mutex_unlock(param_1);
  return;
}




void good6(void)

{
  return;
}




void bad7(void)

{
  return;
}




void printIntLine(uint param_1)

{
  printf("%d\n",(ulong)param_1);
  return;
}




/* __normal_iterator<TwoIntsClass* const*, std::vector<TwoIntsClass*, std::allocator<TwoIntsClass*>
   > >::__normal_iterator(TwoIntsClass* const* const&) */

void __thiscall
__normal_iterator<TwoIntsClass*const*,std::vector<TwoIntsClass*,std::allocator<TwoIntsClass*>>>::
__normal_iterator(__normal_iterator<TwoIntsClass*const*,std::vector<TwoIntsClass*,std::allocator<TwoIntsClass*>>>
                  *this,TwoIntsClass ***param_1)

{
  *(TwoIntsClass ***)this = *param_1;
  return;
}




/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* TwoIntsClass** std::__niter_base<TwoIntsClass**>(TwoIntsClass**) */

TwoIntsClass ** std::__niter_base<TwoIntsClass**>(TwoIntsClass **param_1)

{
  return param_1;
}




/* std::vector<TwoIntsClass*, std::allocator<TwoIntsClass*> >::_Temporary_value::_M_val() */

void __thiscall
std::vector<TwoIntsClass*,std::allocator<TwoIntsClass*>>::_Temporary_value::_M_val
          (_Temporary_value *this)

{
  _M_ptr(this);
  return;
}




/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* void std::fill<TwoIntsClass**, TwoIntsClass*>(TwoIntsClass**, TwoIntsClass**, TwoIntsClass*
   const&) */

void std::fill<TwoIntsClass**,TwoIntsClass*>
               (TwoIntsClass **param_1,TwoIntsClass **param_2,TwoIntsClass **param_3)

{
  TwoIntsClass **ppTVar1;
  TwoIntsClass **ppTVar2;
  
  ppTVar1 = __niter_base<TwoIntsClass**>(param_2);
  ppTVar2 = __niter_base<TwoIntsClass**>(param_1);
  __fill_a<TwoIntsClass**,TwoIntsClass*>(ppTVar2,ppTVar1,param_3);
  return;
}




/* std::vector<TwoIntsClass*, std::allocator<TwoIntsClass*> >::cbegin() const */

undefined8 __thiscall
std::vector<TwoIntsClass*,std::allocator<TwoIntsClass*>>::cbegin
          (vector<TwoIntsClass*,std::allocator<TwoIntsClass*>> *this)

{
  long in_FS_OFFSET;
  TwoIntsClass **local_20;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_20 = *(TwoIntsClass ***)this;
  __normal_iterator<TwoIntsClass*const*,std::vector<TwoIntsClass*,std::allocator<TwoIntsClass*>>>::
  __normal_iterator((__normal_iterator<TwoIntsClass*const*,std::vector<TwoIntsClass*,std::allocator<TwoIntsClass*>>>
                     *)&local_18,&local_20);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




/* CWE122_Heap_Based_Buffer_Overflow__cpp_CWE805_class_memmove_72::goodG2BSink(std::vector<TwoIntsClass*,
   std::allocator<TwoIntsClass*> >) */

void CWE122_Heap_Based_Buffer_Overflow__cpp_CWE805_class_memmove_72::goodG2BSink(vector param_1)

{
  undefined4 *__dest;
  undefined8 *puVar1;
  undefined4 in_register_0000003c;
  long in_FS_OFFSET;
  ulong local_348;
  undefined4 local_338 [202];
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  puVar1 = (undefined8 *)
           std::vector<TwoIntsClass*,std::allocator<TwoIntsClass*>>::operator[]
                     ((vector<TwoIntsClass*,std::allocator<TwoIntsClass*>> *)
                      CONCAT44(in_register_0000003c,param_1),2);
  __dest = (undefined4 *)*puVar1;
  for (local_348 = 0; local_348 < 100; local_348 = local_348 + 1) {
    local_338[local_348 * 2] = 0;
    local_338[local_348 * 2 + 1] = 0;
  }
  memmove(__dest,local_338,800);
  printIntLine(*__dest);
  if (__dest != (undefined4 *)0x0) {
    operator_delete__(__dest);
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




/* void std::allocator_traits<std::allocator<TwoIntsClass*>
   >::destroy<TwoIntsClass*>(std::allocator<TwoIntsClass*>&, TwoIntsClass**) */

void std::allocator_traits<std::allocator<TwoIntsClass*>>::destroy<TwoIntsClass*>
               (allocator *param_1,TwoIntsClass **param_2)

{
  new_allocator<TwoIntsClass*>::destroy<TwoIntsClass*>((TwoIntsClass **)param_1);
  return;
}




/* TwoIntsClass** std::__copy_move<false, true,
   std::random_access_iterator_tag>::__copy_m<TwoIntsClass*>(TwoIntsClass* const*, TwoIntsClass*
   const*, TwoIntsClass**) */

TwoIntsClass **
std::__copy_move<false,true,std::random_access_iterator_tag>::__copy_m<TwoIntsClass*>
          (TwoIntsClass **param_1,TwoIntsClass **param_2,TwoIntsClass **param_3)

{
  long lVar1;
  
  lVar1 = (long)param_2 - (long)param_1 >> 3;
  if (lVar1 != 0) {
    memmove(param_3,param_1,lVar1 * 8);
  }
  return param_3 + lVar1;
}




/* std::vector<TwoIntsClass*, std::allocator<TwoIntsClass*> >::_M_check_len(unsigned long, char
   const*) const */

ulong __thiscall
std::vector<TwoIntsClass*,std::allocator<TwoIntsClass*>>::_M_check_len
          (vector<TwoIntsClass*,std::allocator<TwoIntsClass*>> *this,ulong param_1,char *param_2)

{
  long lVar1;
  long lVar2;
  ulong *puVar3;
  ulong uVar4;
  ulong uVar5;
  long in_FS_OFFSET;
  ulong local_48;
  vector<TwoIntsClass*,std::allocator<TwoIntsClass*>> *local_40;
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




void FUN_00101020(void)

{
  (*(code *)PTR_00106ed8)();
  return;
}




/* new_allocator<TwoIntsClass*>::~new_allocator() */

void __thiscall new_allocator<TwoIntsClass*>::~new_allocator(new_allocator<TwoIntsClass*> *this)

{
  return;
}




/* std::vector<TwoIntsClass*, std::allocator<TwoIntsClass*> >::max_size() const */

void __thiscall
std::vector<TwoIntsClass*,std::allocator<TwoIntsClass*>>::max_size
          (vector<TwoIntsClass*,std::allocator<TwoIntsClass*>> *this)

{
  allocator *paVar1;
  
  paVar1 = (allocator *)
           _Vector_base<TwoIntsClass*,std::allocator<TwoIntsClass*>>::_M_get_Tp_allocator
                     ((_Vector_base<TwoIntsClass*,std::allocator<TwoIntsClass*>> *)this);
  _S_max_size(paVar1);
  return;
}




/* std::allocator<TwoIntsClass*>::allocator(std::allocator<TwoIntsClass*> const&) */

void std::allocator<TwoIntsClass*>::allocator(allocator *param_1)

{
  new_allocator<TwoIntsClass*>::new_allocator((new_allocator *)param_1);
  return;
}




/* TwoIntsClass** std::__uninitialized_copy<true>::__uninit_copy<std::move_iterator<TwoIntsClass**>,
   TwoIntsClass**>(std::move_iterator<TwoIntsClass**>, std::move_iterator<TwoIntsClass**>,
   TwoIntsClass**) */

TwoIntsClass **
std::__uninitialized_copy<true>::__uninit_copy<std::move_iterator<TwoIntsClass**>,TwoIntsClass**>
          (move_iterator param_1,move_iterator param_2,TwoIntsClass **param_3)

{
  TwoIntsClass **ppTVar1;
  
  ppTVar1 = copy<std::move_iterator<TwoIntsClass**>,TwoIntsClass**>(param_1,param_2,param_3);
  return ppTVar1;
}




/* std::_Vector_base<TwoIntsClass*, std::allocator<TwoIntsClass*> >::_M_get_Tp_allocator() */

_Vector_base<TwoIntsClass*,std::allocator<TwoIntsClass*>> * __thiscall
std::_Vector_base<TwoIntsClass*,std::allocator<TwoIntsClass*>>::_M_get_Tp_allocator
          (_Vector_base<TwoIntsClass*,std::allocator<TwoIntsClass*>> *this)

{
  return this;
}




/* std::_Vector_base<TwoIntsClass*, std::allocator<TwoIntsClass*> >::_Vector_impl::_Vector_impl() */

void __thiscall
std::_Vector_base<TwoIntsClass*,std::allocator<TwoIntsClass*>>::_Vector_impl::_Vector_impl
          (_Vector_impl *this)

{
  allocator<TwoIntsClass*>::allocator();
  _Vector_impl_data::_Vector_impl_data((_Vector_impl_data *)this);
  return;
}




void stdThreadLockAcquire(pthread_mutex_t *param_1)

{
  pthread_mutex_lock(param_1);
  return;
}




void good7(void)

{
  return;
}




/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* TwoIntsClass** std::__niter_wrap<TwoIntsClass**>(TwoIntsClass** const&, TwoIntsClass**) */

TwoIntsClass ** std::__niter_wrap<TwoIntsClass**>(TwoIntsClass ***param_1,TwoIntsClass **param_2)

{
  return param_2;
}




/* std::_Vector_base<TwoIntsClass*, std::allocator<TwoIntsClass*> >::~_Vector_base() */

void __thiscall
std::_Vector_base<TwoIntsClass*,std::allocator<TwoIntsClass*>>::~_Vector_base
          (_Vector_base<TwoIntsClass*,std::allocator<TwoIntsClass*>> *this)

{
  _M_deallocate(this,*(TwoIntsClass ***)this,*(long *)(this + 0x10) - *(long *)this >> 3);
  _Vector_impl::~_Vector_impl((_Vector_impl *)this);
  return;
}




/* std::_Vector_base<TwoIntsClass*, std::allocator<TwoIntsClass*> >::_M_deallocate(TwoIntsClass**,
   unsigned long) */

void __thiscall
std::_Vector_base<TwoIntsClass*,std::allocator<TwoIntsClass*>>::_M_deallocate
          (_Vector_base<TwoIntsClass*,std::allocator<TwoIntsClass*>> *this,TwoIntsClass **param_1,
          ulong param_2)

{
  if (param_1 != (TwoIntsClass **)0x0) {
    allocator_traits<std::allocator<TwoIntsClass*>>::deallocate((allocator *)this,param_1,param_2);
  }
  return;
}




/* std::vector<TwoIntsClass*, std::allocator<TwoIntsClass*>
   >::_M_fill_insert(__normal_iterator<TwoIntsClass**, std::vector<TwoIntsClass*,
   std::allocator<TwoIntsClass*> > >, unsigned long, TwoIntsClass* const&) */

void __thiscall
std::vector<TwoIntsClass*,std::allocator<TwoIntsClass*>>::_M_fill_insert
          (vector<TwoIntsClass*,std::allocator<TwoIntsClass*>> *this,undefined8 param_2,
          ulong param_3,TwoIntsClass **param_4)

{
  long lVar1;
  difference_type dVar2;
  undefined4 extraout_var;
  allocator *paVar3;
  undefined8 *puVar4;
  long *plVar5;
  TwoIntsClass **ppTVar6;
  undefined4 extraout_var_00;
  long in_FS_OFFSET;
  undefined8 local_88;
  vector<TwoIntsClass*,std::allocator<TwoIntsClass*>> *local_80;
  undefined8 local_78;
  TwoIntsClass **local_70;
  ulong local_68;
  long local_60;
  TwoIntsClass **local_58;
  TwoIntsClass **local_50;
  ulong local_48;
  TwoIntsClass **local_40;
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
      local_70 = (TwoIntsClass **)
                 _Vector_base<TwoIntsClass*,std::allocator<TwoIntsClass*>>::_M_allocate
                           ((_Vector_base<TwoIntsClass*,std::allocator<TwoIntsClass*>> *)local_80,
                            local_68);
      local_58 = local_70;
      paVar3 = (allocator *)
               _Vector_base<TwoIntsClass*,std::allocator<TwoIntsClass*>>::_M_get_Tp_allocator
                         ((_Vector_base<TwoIntsClass*,std::allocator<TwoIntsClass*>> *)local_80);
                    /* try { // try from 001022e8 to 00102373 has its CatchHandler @ 0010242b */
      __uninitialized_fill_n_a<TwoIntsClass**,unsigned_long,TwoIntsClass*,TwoIntsClass*>
                (local_58 + local_60,param_3,param_4,paVar3);
      local_70 = (TwoIntsClass **)0x0;
      paVar3 = (allocator *)
               _Vector_base<TwoIntsClass*,std::allocator<TwoIntsClass*>>::_M_get_Tp_allocator
                         ((_Vector_base<TwoIntsClass*,std::allocator<TwoIntsClass*>> *)local_80);
      puVar4 = (undefined8 *)
               __normal_iterator<TwoIntsClass**,std::vector<TwoIntsClass*,std::allocator<TwoIntsClass*>>>
               ::base((__normal_iterator<TwoIntsClass**,std::vector<TwoIntsClass*,std::allocator<TwoIntsClass*>>>
                       *)&local_88);
      local_70 = __uninitialized_move_if_noexcept_a<TwoIntsClass**,TwoIntsClass**,std::allocator<TwoIntsClass*>>
                           (*(TwoIntsClass ***)local_80,(TwoIntsClass **)*puVar4,local_58,paVar3);
      local_70 = local_70 + param_3;
      paVar3 = (allocator *)
               _Vector_base<TwoIntsClass*,std::allocator<TwoIntsClass*>>::_M_get_Tp_allocator
                         ((_Vector_base<TwoIntsClass*,std::allocator<TwoIntsClass*>> *)local_80);
      ppTVar6 = *(TwoIntsClass ***)(local_80 + 8);
      puVar4 = (undefined8 *)
               __normal_iterator<TwoIntsClass**,std::vector<TwoIntsClass*,std::allocator<TwoIntsClass*>>>
               ::base((__normal_iterator<TwoIntsClass**,std::vector<TwoIntsClass*,std::allocator<TwoIntsClass*>>>
                       *)&local_88);
      local_70 = __uninitialized_move_if_noexcept_a<TwoIntsClass**,TwoIntsClass**,std::allocator<TwoIntsClass*>>
                           ((TwoIntsClass **)*puVar4,ppTVar6,local_70,paVar3);
      paVar3 = (allocator *)
               _Vector_base<TwoIntsClass*,std::allocator<TwoIntsClass*>>::_M_get_Tp_allocator
                         ((_Vector_base<TwoIntsClass*,std::allocator<TwoIntsClass*>> *)local_80);
      _Destroy<TwoIntsClass**,TwoIntsClass*>
                (*(TwoIntsClass ***)local_80,*(TwoIntsClass ***)(local_80 + 8),paVar3);
      _Vector_base<TwoIntsClass*,std::allocator<TwoIntsClass*>>::_M_deallocate
                ((_Vector_base<TwoIntsClass*,std::allocator<TwoIntsClass*>> *)local_80,
                 *(TwoIntsClass ***)local_80,*(long *)(local_80 + 0x10) - *(long *)local_80 >> 3);
      *(TwoIntsClass ***)local_80 = local_58;
      *(TwoIntsClass ***)(local_80 + 8) = local_70;
      *(TwoIntsClass ***)(local_80 + 0x10) = local_58 + local_68;
    }
    else {
      _Temporary_value::_Temporary_value<TwoIntsClass*const&>(local_38,(vector *)this,param_4);
                    /* try { // try from 00102068 to 0010223b has its CatchHandler @ 0010240d */
      local_50 = (TwoIntsClass **)_Temporary_value::_M_val(local_38);
      local_78 = end(local_80);
      dVar2 = operator-((__normal_iterator *)&local_78,(__normal_iterator *)&local_88);
      local_48 = CONCAT44(extraout_var,dVar2);
      local_40 = *(TwoIntsClass ***)(local_80 + 8);
      if (param_3 < local_48) {
        paVar3 = (allocator *)
                 _Vector_base<TwoIntsClass*,std::allocator<TwoIntsClass*>>::_M_get_Tp_allocator
                           ((_Vector_base<TwoIntsClass*,std::allocator<TwoIntsClass*>> *)local_80);
        __uninitialized_move_a<TwoIntsClass**,TwoIntsClass**,std::allocator<TwoIntsClass*>>
                  ((TwoIntsClass **)(param_3 * -8 + *(long *)(local_80 + 8)),
                   *(TwoIntsClass ***)(local_80 + 8),*(TwoIntsClass ***)(local_80 + 8),paVar3);
        *(ulong *)(local_80 + 8) = param_3 * 8 + *(long *)(local_80 + 8);
        ppTVar6 = local_40 + -param_3;
        puVar4 = (undefined8 *)
                 __normal_iterator<TwoIntsClass**,std::vector<TwoIntsClass*,std::allocator<TwoIntsClass*>>>
                 ::base((__normal_iterator<TwoIntsClass**,std::vector<TwoIntsClass*,std::allocator<TwoIntsClass*>>>
                         *)&local_88);
        move_backward<TwoIntsClass**,TwoIntsClass**>((TwoIntsClass **)*puVar4,ppTVar6,local_40);
        plVar5 = (long *)__normal_iterator<TwoIntsClass**,std::vector<TwoIntsClass*,std::allocator<TwoIntsClass*>>>
                         ::base((__normal_iterator<TwoIntsClass**,std::vector<TwoIntsClass*,std::allocator<TwoIntsClass*>>>
                                 *)&local_88);
        lVar1 = *plVar5;
        puVar4 = (undefined8 *)
                 __normal_iterator<TwoIntsClass**,std::vector<TwoIntsClass*,std::allocator<TwoIntsClass*>>>
                 ::base((__normal_iterator<TwoIntsClass**,std::vector<TwoIntsClass*,std::allocator<TwoIntsClass*>>>
                         *)&local_88);
        fill<TwoIntsClass**,TwoIntsClass*>
                  ((TwoIntsClass **)*puVar4,(TwoIntsClass **)(lVar1 + param_3 * 8),local_50);
      }
      else {
        paVar3 = (allocator *)
                 _Vector_base<TwoIntsClass*,std::allocator<TwoIntsClass*>>::_M_get_Tp_allocator
                           ((_Vector_base<TwoIntsClass*,std::allocator<TwoIntsClass*>> *)local_80);
        ppTVar6 = __uninitialized_fill_n_a<TwoIntsClass**,unsigned_long,TwoIntsClass*,TwoIntsClass*>
                            (*(TwoIntsClass ***)(local_80 + 8),param_3 - local_48,local_50,paVar3);
        *(TwoIntsClass ***)(local_80 + 8) = ppTVar6;
        paVar3 = (allocator *)
                 _Vector_base<TwoIntsClass*,std::allocator<TwoIntsClass*>>::_M_get_Tp_allocator
                           ((_Vector_base<TwoIntsClass*,std::allocator<TwoIntsClass*>> *)local_80);
        ppTVar6 = *(TwoIntsClass ***)(local_80 + 8);
        puVar4 = (undefined8 *)
                 __normal_iterator<TwoIntsClass**,std::vector<TwoIntsClass*,std::allocator<TwoIntsClass*>>>
                 ::base((__normal_iterator<TwoIntsClass**,std::vector<TwoIntsClass*,std::allocator<TwoIntsClass*>>>
                         *)&local_88);
        __uninitialized_move_a<TwoIntsClass**,TwoIntsClass**,std::allocator<TwoIntsClass*>>
                  ((TwoIntsClass **)*puVar4,local_40,ppTVar6,paVar3);
        *(ulong *)(local_80 + 8) = local_48 * 8 + *(long *)(local_80 + 8);
        puVar4 = (undefined8 *)
                 __normal_iterator<TwoIntsClass**,std::vector<TwoIntsClass*,std::allocator<TwoIntsClass*>>>
                 ::base((__normal_iterator<TwoIntsClass**,std::vector<TwoIntsClass*,std::allocator<TwoIntsClass*>>>
                         *)&local_88);
        fill<TwoIntsClass**,TwoIntsClass*>((TwoIntsClass **)*puVar4,local_40,local_50);
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




/* new_allocator<TwoIntsClass*>::new_allocator(new_allocator<TwoIntsClass*> const&) */

void new_allocator<TwoIntsClass*>::new_allocator(new_allocator *param_1)

{
  return;
}




/* __normal_iterator<TwoIntsClass**, std::vector<TwoIntsClass*, std::allocator<TwoIntsClass*> >
   >::base() const */

__normal_iterator<TwoIntsClass**,std::vector<TwoIntsClass*,std::allocator<TwoIntsClass*>>> *
__thiscall
__normal_iterator<TwoIntsClass**,std::vector<TwoIntsClass*,std::allocator<TwoIntsClass*>>>::base
          (__normal_iterator<TwoIntsClass**,std::vector<TwoIntsClass*,std::allocator<TwoIntsClass*>>>
           *this)

{
  return this;
}




/* std::vector<TwoIntsClass*, std::allocator<TwoIntsClass*> >::_Temporary_value::_M_ptr() */

_Temporary_value * __thiscall
std::vector<TwoIntsClass*,std::allocator<TwoIntsClass*>>::_Temporary_value::_M_ptr
          (_Temporary_value *this)

{
  return this + 8;
}




/* std::allocator_traits<std::allocator<TwoIntsClass*> >::max_size(std::allocator<TwoIntsClass*>
   const&) */

void std::allocator_traits<std::allocator<TwoIntsClass*>>::max_size(allocator *param_1)

{
  new_allocator<TwoIntsClass*>::max_size();
  return;
}




void printHexCharLine(char param_1)

{
  printf("%02x\n",(ulong)(uint)(int)param_1);
  return;
}




/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* decltype (__miter_base(({parm#1}.base)()))
   std::__miter_base<TwoIntsClass**>(std::move_iterator<TwoIntsClass**>) */

void std::__miter_base<TwoIntsClass**>(move_iterator param_1)

{
  TwoIntsClass **ppTVar1;
  undefined4 in_register_0000003c;
  undefined8 local_10;
  
  local_10 = CONCAT44(in_register_0000003c,param_1);
  ppTVar1 = (TwoIntsClass **)
            move_iterator<TwoIntsClass**>::base((move_iterator<TwoIntsClass**> *)&local_10);
  __miter_base<TwoIntsClass**>(ppTVar1);
  return;
}




/* std::vector<TwoIntsClass*, std::allocator<TwoIntsClass*> >::begin() const */

undefined8 __thiscall
std::vector<TwoIntsClass*,std::allocator<TwoIntsClass*>>::begin
          (vector<TwoIntsClass*,std::allocator<TwoIntsClass*>> *this)

{
  long in_FS_OFFSET;
  TwoIntsClass **local_20;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_20 = *(TwoIntsClass ***)this;
  __normal_iterator<TwoIntsClass*const*,std::vector<TwoIntsClass*,std::allocator<TwoIntsClass*>>>::
  __normal_iterator((__normal_iterator<TwoIntsClass*const*,std::vector<TwoIntsClass*,std::allocator<TwoIntsClass*>>>
                     *)&local_18,&local_20);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void bad9(void)

{
  return;
}




void good4(void)

{
  return;
}




/* CWE122_Heap_Based_Buffer_Overflow__cpp_CWE805_class_memmove_72::goodG2B() */

void CWE122_Heap_Based_Buffer_Overflow__cpp_CWE805_class_memmove_72::goodG2B(void)

{
  long in_FS_OFFSET;
  void *local_68;
  undefined8 local_60;
  vector<TwoIntsClass*,std::allocator<TwoIntsClass*>> local_58 [32];
  undefined8 local_38 [3];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  std::vector<TwoIntsClass*,std::allocator<TwoIntsClass*>>::vector(local_58);
  local_68 = (void *)0x0;
                    /* try { // try from 001018ae to 00101986 has its CatchHandler @ 001019d2 */
  local_68 = operator_new__(800);
  local_60 = std::vector<TwoIntsClass*,std::allocator<TwoIntsClass*>>::end(local_58);
  __normal_iterator<TwoIntsClass*const*,std::vector<TwoIntsClass*,std::allocator<TwoIntsClass*>>>::
  __normal_iterator<TwoIntsClass**>
            ((__normal_iterator<TwoIntsClass*const*,std::vector<TwoIntsClass*,std::allocator<TwoIntsClass*>>>
              *)local_38,(__normal_iterator *)&local_60);
  std::vector<TwoIntsClass*,std::allocator<TwoIntsClass*>>::insert(local_58,local_38[0],1,&local_68)
  ;
  local_60 = std::vector<TwoIntsClass*,std::allocator<TwoIntsClass*>>::end(local_58);
  __normal_iterator<TwoIntsClass*const*,std::vector<TwoIntsClass*,std::allocator<TwoIntsClass*>>>::
  __normal_iterator<TwoIntsClass**>
            ((__normal_iterator<TwoIntsClass*const*,std::vector<TwoIntsClass*,std::allocator<TwoIntsClass*>>>
              *)local_38,(__normal_iterator *)&local_60);
  std::vector<TwoIntsClass*,std::allocator<TwoIntsClass*>>::insert(local_58,local_38[0],1,&local_68)
  ;
  local_60 = std::vector<TwoIntsClass*,std::allocator<TwoIntsClass*>>::end(local_58);
  __normal_iterator<TwoIntsClass*const*,std::vector<TwoIntsClass*,std::allocator<TwoIntsClass*>>>::
  __normal_iterator<TwoIntsClass**>
            ((__normal_iterator<TwoIntsClass*const*,std::vector<TwoIntsClass*,std::allocator<TwoIntsClass*>>>
              *)local_38,(__normal_iterator *)&local_60);
  std::vector<TwoIntsClass*,std::allocator<TwoIntsClass*>>::insert(local_58,local_38[0],1,&local_68)
  ;
  std::vector<TwoIntsClass*,std::allocator<TwoIntsClass*>>::vector
            ((vector<TwoIntsClass*,std::allocator<TwoIntsClass*>> *)local_38,(vector *)local_58);
                    /* try { // try from 0010198e to 00101992 has its CatchHandler @ 001019bd */
  goodG2BSink((vector)local_38);
  std::vector<TwoIntsClass*,std::allocator<TwoIntsClass*>>::~vector
            ((vector<TwoIntsClass*,std::allocator<TwoIntsClass*>> *)local_38);
  std::vector<TwoIntsClass*,std::allocator<TwoIntsClass*>>::~vector(local_58);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
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




/* TwoIntsClass** std::__uninitialized_fill_n<true>::__uninit_fill_n<TwoIntsClass**, unsigned long,
   TwoIntsClass*>(TwoIntsClass**, unsigned long, TwoIntsClass* const&) */

TwoIntsClass **
std::__uninitialized_fill_n<true>::__uninit_fill_n<TwoIntsClass**,unsigned_long,TwoIntsClass*>
          (TwoIntsClass **param_1,ulong param_2,TwoIntsClass **param_3)

{
  TwoIntsClass **ppTVar1;
  
  ppTVar1 = fill_n<TwoIntsClass**,unsigned_long,TwoIntsClass*>(param_1,param_2,param_3);
  return ppTVar1;
}




/* std::_Vector_base<TwoIntsClass*, std::allocator<TwoIntsClass*> >::_M_allocate(unsigned long) */

undefined8 __thiscall
std::_Vector_base<TwoIntsClass*,std::allocator<TwoIntsClass*>>::_M_allocate
          (_Vector_base<TwoIntsClass*,std::allocator<TwoIntsClass*>> *this,ulong param_1)

{
  undefined8 uVar1;
  
  if (param_1 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = allocator_traits<std::allocator<TwoIntsClass*>>::allocate((allocator *)this,param_1);
  }
  return uVar1;
}




/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* TwoIntsClass** std::__copy_move_backward_a<true, TwoIntsClass**, TwoIntsClass**>(TwoIntsClass**,
   TwoIntsClass**, TwoIntsClass**) */

TwoIntsClass **
std::__copy_move_backward_a<true,TwoIntsClass**,TwoIntsClass**>
          (TwoIntsClass **param_1,TwoIntsClass **param_2,TwoIntsClass **param_3)

{
  TwoIntsClass **ppTVar1;
  
  ppTVar1 = __copy_move_backward<true,true,std::random_access_iterator_tag>::
            __copy_move_b<TwoIntsClass*>(param_1,param_2,param_3);
  return ppTVar1;
}




void bad3(void)

{
  return;
}




/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* __enable_if<std::__is_scalar<TwoIntsClass*>::__value, void>::__type std::__fill_a<TwoIntsClass**,
   TwoIntsClass*>(TwoIntsClass**, TwoIntsClass**, TwoIntsClass* const&) */

__type std::__fill_a<TwoIntsClass**,TwoIntsClass*>
                 (TwoIntsClass **param_1,TwoIntsClass **param_2,TwoIntsClass **param_3)

{
  TwoIntsClass *pTVar1;
  TwoIntsClass **local_20;
  
  pTVar1 = *param_3;
  for (local_20 = param_1; local_20 != param_2; local_20 = local_20 + 1) {
    *local_20 = pTVar1;
  }
  return (__type)local_20;
}




undefined8 main(void)

{
  time_t tVar1;
  
  tVar1 = time((time_t *)0x0);
  srand((uint)tVar1);
  printLine("Calling good()...");
  CWE122_Heap_Based_Buffer_Overflow__cpp_CWE805_class_memmove_72::good();
  printLine("Finished good()");
  printLine("Calling bad()...");
  CWE122_Heap_Based_Buffer_Overflow__cpp_CWE805_class_memmove_72::bad();
  printLine("Finished bad()");
  return 0;
}




/* __normal_iterator<TwoIntsClass* const*, std::vector<TwoIntsClass*, std::allocator<TwoIntsClass*>
   > > std::__miter_base<__normal_iterator<TwoIntsClass* const*, std::vector<TwoIntsClass*,
   std::allocator<TwoIntsClass*> > > >(__normal_iterator<TwoIntsClass* const*,
   std::vector<TwoIntsClass*, std::allocator<TwoIntsClass*> > >) */

undefined8
std::
__miter_base<__normal_iterator<TwoIntsClass*const*,std::vector<TwoIntsClass*,std::allocator<TwoIntsClass*>>>>
          (undefined8 param_1)

{
  return param_1;
}




/* std::vector<TwoIntsClass*, std::allocator<TwoIntsClass*>
   >::insert(__normal_iterator<TwoIntsClass* const*, std::vector<TwoIntsClass*,
   std::allocator<TwoIntsClass*> > >, unsigned long, TwoIntsClass* const&) */

void __thiscall
std::vector<TwoIntsClass*,std::allocator<TwoIntsClass*>>::insert
          (vector<TwoIntsClass*,std::allocator<TwoIntsClass*>> *this,undefined8 param_2,
          undefined8 param_3,undefined8 param_4)

{
  difference_type dVar1;
  undefined4 extraout_var;
  undefined8 uVar2;
  long in_FS_OFFSET;
  undefined8 local_38;
  vector<TwoIntsClass*,std::allocator<TwoIntsClass*>> *local_30;
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
  uVar2 = __normal_iterator<TwoIntsClass**,std::vector<TwoIntsClass*,std::allocator<TwoIntsClass*>>>
          ::operator+((__normal_iterator<TwoIntsClass**,std::vector<TwoIntsClass*,std::allocator<TwoIntsClass*>>>
                       *)&local_20,local_18);
  _M_fill_insert(local_30,uVar2,param_3,param_4);
  local_20 = begin(local_30);
  __normal_iterator<TwoIntsClass**,std::vector<TwoIntsClass*,std::allocator<TwoIntsClass*>>>::
  operator+((__normal_iterator<TwoIntsClass**,std::vector<TwoIntsClass*,std::allocator<TwoIntsClass*>>>
             *)&local_20,local_18);
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




/* std::allocator_traits<std::allocator<TwoIntsClass*>
   >::select_on_container_copy_construction(std::allocator<TwoIntsClass*> const&) */

allocator *
std::allocator_traits<std::allocator<TwoIntsClass*>>::select_on_container_copy_construction
          (allocator *param_1)

{
  allocator<TwoIntsClass*>::allocator(param_1);
  return param_1;
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




void printLine(char *param_1)

{
  if (param_1 != (char *)0x0) {
    puts(param_1);
  }
  return;
}




void printStructLine(uint *param_1)

{
  printf("%d -- %d\n",(ulong)*param_1,(ulong)param_1[1]);
  return;
}




undefined8 globalReturnsTrue(void)

{
  return 1;
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




/* TwoIntsClass** std::__uninitialized_copy_a<__normal_iterator<TwoIntsClass* const*,
   std::vector<TwoIntsClass*, std::allocator<TwoIntsClass*> > >, TwoIntsClass**,
   TwoIntsClass*>(__normal_iterator<TwoIntsClass* const*, std::vector<TwoIntsClass*,
   std::allocator<TwoIntsClass*> > >, __normal_iterator<TwoIntsClass* const*,
   std::vector<TwoIntsClass*, std::allocator<TwoIntsClass*> > >, TwoIntsClass**,
   std::allocator<TwoIntsClass*>&) */

void std::
     __uninitialized_copy_a<__normal_iterator<TwoIntsClass*const*,std::vector<TwoIntsClass*,std::allocator<TwoIntsClass*>>>,TwoIntsClass**,TwoIntsClass*>
               (undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  uninitialized_copy<__normal_iterator<TwoIntsClass*const*,std::vector<TwoIntsClass*,std::allocator<TwoIntsClass*>>>,TwoIntsClass**>
            (param_1,param_2,param_3);
  return;
}




/* std::_Vector_base<TwoIntsClass*, std::allocator<TwoIntsClass*> >::_Vector_impl::~_Vector_impl()
    */

void __thiscall
std::_Vector_base<TwoIntsClass*,std::allocator<TwoIntsClass*>>::_Vector_impl::~_Vector_impl
          (_Vector_impl *this)

{
  allocator<TwoIntsClass*>::~allocator((allocator<TwoIntsClass*> *)this);
  return;
}




/* std::allocator<TwoIntsClass*>::~allocator() */

void __thiscall std::allocator<TwoIntsClass*>::~allocator(allocator<TwoIntsClass*> *this)

{
  new_allocator<TwoIntsClass*>::~new_allocator((new_allocator<TwoIntsClass*> *)this);
  return;
}




/* std::_Vector_base<TwoIntsClass*, std::allocator<TwoIntsClass*>
   >::_Vector_impl::_Vector_impl(std::allocator<TwoIntsClass*> const&) */

void __thiscall
std::_Vector_base<TwoIntsClass*,std::allocator<TwoIntsClass*>>::_Vector_impl::_Vector_impl
          (_Vector_impl *this,allocator *param_1)

{
  allocator<TwoIntsClass*>::allocator((allocator *)this);
  _Vector_impl_data::_Vector_impl_data((_Vector_impl_data *)this);
  return;
}




/* std::vector<TwoIntsClass*, std::allocator<TwoIntsClass*> >::operator[](unsigned long) */

long __thiscall
std::vector<TwoIntsClass*,std::allocator<TwoIntsClass*>>::operator[]
          (vector<TwoIntsClass*,std::allocator<TwoIntsClass*>> *this,ulong param_1)

{
  return *(long *)this + param_1 * 8;
}




/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* void std::_Destroy<TwoIntsClass**, TwoIntsClass*>(TwoIntsClass**, TwoIntsClass**,
   std::allocator<TwoIntsClass*>&) */

void std::_Destroy<TwoIntsClass**,TwoIntsClass*>
               (TwoIntsClass **param_1,TwoIntsClass **param_2,allocator *param_3)

{
  _Destroy<TwoIntsClass**>(param_1,param_2);
  return;
}




/* new_allocator<TwoIntsClass*>::max_size() const */

undefined8 new_allocator<TwoIntsClass*>::max_size(void)

{
  return 0xfffffffffffffff;
}




/* new_allocator<TwoIntsClass*>::deallocate(TwoIntsClass**, unsigned long) */

void new_allocator<TwoIntsClass*>::deallocate(TwoIntsClass **param_1,ulong param_2)

{
  operator_delete((void *)param_2);
  return;
}




/* __normal_iterator<TwoIntsClass* const*, std::vector<TwoIntsClass*, std::allocator<TwoIntsClass*>
   > >::base() const */

__normal_iterator<TwoIntsClass*const*,std::vector<TwoIntsClass*,std::allocator<TwoIntsClass*>>> *
__thiscall
__normal_iterator<TwoIntsClass*const*,std::vector<TwoIntsClass*,std::allocator<TwoIntsClass*>>>::
base(__normal_iterator<TwoIntsClass*const*,std::vector<TwoIntsClass*,std::allocator<TwoIntsClass*>>>
     *this)

{
  return this;
}




/* std::vector<TwoIntsClass*, std::allocator<TwoIntsClass*> >::size() const */

long __thiscall
std::vector<TwoIntsClass*,std::allocator<TwoIntsClass*>>::size
          (vector<TwoIntsClass*,std::allocator<TwoIntsClass*>> *this)

{
  return *(long *)(this + 8) - *(long *)this >> 3;
}




/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* TwoIntsClass** std::uninitialized_fill_n<TwoIntsClass**, unsigned long,
   TwoIntsClass*>(TwoIntsClass**, unsigned long, TwoIntsClass* const&) */

TwoIntsClass **
std::uninitialized_fill_n<TwoIntsClass**,unsigned_long,TwoIntsClass*>
          (TwoIntsClass **param_1,ulong param_2,TwoIntsClass **param_3)

{
  TwoIntsClass **ppTVar1;
  
  ppTVar1 = __uninitialized_fill_n<true>::
            __uninit_fill_n<TwoIntsClass**,unsigned_long,TwoIntsClass*>(param_1,param_2,param_3);
  return ppTVar1;
}




/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* TwoIntsClass** std::__copy_move_a2<true, TwoIntsClass**, TwoIntsClass**>(TwoIntsClass**,
   TwoIntsClass**, TwoIntsClass**) */

TwoIntsClass **
std::__copy_move_a2<true,TwoIntsClass**,TwoIntsClass**>
          (TwoIntsClass **param_1,TwoIntsClass **param_2,TwoIntsClass **param_3)

{
  TwoIntsClass **ppTVar1;
  TwoIntsClass **ppTVar2;
  TwoIntsClass **ppTVar3;
  TwoIntsClass **local_30;
  TwoIntsClass **local_28;
  TwoIntsClass **local_20;
  
  local_30 = param_3;
  local_28 = param_2;
  local_20 = param_1;
  ppTVar1 = __niter_base<TwoIntsClass**>(param_3);
  ppTVar2 = __niter_base<TwoIntsClass**>(local_28);
  ppTVar3 = __niter_base<TwoIntsClass**>(local_20);
  ppTVar1 = __copy_move_a<true,TwoIntsClass**,TwoIntsClass**>(ppTVar3,ppTVar2,ppTVar1);
  ppTVar1 = __niter_wrap<TwoIntsClass**>(&local_30,ppTVar1);
  return ppTVar1;
}




/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* __enable_if<std::__is_scalar<TwoIntsClass*>::__value, TwoIntsClass**>::__type
   std::__fill_n_a<TwoIntsClass**, unsigned long, TwoIntsClass*>(TwoIntsClass**, unsigned long,
   TwoIntsClass* const&) */

__type std::__fill_n_a<TwoIntsClass**,unsigned_long,TwoIntsClass*>
                 (TwoIntsClass **param_1,ulong param_2,TwoIntsClass **param_3)

{
  TwoIntsClass *pTVar1;
  TwoIntsClass **local_20;
  ulong local_18;
  
  pTVar1 = *param_3;
  local_20 = param_1;
  for (local_18 = param_2; local_18 != 0; local_18 = local_18 - 1) {
    *local_20 = pTVar1;
    local_20 = local_20 + 1;
  }
  return (__type)local_20;
}




/* void std::_Destroy_aux<true>::__destroy<TwoIntsClass**>(TwoIntsClass**, TwoIntsClass**) */

void std::_Destroy_aux<true>::__destroy<TwoIntsClass**>
               (TwoIntsClass **param_1,TwoIntsClass **param_2)

{
  return;
}




/* new_allocator<TwoIntsClass*>::new_allocator() */

void new_allocator<TwoIntsClass*>::new_allocator(void)

{
  return;
}




/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* TwoIntsClass** std::__uninitialized_move_if_noexcept_a<TwoIntsClass**, TwoIntsClass**,
   std::allocator<TwoIntsClass*> >(TwoIntsClass**, TwoIntsClass**, TwoIntsClass**,
   std::allocator<TwoIntsClass*>&) */

TwoIntsClass **
std::__uninitialized_move_if_noexcept_a<TwoIntsClass**,TwoIntsClass**,std::allocator<TwoIntsClass*>>
          (TwoIntsClass **param_1,TwoIntsClass **param_2,TwoIntsClass **param_3,allocator *param_4)

{
  move_iterator mVar1;
  move_iterator mVar2;
  TwoIntsClass **ppTVar3;
  
  mVar1 = __make_move_if_noexcept_iterator<TwoIntsClass*,std::move_iterator<TwoIntsClass**>>
                    (param_2);
  mVar2 = __make_move_if_noexcept_iterator<TwoIntsClass*,std::move_iterator<TwoIntsClass**>>
                    (param_1);
  ppTVar3 = __uninitialized_copy_a<std::move_iterator<TwoIntsClass**>,TwoIntsClass**,TwoIntsClass*>
                      (mVar2,mVar1,param_3,param_4);
  return ppTVar3;
}




void good3(void)

{
  return;
}




/* CWE122_Heap_Based_Buffer_Overflow__cpp_CWE805_class_memmove_72::bad() */

void CWE122_Heap_Based_Buffer_Overflow__cpp_CWE805_class_memmove_72::bad(void)

{
  long in_FS_OFFSET;
  void *local_68;
  undefined8 local_60;
  vector<TwoIntsClass*,std::allocator<TwoIntsClass*>> local_58 [32];
  undefined8 local_38 [3];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  std::vector<TwoIntsClass*,std::allocator<TwoIntsClass*>>::vector(local_58);
  local_68 = (void *)0x0;
                    /* try { // try from 0010172b to 00101803 has its CatchHandler @ 0010184f */
  local_68 = operator_new__(400);
  local_60 = std::vector<TwoIntsClass*,std::allocator<TwoIntsClass*>>::end(local_58);
  __normal_iterator<TwoIntsClass*const*,std::vector<TwoIntsClass*,std::allocator<TwoIntsClass*>>>::
  __normal_iterator<TwoIntsClass**>
            ((__normal_iterator<TwoIntsClass*const*,std::vector<TwoIntsClass*,std::allocator<TwoIntsClass*>>>
              *)local_38,(__normal_iterator *)&local_60);
  std::vector<TwoIntsClass*,std::allocator<TwoIntsClass*>>::insert(local_58,local_38[0],1,&local_68)
  ;
  local_60 = std::vector<TwoIntsClass*,std::allocator<TwoIntsClass*>>::end(local_58);
  __normal_iterator<TwoIntsClass*const*,std::vector<TwoIntsClass*,std::allocator<TwoIntsClass*>>>::
  __normal_iterator<TwoIntsClass**>
            ((__normal_iterator<TwoIntsClass*const*,std::vector<TwoIntsClass*,std::allocator<TwoIntsClass*>>>
              *)local_38,(__normal_iterator *)&local_60);
  std::vector<TwoIntsClass*,std::allocator<TwoIntsClass*>>::insert(local_58,local_38[0],1,&local_68)
  ;
  local_60 = std::vector<TwoIntsClass*,std::allocator<TwoIntsClass*>>::end(local_58);
  __normal_iterator<TwoIntsClass*const*,std::vector<TwoIntsClass*,std::allocator<TwoIntsClass*>>>::
  __normal_iterator<TwoIntsClass**>
            ((__normal_iterator<TwoIntsClass*const*,std::vector<TwoIntsClass*,std::allocator<TwoIntsClass*>>>
              *)local_38,(__normal_iterator *)&local_60);
  std::vector<TwoIntsClass*,std::allocator<TwoIntsClass*>>::insert(local_58,local_38[0],1,&local_68)
  ;
  std::vector<TwoIntsClass*,std::allocator<TwoIntsClass*>>::vector
            ((vector<TwoIntsClass*,std::allocator<TwoIntsClass*>> *)local_38,(vector *)local_58);
                    /* try { // try from 0010180b to 0010180f has its CatchHandler @ 0010183a */
  badSink((vector)local_38);
  std::vector<TwoIntsClass*,std::allocator<TwoIntsClass*>>::~vector
            ((vector<TwoIntsClass*,std::allocator<TwoIntsClass*>> *)local_38);
  std::vector<TwoIntsClass*,std::allocator<TwoIntsClass*>>::~vector(local_58);
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




void printFloatLine(float param_1)

{
  printf("%f\n",(double)param_1);
  return;
}




/* std::vector<TwoIntsClass*, std::allocator<TwoIntsClass*> >::vector(std::vector<TwoIntsClass*,
   std::allocator<TwoIntsClass*> > const&) */

void __thiscall
std::vector<TwoIntsClass*,std::allocator<TwoIntsClass*>>::vector
          (vector<TwoIntsClass*,std::allocator<TwoIntsClass*>> *this,vector *param_1)

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
  _Vector_base<TwoIntsClass*,std::allocator<TwoIntsClass*>>::_M_get_Tp_allocator
            ((_Vector_base<TwoIntsClass*,std::allocator<TwoIntsClass*>> *)param_1);
  __alloc_traits<std::allocator<TwoIntsClass*>,TwoIntsClass*>::_S_select_on_copy(&local_31);
  uVar1 = size((vector<TwoIntsClass*,std::allocator<TwoIntsClass*>> *)param_1);
                    /* try { // try from 00101d78 to 00101d7c has its CatchHandler @ 00101de5 */
  _Vector_base<TwoIntsClass*,std::allocator<TwoIntsClass*>>::_Vector_base
            ((_Vector_base<TwoIntsClass*,std::allocator<TwoIntsClass*>> *)this,uVar1,&local_31);
  allocator<TwoIntsClass*>::~allocator((allocator<TwoIntsClass*> *)&local_31);
  uVar2 = _Vector_base<TwoIntsClass*,std::allocator<TwoIntsClass*>>::_M_get_Tp_allocator
                    ((_Vector_base<TwoIntsClass*,std::allocator<TwoIntsClass*>> *)this);
  uVar5 = *(undefined8 *)this;
  uVar3 = end((vector<TwoIntsClass*,std::allocator<TwoIntsClass*>> *)param_1);
  uVar4 = begin((vector<TwoIntsClass*,std::allocator<TwoIntsClass*>> *)param_1);
                    /* try { // try from 00101dc6 to 00101dca has its CatchHandler @ 00101e03 */
  uVar5 = __uninitialized_copy_a<__normal_iterator<TwoIntsClass*const*,std::vector<TwoIntsClass*,std::allocator<TwoIntsClass*>>>,TwoIntsClass**,TwoIntsClass*>
                    (uVar4,uVar3,uVar5,uVar2);
  *(undefined8 *)(this + 8) = uVar5;
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




/* std::vector<TwoIntsClass*, std::allocator<TwoIntsClass*> >::end() */

undefined8 __thiscall
std::vector<TwoIntsClass*,std::allocator<TwoIntsClass*>>::end
          (vector<TwoIntsClass*,std::allocator<TwoIntsClass*>> *this)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  __normal_iterator<TwoIntsClass**,std::vector<TwoIntsClass*,std::allocator<TwoIntsClass*>>>::
  __normal_iterator((__normal_iterator<TwoIntsClass**,std::vector<TwoIntsClass*,std::allocator<TwoIntsClass*>>>
                     *)&local_18,(TwoIntsClass ***)(this + 8));
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void good9(void)

{
  return;
}




/* std::vector<TwoIntsClass*, std::allocator<TwoIntsClass*> >::begin() */

undefined8 __thiscall
std::vector<TwoIntsClass*,std::allocator<TwoIntsClass*>>::begin
          (vector<TwoIntsClass*,std::allocator<TwoIntsClass*>> *this)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  __normal_iterator<TwoIntsClass**,std::vector<TwoIntsClass*,std::allocator<TwoIntsClass*>>>::
  __normal_iterator((__normal_iterator<TwoIntsClass**,std::vector<TwoIntsClass*,std::allocator<TwoIntsClass*>>>
                     *)&local_18,(TwoIntsClass ***)this);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




/* std::allocator<TwoIntsClass*>::allocator() */

void std::allocator<TwoIntsClass*>::allocator(void)

{
  new_allocator<TwoIntsClass*>::new_allocator();
  return;
}




/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* std::move_iterator<TwoIntsClass**> std::__make_move_if_noexcept_iterator<TwoIntsClass*,
   std::move_iterator<TwoIntsClass**> >(TwoIntsClass**) */

move_iterator
std::__make_move_if_noexcept_iterator<TwoIntsClass*,std::move_iterator<TwoIntsClass**>>
          (TwoIntsClass **param_1)

{
  long in_FS_OFFSET;
  move_iterator local_18 [2];
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  move_iterator<TwoIntsClass**>::move_iterator((move_iterator<TwoIntsClass**> *)local_18,param_1);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18[0];
}




undefined8 stdThreadDestroy(void *param_1)

{
  free(param_1);
  return 1;
}




/* std::move_iterator<TwoIntsClass**>::move_iterator(TwoIntsClass**) */

void __thiscall
std::move_iterator<TwoIntsClass**>::move_iterator
          (move_iterator<TwoIntsClass**> *this,TwoIntsClass **param_1)

{
  *(TwoIntsClass ***)this = param_1;
  return;
}




/* TwoIntsClass* const* std::__niter_base<TwoIntsClass* const*, std::vector<TwoIntsClass*,
   std::allocator<TwoIntsClass*> > >(__normal_iterator<TwoIntsClass* const*,
   std::vector<TwoIntsClass*, std::allocator<TwoIntsClass*> > >) */

undefined8
std::__niter_base<TwoIntsClass*const*,std::vector<TwoIntsClass*,std::allocator<TwoIntsClass*>>>
          (undefined8 param_1)

{
  undefined8 *puVar1;
  undefined8 local_10;
  
  local_10 = param_1;
  puVar1 = (undefined8 *)
           __normal_iterator<TwoIntsClass*const*,std::vector<TwoIntsClass*,std::allocator<TwoIntsClass*>>>
           ::base((__normal_iterator<TwoIntsClass*const*,std::vector<TwoIntsClass*,std::allocator<TwoIntsClass*>>>
                   *)&local_10);
  return *puVar1;
}




void printHexUnsignedCharLine(byte param_1)

{
  printf("%02x\n",(ulong)param_1);
  return;
}




/* std::move_iterator<TwoIntsClass**>::base() const */

undefined8 __thiscall std::move_iterator<TwoIntsClass**>::base(move_iterator<TwoIntsClass**> *this)

{
  return *(undefined8 *)this;
}




/* std::vector<TwoIntsClass*, std::allocator<TwoIntsClass*> >::~vector() */

void __thiscall
std::vector<TwoIntsClass*,std::allocator<TwoIntsClass*>>::~vector
          (vector<TwoIntsClass*,std::allocator<TwoIntsClass*>> *this)

{
  allocator *paVar1;
  
  paVar1 = (allocator *)
           _Vector_base<TwoIntsClass*,std::allocator<TwoIntsClass*>>::_M_get_Tp_allocator
                     ((_Vector_base<TwoIntsClass*,std::allocator<TwoIntsClass*>> *)this);
  _Destroy<TwoIntsClass**,TwoIntsClass*>
            (*(TwoIntsClass ***)this,*(TwoIntsClass ***)(this + 8),paVar1);
  _Vector_base<TwoIntsClass*,std::allocator<TwoIntsClass*>>::~_Vector_base
            ((_Vector_base<TwoIntsClass*,std::allocator<TwoIntsClass*>> *)this);
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




/* __normal_iterator<TwoIntsClass**, std::vector<TwoIntsClass*, std::allocator<TwoIntsClass*> >
   >::TEMPNAMEPLACEHOLDERVALUE(long) const */

undefined8 __thiscall
__normal_iterator<TwoIntsClass**,std::vector<TwoIntsClass*,std::allocator<TwoIntsClass*>>>::
operator+(__normal_iterator<TwoIntsClass**,std::vector<TwoIntsClass*,std::allocator<TwoIntsClass*>>>
          *this,long param_1)

{
  long in_FS_OFFSET;
  TwoIntsClass **local_20;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_20 = (TwoIntsClass **)(*(long *)this + param_1 * 8);
  __normal_iterator((__normal_iterator<TwoIntsClass**,std::vector<TwoIntsClass*,std::allocator<TwoIntsClass*>>>
                     *)&local_18,&local_20);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* TwoIntsClass** std::__uninitialized_copy_a<std::move_iterator<TwoIntsClass**>, TwoIntsClass**,
   TwoIntsClass*>(std::move_iterator<TwoIntsClass**>, std::move_iterator<TwoIntsClass**>,
   TwoIntsClass**, std::allocator<TwoIntsClass*>&) */

TwoIntsClass **
std::__uninitialized_copy_a<std::move_iterator<TwoIntsClass**>,TwoIntsClass**,TwoIntsClass*>
          (move_iterator param_1,move_iterator param_2,TwoIntsClass **param_3,allocator *param_4)

{
  TwoIntsClass **ppTVar1;
  
  ppTVar1 = uninitialized_copy<std::move_iterator<TwoIntsClass**>,TwoIntsClass**>
                      (param_1,param_2,param_3);
  return ppTVar1;
}




/* TwoIntsClass** std::__uninitialized_copy<true>::__uninit_copy<__normal_iterator<TwoIntsClass*
   const*, std::vector<TwoIntsClass*, std::allocator<TwoIntsClass*> > >,
   TwoIntsClass**>(__normal_iterator<TwoIntsClass* const*, std::vector<TwoIntsClass*,
   std::allocator<TwoIntsClass*> > >, __normal_iterator<TwoIntsClass* const*,
   std::vector<TwoIntsClass*, std::allocator<TwoIntsClass*> > >, TwoIntsClass**) */

void std::__uninitialized_copy<true>::
     __uninit_copy<__normal_iterator<TwoIntsClass*const*,std::vector<TwoIntsClass*,std::allocator<TwoIntsClass*>>>,TwoIntsClass**>
               (undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  copy<__normal_iterator<TwoIntsClass*const*,std::vector<TwoIntsClass*,std::allocator<TwoIntsClass*>>>,TwoIntsClass**>
            (param_1,param_2,param_3);
  return;
}




/* std::_Vector_base<TwoIntsClass*, std::allocator<TwoIntsClass*> >::_Vector_base(unsigned long,
   std::allocator<TwoIntsClass*> const&) */

void __thiscall
std::_Vector_base<TwoIntsClass*,std::allocator<TwoIntsClass*>>::_Vector_base
          (_Vector_base<TwoIntsClass*,std::allocator<TwoIntsClass*>> *this,ulong param_1,
          allocator *param_2)

{
  _Vector_impl::_Vector_impl((_Vector_impl *)this,param_2);
                    /* try { // try from 00102674 to 00102678 has its CatchHandler @ 0010267b */
  _M_create_storage(this,param_1);
  return;
}




/* TwoIntsClass** std::__copy_move_backward<true, true,
   std::random_access_iterator_tag>::__copy_move_b<TwoIntsClass*>(TwoIntsClass* const*,
   TwoIntsClass* const*, TwoIntsClass**) */

TwoIntsClass **
std::__copy_move_backward<true,true,std::random_access_iterator_tag>::__copy_move_b<TwoIntsClass*>
          (TwoIntsClass **param_1,TwoIntsClass **param_2,TwoIntsClass **param_3)

{
  long lVar1;
  
  lVar1 = (long)param_2 - (long)param_1 >> 3;
  if (lVar1 != 0) {
    memmove(param_3 + -lVar1,param_1,lVar1 * 8);
  }
  return param_3 + -lVar1;
}




/* std::vector<TwoIntsClass*, std::allocator<TwoIntsClass*>
   >::_S_max_size(std::allocator<TwoIntsClass*> const&) */

ulong std::vector<TwoIntsClass*,std::allocator<TwoIntsClass*>>::_S_max_size(allocator *param_1)

{
  ulong *puVar1;
  long in_FS_OFFSET;
  ulong local_20;
  ulong local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_20 = 0xfffffffffffffff;
  local_18 = allocator_traits<std::allocator<TwoIntsClass*>>::max_size(param_1);
  puVar1 = min<unsigned_long>(&local_20,&local_18);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return *puVar1;
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




void bad4(void)

{
  return;
}




/* TwoIntsClass** std::__copy_move<true, true,
   std::random_access_iterator_tag>::__copy_m<TwoIntsClass*>(TwoIntsClass* const*, TwoIntsClass*
   const*, TwoIntsClass**) */

TwoIntsClass **
std::__copy_move<true,true,std::random_access_iterator_tag>::__copy_m<TwoIntsClass*>
          (TwoIntsClass **param_1,TwoIntsClass **param_2,TwoIntsClass **param_3)

{
  long lVar1;
  
  lVar1 = (long)param_2 - (long)param_1 >> 3;
  if (lVar1 != 0) {
    memmove(param_3,param_1,lVar1 * 8);
  }
  return param_3 + lVar1;
}




/* std::vector<TwoIntsClass*, std::allocator<TwoIntsClass*> >::end() const */

undefined8 __thiscall
std::vector<TwoIntsClass*,std::allocator<TwoIntsClass*>>::end
          (vector<TwoIntsClass*,std::allocator<TwoIntsClass*>> *this)

{
  long in_FS_OFFSET;
  TwoIntsClass **local_20;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_20 = *(TwoIntsClass ***)(this + 8);
  __normal_iterator<TwoIntsClass*const*,std::vector<TwoIntsClass*,std::allocator<TwoIntsClass*>>>::
  __normal_iterator((__normal_iterator<TwoIntsClass*const*,std::vector<TwoIntsClass*,std::allocator<TwoIntsClass*>>>
                     *)&local_18,&local_20);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




/* std::allocator_traits<std::allocator<TwoIntsClass*> >::allocate(std::allocator<TwoIntsClass*>&,
   unsigned long) */

void std::allocator_traits<std::allocator<TwoIntsClass*>>::allocate
               (allocator *param_1,ulong param_2)

{
  new_allocator<TwoIntsClass*>::allocate((ulong)param_1,(void *)param_2);
  return;
}




int globalReturnsTrueOrFalse(void)

{
  int iVar1;
  
  iVar1 = rand();
  return iVar1 % 2;
}



