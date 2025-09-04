
/* char** std::__copy_move_a2<false, __normal_iterator<char* const*, std::vector<char*,
   std::allocator<char*> > >, char**>(__normal_iterator<char* const*, std::vector<char*,
   std::allocator<char*> > >, __normal_iterator<char* const*, std::vector<char*,
   std::allocator<char*> > >, char**) */

void std::
     __copy_move_a2<false,__normal_iterator<char*const*,std::vector<char*,std::allocator<char*>>>,char**>
               (undefined8 param_1,undefined8 param_2,char **param_3)

{
  char **ppcVar1;
  char **ppcVar2;
  char **ppcVar3;
  char **local_30;
  undefined8 local_28;
  undefined8 local_20;
  
  local_30 = param_3;
  local_28 = param_2;
  local_20 = param_1;
  ppcVar1 = __niter_base<char**>(param_3);
  ppcVar2 = (char **)__niter_base<char*const*,std::vector<char*,std::allocator<char*>>>(local_28);
  ppcVar3 = (char **)__niter_base<char*const*,std::vector<char*,std::allocator<char*>>>(local_20);
  ppcVar1 = __copy_move_a<false,char*const*,char**>(ppcVar3,ppcVar2,ppcVar1);
  __niter_wrap<char**>(&local_30,ppcVar1);
  return;
}




undefined8 stdThreadDestroy(void *param_1)

{
  free(param_1);
  return 1;
}




void good2(void)

{
  return;
}




void good4(void)

{
  return;
}




void good3(void)

{
  return;
}




/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* void std::_Destroy<char**, char*>(char**, char**, std::allocator<char*>&) */

void std::_Destroy<char**,char*>(char **param_1,char **param_2,allocator *param_3)

{
  _Destroy<char**>(param_1,param_2);
  return;
}




/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* char** std::__uninitialized_move_a<char**, char**, std::allocator<char*> >(char**, char**,
   char**, std::allocator<char*>&) */

char ** std::__uninitialized_move_a<char**,char**,std::allocator<char*>>
                  (char **param_1,char **param_2,char **param_3,allocator *param_4)

{
  move_iterator mVar1;
  move_iterator mVar2;
  char **ppcVar3;
  
  mVar1 = make_move_iterator<char**>(param_2);
  mVar2 = make_move_iterator<char**>(param_1);
  ppcVar3 = __uninitialized_copy_a<std::move_iterator<char**>,char**,char*>
                      (mVar2,mVar1,param_3,param_4);
  return ppcVar3;
}




/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* char** std::__copy_move_a<true, char**, char**>(char**, char**, char**) */

char ** std::__copy_move_a<true,char**,char**>(char **param_1,char **param_2,char **param_3)

{
  char **ppcVar1;
  
  ppcVar1 = __copy_move<true,true,std::random_access_iterator_tag>::__copy_m<char*>
                      (param_1,param_2,param_3);
  return ppcVar1;
}




/* std::vector<char*, std::allocator<char*> >::_Temporary_value::_Temporary_value<char*
   const&>(std::vector<char*, std::allocator<char*> >*, char* const&) */

void __thiscall
std::vector<char*,std::allocator<char*>>::_Temporary_value::_Temporary_value<char*const&>
          (_Temporary_value *this,vector *param_1,char **param_2)

{
  char **ppcVar1;
  char **ppcVar2;
  
  *(vector **)this = param_1;
  ppcVar1 = forward<char*const&>((type *)param_2);
  ppcVar2 = (char **)_M_ptr(this);
  allocator_traits<std::allocator<char*>>::construct<char*,char*const&>
            (*(allocator **)this,ppcVar2,ppcVar1);
  return;
}




void bad9(void)

{
  return;
}




/* std::move_iterator<char**>::move_iterator(char**) */

void __thiscall
std::move_iterator<char**>::move_iterator(move_iterator<char**> *this,char **param_1)

{
  *(char ***)this = param_1;
  return;
}




void printDoubleLine(undefined8 param_1)

{
  printf("%g\n",param_1);
  return;
}




/* std::vector<char*, std::allocator<char*> >::_S_max_size(std::allocator<char*> const&) */

ulong std::vector<char*,std::allocator<char*>>::_S_max_size(allocator *param_1)

{
  ulong *puVar1;
  long in_FS_OFFSET;
  ulong local_20;
  ulong local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_20 = 0xfffffffffffffff;
  local_18 = allocator_traits<std::allocator<char*>>::max_size(param_1);
  puVar1 = min<unsigned_long>(&local_20,&local_18);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return *puVar1;
}




/* __normal_iterator<char* const*, std::vector<char*, std::allocator<char*> >
   >::__normal_iterator<char**>(__normal_iterator<char**, __enable_if<std::__are_same<char**,
   char**>::__value, std::vector<char*, std::allocator<char*> > >::__type> const&) */

void __thiscall
__normal_iterator<char*const*,std::vector<char*,std::allocator<char*>>>::__normal_iterator<char**>
          (__normal_iterator<char*const*,std::vector<char*,std::allocator<char*>>> *this,
          __normal_iterator *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)
           __normal_iterator<char**,std::vector<char*,std::allocator<char*>>>::base
                     ((__normal_iterator<char**,std::vector<char*,std::allocator<char*>>> *)param_1)
  ;
  *(undefined8 *)this = *puVar1;
  return;
}




/* std::_Vector_base<char*, std::allocator<char*> >::_M_allocate(unsigned long) */

undefined8 __thiscall
std::_Vector_base<char*,std::allocator<char*>>::_M_allocate
          (_Vector_base<char*,std::allocator<char*>> *this,ulong param_1)

{
  undefined8 uVar1;
  
  if (param_1 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = allocator_traits<std::allocator<char*>>::allocate((allocator *)this,param_1);
  }
  return uVar1;
}




/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* void std::_Destroy<char**>(char**, char**) */

void std::_Destroy<char**>(char **param_1,char **param_2)

{
  _Destroy_aux<true>::__destroy<char**>(param_1,param_2);
  return;
}




/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* char** std::fill_n<char**, unsigned long, char*>(char**, unsigned long, char* const&) */

char ** std::fill_n<char**,unsigned_long,char*>(char **param_1,ulong param_2,char **param_3)

{
  __type _Var1;
  char **ppcVar2;
  undefined4 extraout_var;
  char **local_10;
  
  local_10 = param_1;
  ppcVar2 = __niter_base<char**>(param_1);
  _Var1 = __fill_n_a<char**,unsigned_long,char*>(ppcVar2,param_2,param_3);
  ppcVar2 = __niter_wrap<char**>(&local_10,(char **)CONCAT44(extraout_var,_Var1));
  return ppcVar2;
}




/* std::vector<char*, std::allocator<char*> >::_Temporary_value::~_Temporary_value() */

void __thiscall
std::vector<char*,std::allocator<char*>>::_Temporary_value::~_Temporary_value
          (_Temporary_value *this)

{
  char **ppcVar1;
  
  ppcVar1 = (char **)_M_ptr(this);
  allocator_traits<std::allocator<char*>>::destroy<char*>(*(allocator **)this,ppcVar1);
  return;
}




void bad1(void)

{
  return;
}




/* new_allocator<char*>::deallocate(char**, unsigned long) */

void new_allocator<char*>::deallocate(char **param_1,ulong param_2)

{
  operator_delete((void *)param_2);
  return;
}




/* std::allocator_traits<std::allocator<char*> >::allocate(std::allocator<char*>&, unsigned long) */

void std::allocator_traits<std::allocator<char*>>::allocate(allocator *param_1,ulong param_2)

{
  new_allocator<char*>::allocate((ulong)param_1,(void *)param_2);
  return;
}




/* std::_Vector_base<char*, std::allocator<char*> >::_Vector_impl::_Vector_impl() */

void __thiscall
std::_Vector_base<char*,std::allocator<char*>>::_Vector_impl::_Vector_impl(_Vector_impl *this)

{
  allocator<char*>::allocator();
  _Vector_impl_data::_Vector_impl_data((_Vector_impl_data *)this);
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




/* __normal_iterator<char* const*, std::vector<char*, std::allocator<char*> >
   >::__normal_iterator(char* const* const&) */

void __thiscall
__normal_iterator<char*const*,std::vector<char*,std::allocator<char*>>>::__normal_iterator
          (__normal_iterator<char*const*,std::vector<char*,std::allocator<char*>>> *this,
          char ***param_1)

{
  *(char ***)this = *param_1;
  return;
}




/* char** std::__uninitialized_copy<true>::__uninit_copy<std::move_iterator<char**>,
   char**>(std::move_iterator<char**>, std::move_iterator<char**>, char**) */

char ** std::__uninitialized_copy<true>::__uninit_copy<std::move_iterator<char**>,char**>
                  (move_iterator param_1,move_iterator param_2,char **param_3)

{
  char **ppcVar1;
  
  ppcVar1 = copy<std::move_iterator<char**>,char**>(param_1,param_2,param_3);
  return ppcVar1;
}




void printLongLine(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




/* char** std::__copy_move_backward<true, true,
   std::random_access_iterator_tag>::__copy_move_b<char*>(char* const*, char* const*, char**) */

char ** std::__copy_move_backward<true,true,std::random_access_iterator_tag>::__copy_move_b<char*>
                  (char **param_1,char **param_2,char **param_3)

{
  long lVar1;
  
  lVar1 = (long)param_2 - (long)param_1 >> 3;
  if (lVar1 != 0) {
    memmove(param_3 + -lVar1,param_1,lVar1 * 8);
  }
  return param_3 + -lVar1;
}




/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* char** std::copy<std::move_iterator<char**>, char**>(std::move_iterator<char**>,
   std::move_iterator<char**>, char**) */

char ** std::copy<std::move_iterator<char**>,char**>
                  (move_iterator param_1,move_iterator param_2,char **param_3)

{
  char **ppcVar1;
  char **ppcVar2;
  
  ppcVar1 = (char **)__miter_base<char**>(param_2);
  ppcVar2 = (char **)__miter_base<char**>(param_1);
  ppcVar1 = __copy_move_a2<true,char**,char**>(ppcVar2,ppcVar1,param_3);
  return ppcVar1;
}




/* char** std::__copy_move<true, true, std::random_access_iterator_tag>::__copy_m<char*>(char*
   const*, char* const*, char**) */

char ** std::__copy_move<true,true,std::random_access_iterator_tag>::__copy_m<char*>
                  (char **param_1,char **param_2,char **param_3)

{
  long lVar1;
  
  lVar1 = (long)param_2 - (long)param_1 >> 3;
  if (lVar1 != 0) {
    memmove(param_3,param_1,lVar1 * 8);
  }
  return param_3 + lVar1;
}




void printWLine(long param_1)

{
  if (param_1 != 0) {
    wprintf(L"%ls\n",param_1);
  }
  return;
}




void good7(void)

{
  return;
}




void internal_start(long param_1)

{
  (**(code **)(param_1 + 8))(*(undefined8 *)(param_1 + 0x10));
                    /* WARNING: Subroutine does not return */
  pthread_exit((void *)0x0);
}




/* std::allocator_traits<std::allocator<char*> >::deallocate(std::allocator<char*>&, char**,
   unsigned long) */

void std::allocator_traits<std::allocator<char*>>::deallocate
               (allocator *param_1,char **param_2,ulong param_3)

{
  new_allocator<char*>::deallocate((char **)param_1,(ulong)param_2);
  return;
}




/* std::vector<char*, std::allocator<char*> >::operator[](unsigned long) */

long __thiscall
std::vector<char*,std::allocator<char*>>::operator[]
          (vector<char*,std::allocator<char*>> *this,ulong param_1)

{
  return *(long *)this + param_1 * 8;
}




void printShortLine(short param_1)

{
  printf("%hd\n",(ulong)(uint)(int)param_1);
  return;
}




/* __normal_iterator<char* const*, std::vector<char*, std::allocator<char*> > >
   std::__miter_base<__normal_iterator<char* const*, std::vector<char*, std::allocator<char*> > >
   >(__normal_iterator<char* const*, std::vector<char*, std::allocator<char*> > >) */

undefined8
std::__miter_base<__normal_iterator<char*const*,std::vector<char*,std::allocator<char*>>>>
          (undefined8 param_1)

{
  return param_1;
}




/* void new_allocator<char*>::construct<char*, char* const&>(char**, char* const&) */

void __thiscall
new_allocator<char*>::construct<char*,char*const&>
          (new_allocator<char*> *this,char **param_1,char **param_2)

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




void good6(void)

{
  return;
}




/* CWE134_Uncontrolled_Format_String__char_listen_socket_vfprintf_72::goodG2BVaSink(char*, ...) */

void CWE134_Uncontrolled_Format_String__char_listen_socket_vfprintf_72::goodG2BVaSink
               (char *param_1,undefined param_2,undefined param_3,undefined param_4,
               undefined param_5,undefined param_6,undefined param_7,...)

{
  char in_AL;
  long in_FS_OFFSET;
  undefined8 in_XMM0_Qa;
  undefined8 in_XMM1_Qa;
  undefined8 in_XMM2_Qa;
  undefined8 in_XMM3_Qa;
  undefined8 in_XMM4_Qa;
  undefined8 in_XMM5_Qa;
  undefined8 in_XMM6_Qa;
  undefined8 in_XMM7_Qa;
  undefined4 local_d8;
  undefined4 local_d4;
  undefined *local_d0;
  undefined *local_c8;
  long local_c0;
  undefined local_b8 [8];
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_78;
  undefined8 local_68;
  undefined8 local_58;
  undefined8 local_48;
  undefined8 local_38;
  undefined8 local_28;
  undefined8 local_18;
  
  if (in_AL != '\0') {
    local_88 = in_XMM0_Qa;
    local_78 = in_XMM1_Qa;
    local_68 = in_XMM2_Qa;
    local_58 = in_XMM3_Qa;
    local_48 = in_XMM4_Qa;
    local_38 = in_XMM5_Qa;
    local_28 = in_XMM6_Qa;
    local_18 = in_XMM7_Qa;
  }
  local_c0 = *(long *)(in_FS_OFFSET + 0x28);
  local_d8 = 8;
  local_d4 = 0x30;
  local_d0 = &param_7;
  local_c8 = local_b8;
  local_b0 = _param_2;
  local_a8 = _param_3;
  local_a0 = _param_4;
  local_98 = _param_5;
  local_90 = _param_6;
  vfprintf(stdout,param_1,&local_d8);
  if (local_c0 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* char** std::__uninitialized_fill_n_a<char**, unsigned long, char*, char*>(char**, unsigned long,
   char* const&, std::allocator<char*>&) */

char ** std::__uninitialized_fill_n_a<char**,unsigned_long,char*,char*>
                  (char **param_1,ulong param_2,char **param_3,allocator *param_4)

{
  char **ppcVar1;
  
  ppcVar1 = uninitialized_fill_n<char**,unsigned_long,char*>(param_1,param_2,param_3);
  return ppcVar1;
}




void printLongLongLine(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




void bad7(void)

{
  return;
}




/* __normal_iterator<char**, std::vector<char*, std::allocator<char*> > >::__normal_iterator(char**
   const&) */

void __thiscall
__normal_iterator<char**,std::vector<char*,std::allocator<char*>>>::__normal_iterator
          (__normal_iterator<char**,std::vector<char*,std::allocator<char*>>> *this,char ***param_1)

{
  *(char ***)this = *param_1;
  return;
}




/* std::_Vector_base<char*, std::allocator<char*> >::_M_get_Tp_allocator() */

_Vector_base<char*,std::allocator<char*>> * __thiscall
std::_Vector_base<char*,std::allocator<char*>>::_M_get_Tp_allocator
          (_Vector_base<char*,std::allocator<char*>> *this)

{
  return this;
}




/* std::_Vector_base<char*, std::allocator<char*> >::_M_get_Tp_allocator() const */

_Vector_base<char*,std::allocator<char*>> * __thiscall
std::_Vector_base<char*,std::allocator<char*>>::_M_get_Tp_allocator
          (_Vector_base<char*,std::allocator<char*>> *this)

{
  return this;
}




/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* char** std::__niter_wrap<char**>(char** const&, char**) */

char ** std::__niter_wrap<char**>(char ***param_1,char **param_2)

{
  return param_2;
}




void bad8(void)

{
  return;
}




void stdThreadLockAcquire(pthread_mutex_t *param_1)

{
  pthread_mutex_lock(param_1);
  return;
}




/* new_allocator<char*>::new_allocator() */

void new_allocator<char*>::new_allocator(void)

{
  return;
}




/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* char** std::__niter_base<char**>(char**) */

char ** std::__niter_base<char**>(char **param_1)

{
  return param_1;
}




/* std::_Vector_base<char*, std::allocator<char*> >::_Vector_base() */

void __thiscall
std::_Vector_base<char*,std::allocator<char*>>::_Vector_base
          (_Vector_base<char*,std::allocator<char*>> *this)

{
  _Vector_impl::_Vector_impl((_Vector_impl *)this);
  return;
}




/* new_allocator<char*>::max_size() const */

undefined8 new_allocator<char*>::max_size(void)

{
  return 0xfffffffffffffff;
}




/* CWE134_Uncontrolled_Format_String__char_listen_socket_vfprintf_72::goodG2B() */

void CWE134_Uncontrolled_Format_String__char_listen_socket_vfprintf_72::goodG2B(void)

{
  long in_FS_OFFSET;
  undefined8 *local_d8;
  undefined8 local_d0;
  vector<char*,std::allocator<char*>> local_c8 [32];
  undefined8 local_a8 [4];
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined4 local_28;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  std::vector<char*,std::allocator<char*>>::vector(local_c8);
  local_78 = 0;
  local_70 = 0;
  local_68 = 0;
  local_60 = 0;
  local_58 = 0;
  local_50 = 0;
  local_48 = 0;
  local_40 = 0;
  local_38 = 0;
  local_30 = 0;
  local_28 = 0;
  local_d8 = &local_88;
  local_88 = 0x7274736465786966;
  local_80 = 0x74736574676e69;
  local_d0 = std::vector<char*,std::allocator<char*>>::end(local_c8);
  __normal_iterator<char*const*,std::vector<char*,std::allocator<char*>>>::__normal_iterator<char**>
            ((__normal_iterator<char*const*,std::vector<char*,std::allocator<char*>>> *)local_a8,
             (__normal_iterator *)&local_d0);
                    /* try { // try from 00102eee to 00102fb3 has its CatchHandler @ 0010300b */
  std::vector<char*,std::allocator<char*>>::insert(local_c8,local_a8[0],1,&local_d8);
  local_d0 = std::vector<char*,std::allocator<char*>>::end(local_c8);
  __normal_iterator<char*const*,std::vector<char*,std::allocator<char*>>>::__normal_iterator<char**>
            ((__normal_iterator<char*const*,std::vector<char*,std::allocator<char*>>> *)local_a8,
             (__normal_iterator *)&local_d0);
  std::vector<char*,std::allocator<char*>>::insert(local_c8,local_a8[0],1,&local_d8);
  local_d0 = std::vector<char*,std::allocator<char*>>::end(local_c8);
  __normal_iterator<char*const*,std::vector<char*,std::allocator<char*>>>::__normal_iterator<char**>
            ((__normal_iterator<char*const*,std::vector<char*,std::allocator<char*>>> *)local_a8,
             (__normal_iterator *)&local_d0);
  std::vector<char*,std::allocator<char*>>::insert(local_c8,local_a8[0],1,&local_d8);
  std::vector<char*,std::allocator<char*>>::vector
            ((vector<char*,std::allocator<char*>> *)local_a8,(vector *)local_c8);
                    /* try { // try from 00102fbe to 00102fc2 has its CatchHandler @ 00102ff3 */
  goodG2BSink((vector)local_a8);
  std::vector<char*,std::allocator<char*>>::~vector((vector<char*,std::allocator<char*>> *)local_a8)
  ;
  std::vector<char*,std::allocator<char*>>::~vector(local_c8);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




/* std::vector<char*, std::allocator<char*> >::~vector() */

void __thiscall
std::vector<char*,std::allocator<char*>>::~vector(vector<char*,std::allocator<char*>> *this)

{
  allocator *paVar1;
  
  paVar1 = (allocator *)
           _Vector_base<char*,std::allocator<char*>>::_M_get_Tp_allocator
                     ((_Vector_base<char*,std::allocator<char*>> *)this);
  _Destroy<char**,char*>(*(char ***)this,*(char ***)(this + 8),paVar1);
  _Vector_base<char*,std::allocator<char*>>::~_Vector_base
            ((_Vector_base<char*,std::allocator<char*>> *)this);
  return;
}




/* std::allocator<char*>::allocator(std::allocator<char*> const&) */

void std::allocator<char*>::allocator(allocator *param_1)

{
  new_allocator<char*>::new_allocator((new_allocator *)param_1);
  return;
}




/* std::vector<char*, std::allocator<char*> >::cbegin() const */

undefined8 __thiscall
std::vector<char*,std::allocator<char*>>::cbegin(vector<char*,std::allocator<char*>> *this)

{
  long in_FS_OFFSET;
  char **local_20;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_20 = *(char ***)this;
  __normal_iterator<char*const*,std::vector<char*,std::allocator<char*>>>::__normal_iterator
            ((__normal_iterator<char*const*,std::vector<char*,std::allocator<char*>>> *)&local_18,
             &local_20);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




/* char** std::__uninitialized_fill_n<true>::__uninit_fill_n<char**, unsigned long, char*>(char**,
   unsigned long, char* const&) */

char ** std::__uninitialized_fill_n<true>::__uninit_fill_n<char**,unsigned_long,char*>
                  (char **param_1,ulong param_2,char **param_3)

{
  char **ppcVar1;
  
  ppcVar1 = fill_n<char**,unsigned_long,char*>(param_1,param_2,param_3);
  return ppcVar1;
}




void printStructLine(uint *param_1)

{
  printf("%d -- %d\n",(ulong)*param_1,(ulong)param_1[1]);
  return;
}




/* std::allocator_traits<std::allocator<char*> >::max_size(std::allocator<char*> const&) */

void std::allocator_traits<std::allocator<char*>>::max_size(allocator *param_1)

{
  new_allocator<char*>::max_size();
  return;
}




/* __alloc_traits<std::allocator<char*>, char*>::_S_select_on_copy(std::allocator<char*> const&) */

allocator * __alloc_traits<std::allocator<char*>,char*>::_S_select_on_copy(allocator *param_1)

{
  long lVar1;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  std::allocator_traits<std::allocator<char*>>::select_on_container_copy_construction(param_1);
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1;
}




/* char** std::__copy_move<false, true, std::random_access_iterator_tag>::__copy_m<char*>(char*
   const*, char* const*, char**) */

char ** std::__copy_move<false,true,std::random_access_iterator_tag>::__copy_m<char*>
                  (char **param_1,char **param_2,char **param_3)

{
  long lVar1;
  
  lVar1 = (long)param_2 - (long)param_1 >> 3;
  if (lVar1 != 0) {
    memmove(param_3,param_1,lVar1 * 8);
  }
  return param_3 + lVar1;
}




void printIntLine(uint param_1)

{
  printf("%d\n",(ulong)param_1);
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




/* new_allocator<char*>::new_allocator(new_allocator<char*> const&) */

void new_allocator<char*>::new_allocator(new_allocator *param_1)

{
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




/* CWE134_Uncontrolled_Format_String__char_listen_socket_vfprintf_72::goodG2BSink(std::vector<char*,
   std::allocator<char*> >) */

void CWE134_Uncontrolled_Format_String__char_listen_socket_vfprintf_72::goodG2BSink(vector param_1)

{
  undefined8 *puVar1;
  undefined in_CL;
  undefined uVar2;
  undefined4 in_register_0000003c;
  undefined in_R8B;
  undefined in_R9B;
  
  puVar1 = (undefined8 *)
           std::vector<char*,std::allocator<char*>>::operator[]
                     ((vector<char*,std::allocator<char*>> *)CONCAT44(in_register_0000003c,param_1),
                      2);
  uVar2 = SUB81((char *)*puVar1,0);
  goodG2BVaSink((char *)*puVar1,uVar2,uVar2,in_CL,in_R8B,in_R9B);
  return;
}




/* std::_Vector_base<char*, std::allocator<char*> >::_Vector_base(unsigned long,
   std::allocator<char*> const&) */

void __thiscall
std::_Vector_base<char*,std::allocator<char*>>::_Vector_base
          (_Vector_base<char*,std::allocator<char*>> *this,ulong param_1,allocator *param_2)

{
  _Vector_impl::_Vector_impl((_Vector_impl *)this,param_2);
                    /* try { // try from 001040fe to 00104102 has its CatchHandler @ 00104105 */
  _M_create_storage(this,param_1);
  return;
}




/* std::vector<char*, std::allocator<char*> >::max_size() const */

void __thiscall
std::vector<char*,std::allocator<char*>>::max_size(vector<char*,std::allocator<char*>> *this)

{
  allocator *paVar1;
  
  paVar1 = (allocator *)
           _Vector_base<char*,std::allocator<char*>>::_M_get_Tp_allocator
                     ((_Vector_base<char*,std::allocator<char*>> *)this);
  _S_max_size(paVar1);
  return;
}




void bad4(void)

{
  return;
}




/* std::vector<char*, std::allocator<char*> >::begin() const */

undefined8 __thiscall
std::vector<char*,std::allocator<char*>>::begin(vector<char*,std::allocator<char*>> *this)

{
  long in_FS_OFFSET;
  char **local_20;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_20 = *(char ***)this;
  __normal_iterator<char*const*,std::vector<char*,std::allocator<char*>>>::__normal_iterator
            ((__normal_iterator<char*const*,std::vector<char*,std::allocator<char*>>> *)&local_18,
             &local_20);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




int globalReturnsTrueOrFalse(void)

{
  int iVar1;
  
  iVar1 = rand();
  return iVar1 % 2;
}




/* std::_Vector_base<char*, std::allocator<char*> >::_M_deallocate(char**, unsigned long) */

void __thiscall
std::_Vector_base<char*,std::allocator<char*>>::_M_deallocate
          (_Vector_base<char*,std::allocator<char*>> *this,char **param_1,ulong param_2)

{
  if (param_1 != (char **)0x0) {
    allocator_traits<std::allocator<char*>>::deallocate((allocator *)this,param_1,param_2);
  }
  return;
}




undefined8 globalReturnsFalse(void)

{
  return 0;
}




/* CWE134_Uncontrolled_Format_String__char_listen_socket_vfprintf_72::badSink(std::vector<char*,
   std::allocator<char*> >) */

void CWE134_Uncontrolled_Format_String__char_listen_socket_vfprintf_72::badSink(vector param_1)

{
  undefined8 *puVar1;
  undefined in_CL;
  undefined uVar2;
  undefined4 in_register_0000003c;
  undefined in_R8B;
  undefined in_R9B;
  
  puVar1 = (undefined8 *)
           std::vector<char*,std::allocator<char*>>::operator[]
                     ((vector<char*,std::allocator<char*>> *)CONCAT44(in_register_0000003c,param_1),
                      2);
  uVar2 = SUB81((char *)*puVar1,0);
  badVaSink((char *)*puVar1,uVar2,uVar2,in_CL,in_R8B,in_R9B);
  return;
}




/* __normal_iterator<char**, std::vector<char*, std::allocator<char*> >
   >::TEMPNAMEPLACEHOLDERVALUE(long) const */

undefined8 __thiscall
__normal_iterator<char**,std::vector<char*,std::allocator<char*>>>::operator+
          (__normal_iterator<char**,std::vector<char*,std::allocator<char*>>> *this,long param_1)

{
  long in_FS_OFFSET;
  char **local_20;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_20 = (char **)(*(long *)this + param_1 * 8);
  __normal_iterator((__normal_iterator<char**,std::vector<char*,std::allocator<char*>>> *)&local_18,
                    &local_20);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* std::move_iterator<char**> std::make_move_iterator<char**>(char**) */

move_iterator std::make_move_iterator<char**>(char **param_1)

{
  long in_FS_OFFSET;
  move_iterator local_18 [2];
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  move_iterator<char**>::move_iterator((move_iterator<char**> *)local_18,param_1);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18[0];
}




/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* char** std::move_backward<char**, char**>(char**, char**, char**) */

char ** std::move_backward<char**,char**>(char **param_1,char **param_2,char **param_3)

{
  char **ppcVar1;
  char **ppcVar2;
  
  ppcVar1 = __miter_base<char**>(param_2);
  ppcVar2 = __miter_base<char**>(param_1);
  ppcVar1 = __copy_move_backward_a2<true,char**,char**>(ppcVar2,ppcVar1,param_3);
  return ppcVar1;
}




/* __normal_iterator<char* const*, std::vector<char*, std::allocator<char*> > >::base() const */

__normal_iterator<char*const*,std::vector<char*,std::allocator<char*>>> * __thiscall
__normal_iterator<char*const*,std::vector<char*,std::allocator<char*>>>::base
          (__normal_iterator<char*const*,std::vector<char*,std::allocator<char*>>> *this)

{
  return this;
}




/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* void std::fill<char**, char*>(char**, char**, char* const&) */

void std::fill<char**,char*>(char **param_1,char **param_2,char **param_3)

{
  char **ppcVar1;
  char **ppcVar2;
  
  ppcVar1 = __niter_base<char**>(param_2);
  ppcVar2 = __niter_base<char**>(param_1);
  __fill_a<char**,char*>(ppcVar2,ppcVar1,param_3);
  return;
}




/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* __enable_if<std::__is_scalar<char*>::__value, char**>::__type std::__fill_n_a<char**, unsigned
   long, char*>(char**, unsigned long, char* const&) */

__type std::__fill_n_a<char**,unsigned_long,char*>(char **param_1,ulong param_2,char **param_3)

{
  char *pcVar1;
  char **local_20;
  ulong local_18;
  
  pcVar1 = *param_3;
  local_20 = param_1;
  for (local_18 = param_2; local_18 != 0; local_18 = local_18 - 1) {
    *local_20 = pcVar1;
    local_20 = local_20 + 1;
  }
  return (__type)local_20;
}




/* char** std::copy<__normal_iterator<char* const*, std::vector<char*, std::allocator<char*> > >,
   char**>(__normal_iterator<char* const*, std::vector<char*, std::allocator<char*> > >,
   __normal_iterator<char* const*, std::vector<char*, std::allocator<char*> > >, char**) */

void std::copy<__normal_iterator<char*const*,std::vector<char*,std::allocator<char*>>>,char**>
               (undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = __miter_base<__normal_iterator<char*const*,std::vector<char*,std::allocator<char*>>>>
                    (param_2);
  uVar2 = __miter_base<__normal_iterator<char*const*,std::vector<char*,std::allocator<char*>>>>
                    (param_1);
  __copy_move_a2<false,__normal_iterator<char*const*,std::vector<char*,std::allocator<char*>>>,char**>
            (uVar2,uVar1,param_3);
  return;
}




void stdThreadLockRelease(pthread_mutex_t *param_1)

{
  pthread_mutex_unlock(param_1);
  return;
}




/* std::vector<char*, std::allocator<char*> >::size() const */

long __thiscall
std::vector<char*,std::allocator<char*>>::size(vector<char*,std::allocator<char*>> *this)

{
  return *(long *)(this + 8) - *(long *)this >> 3;
}




void bad5(void)

{
  return;
}




/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* char** std::uninitialized_copy<std::move_iterator<char**>, char**>(std::move_iterator<char**>,
   std::move_iterator<char**>, char**) */

char ** std::uninitialized_copy<std::move_iterator<char**>,char**>
                  (move_iterator param_1,move_iterator param_2,char **param_3)

{
  char **ppcVar1;
  
  ppcVar1 = __uninitialized_copy<true>::__uninit_copy<std::move_iterator<char**>,char**>
                      (param_1,param_2,param_3);
  return ppcVar1;
}




/* std::_Vector_base<char*, std::allocator<char*> >::_M_create_storage(unsigned long) */

void __thiscall
std::_Vector_base<char*,std::allocator<char*>>::_M_create_storage
          (_Vector_base<char*,std::allocator<char*>> *this,ulong param_1)

{
  undefined8 uVar1;
  
  uVar1 = _M_allocate(this,param_1);
  *(undefined8 *)this = uVar1;
  *(undefined8 *)(this + 8) = *(undefined8 *)this;
  *(ulong *)(this + 0x10) = param_1 * 8 + *(long *)this;
  return;
}




/* void std::allocator_traits<std::allocator<char*> >::construct<char*, char*
   const&>(std::allocator<char*>&, char**, char* const&) */

void std::allocator_traits<std::allocator<char*>>::construct<char*,char*const&>
               (allocator *param_1,char **param_2,char **param_3)

{
  char **ppcVar1;
  
  ppcVar1 = forward<char*const&>((type *)param_3);
  new_allocator<char*>::construct<char*,char*const&>
            ((new_allocator<char*> *)param_1,param_2,ppcVar1);
  return;
}




void printFloatLine(float param_1)

{
  printf("%f\n",(double)param_1);
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




void printHexUnsignedCharLine(byte param_1)

{
  printf("%02x\n",(ulong)param_1);
  return;
}




/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* __enable_if<std::__is_scalar<char*>::__value, void>::__type std::__fill_a<char**, char*>(char**,
   char**, char* const&) */

__type std::__fill_a<char**,char*>(char **param_1,char **param_2,char **param_3)

{
  char *pcVar1;
  char **local_20;
  
  pcVar1 = *param_3;
  for (local_20 = param_1; local_20 != param_2; local_20 = local_20 + 1) {
    *local_20 = pcVar1;
  }
  return (__type)local_20;
}




/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* char** std::__miter_base<char**>(char**) */

char ** std::__miter_base<char**>(char **param_1)

{
  return param_1;
}




/* char** std::uninitialized_copy<__normal_iterator<char* const*, std::vector<char*,
   std::allocator<char*> > >, char**>(__normal_iterator<char* const*, std::vector<char*,
   std::allocator<char*> > >, __normal_iterator<char* const*, std::vector<char*,
   std::allocator<char*> > >, char**) */

void std::
     uninitialized_copy<__normal_iterator<char*const*,std::vector<char*,std::allocator<char*>>>,char**>
               (undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  __uninitialized_copy<true>::
  __uninit_copy<__normal_iterator<char*const*,std::vector<char*,std::allocator<char*>>>,char**>
            (param_1,param_2,param_3);
  return;
}




/* void std::allocator_traits<std::allocator<char*> >::destroy<char*>(std::allocator<char*>&,
   char**) */

void std::allocator_traits<std::allocator<char*>>::destroy<char*>(allocator *param_1,char **param_2)

{
  new_allocator<char*>::destroy<char*>((char **)param_1);
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
/* decltype (__miter_base(({parm#1}.base)())) std::__miter_base<char**>(std::move_iterator<char**>)
    */

void std::__miter_base<char**>(move_iterator param_1)

{
  char **ppcVar1;
  undefined4 in_register_0000003c;
  undefined8 local_10;
  
  local_10 = CONCAT44(in_register_0000003c,param_1);
  ppcVar1 = (char **)move_iterator<char**>::base((move_iterator<char**> *)&local_10);
  __miter_base<char**>(ppcVar1);
  return;
}




/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* char** std::__uninitialized_move_if_noexcept_a<char**, char**, std::allocator<char*> >(char**,
   char**, char**, std::allocator<char*>&) */

char ** std::__uninitialized_move_if_noexcept_a<char**,char**,std::allocator<char*>>
                  (char **param_1,char **param_2,char **param_3,allocator *param_4)

{
  move_iterator mVar1;
  move_iterator mVar2;
  char **ppcVar3;
  
  mVar1 = __make_move_if_noexcept_iterator<char*,std::move_iterator<char**>>(param_2);
  mVar2 = __make_move_if_noexcept_iterator<char*,std::move_iterator<char**>>(param_1);
  ppcVar3 = __uninitialized_copy_a<std::move_iterator<char**>,char**,char*>
                      (mVar2,mVar1,param_3,param_4);
  return ppcVar3;
}




/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* std::move_iterator<char**> std::__make_move_if_noexcept_iterator<char*,
   std::move_iterator<char**> >(char**) */

move_iterator
std::__make_move_if_noexcept_iterator<char*,std::move_iterator<char**>>(char **param_1)

{
  long in_FS_OFFSET;
  move_iterator local_18 [2];
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  move_iterator<char**>::move_iterator((move_iterator<char**> *)local_18,param_1);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18[0];
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




/* CWE134_Uncontrolled_Format_String__char_listen_socket_vfprintf_72::goodB2G() */

void CWE134_Uncontrolled_Format_String__char_listen_socket_vfprintf_72::goodB2G(void)

{
  int __fd;
  int iVar1;
  ssize_t sVar2;
  long in_FS_OFFSET;
  int local_104;
  char *local_f8;
  undefined8 local_f0;
  size_t local_e8;
  char *local_e0;
  vector<char*,std::allocator<char*>> local_d8 [32];
  undefined8 local_b8 [4];
  sockaddr local_98;
  char local_88 [104];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  std::vector<char*,std::allocator<char*>>::vector(local_d8);
  local_88[0] = '\0';
  local_88[1] = '\0';
  local_88[2] = '\0';
  local_88[3] = '\0';
  local_88[4] = '\0';
  local_88[5] = '\0';
  local_88[6] = '\0';
  local_88[7] = '\0';
  local_88[8] = '\0';
  local_88[9] = '\0';
  local_88[10] = '\0';
  local_88[0xb] = '\0';
  local_88[0xc] = '\0';
  local_88[0xd] = '\0';
  local_88[0xe] = '\0';
  local_88[0xf] = '\0';
  local_88[0x10] = '\0';
  local_88[0x11] = '\0';
  local_88[0x12] = '\0';
  local_88[0x13] = '\0';
  local_88[0x14] = '\0';
  local_88[0x15] = '\0';
  local_88[0x16] = '\0';
  local_88[0x17] = '\0';
  local_88[0x18] = '\0';
  local_88[0x19] = '\0';
  local_88[0x1a] = '\0';
  local_88[0x1b] = '\0';
  local_88[0x1c] = '\0';
  local_88[0x1d] = '\0';
  local_88[0x1e] = '\0';
  local_88[0x1f] = '\0';
  local_88[0x20] = '\0';
  local_88[0x21] = '\0';
  local_88[0x22] = '\0';
  local_88[0x23] = '\0';
  local_88[0x24] = '\0';
  local_88[0x25] = '\0';
  local_88[0x26] = '\0';
  local_88[0x27] = '\0';
  local_88[0x28] = '\0';
  local_88[0x29] = '\0';
  local_88[0x2a] = '\0';
  local_88[0x2b] = '\0';
  local_88[0x2c] = '\0';
  local_88[0x2d] = '\0';
  local_88[0x2e] = '\0';
  local_88[0x2f] = '\0';
  local_88[0x30] = '\0';
  local_88[0x31] = '\0';
  local_88[0x32] = '\0';
  local_88[0x33] = '\0';
  local_88[0x34] = '\0';
  local_88[0x35] = '\0';
  local_88[0x36] = '\0';
  local_88[0x37] = '\0';
  local_88[0x38] = '\0';
  local_88[0x39] = '\0';
  local_88[0x3a] = '\0';
  local_88[0x3b] = '\0';
  local_88[0x3c] = '\0';
  local_88[0x3d] = '\0';
  local_88[0x3e] = '\0';
  local_88[0x3f] = '\0';
  local_88[0x40] = '\0';
  local_88[0x41] = '\0';
  local_88[0x42] = '\0';
  local_88[0x43] = '\0';
  local_88[0x44] = '\0';
  local_88[0x45] = '\0';
  local_88[0x46] = '\0';
  local_88[0x47] = '\0';
  local_88[0x48] = '\0';
  local_88[0x49] = '\0';
  local_88[0x4a] = '\0';
  local_88[0x4b] = '\0';
  local_88[0x4c] = '\0';
  local_88[0x4d] = '\0';
  local_88[0x4e] = '\0';
  local_88[0x4f] = '\0';
  local_88[0x50] = '\0';
  local_88[0x51] = '\0';
  local_88[0x52] = '\0';
  local_88[0x53] = '\0';
  local_88[0x54] = '\0';
  local_88[0x55] = '\0';
  local_88[0x56] = '\0';
  local_88[0x57] = '\0';
  local_88[0x58] = '\0';
  local_88[0x59] = '\0';
  local_88[0x5a] = '\0';
  local_88[0x5b] = '\0';
  local_88[0x5c] = '\0';
  local_88[0x5d] = '\0';
  local_88[0x5e] = '\0';
  local_88[0x5f] = '\0';
  local_88[0x60] = '\0';
  local_88[0x61] = '\0';
  local_88[0x62] = '\0';
  local_88[99] = '\0';
  local_f8 = local_88;
  local_104 = -1;
  local_e8 = strlen(local_f8);
  __fd = socket(2,1,6);
  if (__fd != -1) {
    memset(&local_98,0,0x10);
    local_98.sa_family = 2;
    local_98.sa_data[2] = '\0';
    local_98.sa_data[3] = '\0';
    local_98.sa_data[4] = '\0';
    local_98.sa_data[5] = '\0';
    local_98.sa_data._0_2_ = htons(0x6987);
    iVar1 = bind(__fd,&local_98,0x10);
                    /* try { // try from 001031c5 to 001033fa has its CatchHandler @ 00103452 */
    if (((iVar1 != -1) && (iVar1 = listen(__fd,5), iVar1 != -1)) &&
       (local_104 = accept(__fd,(sockaddr *)0x0,(socklen_t *)0x0), local_104 != -1)) {
      sVar2 = recv(local_104,local_f8 + local_e8,99 - local_e8,0);
      iVar1 = (int)sVar2;
      if ((iVar1 != -1) && (iVar1 != 0)) {
        local_f8[local_e8 + (long)iVar1] = '\0';
        local_e0 = strchr(local_f8,0xd);
        if (local_e0 != (char *)0x0) {
          *local_e0 = '\0';
        }
        local_e0 = strchr(local_f8,10);
        if (local_e0 != (char *)0x0) {
          *local_e0 = '\0';
        }
      }
    }
  }
  if (__fd != -1) {
    close(__fd);
  }
  if (local_104 != -1) {
    close(local_104);
  }
  local_f0 = std::vector<char*,std::allocator<char*>>::end(local_d8);
  __normal_iterator<char*const*,std::vector<char*,std::allocator<char*>>>::__normal_iterator<char**>
            ((__normal_iterator<char*const*,std::vector<char*,std::allocator<char*>>> *)local_b8,
             (__normal_iterator *)&local_f0);
  std::vector<char*,std::allocator<char*>>::insert(local_d8,local_b8[0],1,&local_f8);
  local_f0 = std::vector<char*,std::allocator<char*>>::end(local_d8);
  __normal_iterator<char*const*,std::vector<char*,std::allocator<char*>>>::__normal_iterator<char**>
            ((__normal_iterator<char*const*,std::vector<char*,std::allocator<char*>>> *)local_b8,
             (__normal_iterator *)&local_f0);
  std::vector<char*,std::allocator<char*>>::insert(local_d8,local_b8[0],1,&local_f8);
  local_f0 = std::vector<char*,std::allocator<char*>>::end(local_d8);
  __normal_iterator<char*const*,std::vector<char*,std::allocator<char*>>>::__normal_iterator<char**>
            ((__normal_iterator<char*const*,std::vector<char*,std::allocator<char*>>> *)local_b8,
             (__normal_iterator *)&local_f0);
  std::vector<char*,std::allocator<char*>>::insert(local_d8,local_b8[0],1,&local_f8);
  std::vector<char*,std::allocator<char*>>::vector
            ((vector<char*,std::allocator<char*>> *)local_b8,(vector *)local_d8);
                    /* try { // try from 00103405 to 00103409 has its CatchHandler @ 0010343a */
  goodB2GSink((vector)local_b8);
  std::vector<char*,std::allocator<char*>>::~vector((vector<char*,std::allocator<char*>> *)local_b8)
  ;
  std::vector<char*,std::allocator<char*>>::~vector(local_d8);
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




/* std::_Vector_base<char*, std::allocator<char*> >::_Vector_impl::~_Vector_impl() */

void __thiscall
std::_Vector_base<char*,std::allocator<char*>>::_Vector_impl::~_Vector_impl(_Vector_impl *this)

{
  allocator<char*>::~allocator((allocator<char*> *)this);
  return;
}




/* void std::_Destroy_aux<true>::__destroy<char**>(char**, char**) */

void std::_Destroy_aux<true>::__destroy<char**>(char **param_1,char **param_2)

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
    __isoc99_swscanf(local_18 * 8 + param_3,&DAT_001060b4,local_1c);
    *(char *)(local_18 + param_1) = local_1c[0];
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




/* char** std::__uninitialized_copy_a<__normal_iterator<char* const*, std::vector<char*,
   std::allocator<char*> > >, char**, char*>(__normal_iterator<char* const*, std::vector<char*,
   std::allocator<char*> > >, __normal_iterator<char* const*, std::vector<char*,
   std::allocator<char*> > >, char**, std::allocator<char*>&) */

void std::
     __uninitialized_copy_a<__normal_iterator<char*const*,std::vector<char*,std::allocator<char*>>>,char**,char*>
               (undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  uninitialized_copy<__normal_iterator<char*const*,std::vector<char*,std::allocator<char*>>>,char**>
            (param_1,param_2,param_3);
  return;
}




/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* char** std::__copy_move_backward_a<true, char**, char**>(char**, char**, char**) */

char ** std::__copy_move_backward_a<true,char**,char**>
                  (char **param_1,char **param_2,char **param_3)

{
  char **ppcVar1;
  
  ppcVar1 = __copy_move_backward<true,true,std::random_access_iterator_tag>::__copy_move_b<char*>
                      (param_1,param_2,param_3);
  return ppcVar1;
}




/* std::vector<char*, std::allocator<char*> >::end() const */

undefined8 __thiscall
std::vector<char*,std::allocator<char*>>::end(vector<char*,std::allocator<char*>> *this)

{
  long in_FS_OFFSET;
  char **local_20;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_20 = *(char ***)(this + 8);
  __normal_iterator<char*const*,std::vector<char*,std::allocator<char*>>>::__normal_iterator
            ((__normal_iterator<char*const*,std::vector<char*,std::allocator<char*>>> *)&local_18,
             &local_20);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




/* char* const* std::__niter_base<char* const*, std::vector<char*, std::allocator<char*> >
   >(__normal_iterator<char* const*, std::vector<char*, std::allocator<char*> > >) */

undefined8
std::__niter_base<char*const*,std::vector<char*,std::allocator<char*>>>(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined8 local_10;
  
  local_10 = param_1;
  puVar1 = (undefined8 *)
           __normal_iterator<char*const*,std::vector<char*,std::allocator<char*>>>::base
                     ((__normal_iterator<char*const*,std::vector<char*,std::allocator<char*>>> *)
                      &local_10);
  return *puVar1;
}




/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* char** std::__uninitialized_copy_a<std::move_iterator<char**>, char**,
   char*>(std::move_iterator<char**>, std::move_iterator<char**>, char**, std::allocator<char*>&) */

char ** std::__uninitialized_copy_a<std::move_iterator<char**>,char**,char*>
                  (move_iterator param_1,move_iterator param_2,char **param_3,allocator *param_4)

{
  char **ppcVar1;
  
  ppcVar1 = uninitialized_copy<std::move_iterator<char**>,char**>(param_1,param_2,param_3);
  return ppcVar1;
}




void good9(void)

{
  return;
}




/* std::allocator_traits<std::allocator<char*>
   >::select_on_container_copy_construction(std::allocator<char*> const&) */

allocator *
std::allocator_traits<std::allocator<char*>>::select_on_container_copy_construction
          (allocator *param_1)

{
  allocator<char*>::allocator(param_1);
  return param_1;
}




void bad2(void)

{
  return;
}




undefined8 main(void)

{
  time_t tVar1;
  
  tVar1 = time((time_t *)0x0);
  srand((uint)tVar1);
  printLine("Calling good()...");
  CWE134_Uncontrolled_Format_String__char_listen_socket_vfprintf_72::good();
  printLine("Finished good()");
  printLine("Calling bad()...");
  CWE134_Uncontrolled_Format_String__char_listen_socket_vfprintf_72::bad();
  printLine("Finished bad()");
  return 0;
}




/* std::vector<char*, std::allocator<char*> >::_M_check_len(unsigned long, char const*) const */

ulong __thiscall
std::vector<char*,std::allocator<char*>>::_M_check_len
          (vector<char*,std::allocator<char*>> *this,ulong param_1,char *param_2)

{
  long lVar1;
  long lVar2;
  ulong *puVar3;
  ulong uVar4;
  ulong uVar5;
  long in_FS_OFFSET;
  ulong local_48;
  vector<char*,std::allocator<char*>> *local_40;
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




/* std::_Vector_base<char*, std::allocator<char*> >::_Vector_impl_data::_Vector_impl_data() */

void __thiscall
std::_Vector_base<char*,std::allocator<char*>>::_Vector_impl_data::_Vector_impl_data
          (_Vector_impl_data *this)

{
  *(undefined8 *)this = 0;
  *(undefined8 *)(this + 8) = 0;
  *(undefined8 *)(this + 0x10) = 0;
  return;
}




/* std::vector<char*, std::allocator<char*> >::end() */

undefined8 __thiscall
std::vector<char*,std::allocator<char*>>::end(vector<char*,std::allocator<char*>> *this)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  __normal_iterator<char**,std::vector<char*,std::allocator<char*>>>::__normal_iterator
            ((__normal_iterator<char**,std::vector<char*,std::allocator<char*>>> *)&local_18,
             (char ***)(this + 8));
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




/* new_allocator<char*>::allocate(unsigned long, void const*) */

void new_allocator<char*>::allocate(ulong param_1,void *param_2)

{
  void *pvVar1;
  
  pvVar1 = (void *)max_size();
  if (pvVar1 < param_2) {
    std::__throw_bad_alloc();
  }
  operator_new((long)param_2 << 3);
  return;
}




/* std::vector<char*, std::allocator<char*> >::_M_fill_insert(__normal_iterator<char**,
   std::vector<char*, std::allocator<char*> > >, unsigned long, char* const&) */

void __thiscall
std::vector<char*,std::allocator<char*>>::_M_fill_insert
          (vector<char*,std::allocator<char*>> *this,undefined8 param_2,ulong param_3,char **param_4
          )

{
  long lVar1;
  difference_type dVar2;
  undefined4 extraout_var;
  allocator *paVar3;
  undefined8 *puVar4;
  long *plVar5;
  char **ppcVar6;
  undefined4 extraout_var_00;
  long in_FS_OFFSET;
  undefined8 local_88;
  vector<char*,std::allocator<char*>> *local_80;
  undefined8 local_78;
  char **local_70;
  ulong local_68;
  long local_60;
  char **local_58;
  char **local_50;
  ulong local_48;
  char **local_40;
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
      local_70 = (char **)_Vector_base<char*,std::allocator<char*>>::_M_allocate
                                    ((_Vector_base<char*,std::allocator<char*>> *)local_80,local_68)
      ;
      local_58 = local_70;
      paVar3 = (allocator *)
               _Vector_base<char*,std::allocator<char*>>::_M_get_Tp_allocator
                         ((_Vector_base<char*,std::allocator<char*>> *)local_80);
                    /* try { // try from 00103d72 to 00103dfd has its CatchHandler @ 00103eb5 */
      __uninitialized_fill_n_a<char**,unsigned_long,char*,char*>
                (local_58 + local_60,param_3,param_4,paVar3);
      local_70 = (char **)0x0;
      paVar3 = (allocator *)
               _Vector_base<char*,std::allocator<char*>>::_M_get_Tp_allocator
                         ((_Vector_base<char*,std::allocator<char*>> *)local_80);
      puVar4 = (undefined8 *)
               __normal_iterator<char**,std::vector<char*,std::allocator<char*>>>::base
                         ((__normal_iterator<char**,std::vector<char*,std::allocator<char*>>> *)
                          &local_88);
      local_70 = __uninitialized_move_if_noexcept_a<char**,char**,std::allocator<char*>>
                           (*(char ***)local_80,(char **)*puVar4,local_58,paVar3);
      local_70 = local_70 + param_3;
      paVar3 = (allocator *)
               _Vector_base<char*,std::allocator<char*>>::_M_get_Tp_allocator
                         ((_Vector_base<char*,std::allocator<char*>> *)local_80);
      ppcVar6 = *(char ***)(local_80 + 8);
      puVar4 = (undefined8 *)
               __normal_iterator<char**,std::vector<char*,std::allocator<char*>>>::base
                         ((__normal_iterator<char**,std::vector<char*,std::allocator<char*>>> *)
                          &local_88);
      local_70 = __uninitialized_move_if_noexcept_a<char**,char**,std::allocator<char*>>
                           ((char **)*puVar4,ppcVar6,local_70,paVar3);
      paVar3 = (allocator *)
               _Vector_base<char*,std::allocator<char*>>::_M_get_Tp_allocator
                         ((_Vector_base<char*,std::allocator<char*>> *)local_80);
      _Destroy<char**,char*>(*(char ***)local_80,*(char ***)(local_80 + 8),paVar3);
      _Vector_base<char*,std::allocator<char*>>::_M_deallocate
                ((_Vector_base<char*,std::allocator<char*>> *)local_80,*(char ***)local_80,
                 *(long *)(local_80 + 0x10) - *(long *)local_80 >> 3);
      *(char ***)local_80 = local_58;
      *(char ***)(local_80 + 8) = local_70;
      *(char ***)(local_80 + 0x10) = local_58 + local_68;
    }
    else {
      _Temporary_value::_Temporary_value<char*const&>(local_38,(vector *)this,param_4);
                    /* try { // try from 00103af2 to 00103cc5 has its CatchHandler @ 00103e97 */
      local_50 = (char **)_Temporary_value::_M_val(local_38);
      local_78 = end(local_80);
      dVar2 = operator-((__normal_iterator *)&local_78,(__normal_iterator *)&local_88);
      local_48 = CONCAT44(extraout_var,dVar2);
      local_40 = *(char ***)(local_80 + 8);
      if (param_3 < local_48) {
        paVar3 = (allocator *)
                 _Vector_base<char*,std::allocator<char*>>::_M_get_Tp_allocator
                           ((_Vector_base<char*,std::allocator<char*>> *)local_80);
        __uninitialized_move_a<char**,char**,std::allocator<char*>>
                  ((char **)(param_3 * -8 + *(long *)(local_80 + 8)),*(char ***)(local_80 + 8),
                   *(char ***)(local_80 + 8),paVar3);
        *(ulong *)(local_80 + 8) = param_3 * 8 + *(long *)(local_80 + 8);
        ppcVar6 = local_40 + -param_3;
        puVar4 = (undefined8 *)
                 __normal_iterator<char**,std::vector<char*,std::allocator<char*>>>::base
                           ((__normal_iterator<char**,std::vector<char*,std::allocator<char*>>> *)
                            &local_88);
        move_backward<char**,char**>((char **)*puVar4,ppcVar6,local_40);
        plVar5 = (long *)__normal_iterator<char**,std::vector<char*,std::allocator<char*>>>::base
                                   ((__normal_iterator<char**,std::vector<char*,std::allocator<char*>>>
                                     *)&local_88);
        lVar1 = *plVar5;
        puVar4 = (undefined8 *)
                 __normal_iterator<char**,std::vector<char*,std::allocator<char*>>>::base
                           ((__normal_iterator<char**,std::vector<char*,std::allocator<char*>>> *)
                            &local_88);
        fill<char**,char*>((char **)*puVar4,(char **)(lVar1 + param_3 * 8),local_50);
      }
      else {
        paVar3 = (allocator *)
                 _Vector_base<char*,std::allocator<char*>>::_M_get_Tp_allocator
                           ((_Vector_base<char*,std::allocator<char*>> *)local_80);
        ppcVar6 = __uninitialized_fill_n_a<char**,unsigned_long,char*,char*>
                            (*(char ***)(local_80 + 8),param_3 - local_48,local_50,paVar3);
        *(char ***)(local_80 + 8) = ppcVar6;
        paVar3 = (allocator *)
                 _Vector_base<char*,std::allocator<char*>>::_M_get_Tp_allocator
                           ((_Vector_base<char*,std::allocator<char*>> *)local_80);
        ppcVar6 = *(char ***)(local_80 + 8);
        puVar4 = (undefined8 *)
                 __normal_iterator<char**,std::vector<char*,std::allocator<char*>>>::base
                           ((__normal_iterator<char**,std::vector<char*,std::allocator<char*>>> *)
                            &local_88);
        __uninitialized_move_a<char**,char**,std::allocator<char*>>
                  ((char **)*puVar4,local_40,ppcVar6,paVar3);
        *(ulong *)(local_80 + 8) = local_48 * 8 + *(long *)(local_80 + 8);
        puVar4 = (undefined8 *)
                 __normal_iterator<char**,std::vector<char*,std::allocator<char*>>>::base
                           ((__normal_iterator<char**,std::vector<char*,std::allocator<char*>>> *)
                            &local_88);
        fill<char**,char*>((char **)*puVar4,local_40,local_50);
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




void printUnsignedLine(uint param_1)

{
  printf("%u\n",(ulong)param_1);
  return;
}




/* CWE134_Uncontrolled_Format_String__char_listen_socket_vfprintf_72::goodB2GSink(std::vector<char*,
   std::allocator<char*> >) */

void CWE134_Uncontrolled_Format_String__char_listen_socket_vfprintf_72::goodB2GSink(vector param_1)

{
  undefined8 *puVar1;
  undefined in_CL;
  undefined uVar2;
  undefined4 in_register_0000003c;
  undefined in_R8B;
  undefined in_R9B;
  
  puVar1 = (undefined8 *)
           std::vector<char*,std::allocator<char*>>::operator[]
                     ((vector<char*,std::allocator<char*>> *)CONCAT44(in_register_0000003c,param_1),
                      2);
  uVar2 = SUB81((char *)*puVar1,0);
  goodB2GVaSink((char *)*puVar1,uVar2,uVar2,in_CL,in_R8B,in_R9B);
  return;
}




/* operator new(unsigned long, void*) */

void * operator_new(ulong param_1,void *param_2)

{
  return param_2;
}




void FUN_00102020(void)

{
  (*(code *)PTR_00108e90)();
  return;
}




/* CWE134_Uncontrolled_Format_String__char_listen_socket_vfprintf_72::goodB2GVaSink(char*, ...) */

void CWE134_Uncontrolled_Format_String__char_listen_socket_vfprintf_72::goodB2GVaSink
               (char *param_1,undefined param_2,undefined param_3,undefined param_4,
               undefined param_5,undefined param_6,undefined param_7,...)

{
  char in_AL;
  long in_FS_OFFSET;
  undefined8 in_XMM0_Qa;
  undefined8 in_XMM1_Qa;
  undefined8 in_XMM2_Qa;
  undefined8 in_XMM3_Qa;
  undefined8 in_XMM4_Qa;
  undefined8 in_XMM5_Qa;
  undefined8 in_XMM6_Qa;
  undefined8 in_XMM7_Qa;
  undefined4 local_d8;
  undefined4 local_d4;
  undefined *local_d0;
  undefined *local_c8;
  long local_c0;
  undefined local_b8 [8];
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_78;
  undefined8 local_68;
  undefined8 local_58;
  undefined8 local_48;
  undefined8 local_38;
  undefined8 local_28;
  undefined8 local_18;
  
  if (in_AL != '\0') {
    local_88 = in_XMM0_Qa;
    local_78 = in_XMM1_Qa;
    local_68 = in_XMM2_Qa;
    local_58 = in_XMM3_Qa;
    local_48 = in_XMM4_Qa;
    local_38 = in_XMM5_Qa;
    local_28 = in_XMM6_Qa;
    local_18 = in_XMM7_Qa;
  }
  local_c0 = *(long *)(in_FS_OFFSET + 0x28);
  local_d8 = 8;
  local_d4 = 0x30;
  local_d0 = &param_7;
  local_c8 = local_b8;
  local_b0 = _param_2;
  local_a8 = _param_3;
  local_a0 = _param_4;
  local_98 = _param_5;
  local_90 = _param_6;
  vfprintf(stdout,"%s",&local_d8);
  if (local_c0 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




/* std::vector<char*, std::allocator<char*> >::vector() */

void __thiscall
std::vector<char*,std::allocator<char*>>::vector(vector<char*,std::allocator<char*>> *this)

{
  _Vector_base<char*,std::allocator<char*>>::_Vector_base
            ((_Vector_base<char*,std::allocator<char*>> *)this);
  return;
}




/* std::vector<char*, std::allocator<char*> >::begin() */

undefined8 __thiscall
std::vector<char*,std::allocator<char*>>::begin(vector<char*,std::allocator<char*>> *this)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  __normal_iterator<char**,std::vector<char*,std::allocator<char*>>>::__normal_iterator
            ((__normal_iterator<char**,std::vector<char*,std::allocator<char*>>> *)&local_18,
             (char ***)this);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




/* CWE134_Uncontrolled_Format_String__char_listen_socket_vfprintf_72::good() */

void CWE134_Uncontrolled_Format_String__char_listen_socket_vfprintf_72::good(void)

{
  goodG2B();
  goodB2G();
  return;
}




/* std::vector<char*, std::allocator<char*> >::_Temporary_value::_M_ptr() */

_Temporary_value * __thiscall
std::vector<char*,std::allocator<char*>>::_Temporary_value::_M_ptr(_Temporary_value *this)

{
  return this + 8;
}




/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* char** std::__copy_move_a2<true, char**, char**>(char**, char**, char**) */

char ** std::__copy_move_a2<true,char**,char**>(char **param_1,char **param_2,char **param_3)

{
  char **ppcVar1;
  char **ppcVar2;
  char **ppcVar3;
  char **local_30;
  char **local_28;
  char **local_20;
  
  local_30 = param_3;
  local_28 = param_2;
  local_20 = param_1;
  ppcVar1 = __niter_base<char**>(param_3);
  ppcVar2 = __niter_base<char**>(local_28);
  ppcVar3 = __niter_base<char**>(local_20);
  ppcVar1 = __copy_move_a<true,char**,char**>(ppcVar3,ppcVar2,ppcVar1);
  ppcVar1 = __niter_wrap<char**>(&local_30,ppcVar1);
  return ppcVar1;
}




void bad3(void)

{
  return;
}




/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* char** std::uninitialized_fill_n<char**, unsigned long, char*>(char**, unsigned long, char*
   const&) */

char ** std::uninitialized_fill_n<char**,unsigned_long,char*>
                  (char **param_1,ulong param_2,char **param_3)

{
  char **ppcVar1;
  
  ppcVar1 = __uninitialized_fill_n<true>::__uninit_fill_n<char**,unsigned_long,char*>
                      (param_1,param_2,param_3);
  return ppcVar1;
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




void stdThreadLockDestroy(pthread_mutex_t *param_1)

{
  pthread_mutex_destroy(param_1);
  free(param_1);
  return;
}




/* std::allocator<char*>::~allocator() */

void __thiscall std::allocator<char*>::~allocator(allocator<char*> *this)

{
  new_allocator<char*>::~new_allocator((new_allocator<char*> *)this);
  return;
}




/* __normal_iterator<char**, std::vector<char*, std::allocator<char*> > >::difference_type
   TEMPNAMEPLACEHOLDERVALUE(__normal_iterator<char**, std::vector<char*, std::allocator<char*> > >
   const&, __normal_iterator<char**, std::vector<char*, std::allocator<char*> > > const&) */

difference_type operator-(__normal_iterator *param_1,__normal_iterator *param_2)

{
  long lVar1;
  long *plVar2;
  
  plVar2 = (long *)__normal_iterator<char**,std::vector<char*,std::allocator<char*>>>::base
                             ((__normal_iterator<char**,std::vector<char*,std::allocator<char*>>> *)
                              param_1);
  lVar1 = *plVar2;
  plVar2 = (long *)__normal_iterator<char**,std::vector<char*,std::allocator<char*>>>::base
                             ((__normal_iterator<char**,std::vector<char*,std::allocator<char*>>> *)
                              param_2);
  return (difference_type)(lVar1 - *plVar2 >> 3);
}




void printHexCharLine(char param_1)

{
  printf("%02x\n",(ulong)(uint)(int)param_1);
  return;
}




void bad6(void)

{
  return;
}




void good1(void)

{
  return;
}




/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* char** std::__copy_move_backward_a2<true, char**, char**>(char**, char**, char**) */

char ** std::__copy_move_backward_a2<true,char**,char**>
                  (char **param_1,char **param_2,char **param_3)

{
  char **ppcVar1;
  char **ppcVar2;
  char **ppcVar3;
  char **local_30;
  char **local_28;
  char **local_20;
  
  local_30 = param_3;
  local_28 = param_2;
  local_20 = param_1;
  ppcVar1 = __niter_base<char**>(param_3);
  ppcVar2 = __niter_base<char**>(local_28);
  ppcVar3 = __niter_base<char**>(local_20);
  ppcVar1 = __copy_move_backward_a<true,char**,char**>(ppcVar3,ppcVar2,ppcVar1);
  ppcVar1 = __niter_wrap<char**>(&local_30,ppcVar1);
  return ppcVar1;
}




undefined8 globalReturnsTrue(void)

{
  return 1;
}




/* __normal_iterator<char* const*, std::vector<char*, std::allocator<char*> > >::difference_type
   TEMPNAMEPLACEHOLDERVALUE(__normal_iterator<char* const*, std::vector<char*, std::allocator<char*>
   > > const&, __normal_iterator<char* const*, std::vector<char*, std::allocator<char*> > > const&)
    */

difference_type operator-(__normal_iterator *param_1,__normal_iterator *param_2)

{
  long lVar1;
  long *plVar2;
  
  plVar2 = (long *)__normal_iterator<char*const*,std::vector<char*,std::allocator<char*>>>::base
                             ((__normal_iterator<char*const*,std::vector<char*,std::allocator<char*>>>
                               *)param_1);
  lVar1 = *plVar2;
  plVar2 = (long *)__normal_iterator<char*const*,std::vector<char*,std::allocator<char*>>>::base
                             ((__normal_iterator<char*const*,std::vector<char*,std::allocator<char*>>>
                               *)param_2);
  return (difference_type)(lVar1 - *plVar2 >> 3);
}




/* std::vector<char*, std::allocator<char*> >::vector(std::vector<char*, std::allocator<char*> >
   const&) */

void __thiscall
std::vector<char*,std::allocator<char*>>::vector
          (vector<char*,std::allocator<char*>> *this,vector *param_1)

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
  _Vector_base<char*,std::allocator<char*>>::_M_get_Tp_allocator
            ((_Vector_base<char*,std::allocator<char*>> *)param_1);
  __alloc_traits<std::allocator<char*>,char*>::_S_select_on_copy(&local_31);
  uVar1 = size((vector<char*,std::allocator<char*>> *)param_1);
                    /* try { // try from 00103802 to 00103806 has its CatchHandler @ 0010386f */
  _Vector_base<char*,std::allocator<char*>>::_Vector_base
            ((_Vector_base<char*,std::allocator<char*>> *)this,uVar1,&local_31);
  allocator<char*>::~allocator((allocator<char*> *)&local_31);
  uVar2 = _Vector_base<char*,std::allocator<char*>>::_M_get_Tp_allocator
                    ((_Vector_base<char*,std::allocator<char*>> *)this);
  uVar5 = *(undefined8 *)this;
  uVar3 = end((vector<char*,std::allocator<char*>> *)param_1);
  uVar4 = begin((vector<char*,std::allocator<char*>> *)param_1);
                    /* try { // try from 00103850 to 00103854 has its CatchHandler @ 0010388d */
  uVar5 = __uninitialized_copy_a<__normal_iterator<char*const*,std::vector<char*,std::allocator<char*>>>,char**,char*>
                    (uVar4,uVar3,uVar5,uVar2);
  *(undefined8 *)(this + 8) = uVar5;
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




/* std::move_iterator<char**>::base() const */

undefined8 __thiscall std::move_iterator<char**>::base(move_iterator<char**> *this)

{
  return *(undefined8 *)this;
}




/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* char** std::__copy_move_a<false, char* const*, char**>(char* const*, char* const*, char**) */

char ** std::__copy_move_a<false,char*const*,char**>(char **param_1,char **param_2,char **param_3)

{
  char **ppcVar1;
  
  ppcVar1 = __copy_move<false,true,std::random_access_iterator_tag>::__copy_m<char*>
                      (param_1,param_2,param_3);
  return ppcVar1;
}




void good8(void)

{
  return;
}




/* CWE134_Uncontrolled_Format_String__char_listen_socket_vfprintf_72::bad() */

void CWE134_Uncontrolled_Format_String__char_listen_socket_vfprintf_72::bad(void)

{
  int __fd;
  int iVar1;
  ssize_t sVar2;
  long in_FS_OFFSET;
  int local_104;
  char *local_f8;
  undefined8 local_f0;
  size_t local_e8;
  char *local_e0;
  vector<char*,std::allocator<char*>> local_d8 [32];
  undefined8 local_b8 [4];
  sockaddr local_98;
  char local_88 [104];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  std::vector<char*,std::allocator<char*>>::vector(local_d8);
  local_88[0] = '\0';
  local_88[1] = '\0';
  local_88[2] = '\0';
  local_88[3] = '\0';
  local_88[4] = '\0';
  local_88[5] = '\0';
  local_88[6] = '\0';
  local_88[7] = '\0';
  local_88[8] = '\0';
  local_88[9] = '\0';
  local_88[10] = '\0';
  local_88[0xb] = '\0';
  local_88[0xc] = '\0';
  local_88[0xd] = '\0';
  local_88[0xe] = '\0';
  local_88[0xf] = '\0';
  local_88[0x10] = '\0';
  local_88[0x11] = '\0';
  local_88[0x12] = '\0';
  local_88[0x13] = '\0';
  local_88[0x14] = '\0';
  local_88[0x15] = '\0';
  local_88[0x16] = '\0';
  local_88[0x17] = '\0';
  local_88[0x18] = '\0';
  local_88[0x19] = '\0';
  local_88[0x1a] = '\0';
  local_88[0x1b] = '\0';
  local_88[0x1c] = '\0';
  local_88[0x1d] = '\0';
  local_88[0x1e] = '\0';
  local_88[0x1f] = '\0';
  local_88[0x20] = '\0';
  local_88[0x21] = '\0';
  local_88[0x22] = '\0';
  local_88[0x23] = '\0';
  local_88[0x24] = '\0';
  local_88[0x25] = '\0';
  local_88[0x26] = '\0';
  local_88[0x27] = '\0';
  local_88[0x28] = '\0';
  local_88[0x29] = '\0';
  local_88[0x2a] = '\0';
  local_88[0x2b] = '\0';
  local_88[0x2c] = '\0';
  local_88[0x2d] = '\0';
  local_88[0x2e] = '\0';
  local_88[0x2f] = '\0';
  local_88[0x30] = '\0';
  local_88[0x31] = '\0';
  local_88[0x32] = '\0';
  local_88[0x33] = '\0';
  local_88[0x34] = '\0';
  local_88[0x35] = '\0';
  local_88[0x36] = '\0';
  local_88[0x37] = '\0';
  local_88[0x38] = '\0';
  local_88[0x39] = '\0';
  local_88[0x3a] = '\0';
  local_88[0x3b] = '\0';
  local_88[0x3c] = '\0';
  local_88[0x3d] = '\0';
  local_88[0x3e] = '\0';
  local_88[0x3f] = '\0';
  local_88[0x40] = '\0';
  local_88[0x41] = '\0';
  local_88[0x42] = '\0';
  local_88[0x43] = '\0';
  local_88[0x44] = '\0';
  local_88[0x45] = '\0';
  local_88[0x46] = '\0';
  local_88[0x47] = '\0';
  local_88[0x48] = '\0';
  local_88[0x49] = '\0';
  local_88[0x4a] = '\0';
  local_88[0x4b] = '\0';
  local_88[0x4c] = '\0';
  local_88[0x4d] = '\0';
  local_88[0x4e] = '\0';
  local_88[0x4f] = '\0';
  local_88[0x50] = '\0';
  local_88[0x51] = '\0';
  local_88[0x52] = '\0';
  local_88[0x53] = '\0';
  local_88[0x54] = '\0';
  local_88[0x55] = '\0';
  local_88[0x56] = '\0';
  local_88[0x57] = '\0';
  local_88[0x58] = '\0';
  local_88[0x59] = '\0';
  local_88[0x5a] = '\0';
  local_88[0x5b] = '\0';
  local_88[0x5c] = '\0';
  local_88[0x5d] = '\0';
  local_88[0x5e] = '\0';
  local_88[0x5f] = '\0';
  local_88[0x60] = '\0';
  local_88[0x61] = '\0';
  local_88[0x62] = '\0';
  local_88[99] = '\0';
  local_f8 = local_88;
  local_104 = -1;
  local_e8 = strlen(local_f8);
  __fd = socket(2,1,6);
  if (__fd != -1) {
    memset(&local_98,0,0x10);
    local_98.sa_family = 2;
    local_98.sa_data[2] = '\0';
    local_98.sa_data[3] = '\0';
    local_98.sa_data[4] = '\0';
    local_98.sa_data[5] = '\0';
    local_98.sa_data._0_2_ = htons(0x6987);
    iVar1 = bind(__fd,&local_98,0x10);
                    /* try { // try from 00102b20 to 00102d55 has its CatchHandler @ 00102dad */
    if (((iVar1 != -1) && (iVar1 = listen(__fd,5), iVar1 != -1)) &&
       (local_104 = accept(__fd,(sockaddr *)0x0,(socklen_t *)0x0), local_104 != -1)) {
      sVar2 = recv(local_104,local_f8 + local_e8,99 - local_e8,0);
      iVar1 = (int)sVar2;
      if ((iVar1 != -1) && (iVar1 != 0)) {
        local_f8[local_e8 + (long)iVar1] = '\0';
        local_e0 = strchr(local_f8,0xd);
        if (local_e0 != (char *)0x0) {
          *local_e0 = '\0';
        }
        local_e0 = strchr(local_f8,10);
        if (local_e0 != (char *)0x0) {
          *local_e0 = '\0';
        }
      }
    }
  }
  if (__fd != -1) {
    close(__fd);
  }
  if (local_104 != -1) {
    close(local_104);
  }
  local_f0 = std::vector<char*,std::allocator<char*>>::end(local_d8);
  __normal_iterator<char*const*,std::vector<char*,std::allocator<char*>>>::__normal_iterator<char**>
            ((__normal_iterator<char*const*,std::vector<char*,std::allocator<char*>>> *)local_b8,
             (__normal_iterator *)&local_f0);
  std::vector<char*,std::allocator<char*>>::insert(local_d8,local_b8[0],1,&local_f8);
  local_f0 = std::vector<char*,std::allocator<char*>>::end(local_d8);
  __normal_iterator<char*const*,std::vector<char*,std::allocator<char*>>>::__normal_iterator<char**>
            ((__normal_iterator<char*const*,std::vector<char*,std::allocator<char*>>> *)local_b8,
             (__normal_iterator *)&local_f0);
  std::vector<char*,std::allocator<char*>>::insert(local_d8,local_b8[0],1,&local_f8);
  local_f0 = std::vector<char*,std::allocator<char*>>::end(local_d8);
  __normal_iterator<char*const*,std::vector<char*,std::allocator<char*>>>::__normal_iterator<char**>
            ((__normal_iterator<char*const*,std::vector<char*,std::allocator<char*>>> *)local_b8,
             (__normal_iterator *)&local_f0);
  std::vector<char*,std::allocator<char*>>::insert(local_d8,local_b8[0],1,&local_f8);
  std::vector<char*,std::allocator<char*>>::vector
            ((vector<char*,std::allocator<char*>> *)local_b8,(vector *)local_d8);
                    /* try { // try from 00102d60 to 00102d64 has its CatchHandler @ 00102d95 */
  badSink((vector)local_b8);
  std::vector<char*,std::allocator<char*>>::~vector((vector<char*,std::allocator<char*>> *)local_b8)
  ;
  std::vector<char*,std::allocator<char*>>::~vector(local_d8);
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void good5(void)

{
  return;
}




/* std::allocator<char*>::allocator() */

void std::allocator<char*>::allocator(void)

{
  new_allocator<char*>::new_allocator();
  return;
}




void printSizeTLine(undefined8 param_1)

{
  printf("%zu\n",param_1);
  return;
}




/* CWE134_Uncontrolled_Format_String__char_listen_socket_vfprintf_72::badVaSink(char*, ...) */

void CWE134_Uncontrolled_Format_String__char_listen_socket_vfprintf_72::badVaSink
               (char *param_1,undefined param_2,undefined param_3,undefined param_4,
               undefined param_5,undefined param_6,undefined param_7,...)

{
  char in_AL;
  long in_FS_OFFSET;
  undefined8 in_XMM0_Qa;
  undefined8 in_XMM1_Qa;
  undefined8 in_XMM2_Qa;
  undefined8 in_XMM3_Qa;
  undefined8 in_XMM4_Qa;
  undefined8 in_XMM5_Qa;
  undefined8 in_XMM6_Qa;
  undefined8 in_XMM7_Qa;
  undefined4 local_d8;
  undefined4 local_d4;
  undefined *local_d0;
  undefined *local_c8;
  long local_c0;
  undefined local_b8 [8];
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_78;
  undefined8 local_68;
  undefined8 local_58;
  undefined8 local_48;
  undefined8 local_38;
  undefined8 local_28;
  undefined8 local_18;
  
  if (in_AL != '\0') {
    local_88 = in_XMM0_Qa;
    local_78 = in_XMM1_Qa;
    local_68 = in_XMM2_Qa;
    local_58 = in_XMM3_Qa;
    local_48 = in_XMM4_Qa;
    local_38 = in_XMM5_Qa;
    local_28 = in_XMM6_Qa;
    local_18 = in_XMM7_Qa;
  }
  local_c0 = *(long *)(in_FS_OFFSET + 0x28);
  local_d8 = 8;
  local_d4 = 0x30;
  local_d0 = &param_7;
  local_c8 = local_b8;
  local_b0 = _param_2;
  local_a8 = _param_3;
  local_a0 = _param_4;
  local_98 = _param_5;
  local_90 = _param_6;
  vfprintf(stdout,param_1,&local_d8);
  if (local_c0 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




/* __normal_iterator<char**, std::vector<char*, std::allocator<char*> > >::base() const */

__normal_iterator<char**,std::vector<char*,std::allocator<char*>>> * __thiscall
__normal_iterator<char**,std::vector<char*,std::allocator<char*>>>::base
          (__normal_iterator<char**,std::vector<char*,std::allocator<char*>>> *this)

{
  return this;
}




/* std::_Vector_base<char*, std::allocator<char*>
   >::_Vector_impl::_Vector_impl(std::allocator<char*> const&) */

void __thiscall
std::_Vector_base<char*,std::allocator<char*>>::_Vector_impl::_Vector_impl
          (_Vector_impl *this,allocator *param_1)

{
  allocator<char*>::allocator((allocator *)this);
  _Vector_impl_data::_Vector_impl_data((_Vector_impl_data *)this);
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
    __isoc99_sscanf(local_18 * 2 + param_3,&DAT_001060ac,local_1c);
    *(char *)(local_18 + param_1) = local_1c[0];
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




/* std::_Vector_base<char*, std::allocator<char*> >::~_Vector_base() */

void __thiscall
std::_Vector_base<char*,std::allocator<char*>>::~_Vector_base
          (_Vector_base<char*,std::allocator<char*>> *this)

{
  _M_deallocate(this,*(char ***)this,*(long *)(this + 0x10) - *(long *)this >> 3);
  _Vector_impl::~_Vector_impl((_Vector_impl *)this);
  return;
}




/* std::vector<char*, std::allocator<char*> >::_Temporary_value::_M_val() */

void __thiscall
std::vector<char*,std::allocator<char*>>::_Temporary_value::_M_val(_Temporary_value *this)

{
  _M_ptr(this);
  return;
}




/* new_allocator<char*>::~new_allocator() */

void __thiscall new_allocator<char*>::~new_allocator(new_allocator<char*> *this)

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




/* std::vector<char*, std::allocator<char*> >::insert(__normal_iterator<char* const*,
   std::vector<char*, std::allocator<char*> > >, unsigned long, char* const&) */

void __thiscall
std::vector<char*,std::allocator<char*>>::insert
          (vector<char*,std::allocator<char*>> *this,undefined8 param_2,undefined8 param_3,
          undefined8 param_4)

{
  difference_type dVar1;
  undefined4 extraout_var;
  undefined8 uVar2;
  long in_FS_OFFSET;
  undefined8 local_38;
  vector<char*,std::allocator<char*>> *local_30;
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
  uVar2 = __normal_iterator<char**,std::vector<char*,std::allocator<char*>>>::operator+
                    ((__normal_iterator<char**,std::vector<char*,std::allocator<char*>>> *)&local_20
                     ,local_18);
  _M_fill_insert(local_30,uVar2,param_3,param_4);
  local_20 = begin(local_30);
  __normal_iterator<char**,std::vector<char*,std::allocator<char*>>>::operator+
            ((__normal_iterator<char**,std::vector<char*,std::allocator<char*>>> *)&local_20,
             local_18);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




/* char** std::__uninitialized_copy<true>::__uninit_copy<__normal_iterator<char* const*,
   std::vector<char*, std::allocator<char*> > >, char**>(__normal_iterator<char* const*,
   std::vector<char*, std::allocator<char*> > >, __normal_iterator<char* const*, std::vector<char*,
   std::allocator<char*> > >, char**) */

void std::__uninitialized_copy<true>::
     __uninit_copy<__normal_iterator<char*const*,std::vector<char*,std::allocator<char*>>>,char**>
               (undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  copy<__normal_iterator<char*const*,std::vector<char*,std::allocator<char*>>>,char**>
            (param_1,param_2,param_3);
  return;
}




/* void new_allocator<char*>::destroy<char*>(char**) */

void new_allocator<char*>::destroy<char*>(char **param_1)

{
  return;
}




/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* char* const& std::forward<char* const&>(std::remove_reference<char* const&>::type&) */

char ** std::forward<char*const&>(type *param_1)

{
  return (char **)param_1;
}



