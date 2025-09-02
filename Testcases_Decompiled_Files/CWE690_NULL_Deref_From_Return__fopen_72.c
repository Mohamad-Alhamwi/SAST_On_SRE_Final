
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




/* std::_Vector_base<_IO_FILE*, std::allocator<_IO_FILE*> >::_Vector_base(unsigned long,
   std::allocator<_IO_FILE*> const&) */

void __thiscall
std::_Vector_base<_IO_FILE*,std::allocator<_IO_FILE*>>::_Vector_base
          (_Vector_base<_IO_FILE*,std::allocator<_IO_FILE*>> *this,ulong param_1,allocator *param_2)

{
  _Vector_impl::_Vector_impl((_Vector_impl *)this,param_2);
                    /* try { // try from 00102498 to 0010249c has its CatchHandler @ 0010249f */
  _M_create_storage(this,param_1);
  return;
}




/* std::allocator_traits<std::allocator<_IO_FILE*> >::deallocate(std::allocator<_IO_FILE*>&,
   _IO_FILE**, unsigned long) */

void std::allocator_traits<std::allocator<_IO_FILE*>>::deallocate
               (allocator *param_1,_IO_FILE **param_2,ulong param_3)

{
  new_allocator<_IO_FILE*>::deallocate((_IO_FILE **)param_1,(ulong)param_2);
  return;
}




void bad4(void)

{
  return;
}




/* std::_Vector_base<_IO_FILE*, std::allocator<_IO_FILE*> >::_M_get_Tp_allocator() */

_Vector_base<_IO_FILE*,std::allocator<_IO_FILE*>> * __thiscall
std::_Vector_base<_IO_FILE*,std::allocator<_IO_FILE*>>::_M_get_Tp_allocator
          (_Vector_base<_IO_FILE*,std::allocator<_IO_FILE*>> *this)

{
  return this;
}




/* __normal_iterator<_IO_FILE* const*, std::vector<_IO_FILE*, std::allocator<_IO_FILE*> >
   >::difference_type TEMPNAMEPLACEHOLDERVALUE(__normal_iterator<_IO_FILE* const*,
   std::vector<_IO_FILE*, std::allocator<_IO_FILE*> > > const&, __normal_iterator<_IO_FILE* const*,
   std::vector<_IO_FILE*, std::allocator<_IO_FILE*> > > const&) */

difference_type operator-(__normal_iterator *param_1,__normal_iterator *param_2)

{
  long lVar1;
  long *plVar2;
  
  plVar2 = (long *)__normal_iterator<_IO_FILE*const*,std::vector<_IO_FILE*,std::allocator<_IO_FILE*>>>
                   ::base((__normal_iterator<_IO_FILE*const*,std::vector<_IO_FILE*,std::allocator<_IO_FILE*>>>
                           *)param_1);
  lVar1 = *plVar2;
  plVar2 = (long *)__normal_iterator<_IO_FILE*const*,std::vector<_IO_FILE*,std::allocator<_IO_FILE*>>>
                   ::base((__normal_iterator<_IO_FILE*const*,std::vector<_IO_FILE*,std::allocator<_IO_FILE*>>>
                           *)param_2);
  return (difference_type)(lVar1 - *plVar2 >> 3);
}




void good8(void)

{
  return;
}




/* CWE690_NULL_Deref_From_Return__fopen_72::goodB2G() */

void CWE690_NULL_Deref_From_Return__fopen_72::goodB2G(void)

{
  long in_FS_OFFSET;
  FILE *local_68;
  undefined8 local_60;
  vector<_IO_FILE*,std::allocator<_IO_FILE*>> local_58 [32];
  undefined8 local_38 [3];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  std::vector<_IO_FILE*,std::allocator<_IO_FILE*>>::vector(local_58);
  local_68 = (FILE *)0x0;
                    /* try { // try from 001016d3 to 001017ab has its CatchHandler @ 001017f7 */
  local_68 = fopen("file.txt","w+");
  local_60 = std::vector<_IO_FILE*,std::allocator<_IO_FILE*>>::end(local_58);
  __normal_iterator<_IO_FILE*const*,std::vector<_IO_FILE*,std::allocator<_IO_FILE*>>>::
  __normal_iterator<_IO_FILE**>
            ((__normal_iterator<_IO_FILE*const*,std::vector<_IO_FILE*,std::allocator<_IO_FILE*>>> *)
             local_38,(__normal_iterator *)&local_60);
  std::vector<_IO_FILE*,std::allocator<_IO_FILE*>>::insert(local_58,local_38[0],1,&local_68);
  local_60 = std::vector<_IO_FILE*,std::allocator<_IO_FILE*>>::end(local_58);
  __normal_iterator<_IO_FILE*const*,std::vector<_IO_FILE*,std::allocator<_IO_FILE*>>>::
  __normal_iterator<_IO_FILE**>
            ((__normal_iterator<_IO_FILE*const*,std::vector<_IO_FILE*,std::allocator<_IO_FILE*>>> *)
             local_38,(__normal_iterator *)&local_60);
  std::vector<_IO_FILE*,std::allocator<_IO_FILE*>>::insert(local_58,local_38[0],1,&local_68);
  local_60 = std::vector<_IO_FILE*,std::allocator<_IO_FILE*>>::end(local_58);
  __normal_iterator<_IO_FILE*const*,std::vector<_IO_FILE*,std::allocator<_IO_FILE*>>>::
  __normal_iterator<_IO_FILE**>
            ((__normal_iterator<_IO_FILE*const*,std::vector<_IO_FILE*,std::allocator<_IO_FILE*>>> *)
             local_38,(__normal_iterator *)&local_60);
  std::vector<_IO_FILE*,std::allocator<_IO_FILE*>>::insert(local_58,local_38[0],1,&local_68);
  std::vector<_IO_FILE*,std::allocator<_IO_FILE*>>::vector
            ((vector<_IO_FILE*,std::allocator<_IO_FILE*>> *)local_38,(vector *)local_58);
                    /* try { // try from 001017b3 to 001017b7 has its CatchHandler @ 001017e2 */
  goodB2GSink(local_38);
  std::vector<_IO_FILE*,std::allocator<_IO_FILE*>>::~vector
            ((vector<_IO_FILE*,std::allocator<_IO_FILE*>> *)local_38);
  std::vector<_IO_FILE*,std::allocator<_IO_FILE*>>::~vector(local_58);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* _IO_FILE** std::__uninitialized_copy_a<std::move_iterator<_IO_FILE**>, _IO_FILE**,
   _IO_FILE*>(std::move_iterator<_IO_FILE**>, std::move_iterator<_IO_FILE**>, _IO_FILE**,
   std::allocator<_IO_FILE*>&) */

_IO_FILE **
std::__uninitialized_copy_a<std::move_iterator<_IO_FILE**>,_IO_FILE**,_IO_FILE*>
          (move_iterator param_1,move_iterator param_2,_IO_FILE **param_3,allocator *param_4)

{
  _IO_FILE **pp_Var1;
  
  pp_Var1 = uninitialized_copy<std::move_iterator<_IO_FILE**>,_IO_FILE**>(param_1,param_2,param_3);
  return pp_Var1;
}




/* operator new(unsigned long, void*) */

void * operator_new(ulong param_1,void *param_2)

{
  return param_2;
}




/* __normal_iterator<_IO_FILE**, std::vector<_IO_FILE*, std::allocator<_IO_FILE*> > >::base() const
    */

__normal_iterator<_IO_FILE**,std::vector<_IO_FILE*,std::allocator<_IO_FILE*>>> * __thiscall
__normal_iterator<_IO_FILE**,std::vector<_IO_FILE*,std::allocator<_IO_FILE*>>>::base
          (__normal_iterator<_IO_FILE**,std::vector<_IO_FILE*,std::allocator<_IO_FILE*>>> *this)

{
  return this;
}




/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* _IO_FILE** std::__uninitialized_move_a<_IO_FILE**, _IO_FILE**, std::allocator<_IO_FILE*>
   >(_IO_FILE**, _IO_FILE**, _IO_FILE**, std::allocator<_IO_FILE*>&) */

_IO_FILE **
std::__uninitialized_move_a<_IO_FILE**,_IO_FILE**,std::allocator<_IO_FILE*>>
          (_IO_FILE **param_1,_IO_FILE **param_2,_IO_FILE **param_3,allocator *param_4)

{
  move_iterator mVar1;
  move_iterator mVar2;
  _IO_FILE **pp_Var3;
  
  mVar1 = make_move_iterator<_IO_FILE**>(param_2);
  mVar2 = make_move_iterator<_IO_FILE**>(param_1);
  pp_Var3 = __uninitialized_copy_a<std::move_iterator<_IO_FILE**>,_IO_FILE**,_IO_FILE*>
                      (mVar2,mVar1,param_3,param_4);
  return pp_Var3;
}




/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* _IO_FILE** std::uninitialized_copy<std::move_iterator<_IO_FILE**>,
   _IO_FILE**>(std::move_iterator<_IO_FILE**>, std::move_iterator<_IO_FILE**>, _IO_FILE**) */

_IO_FILE **
std::uninitialized_copy<std::move_iterator<_IO_FILE**>,_IO_FILE**>
          (move_iterator param_1,move_iterator param_2,_IO_FILE **param_3)

{
  _IO_FILE **pp_Var1;
  
  pp_Var1 = __uninitialized_copy<true>::__uninit_copy<std::move_iterator<_IO_FILE**>,_IO_FILE**>
                      (param_1,param_2,param_3);
  return pp_Var1;
}




void printLine(char *param_1)

{
  if (param_1 != (char *)0x0) {
    puts(param_1);
  }
  return;
}




/* std::move_iterator<_IO_FILE**>::base() const */

undefined8 __thiscall std::move_iterator<_IO_FILE**>::base(move_iterator<_IO_FILE**> *this)

{
  return *(undefined8 *)this;
}




/* CWE690_NULL_Deref_From_Return__fopen_72::good() */

void CWE690_NULL_Deref_From_Return__fopen_72::good(void)

{
  goodB2G();
  return;
}




undefined8 globalReturnsTrue(void)

{
  return 1;
}




/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* void std::_Destroy<_IO_FILE**>(_IO_FILE**, _IO_FILE**) */

void std::_Destroy<_IO_FILE**>(_IO_FILE **param_1,_IO_FILE **param_2)

{
  _Destroy_aux<true>::__destroy<_IO_FILE**>(param_1,param_2);
  return;
}




void printLongLongLine(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




void printDoubleLine(undefined8 param_1)

{
  printf("%g\n",param_1);
  return;
}




/* std::allocator_traits<std::allocator<_IO_FILE*> >::allocate(std::allocator<_IO_FILE*>&, unsigned
   long) */

void std::allocator_traits<std::allocator<_IO_FILE*>>::allocate(allocator *param_1,ulong param_2)

{
  new_allocator<_IO_FILE*>::allocate((ulong)param_1,(void *)param_2);
  return;
}




void printShortLine(short param_1)

{
  printf("%hd\n",(ulong)(uint)(int)param_1);
  return;
}




/* std::vector<_IO_FILE*, std::allocator<_IO_FILE*> >::_Temporary_value::_M_ptr() */

_Temporary_value * __thiscall
std::vector<_IO_FILE*,std::allocator<_IO_FILE*>>::_Temporary_value::_M_ptr(_Temporary_value *this)

{
  return this + 8;
}




/* std::_Vector_base<_IO_FILE*, std::allocator<_IO_FILE*> >::_Vector_impl::_Vector_impl() */

void __thiscall
std::_Vector_base<_IO_FILE*,std::allocator<_IO_FILE*>>::_Vector_impl::_Vector_impl
          (_Vector_impl *this)

{
  allocator<_IO_FILE*>::allocator();
  _Vector_impl_data::_Vector_impl_data((_Vector_impl_data *)this);
  return;
}




/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* void std::_Destroy<_IO_FILE**, _IO_FILE*>(_IO_FILE**, _IO_FILE**, std::allocator<_IO_FILE*>&) */

void std::_Destroy<_IO_FILE**,_IO_FILE*>(_IO_FILE **param_1,_IO_FILE **param_2,allocator *param_3)

{
  _Destroy<_IO_FILE**>(param_1,param_2);
  return;
}




/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* _IO_FILE** std::fill_n<_IO_FILE**, unsigned long, _IO_FILE*>(_IO_FILE**, unsigned long, _IO_FILE*
   const&) */

_IO_FILE **
std::fill_n<_IO_FILE**,unsigned_long,_IO_FILE*>(_IO_FILE **param_1,ulong param_2,_IO_FILE **param_3)

{
  __type _Var1;
  _IO_FILE **pp_Var2;
  undefined4 extraout_var;
  _IO_FILE **local_10;
  
  local_10 = param_1;
  pp_Var2 = __niter_base<_IO_FILE**>(param_1);
  _Var1 = __fill_n_a<_IO_FILE**,unsigned_long,_IO_FILE*>(pp_Var2,param_2,param_3);
  pp_Var2 = __niter_wrap<_IO_FILE**>(&local_10,(_IO_FILE **)CONCAT44(extraout_var,_Var1));
  return pp_Var2;
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
/* _IO_FILE** std::move_backward<_IO_FILE**, _IO_FILE**>(_IO_FILE**, _IO_FILE**, _IO_FILE**) */

_IO_FILE **
std::move_backward<_IO_FILE**,_IO_FILE**>(_IO_FILE **param_1,_IO_FILE **param_2,_IO_FILE **param_3)

{
  _IO_FILE **pp_Var1;
  _IO_FILE **pp_Var2;
  
  pp_Var1 = __miter_base<_IO_FILE**>(param_2);
  pp_Var2 = __miter_base<_IO_FILE**>(param_1);
  pp_Var1 = __copy_move_backward_a2<true,_IO_FILE**,_IO_FILE**>(pp_Var2,pp_Var1,param_3);
  return pp_Var1;
}




/* std::vector<_IO_FILE*, std::allocator<_IO_FILE*> >::_M_check_len(unsigned long, char const*)
   const */

ulong __thiscall
std::vector<_IO_FILE*,std::allocator<_IO_FILE*>>::_M_check_len
          (vector<_IO_FILE*,std::allocator<_IO_FILE*>> *this,ulong param_1,char *param_2)

{
  long lVar1;
  long lVar2;
  ulong *puVar3;
  ulong uVar4;
  ulong uVar5;
  long in_FS_OFFSET;
  ulong local_48;
  vector<_IO_FILE*,std::allocator<_IO_FILE*>> *local_40;
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
/* _IO_FILE** std::__niter_base<_IO_FILE**>(_IO_FILE**) */

_IO_FILE ** std::__niter_base<_IO_FILE**>(_IO_FILE **param_1)

{
  return param_1;
}




/* CWE690_NULL_Deref_From_Return__fopen_72::bad() */

void CWE690_NULL_Deref_From_Return__fopen_72::bad(void)

{
  long in_FS_OFFSET;
  FILE *local_68;
  undefined8 local_60;
  vector<_IO_FILE*,std::allocator<_IO_FILE*>> local_58 [32];
  undefined8 local_38 [3];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  std::vector<_IO_FILE*,std::allocator<_IO_FILE*>>::vector(local_58);
  local_68 = (FILE *)0x0;
                    /* try { // try from 00101547 to 0010161f has its CatchHandler @ 0010166b */
  local_68 = fopen("file.txt","w+");
  local_60 = std::vector<_IO_FILE*,std::allocator<_IO_FILE*>>::end(local_58);
  __normal_iterator<_IO_FILE*const*,std::vector<_IO_FILE*,std::allocator<_IO_FILE*>>>::
  __normal_iterator<_IO_FILE**>
            ((__normal_iterator<_IO_FILE*const*,std::vector<_IO_FILE*,std::allocator<_IO_FILE*>>> *)
             local_38,(__normal_iterator *)&local_60);
  std::vector<_IO_FILE*,std::allocator<_IO_FILE*>>::insert(local_58,local_38[0],1,&local_68);
  local_60 = std::vector<_IO_FILE*,std::allocator<_IO_FILE*>>::end(local_58);
  __normal_iterator<_IO_FILE*const*,std::vector<_IO_FILE*,std::allocator<_IO_FILE*>>>::
  __normal_iterator<_IO_FILE**>
            ((__normal_iterator<_IO_FILE*const*,std::vector<_IO_FILE*,std::allocator<_IO_FILE*>>> *)
             local_38,(__normal_iterator *)&local_60);
  std::vector<_IO_FILE*,std::allocator<_IO_FILE*>>::insert(local_58,local_38[0],1,&local_68);
  local_60 = std::vector<_IO_FILE*,std::allocator<_IO_FILE*>>::end(local_58);
  __normal_iterator<_IO_FILE*const*,std::vector<_IO_FILE*,std::allocator<_IO_FILE*>>>::
  __normal_iterator<_IO_FILE**>
            ((__normal_iterator<_IO_FILE*const*,std::vector<_IO_FILE*,std::allocator<_IO_FILE*>>> *)
             local_38,(__normal_iterator *)&local_60);
  std::vector<_IO_FILE*,std::allocator<_IO_FILE*>>::insert(local_58,local_38[0],1,&local_68);
  std::vector<_IO_FILE*,std::allocator<_IO_FILE*>>::vector
            ((vector<_IO_FILE*,std::allocator<_IO_FILE*>> *)local_38,(vector *)local_58);
                    /* try { // try from 00101627 to 0010162b has its CatchHandler @ 00101656 */
  badSink(local_38);
  std::vector<_IO_FILE*,std::allocator<_IO_FILE*>>::~vector
            ((vector<_IO_FILE*,std::allocator<_IO_FILE*>> *)local_38);
  std::vector<_IO_FILE*,std::allocator<_IO_FILE*>>::~vector(local_58);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




/* CWE690_NULL_Deref_From_Return__fopen_72::badSink(std::vector<_IO_FILE*, std::allocator<_IO_FILE*>
   >) */

void CWE690_NULL_Deref_From_Return__fopen_72::badSink
               (vector<_IO_FILE*,std::allocator<_IO_FILE*>> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)std::vector<_IO_FILE*,std::allocator<_IO_FILE*>>::operator[](param_1,2);
  fclose((FILE *)*puVar1);
  return;
}




undefined8 stdThreadDestroy(void *param_1)

{
  free(param_1);
  return 1;
}




/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* std::move_iterator<_IO_FILE**> std::__make_move_if_noexcept_iterator<_IO_FILE*,
   std::move_iterator<_IO_FILE**> >(_IO_FILE**) */

move_iterator
std::__make_move_if_noexcept_iterator<_IO_FILE*,std::move_iterator<_IO_FILE**>>(_IO_FILE **param_1)

{
  long in_FS_OFFSET;
  move_iterator local_18 [2];
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  move_iterator<_IO_FILE**>::move_iterator((move_iterator<_IO_FILE**> *)local_18,param_1);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18[0];
}




/* __normal_iterator<_IO_FILE* const*, std::vector<_IO_FILE*, std::allocator<_IO_FILE*> > >::base()
   const */

__normal_iterator<_IO_FILE*const*,std::vector<_IO_FILE*,std::allocator<_IO_FILE*>>> * __thiscall
__normal_iterator<_IO_FILE*const*,std::vector<_IO_FILE*,std::allocator<_IO_FILE*>>>::base
          (__normal_iterator<_IO_FILE*const*,std::vector<_IO_FILE*,std::allocator<_IO_FILE*>>> *this
          )

{
  return this;
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




void printWLine(long param_1)

{
  if (param_1 != 0) {
    wprintf(L"%ls\n",param_1);
  }
  return;
}




/* _IO_FILE** std::__uninitialized_copy<true>::__uninit_copy<std::move_iterator<_IO_FILE**>,
   _IO_FILE**>(std::move_iterator<_IO_FILE**>, std::move_iterator<_IO_FILE**>, _IO_FILE**) */

_IO_FILE **
std::__uninitialized_copy<true>::__uninit_copy<std::move_iterator<_IO_FILE**>,_IO_FILE**>
          (move_iterator param_1,move_iterator param_2,_IO_FILE **param_3)

{
  _IO_FILE **pp_Var1;
  
  pp_Var1 = copy<std::move_iterator<_IO_FILE**>,_IO_FILE**>(param_1,param_2,param_3);
  return pp_Var1;
}




/* std::_Vector_base<_IO_FILE*, std::allocator<_IO_FILE*> >::_M_create_storage(unsigned long) */

void __thiscall
std::_Vector_base<_IO_FILE*,std::allocator<_IO_FILE*>>::_M_create_storage
          (_Vector_base<_IO_FILE*,std::allocator<_IO_FILE*>> *this,ulong param_1)

{
  undefined8 uVar1;
  
  uVar1 = _M_allocate(this,param_1);
  *(undefined8 *)this = uVar1;
  *(undefined8 *)(this + 8) = *(undefined8 *)this;
  *(ulong *)(this + 0x10) = param_1 * 8 + *(long *)this;
  return;
}




/* std::vector<_IO_FILE*, std::allocator<_IO_FILE*> >::vector(std::vector<_IO_FILE*,
   std::allocator<_IO_FILE*> > const&) */

void __thiscall
std::vector<_IO_FILE*,std::allocator<_IO_FILE*>>::vector
          (vector<_IO_FILE*,std::allocator<_IO_FILE*>> *this,vector *param_1)

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
  _Vector_base<_IO_FILE*,std::allocator<_IO_FILE*>>::_M_get_Tp_allocator
            ((_Vector_base<_IO_FILE*,std::allocator<_IO_FILE*>> *)param_1);
  __alloc_traits<std::allocator<_IO_FILE*>,_IO_FILE*>::_S_select_on_copy(&local_31);
  uVar1 = size((vector<_IO_FILE*,std::allocator<_IO_FILE*>> *)param_1);
                    /* try { // try from 00101b9c to 00101ba0 has its CatchHandler @ 00101c09 */
  _Vector_base<_IO_FILE*,std::allocator<_IO_FILE*>>::_Vector_base
            ((_Vector_base<_IO_FILE*,std::allocator<_IO_FILE*>> *)this,uVar1,&local_31);
  allocator<_IO_FILE*>::~allocator((allocator<_IO_FILE*> *)&local_31);
  uVar2 = _Vector_base<_IO_FILE*,std::allocator<_IO_FILE*>>::_M_get_Tp_allocator
                    ((_Vector_base<_IO_FILE*,std::allocator<_IO_FILE*>> *)this);
  uVar5 = *(undefined8 *)this;
  uVar3 = end((vector<_IO_FILE*,std::allocator<_IO_FILE*>> *)param_1);
  uVar4 = begin((vector<_IO_FILE*,std::allocator<_IO_FILE*>> *)param_1);
                    /* try { // try from 00101bea to 00101bee has its CatchHandler @ 00101c27 */
  uVar5 = __uninitialized_copy_a<__normal_iterator<_IO_FILE*const*,std::vector<_IO_FILE*,std::allocator<_IO_FILE*>>>,_IO_FILE**,_IO_FILE*>
                    (uVar4,uVar3,uVar5,uVar2);
  *(undefined8 *)(this + 8) = uVar5;
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* _IO_FILE** std::__copy_move_a<true, _IO_FILE**, _IO_FILE**>(_IO_FILE**, _IO_FILE**, _IO_FILE**)
    */

_IO_FILE **
std::__copy_move_a<true,_IO_FILE**,_IO_FILE**>
          (_IO_FILE **param_1,_IO_FILE **param_2,_IO_FILE **param_3)

{
  _IO_FILE **pp_Var1;
  
  pp_Var1 = __copy_move<true,true,std::random_access_iterator_tag>::__copy_m<_IO_FILE*>
                      (param_1,param_2,param_3);
  return pp_Var1;
}




void good6(void)

{
  return;
}




/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* decltype (__miter_base(({parm#1}.base)()))
   std::__miter_base<_IO_FILE**>(std::move_iterator<_IO_FILE**>) */

void std::__miter_base<_IO_FILE**>(move_iterator param_1)

{
  _IO_FILE **pp_Var1;
  undefined4 in_register_0000003c;
  undefined8 local_10;
  
  local_10 = CONCAT44(in_register_0000003c,param_1);
  pp_Var1 = (_IO_FILE **)move_iterator<_IO_FILE**>::base((move_iterator<_IO_FILE**> *)&local_10);
  __miter_base<_IO_FILE**>(pp_Var1);
  return;
}




/* std::allocator<_IO_FILE*>::allocator() */

void std::allocator<_IO_FILE*>::allocator(void)

{
  new_allocator<_IO_FILE*>::new_allocator();
  return;
}




/* std::_Vector_base<_IO_FILE*, std::allocator<_IO_FILE*> >::_Vector_impl::~_Vector_impl() */

void __thiscall
std::_Vector_base<_IO_FILE*,std::allocator<_IO_FILE*>>::_Vector_impl::~_Vector_impl
          (_Vector_impl *this)

{
  allocator<_IO_FILE*>::~allocator((allocator<_IO_FILE*> *)this);
  return;
}




/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* __enable_if<std::__is_scalar<_IO_FILE*>::__value, _IO_FILE**>::__type std::__fill_n_a<_IO_FILE**,
   unsigned long, _IO_FILE*>(_IO_FILE**, unsigned long, _IO_FILE* const&) */

__type std::__fill_n_a<_IO_FILE**,unsigned_long,_IO_FILE*>
                 (_IO_FILE **param_1,ulong param_2,_IO_FILE **param_3)

{
  _IO_FILE *p_Var1;
  _IO_FILE **local_20;
  ulong local_18;
  
  p_Var1 = *param_3;
  local_20 = param_1;
  for (local_18 = param_2; local_18 != 0; local_18 = local_18 - 1) {
    *local_20 = p_Var1;
    local_20 = local_20 + 1;
  }
  return (__type)local_20;
}




/* void new_allocator<_IO_FILE*>::construct<_IO_FILE*, _IO_FILE* const&>(_IO_FILE**, _IO_FILE*
   const&) */

void __thiscall
new_allocator<_IO_FILE*>::construct<_IO_FILE*,_IO_FILE*const&>
          (new_allocator<_IO_FILE*> *this,_IO_FILE **param_1,_IO_FILE **param_2)

{
  _IO_FILE *p_Var1;
  _IO_FILE **pp_Var2;
  undefined8 *puVar3;
  
  pp_Var2 = std::forward<_IO_FILE*const&>((type *)param_2);
  p_Var1 = *pp_Var2;
  puVar3 = (undefined8 *)operator_new(8,param_1);
  *puVar3 = p_Var1;
  return;
}




/* __normal_iterator<_IO_FILE* const*, std::vector<_IO_FILE*, std::allocator<_IO_FILE*> > >
   std::__miter_base<__normal_iterator<_IO_FILE* const*, std::vector<_IO_FILE*,
   std::allocator<_IO_FILE*> > > >(__normal_iterator<_IO_FILE* const*, std::vector<_IO_FILE*,
   std::allocator<_IO_FILE*> > >) */

undefined8
std::
__miter_base<__normal_iterator<_IO_FILE*const*,std::vector<_IO_FILE*,std::allocator<_IO_FILE*>>>>
          (undefined8 param_1)

{
  return param_1;
}




int globalReturnsTrueOrFalse(void)

{
  int iVar1;
  
  iVar1 = rand();
  return iVar1 % 2;
}




void bad2(void)

{
  return;
}




void stdThreadLockAcquire(pthread_mutex_t *param_1)

{
  pthread_mutex_lock(param_1);
  return;
}




/* std::vector<_IO_FILE*, std::allocator<_IO_FILE*> >::_M_fill_insert(__normal_iterator<_IO_FILE**,
   std::vector<_IO_FILE*, std::allocator<_IO_FILE*> > >, unsigned long, _IO_FILE* const&) */

void __thiscall
std::vector<_IO_FILE*,std::allocator<_IO_FILE*>>::_M_fill_insert
          (vector<_IO_FILE*,std::allocator<_IO_FILE*>> *this,undefined8 param_2,ulong param_3,
          _IO_FILE **param_4)

{
  long lVar1;
  difference_type dVar2;
  undefined4 extraout_var;
  allocator *paVar3;
  undefined8 *puVar4;
  long *plVar5;
  _IO_FILE **pp_Var6;
  undefined4 extraout_var_00;
  long in_FS_OFFSET;
  undefined8 local_88;
  vector<_IO_FILE*,std::allocator<_IO_FILE*>> *local_80;
  undefined8 local_78;
  _IO_FILE **local_70;
  ulong local_68;
  long local_60;
  _IO_FILE **local_58;
  _IO_FILE **local_50;
  ulong local_48;
  _IO_FILE **local_40;
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
      local_70 = (_IO_FILE **)
                 _Vector_base<_IO_FILE*,std::allocator<_IO_FILE*>>::_M_allocate
                           ((_Vector_base<_IO_FILE*,std::allocator<_IO_FILE*>> *)local_80,local_68);
      local_58 = local_70;
      paVar3 = (allocator *)
               _Vector_base<_IO_FILE*,std::allocator<_IO_FILE*>>::_M_get_Tp_allocator
                         ((_Vector_base<_IO_FILE*,std::allocator<_IO_FILE*>> *)local_80);
                    /* try { // try from 0010210c to 00102197 has its CatchHandler @ 0010224f */
      __uninitialized_fill_n_a<_IO_FILE**,unsigned_long,_IO_FILE*,_IO_FILE*>
                (local_58 + local_60,param_3,param_4,paVar3);
      local_70 = (_IO_FILE **)0x0;
      paVar3 = (allocator *)
               _Vector_base<_IO_FILE*,std::allocator<_IO_FILE*>>::_M_get_Tp_allocator
                         ((_Vector_base<_IO_FILE*,std::allocator<_IO_FILE*>> *)local_80);
      puVar4 = (undefined8 *)
               __normal_iterator<_IO_FILE**,std::vector<_IO_FILE*,std::allocator<_IO_FILE*>>>::base
                         ((__normal_iterator<_IO_FILE**,std::vector<_IO_FILE*,std::allocator<_IO_FILE*>>>
                           *)&local_88);
      local_70 = __uninitialized_move_if_noexcept_a<_IO_FILE**,_IO_FILE**,std::allocator<_IO_FILE*>>
                           (*(_IO_FILE ***)local_80,(_IO_FILE **)*puVar4,local_58,paVar3);
      local_70 = local_70 + param_3;
      paVar3 = (allocator *)
               _Vector_base<_IO_FILE*,std::allocator<_IO_FILE*>>::_M_get_Tp_allocator
                         ((_Vector_base<_IO_FILE*,std::allocator<_IO_FILE*>> *)local_80);
      pp_Var6 = *(_IO_FILE ***)(local_80 + 8);
      puVar4 = (undefined8 *)
               __normal_iterator<_IO_FILE**,std::vector<_IO_FILE*,std::allocator<_IO_FILE*>>>::base
                         ((__normal_iterator<_IO_FILE**,std::vector<_IO_FILE*,std::allocator<_IO_FILE*>>>
                           *)&local_88);
      local_70 = __uninitialized_move_if_noexcept_a<_IO_FILE**,_IO_FILE**,std::allocator<_IO_FILE*>>
                           ((_IO_FILE **)*puVar4,pp_Var6,local_70,paVar3);
      paVar3 = (allocator *)
               _Vector_base<_IO_FILE*,std::allocator<_IO_FILE*>>::_M_get_Tp_allocator
                         ((_Vector_base<_IO_FILE*,std::allocator<_IO_FILE*>> *)local_80);
      _Destroy<_IO_FILE**,_IO_FILE*>(*(_IO_FILE ***)local_80,*(_IO_FILE ***)(local_80 + 8),paVar3);
      _Vector_base<_IO_FILE*,std::allocator<_IO_FILE*>>::_M_deallocate
                ((_Vector_base<_IO_FILE*,std::allocator<_IO_FILE*>> *)local_80,
                 *(_IO_FILE ***)local_80,*(long *)(local_80 + 0x10) - *(long *)local_80 >> 3);
      *(_IO_FILE ***)local_80 = local_58;
      *(_IO_FILE ***)(local_80 + 8) = local_70;
      *(_IO_FILE ***)(local_80 + 0x10) = local_58 + local_68;
    }
    else {
      _Temporary_value::_Temporary_value<_IO_FILE*const&>(local_38,(vector *)this,param_4);
                    /* try { // try from 00101e8c to 0010205f has its CatchHandler @ 00102231 */
      local_50 = (_IO_FILE **)_Temporary_value::_M_val(local_38);
      local_78 = end(local_80);
      dVar2 = operator-((__normal_iterator *)&local_78,(__normal_iterator *)&local_88);
      local_48 = CONCAT44(extraout_var,dVar2);
      local_40 = *(_IO_FILE ***)(local_80 + 8);
      if (param_3 < local_48) {
        paVar3 = (allocator *)
                 _Vector_base<_IO_FILE*,std::allocator<_IO_FILE*>>::_M_get_Tp_allocator
                           ((_Vector_base<_IO_FILE*,std::allocator<_IO_FILE*>> *)local_80);
        __uninitialized_move_a<_IO_FILE**,_IO_FILE**,std::allocator<_IO_FILE*>>
                  ((_IO_FILE **)(param_3 * -8 + *(long *)(local_80 + 8)),
                   *(_IO_FILE ***)(local_80 + 8),*(_IO_FILE ***)(local_80 + 8),paVar3);
        *(ulong *)(local_80 + 8) = param_3 * 8 + *(long *)(local_80 + 8);
        pp_Var6 = local_40 + -param_3;
        puVar4 = (undefined8 *)
                 __normal_iterator<_IO_FILE**,std::vector<_IO_FILE*,std::allocator<_IO_FILE*>>>::
                 base((__normal_iterator<_IO_FILE**,std::vector<_IO_FILE*,std::allocator<_IO_FILE*>>>
                       *)&local_88);
        move_backward<_IO_FILE**,_IO_FILE**>((_IO_FILE **)*puVar4,pp_Var6,local_40);
        plVar5 = (long *)__normal_iterator<_IO_FILE**,std::vector<_IO_FILE*,std::allocator<_IO_FILE*>>>
                         ::base((__normal_iterator<_IO_FILE**,std::vector<_IO_FILE*,std::allocator<_IO_FILE*>>>
                                 *)&local_88);
        lVar1 = *plVar5;
        puVar4 = (undefined8 *)
                 __normal_iterator<_IO_FILE**,std::vector<_IO_FILE*,std::allocator<_IO_FILE*>>>::
                 base((__normal_iterator<_IO_FILE**,std::vector<_IO_FILE*,std::allocator<_IO_FILE*>>>
                       *)&local_88);
        fill<_IO_FILE**,_IO_FILE*>((_IO_FILE **)*puVar4,(_IO_FILE **)(lVar1 + param_3 * 8),local_50)
        ;
      }
      else {
        paVar3 = (allocator *)
                 _Vector_base<_IO_FILE*,std::allocator<_IO_FILE*>>::_M_get_Tp_allocator
                           ((_Vector_base<_IO_FILE*,std::allocator<_IO_FILE*>> *)local_80);
        pp_Var6 = __uninitialized_fill_n_a<_IO_FILE**,unsigned_long,_IO_FILE*,_IO_FILE*>
                            (*(_IO_FILE ***)(local_80 + 8),param_3 - local_48,local_50,paVar3);
        *(_IO_FILE ***)(local_80 + 8) = pp_Var6;
        paVar3 = (allocator *)
                 _Vector_base<_IO_FILE*,std::allocator<_IO_FILE*>>::_M_get_Tp_allocator
                           ((_Vector_base<_IO_FILE*,std::allocator<_IO_FILE*>> *)local_80);
        pp_Var6 = *(_IO_FILE ***)(local_80 + 8);
        puVar4 = (undefined8 *)
                 __normal_iterator<_IO_FILE**,std::vector<_IO_FILE*,std::allocator<_IO_FILE*>>>::
                 base((__normal_iterator<_IO_FILE**,std::vector<_IO_FILE*,std::allocator<_IO_FILE*>>>
                       *)&local_88);
        __uninitialized_move_a<_IO_FILE**,_IO_FILE**,std::allocator<_IO_FILE*>>
                  ((_IO_FILE **)*puVar4,local_40,pp_Var6,paVar3);
        *(ulong *)(local_80 + 8) = local_48 * 8 + *(long *)(local_80 + 8);
        puVar4 = (undefined8 *)
                 __normal_iterator<_IO_FILE**,std::vector<_IO_FILE*,std::allocator<_IO_FILE*>>>::
                 base((__normal_iterator<_IO_FILE**,std::vector<_IO_FILE*,std::allocator<_IO_FILE*>>>
                       *)&local_88);
        fill<_IO_FILE**,_IO_FILE*>((_IO_FILE **)*puVar4,local_40,local_50);
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




/* std::_Vector_base<_IO_FILE*, std::allocator<_IO_FILE*>
   >::_Vector_impl::_Vector_impl(std::allocator<_IO_FILE*> const&) */

void __thiscall
std::_Vector_base<_IO_FILE*,std::allocator<_IO_FILE*>>::_Vector_impl::_Vector_impl
          (_Vector_impl *this,allocator *param_1)

{
  allocator<_IO_FILE*>::allocator((allocator *)this);
  _Vector_impl_data::_Vector_impl_data((_Vector_impl_data *)this);
  return;
}




/* std::_Vector_base<_IO_FILE*, std::allocator<_IO_FILE*> >::_Vector_base() */

void __thiscall
std::_Vector_base<_IO_FILE*,std::allocator<_IO_FILE*>>::_Vector_base
          (_Vector_base<_IO_FILE*,std::allocator<_IO_FILE*>> *this)

{
  _Vector_impl::_Vector_impl((_Vector_impl *)this);
  return;
}




void printLongLine(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




/* _IO_FILE** std::__copy_move_a2<false, __normal_iterator<_IO_FILE* const*, std::vector<_IO_FILE*,
   std::allocator<_IO_FILE*> > >, _IO_FILE**>(__normal_iterator<_IO_FILE* const*,
   std::vector<_IO_FILE*, std::allocator<_IO_FILE*> > >, __normal_iterator<_IO_FILE* const*,
   std::vector<_IO_FILE*, std::allocator<_IO_FILE*> > >, _IO_FILE**) */

void std::
     __copy_move_a2<false,__normal_iterator<_IO_FILE*const*,std::vector<_IO_FILE*,std::allocator<_IO_FILE*>>>,_IO_FILE**>
               (undefined8 param_1,undefined8 param_2,_IO_FILE **param_3)

{
  _IO_FILE **pp_Var1;
  _IO_FILE **pp_Var2;
  _IO_FILE **pp_Var3;
  _IO_FILE **local_30;
  undefined8 local_28;
  undefined8 local_20;
  
  local_30 = param_3;
  local_28 = param_2;
  local_20 = param_1;
  pp_Var1 = __niter_base<_IO_FILE**>(param_3);
  pp_Var2 = (_IO_FILE **)
            __niter_base<_IO_FILE*const*,std::vector<_IO_FILE*,std::allocator<_IO_FILE*>>>(local_28)
  ;
  pp_Var3 = (_IO_FILE **)
            __niter_base<_IO_FILE*const*,std::vector<_IO_FILE*,std::allocator<_IO_FILE*>>>(local_20)
  ;
  pp_Var1 = __copy_move_a<false,_IO_FILE*const*,_IO_FILE**>(pp_Var3,pp_Var2,pp_Var1);
  __niter_wrap<_IO_FILE**>(&local_30,pp_Var1);
  return;
}




/* _IO_FILE** std::__copy_move<true, true,
   std::random_access_iterator_tag>::__copy_m<_IO_FILE*>(_IO_FILE* const*, _IO_FILE* const*,
   _IO_FILE**) */

_IO_FILE **
std::__copy_move<true,true,std::random_access_iterator_tag>::__copy_m<_IO_FILE*>
          (_IO_FILE **param_1,_IO_FILE **param_2,_IO_FILE **param_3)

{
  long lVar1;
  
  lVar1 = (long)param_2 - (long)param_1 >> 3;
  if (lVar1 != 0) {
    memmove(param_3,param_1,lVar1 * 8);
  }
  return param_3 + lVar1;
}




/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* __enable_if<std::__is_scalar<_IO_FILE*>::__value, void>::__type std::__fill_a<_IO_FILE**,
   _IO_FILE*>(_IO_FILE**, _IO_FILE**, _IO_FILE* const&) */

__type std::__fill_a<_IO_FILE**,_IO_FILE*>(_IO_FILE **param_1,_IO_FILE **param_2,_IO_FILE **param_3)

{
  _IO_FILE *p_Var1;
  _IO_FILE **local_20;
  
  p_Var1 = *param_3;
  for (local_20 = param_1; local_20 != param_2; local_20 = local_20 + 1) {
    *local_20 = p_Var1;
  }
  return (__type)local_20;
}




/* std::vector<_IO_FILE*, std::allocator<_IO_FILE*> >::begin() */

undefined8 __thiscall
std::vector<_IO_FILE*,std::allocator<_IO_FILE*>>::begin
          (vector<_IO_FILE*,std::allocator<_IO_FILE*>> *this)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  __normal_iterator<_IO_FILE**,std::vector<_IO_FILE*,std::allocator<_IO_FILE*>>>::__normal_iterator
            ((__normal_iterator<_IO_FILE**,std::vector<_IO_FILE*,std::allocator<_IO_FILE*>>> *)
             &local_18,(_IO_FILE ***)this);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




undefined8 main(void)

{
  time_t tVar1;
  
  tVar1 = time((time_t *)0x0);
  srand((uint)tVar1);
  printLine("Calling good()...");
  CWE690_NULL_Deref_From_Return__fopen_72::good();
  printLine("Finished good()");
  printLine("Calling bad()...");
  CWE690_NULL_Deref_From_Return__fopen_72::bad();
  printLine("Finished bad()");
  return 0;
}




/* std::vector<_IO_FILE*, std::allocator<_IO_FILE*> >::vector() */

void __thiscall
std::vector<_IO_FILE*,std::allocator<_IO_FILE*>>::vector
          (vector<_IO_FILE*,std::allocator<_IO_FILE*>> *this)

{
  _Vector_base<_IO_FILE*,std::allocator<_IO_FILE*>>::_Vector_base
            ((_Vector_base<_IO_FILE*,std::allocator<_IO_FILE*>> *)this);
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
    __isoc99_sscanf(local_18 * 2 + param_3,&DAT_001040b4,local_1c);
    *(char *)(local_18 + param_1) = local_1c[0];
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void internal_start(long param_1)

{
  (**(code **)(param_1 + 8))(*(undefined8 *)(param_1 + 0x10));
                    /* WARNING: Subroutine does not return */
  pthread_exit((void *)0x0);
}




/* __normal_iterator<_IO_FILE**, std::vector<_IO_FILE*, std::allocator<_IO_FILE*> >
   >::__normal_iterator(_IO_FILE** const&) */

void __thiscall
__normal_iterator<_IO_FILE**,std::vector<_IO_FILE*,std::allocator<_IO_FILE*>>>::__normal_iterator
          (__normal_iterator<_IO_FILE**,std::vector<_IO_FILE*,std::allocator<_IO_FILE*>>> *this,
          _IO_FILE ***param_1)

{
  *(_IO_FILE ***)this = *param_1;
  return;
}




void printStructLine(uint *param_1)

{
  printf("%d -- %d\n",(ulong)*param_1,(ulong)param_1[1]);
  return;
}




/* void std::allocator_traits<std::allocator<_IO_FILE*>
   >::destroy<_IO_FILE*>(std::allocator<_IO_FILE*>&, _IO_FILE**) */

void std::allocator_traits<std::allocator<_IO_FILE*>>::destroy<_IO_FILE*>
               (allocator *param_1,_IO_FILE **param_2)

{
  new_allocator<_IO_FILE*>::destroy<_IO_FILE*>((_IO_FILE **)param_1);
  return;
}




/* std::allocator<_IO_FILE*>::~allocator() */

void __thiscall std::allocator<_IO_FILE*>::~allocator(allocator<_IO_FILE*> *this)

{
  new_allocator<_IO_FILE*>::~new_allocator((new_allocator<_IO_FILE*> *)this);
  return;
}




/* __alloc_traits<std::allocator<_IO_FILE*>, _IO_FILE*>::_S_select_on_copy(std::allocator<_IO_FILE*>
   const&) */

allocator *
__alloc_traits<std::allocator<_IO_FILE*>,_IO_FILE*>::_S_select_on_copy(allocator *param_1)

{
  long lVar1;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  std::allocator_traits<std::allocator<_IO_FILE*>>::select_on_container_copy_construction(param_1);
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1;
}




/* __normal_iterator<_IO_FILE* const*, std::vector<_IO_FILE*, std::allocator<_IO_FILE*> >
   >::__normal_iterator<_IO_FILE**>(__normal_iterator<_IO_FILE**,
   __enable_if<std::__are_same<_IO_FILE**, _IO_FILE**>::__value, std::vector<_IO_FILE*,
   std::allocator<_IO_FILE*> > >::__type> const&) */

void __thiscall
__normal_iterator<_IO_FILE*const*,std::vector<_IO_FILE*,std::allocator<_IO_FILE*>>>::
__normal_iterator<_IO_FILE**>
          (__normal_iterator<_IO_FILE*const*,std::vector<_IO_FILE*,std::allocator<_IO_FILE*>>> *this
          ,__normal_iterator *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)
           __normal_iterator<_IO_FILE**,std::vector<_IO_FILE*,std::allocator<_IO_FILE*>>>::base
                     ((__normal_iterator<_IO_FILE**,std::vector<_IO_FILE*,std::allocator<_IO_FILE*>>>
                       *)param_1);
  *(undefined8 *)this = *puVar1;
  return;
}




/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* void std::fill<_IO_FILE**, _IO_FILE*>(_IO_FILE**, _IO_FILE**, _IO_FILE* const&) */

void std::fill<_IO_FILE**,_IO_FILE*>(_IO_FILE **param_1,_IO_FILE **param_2,_IO_FILE **param_3)

{
  _IO_FILE **pp_Var1;
  _IO_FILE **pp_Var2;
  
  pp_Var1 = __niter_base<_IO_FILE**>(param_2);
  pp_Var2 = __niter_base<_IO_FILE**>(param_1);
  __fill_a<_IO_FILE**,_IO_FILE*>(pp_Var2,pp_Var1,param_3);
  return;
}




void printHexUnsignedCharLine(byte param_1)

{
  printf("%02x\n",(ulong)param_1);
  return;
}




/* std::_Vector_base<_IO_FILE*, std::allocator<_IO_FILE*> >::_M_get_Tp_allocator() const */

_Vector_base<_IO_FILE*,std::allocator<_IO_FILE*>> * __thiscall
std::_Vector_base<_IO_FILE*,std::allocator<_IO_FILE*>>::_M_get_Tp_allocator
          (_Vector_base<_IO_FILE*,std::allocator<_IO_FILE*>> *this)

{
  return this;
}




void printFloatLine(float param_1)

{
  printf("%f\n",(double)param_1);
  return;
}




/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* _IO_FILE** std::copy<std::move_iterator<_IO_FILE**>, _IO_FILE**>(std::move_iterator<_IO_FILE**>,
   std::move_iterator<_IO_FILE**>, _IO_FILE**) */

_IO_FILE **
std::copy<std::move_iterator<_IO_FILE**>,_IO_FILE**>
          (move_iterator param_1,move_iterator param_2,_IO_FILE **param_3)

{
  _IO_FILE **pp_Var1;
  _IO_FILE **pp_Var2;
  
  pp_Var1 = (_IO_FILE **)__miter_base<_IO_FILE**>(param_2);
  pp_Var2 = (_IO_FILE **)__miter_base<_IO_FILE**>(param_1);
  pp_Var1 = __copy_move_a2<true,_IO_FILE**,_IO_FILE**>(pp_Var2,pp_Var1,param_3);
  return pp_Var1;
}




/* std::vector<_IO_FILE*, std::allocator<_IO_FILE*> >::_Temporary_value::~_Temporary_value() */

void __thiscall
std::vector<_IO_FILE*,std::allocator<_IO_FILE*>>::_Temporary_value::~_Temporary_value
          (_Temporary_value *this)

{
  _IO_FILE **pp_Var1;
  
  pp_Var1 = (_IO_FILE **)_M_ptr(this);
  allocator_traits<std::allocator<_IO_FILE*>>::destroy<_IO_FILE*>(*(allocator **)this,pp_Var1);
  return;
}




/* _IO_FILE** std::__uninitialized_copy_a<__normal_iterator<_IO_FILE* const*, std::vector<_IO_FILE*,
   std::allocator<_IO_FILE*> > >, _IO_FILE**, _IO_FILE*>(__normal_iterator<_IO_FILE* const*,
   std::vector<_IO_FILE*, std::allocator<_IO_FILE*> > >, __normal_iterator<_IO_FILE* const*,
   std::vector<_IO_FILE*, std::allocator<_IO_FILE*> > >, _IO_FILE**, std::allocator<_IO_FILE*>&) */

void std::
     __uninitialized_copy_a<__normal_iterator<_IO_FILE*const*,std::vector<_IO_FILE*,std::allocator<_IO_FILE*>>>,_IO_FILE**,_IO_FILE*>
               (undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  uninitialized_copy<__normal_iterator<_IO_FILE*const*,std::vector<_IO_FILE*,std::allocator<_IO_FILE*>>>,_IO_FILE**>
            (param_1,param_2,param_3);
  return;
}




/* std::_Vector_base<_IO_FILE*, std::allocator<_IO_FILE*> >::_M_deallocate(_IO_FILE**, unsigned
   long) */

void __thiscall
std::_Vector_base<_IO_FILE*,std::allocator<_IO_FILE*>>::_M_deallocate
          (_Vector_base<_IO_FILE*,std::allocator<_IO_FILE*>> *this,_IO_FILE **param_1,ulong param_2)

{
  if (param_1 != (_IO_FILE **)0x0) {
    allocator_traits<std::allocator<_IO_FILE*>>::deallocate((allocator *)this,param_1,param_2);
  }
  return;
}




/* std::_Vector_base<_IO_FILE*, std::allocator<_IO_FILE*> >::_M_allocate(unsigned long) */

undefined8 __thiscall
std::_Vector_base<_IO_FILE*,std::allocator<_IO_FILE*>>::_M_allocate
          (_Vector_base<_IO_FILE*,std::allocator<_IO_FILE*>> *this,ulong param_1)

{
  undefined8 uVar1;
  
  if (param_1 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = allocator_traits<std::allocator<_IO_FILE*>>::allocate((allocator *)this,param_1);
  }
  return uVar1;
}




/* new_allocator<_IO_FILE*>::new_allocator(new_allocator<_IO_FILE*> const&) */

void new_allocator<_IO_FILE*>::new_allocator(new_allocator *param_1)

{
  return;
}




/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* _IO_FILE* const& std::forward<_IO_FILE* const&>(std::remove_reference<_IO_FILE* const&>::type&)
    */

_IO_FILE ** std::forward<_IO_FILE*const&>(type *param_1)

{
  return (_IO_FILE **)param_1;
}




void good1(void)

{
  return;
}




void good5(void)

{
  return;
}




void printSizeTLine(undefined8 param_1)

{
  printf("%zu\n",param_1);
  return;
}




/* CWE690_NULL_Deref_From_Return__fopen_72::goodB2GSink(std::vector<_IO_FILE*,
   std::allocator<_IO_FILE*> >) */

void CWE690_NULL_Deref_From_Return__fopen_72::goodB2GSink
               (vector<_IO_FILE*,std::allocator<_IO_FILE*>> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)std::vector<_IO_FILE*,std::allocator<_IO_FILE*>>::operator[](param_1,2);
  if ((FILE *)*puVar1 != (FILE *)0x0) {
    fclose((FILE *)*puVar1);
  }
  return;
}




/* new_allocator<_IO_FILE*>::max_size() const */

undefined8 new_allocator<_IO_FILE*>::max_size(void)

{
  return 0xfffffffffffffff;
}




/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* _IO_FILE** std::uninitialized_fill_n<_IO_FILE**, unsigned long, _IO_FILE*>(_IO_FILE**, unsigned
   long, _IO_FILE* const&) */

_IO_FILE **
std::uninitialized_fill_n<_IO_FILE**,unsigned_long,_IO_FILE*>
          (_IO_FILE **param_1,ulong param_2,_IO_FILE **param_3)

{
  _IO_FILE **pp_Var1;
  
  pp_Var1 = __uninitialized_fill_n<true>::__uninit_fill_n<_IO_FILE**,unsigned_long,_IO_FILE*>
                      (param_1,param_2,param_3);
  return pp_Var1;
}




/* std::vector<_IO_FILE*, std::allocator<_IO_FILE*> >::_Temporary_value::_M_val() */

void __thiscall
std::vector<_IO_FILE*,std::allocator<_IO_FILE*>>::_Temporary_value::_M_val(_Temporary_value *this)

{
  _M_ptr(this);
  return;
}




/* std::_Vector_base<_IO_FILE*, std::allocator<_IO_FILE*> >::~_Vector_base() */

void __thiscall
std::_Vector_base<_IO_FILE*,std::allocator<_IO_FILE*>>::~_Vector_base
          (_Vector_base<_IO_FILE*,std::allocator<_IO_FILE*>> *this)

{
  _M_deallocate(this,*(_IO_FILE ***)this,*(long *)(this + 0x10) - *(long *)this >> 3);
  _Vector_impl::~_Vector_impl((_Vector_impl *)this);
  return;
}




/* std::vector<_IO_FILE*, std::allocator<_IO_FILE*> >::_Temporary_value::_Temporary_value<_IO_FILE*
   const&>(std::vector<_IO_FILE*, std::allocator<_IO_FILE*> >*, _IO_FILE* const&) */

void __thiscall
std::vector<_IO_FILE*,std::allocator<_IO_FILE*>>::_Temporary_value::
_Temporary_value<_IO_FILE*const&>(_Temporary_value *this,vector *param_1,_IO_FILE **param_2)

{
  _IO_FILE **pp_Var1;
  _IO_FILE **pp_Var2;
  
  *(vector **)this = param_1;
  pp_Var1 = forward<_IO_FILE*const&>((type *)param_2);
  pp_Var2 = (_IO_FILE **)_M_ptr(this);
  allocator_traits<std::allocator<_IO_FILE*>>::construct<_IO_FILE*,_IO_FILE*const&>
            (*(allocator **)this,pp_Var2,pp_Var1);
  return;
}




/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* _IO_FILE** std::__copy_move_a2<true, _IO_FILE**, _IO_FILE**>(_IO_FILE**, _IO_FILE**, _IO_FILE**)
    */

_IO_FILE **
std::__copy_move_a2<true,_IO_FILE**,_IO_FILE**>
          (_IO_FILE **param_1,_IO_FILE **param_2,_IO_FILE **param_3)

{
  _IO_FILE **pp_Var1;
  _IO_FILE **pp_Var2;
  _IO_FILE **pp_Var3;
  _IO_FILE **local_30;
  _IO_FILE **local_28;
  _IO_FILE **local_20;
  
  local_30 = param_3;
  local_28 = param_2;
  local_20 = param_1;
  pp_Var1 = __niter_base<_IO_FILE**>(param_3);
  pp_Var2 = __niter_base<_IO_FILE**>(local_28);
  pp_Var3 = __niter_base<_IO_FILE**>(local_20);
  pp_Var1 = __copy_move_a<true,_IO_FILE**,_IO_FILE**>(pp_Var3,pp_Var2,pp_Var1);
  pp_Var1 = __niter_wrap<_IO_FILE**>(&local_30,pp_Var1);
  return pp_Var1;
}




/* __normal_iterator<_IO_FILE**, std::vector<_IO_FILE*, std::allocator<_IO_FILE*> >
   >::TEMPNAMEPLACEHOLDERVALUE(long) const */

undefined8 __thiscall
__normal_iterator<_IO_FILE**,std::vector<_IO_FILE*,std::allocator<_IO_FILE*>>>::operator+
          (__normal_iterator<_IO_FILE**,std::vector<_IO_FILE*,std::allocator<_IO_FILE*>>> *this,
          long param_1)

{
  long in_FS_OFFSET;
  _IO_FILE **local_20;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_20 = (_IO_FILE **)(*(long *)this + param_1 * 8);
  __normal_iterator((__normal_iterator<_IO_FILE**,std::vector<_IO_FILE*,std::allocator<_IO_FILE*>>>
                     *)&local_18,&local_20);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




/* std::allocator<_IO_FILE*>::allocator(std::allocator<_IO_FILE*> const&) */

void std::allocator<_IO_FILE*>::allocator(allocator *param_1)

{
  new_allocator<_IO_FILE*>::new_allocator((new_allocator *)param_1);
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




/* std::allocator_traits<std::allocator<_IO_FILE*> >::max_size(std::allocator<_IO_FILE*> const&) */

void std::allocator_traits<std::allocator<_IO_FILE*>>::max_size(allocator *param_1)

{
  new_allocator<_IO_FILE*>::max_size();
  return;
}




/* new_allocator<_IO_FILE*>::deallocate(_IO_FILE**, unsigned long) */

void new_allocator<_IO_FILE*>::deallocate(_IO_FILE **param_1,ulong param_2)

{
  operator_delete((void *)param_2);
  return;
}




/* std::vector<_IO_FILE*, std::allocator<_IO_FILE*> >::end() */

undefined8 __thiscall
std::vector<_IO_FILE*,std::allocator<_IO_FILE*>>::end
          (vector<_IO_FILE*,std::allocator<_IO_FILE*>> *this)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  __normal_iterator<_IO_FILE**,std::vector<_IO_FILE*,std::allocator<_IO_FILE*>>>::__normal_iterator
            ((__normal_iterator<_IO_FILE**,std::vector<_IO_FILE*,std::allocator<_IO_FILE*>>> *)
             &local_18,(_IO_FILE ***)(this + 8));
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




/* new_allocator<_IO_FILE*>::allocate(unsigned long, void const*) */

void new_allocator<_IO_FILE*>::allocate(ulong param_1,void *param_2)

{
  void *pvVar1;
  
  pvVar1 = (void *)max_size();
  if (pvVar1 < param_2) {
    std::__throw_bad_alloc();
  }
  operator_new((long)param_2 << 3);
  return;
}




/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* _IO_FILE** std::__copy_move_backward_a2<true, _IO_FILE**, _IO_FILE**>(_IO_FILE**, _IO_FILE**,
   _IO_FILE**) */

_IO_FILE **
std::__copy_move_backward_a2<true,_IO_FILE**,_IO_FILE**>
          (_IO_FILE **param_1,_IO_FILE **param_2,_IO_FILE **param_3)

{
  _IO_FILE **pp_Var1;
  _IO_FILE **pp_Var2;
  _IO_FILE **pp_Var3;
  _IO_FILE **local_30;
  _IO_FILE **local_28;
  _IO_FILE **local_20;
  
  local_30 = param_3;
  local_28 = param_2;
  local_20 = param_1;
  pp_Var1 = __niter_base<_IO_FILE**>(param_3);
  pp_Var2 = __niter_base<_IO_FILE**>(local_28);
  pp_Var3 = __niter_base<_IO_FILE**>(local_20);
  pp_Var1 = __copy_move_backward_a<true,_IO_FILE**,_IO_FILE**>(pp_Var3,pp_Var2,pp_Var1);
  pp_Var1 = __niter_wrap<_IO_FILE**>(&local_30,pp_Var1);
  return pp_Var1;
}




/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* _IO_FILE** std::__copy_move_backward_a<true, _IO_FILE**, _IO_FILE**>(_IO_FILE**, _IO_FILE**,
   _IO_FILE**) */

_IO_FILE **
std::__copy_move_backward_a<true,_IO_FILE**,_IO_FILE**>
          (_IO_FILE **param_1,_IO_FILE **param_2,_IO_FILE **param_3)

{
  _IO_FILE **pp_Var1;
  
  pp_Var1 = __copy_move_backward<true,true,std::random_access_iterator_tag>::
            __copy_move_b<_IO_FILE*>(param_1,param_2,param_3);
  return pp_Var1;
}




/* _IO_FILE** std::copy<__normal_iterator<_IO_FILE* const*, std::vector<_IO_FILE*,
   std::allocator<_IO_FILE*> > >, _IO_FILE**>(__normal_iterator<_IO_FILE* const*,
   std::vector<_IO_FILE*, std::allocator<_IO_FILE*> > >, __normal_iterator<_IO_FILE* const*,
   std::vector<_IO_FILE*, std::allocator<_IO_FILE*> > >, _IO_FILE**) */

void std::
     copy<__normal_iterator<_IO_FILE*const*,std::vector<_IO_FILE*,std::allocator<_IO_FILE*>>>,_IO_FILE**>
               (undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = __miter_base<__normal_iterator<_IO_FILE*const*,std::vector<_IO_FILE*,std::allocator<_IO_FILE*>>>>
                    (param_2);
  uVar2 = __miter_base<__normal_iterator<_IO_FILE*const*,std::vector<_IO_FILE*,std::allocator<_IO_FILE*>>>>
                    (param_1);
  __copy_move_a2<false,__normal_iterator<_IO_FILE*const*,std::vector<_IO_FILE*,std::allocator<_IO_FILE*>>>,_IO_FILE**>
            (uVar2,uVar1,param_3);
  return;
}




/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* _IO_FILE** std::__uninitialized_move_if_noexcept_a<_IO_FILE**, _IO_FILE**,
   std::allocator<_IO_FILE*> >(_IO_FILE**, _IO_FILE**, _IO_FILE**, std::allocator<_IO_FILE*>&) */

_IO_FILE **
std::__uninitialized_move_if_noexcept_a<_IO_FILE**,_IO_FILE**,std::allocator<_IO_FILE*>>
          (_IO_FILE **param_1,_IO_FILE **param_2,_IO_FILE **param_3,allocator *param_4)

{
  move_iterator mVar1;
  move_iterator mVar2;
  _IO_FILE **pp_Var3;
  
  mVar1 = __make_move_if_noexcept_iterator<_IO_FILE*,std::move_iterator<_IO_FILE**>>(param_2);
  mVar2 = __make_move_if_noexcept_iterator<_IO_FILE*,std::move_iterator<_IO_FILE**>>(param_1);
  pp_Var3 = __uninitialized_copy_a<std::move_iterator<_IO_FILE**>,_IO_FILE**,_IO_FILE*>
                      (mVar2,mVar1,param_3,param_4);
  return pp_Var3;
}




void good3(void)

{
  return;
}




void bad8(void)

{
  return;
}




void bad3(void)

{
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
    __isoc99_swscanf(local_18 * 8 + param_3,&DAT_001040bc,local_1c);
    *(char *)(local_18 + param_1) = local_1c[0];
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void good4(void)

{
  return;
}




/* std::vector<_IO_FILE*, std::allocator<_IO_FILE*> >::insert(__normal_iterator<_IO_FILE* const*,
   std::vector<_IO_FILE*, std::allocator<_IO_FILE*> > >, unsigned long, _IO_FILE* const&) */

void __thiscall
std::vector<_IO_FILE*,std::allocator<_IO_FILE*>>::insert
          (vector<_IO_FILE*,std::allocator<_IO_FILE*>> *this,undefined8 param_2,undefined8 param_3,
          undefined8 param_4)

{
  difference_type dVar1;
  undefined4 extraout_var;
  undefined8 uVar2;
  long in_FS_OFFSET;
  undefined8 local_38;
  vector<_IO_FILE*,std::allocator<_IO_FILE*>> *local_30;
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
  uVar2 = __normal_iterator<_IO_FILE**,std::vector<_IO_FILE*,std::allocator<_IO_FILE*>>>::operator+
                    ((__normal_iterator<_IO_FILE**,std::vector<_IO_FILE*,std::allocator<_IO_FILE*>>>
                      *)&local_20,local_18);
  _M_fill_insert(local_30,uVar2,param_3,param_4);
  local_20 = begin(local_30);
  __normal_iterator<_IO_FILE**,std::vector<_IO_FILE*,std::allocator<_IO_FILE*>>>::operator+
            ((__normal_iterator<_IO_FILE**,std::vector<_IO_FILE*,std::allocator<_IO_FILE*>>> *)
             &local_20,local_18);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




/* std::allocator_traits<std::allocator<_IO_FILE*>
   >::select_on_container_copy_construction(std::allocator<_IO_FILE*> const&) */

allocator *
std::allocator_traits<std::allocator<_IO_FILE*>>::select_on_container_copy_construction
          (allocator *param_1)

{
  allocator<_IO_FILE*>::allocator(param_1);
  return param_1;
}




void printHexCharLine(char param_1)

{
  printf("%02x\n",(ulong)(uint)(int)param_1);
  return;
}




/* std::_Vector_base<_IO_FILE*, std::allocator<_IO_FILE*> >::_Vector_impl_data::_Vector_impl_data()
    */

void __thiscall
std::_Vector_base<_IO_FILE*,std::allocator<_IO_FILE*>>::_Vector_impl_data::_Vector_impl_data
          (_Vector_impl_data *this)

{
  *(undefined8 *)this = 0;
  *(undefined8 *)(this + 8) = 0;
  *(undefined8 *)(this + 0x10) = 0;
  return;
}




void good7(void)

{
  return;
}




/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* _IO_FILE** std::__niter_wrap<_IO_FILE**>(_IO_FILE** const&, _IO_FILE**) */

_IO_FILE ** std::__niter_wrap<_IO_FILE**>(_IO_FILE ***param_1,_IO_FILE **param_2)

{
  return param_2;
}




/* std::vector<_IO_FILE*, std::allocator<_IO_FILE*> >::size() const */

long __thiscall
std::vector<_IO_FILE*,std::allocator<_IO_FILE*>>::size
          (vector<_IO_FILE*,std::allocator<_IO_FILE*>> *this)

{
  return *(long *)(this + 8) - *(long *)this >> 3;
}




/* void std::allocator_traits<std::allocator<_IO_FILE*> >::construct<_IO_FILE*, _IO_FILE*
   const&>(std::allocator<_IO_FILE*>&, _IO_FILE**, _IO_FILE* const&) */

void std::allocator_traits<std::allocator<_IO_FILE*>>::construct<_IO_FILE*,_IO_FILE*const&>
               (allocator *param_1,_IO_FILE **param_2,_IO_FILE **param_3)

{
  _IO_FILE **pp_Var1;
  
  pp_Var1 = forward<_IO_FILE*const&>((type *)param_3);
  new_allocator<_IO_FILE*>::construct<_IO_FILE*,_IO_FILE*const&>
            ((new_allocator<_IO_FILE*> *)param_1,param_2,pp_Var1);
  return;
}




/* _IO_FILE** std::uninitialized_copy<__normal_iterator<_IO_FILE* const*, std::vector<_IO_FILE*,
   std::allocator<_IO_FILE*> > >, _IO_FILE**>(__normal_iterator<_IO_FILE* const*,
   std::vector<_IO_FILE*, std::allocator<_IO_FILE*> > >, __normal_iterator<_IO_FILE* const*,
   std::vector<_IO_FILE*, std::allocator<_IO_FILE*> > >, _IO_FILE**) */

void std::
     uninitialized_copy<__normal_iterator<_IO_FILE*const*,std::vector<_IO_FILE*,std::allocator<_IO_FILE*>>>,_IO_FILE**>
               (undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  __uninitialized_copy<true>::
  __uninit_copy<__normal_iterator<_IO_FILE*const*,std::vector<_IO_FILE*,std::allocator<_IO_FILE*>>>,_IO_FILE**>
            (param_1,param_2,param_3);
  return;
}




/* std::move_iterator<_IO_FILE**>::move_iterator(_IO_FILE**) */

void __thiscall
std::move_iterator<_IO_FILE**>::move_iterator(move_iterator<_IO_FILE**> *this,_IO_FILE **param_1)

{
  *(_IO_FILE ***)this = param_1;
  return;
}




/* new_allocator<_IO_FILE*>::~new_allocator() */

void __thiscall new_allocator<_IO_FILE*>::~new_allocator(new_allocator<_IO_FILE*> *this)

{
  return;
}




void good2(void)

{
  return;
}




void FUN_00101020(void)

{
  (*(code *)PTR_00106ed8)();
  return;
}




/* std::vector<_IO_FILE*, std::allocator<_IO_FILE*> >::~vector() */

void __thiscall
std::vector<_IO_FILE*,std::allocator<_IO_FILE*>>::~vector
          (vector<_IO_FILE*,std::allocator<_IO_FILE*>> *this)

{
  allocator *paVar1;
  
  paVar1 = (allocator *)
           _Vector_base<_IO_FILE*,std::allocator<_IO_FILE*>>::_M_get_Tp_allocator
                     ((_Vector_base<_IO_FILE*,std::allocator<_IO_FILE*>> *)this);
  _Destroy<_IO_FILE**,_IO_FILE*>(*(_IO_FILE ***)this,*(_IO_FILE ***)(this + 8),paVar1);
  _Vector_base<_IO_FILE*,std::allocator<_IO_FILE*>>::~_Vector_base
            ((_Vector_base<_IO_FILE*,std::allocator<_IO_FILE*>> *)this);
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




/* _IO_FILE** std::__uninitialized_copy<true>::__uninit_copy<__normal_iterator<_IO_FILE* const*,
   std::vector<_IO_FILE*, std::allocator<_IO_FILE*> > >, _IO_FILE**>(__normal_iterator<_IO_FILE*
   const*, std::vector<_IO_FILE*, std::allocator<_IO_FILE*> > >, __normal_iterator<_IO_FILE* const*,
   std::vector<_IO_FILE*, std::allocator<_IO_FILE*> > >, _IO_FILE**) */

void std::__uninitialized_copy<true>::
     __uninit_copy<__normal_iterator<_IO_FILE*const*,std::vector<_IO_FILE*,std::allocator<_IO_FILE*>>>,_IO_FILE**>
               (undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  copy<__normal_iterator<_IO_FILE*const*,std::vector<_IO_FILE*,std::allocator<_IO_FILE*>>>,_IO_FILE**>
            (param_1,param_2,param_3);
  return;
}




/* std::vector<_IO_FILE*, std::allocator<_IO_FILE*> >::max_size() const */

void __thiscall
std::vector<_IO_FILE*,std::allocator<_IO_FILE*>>::max_size
          (vector<_IO_FILE*,std::allocator<_IO_FILE*>> *this)

{
  allocator *paVar1;
  
  paVar1 = (allocator *)
           _Vector_base<_IO_FILE*,std::allocator<_IO_FILE*>>::_M_get_Tp_allocator
                     ((_Vector_base<_IO_FILE*,std::allocator<_IO_FILE*>> *)this);
  _S_max_size(paVar1);
  return;
}




void good9(void)

{
  return;
}




/* _IO_FILE* const* std::__niter_base<_IO_FILE* const*, std::vector<_IO_FILE*,
   std::allocator<_IO_FILE*> > >(__normal_iterator<_IO_FILE* const*, std::vector<_IO_FILE*,
   std::allocator<_IO_FILE*> > >) */

undefined8
std::__niter_base<_IO_FILE*const*,std::vector<_IO_FILE*,std::allocator<_IO_FILE*>>>
          (undefined8 param_1)

{
  undefined8 *puVar1;
  undefined8 local_10;
  
  local_10 = param_1;
  puVar1 = (undefined8 *)
           __normal_iterator<_IO_FILE*const*,std::vector<_IO_FILE*,std::allocator<_IO_FILE*>>>::base
                     ((__normal_iterator<_IO_FILE*const*,std::vector<_IO_FILE*,std::allocator<_IO_FILE*>>>
                       *)&local_10);
  return *puVar1;
}




/* std::vector<_IO_FILE*, std::allocator<_IO_FILE*> >::end() const */

undefined8 __thiscall
std::vector<_IO_FILE*,std::allocator<_IO_FILE*>>::end
          (vector<_IO_FILE*,std::allocator<_IO_FILE*>> *this)

{
  long in_FS_OFFSET;
  _IO_FILE **local_20;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_20 = *(_IO_FILE ***)(this + 8);
  __normal_iterator<_IO_FILE*const*,std::vector<_IO_FILE*,std::allocator<_IO_FILE*>>>::
  __normal_iterator((__normal_iterator<_IO_FILE*const*,std::vector<_IO_FILE*,std::allocator<_IO_FILE*>>>
                     *)&local_18,&local_20);
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




/* __normal_iterator<_IO_FILE* const*, std::vector<_IO_FILE*, std::allocator<_IO_FILE*> >
   >::__normal_iterator(_IO_FILE* const* const&) */

void __thiscall
__normal_iterator<_IO_FILE*const*,std::vector<_IO_FILE*,std::allocator<_IO_FILE*>>>::
__normal_iterator(__normal_iterator<_IO_FILE*const*,std::vector<_IO_FILE*,std::allocator<_IO_FILE*>>>
                  *this,_IO_FILE ***param_1)

{
  *(_IO_FILE ***)this = *param_1;
  return;
}




/* void std::_Destroy_aux<true>::__destroy<_IO_FILE**>(_IO_FILE**, _IO_FILE**) */

void std::_Destroy_aux<true>::__destroy<_IO_FILE**>(_IO_FILE **param_1,_IO_FILE **param_2)

{
  return;
}




void stdThreadLockRelease(pthread_mutex_t *param_1)

{
  pthread_mutex_unlock(param_1);
  return;
}




/* void new_allocator<_IO_FILE*>::destroy<_IO_FILE*>(_IO_FILE**) */

void new_allocator<_IO_FILE*>::destroy<_IO_FILE*>(_IO_FILE **param_1)

{
  return;
}




/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* std::move_iterator<_IO_FILE**> std::make_move_iterator<_IO_FILE**>(_IO_FILE**) */

move_iterator std::make_move_iterator<_IO_FILE**>(_IO_FILE **param_1)

{
  long in_FS_OFFSET;
  move_iterator local_18 [2];
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  move_iterator<_IO_FILE**>::move_iterator((move_iterator<_IO_FILE**> *)local_18,param_1);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18[0];
}




/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* _IO_FILE** std::__copy_move_a<false, _IO_FILE* const*, _IO_FILE**>(_IO_FILE* const*, _IO_FILE*
   const*, _IO_FILE**) */

_IO_FILE **
std::__copy_move_a<false,_IO_FILE*const*,_IO_FILE**>
          (_IO_FILE **param_1,_IO_FILE **param_2,_IO_FILE **param_3)

{
  _IO_FILE **pp_Var1;
  
  pp_Var1 = __copy_move<false,true,std::random_access_iterator_tag>::__copy_m<_IO_FILE*>
                      (param_1,param_2,param_3);
  return pp_Var1;
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




void bad6(void)

{
  return;
}




/* std::vector<_IO_FILE*, std::allocator<_IO_FILE*> >::cbegin() const */

undefined8 __thiscall
std::vector<_IO_FILE*,std::allocator<_IO_FILE*>>::cbegin
          (vector<_IO_FILE*,std::allocator<_IO_FILE*>> *this)

{
  long in_FS_OFFSET;
  _IO_FILE **local_20;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_20 = *(_IO_FILE ***)this;
  __normal_iterator<_IO_FILE*const*,std::vector<_IO_FILE*,std::allocator<_IO_FILE*>>>::
  __normal_iterator((__normal_iterator<_IO_FILE*const*,std::vector<_IO_FILE*,std::allocator<_IO_FILE*>>>
                     *)&local_18,&local_20);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




undefined8 globalReturnsFalse(void)

{
  return 0;
}




/* new_allocator<_IO_FILE*>::new_allocator() */

void new_allocator<_IO_FILE*>::new_allocator(void)

{
  return;
}




void bad7(void)

{
  return;
}




/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* _IO_FILE** std::__uninitialized_fill_n_a<_IO_FILE**, unsigned long, _IO_FILE*,
   _IO_FILE*>(_IO_FILE**, unsigned long, _IO_FILE* const&, std::allocator<_IO_FILE*>&) */

_IO_FILE **
std::__uninitialized_fill_n_a<_IO_FILE**,unsigned_long,_IO_FILE*,_IO_FILE*>
          (_IO_FILE **param_1,ulong param_2,_IO_FILE **param_3,allocator *param_4)

{
  _IO_FILE **pp_Var1;
  
  pp_Var1 = uninitialized_fill_n<_IO_FILE**,unsigned_long,_IO_FILE*>(param_1,param_2,param_3);
  return pp_Var1;
}




/* __normal_iterator<_IO_FILE**, std::vector<_IO_FILE*, std::allocator<_IO_FILE*> >
   >::difference_type TEMPNAMEPLACEHOLDERVALUE(__normal_iterator<_IO_FILE**, std::vector<_IO_FILE*,
   std::allocator<_IO_FILE*> > > const&, __normal_iterator<_IO_FILE**, std::vector<_IO_FILE*,
   std::allocator<_IO_FILE*> > > const&) */

difference_type operator-(__normal_iterator *param_1,__normal_iterator *param_2)

{
  long lVar1;
  long *plVar2;
  
  plVar2 = (long *)__normal_iterator<_IO_FILE**,std::vector<_IO_FILE*,std::allocator<_IO_FILE*>>>::
                   base((__normal_iterator<_IO_FILE**,std::vector<_IO_FILE*,std::allocator<_IO_FILE*>>>
                         *)param_1);
  lVar1 = *plVar2;
  plVar2 = (long *)__normal_iterator<_IO_FILE**,std::vector<_IO_FILE*,std::allocator<_IO_FILE*>>>::
                   base((__normal_iterator<_IO_FILE**,std::vector<_IO_FILE*,std::allocator<_IO_FILE*>>>
                         *)param_2);
  return (difference_type)(lVar1 - *plVar2 >> 3);
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




/* std::vector<_IO_FILE*, std::allocator<_IO_FILE*> >::operator[](unsigned long) */

long __thiscall
std::vector<_IO_FILE*,std::allocator<_IO_FILE*>>::operator[]
          (vector<_IO_FILE*,std::allocator<_IO_FILE*>> *this,ulong param_1)

{
  return *(long *)this + param_1 * 8;
}




/* _IO_FILE** std::__uninitialized_fill_n<true>::__uninit_fill_n<_IO_FILE**, unsigned long,
   _IO_FILE*>(_IO_FILE**, unsigned long, _IO_FILE* const&) */

_IO_FILE **
std::__uninitialized_fill_n<true>::__uninit_fill_n<_IO_FILE**,unsigned_long,_IO_FILE*>
          (_IO_FILE **param_1,ulong param_2,_IO_FILE **param_3)

{
  _IO_FILE **pp_Var1;
  
  pp_Var1 = fill_n<_IO_FILE**,unsigned_long,_IO_FILE*>(param_1,param_2,param_3);
  return pp_Var1;
}




void bad1(void)

{
  return;
}




/* std::vector<_IO_FILE*, std::allocator<_IO_FILE*> >::_S_max_size(std::allocator<_IO_FILE*> const&)
    */

ulong std::vector<_IO_FILE*,std::allocator<_IO_FILE*>>::_S_max_size(allocator *param_1)

{
  ulong *puVar1;
  long in_FS_OFFSET;
  ulong local_20;
  ulong local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_20 = 0xfffffffffffffff;
  local_18 = allocator_traits<std::allocator<_IO_FILE*>>::max_size(param_1);
  puVar1 = min<unsigned_long>(&local_20,&local_18);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return *puVar1;
}




/* _IO_FILE** std::__copy_move<false, true,
   std::random_access_iterator_tag>::__copy_m<_IO_FILE*>(_IO_FILE* const*, _IO_FILE* const*,
   _IO_FILE**) */

_IO_FILE **
std::__copy_move<false,true,std::random_access_iterator_tag>::__copy_m<_IO_FILE*>
          (_IO_FILE **param_1,_IO_FILE **param_2,_IO_FILE **param_3)

{
  long lVar1;
  
  lVar1 = (long)param_2 - (long)param_1 >> 3;
  if (lVar1 != 0) {
    memmove(param_3,param_1,lVar1 * 8);
  }
  return param_3 + lVar1;
}




void bad9(void)

{
  return;
}




/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* _IO_FILE** std::__miter_base<_IO_FILE**>(_IO_FILE**) */

_IO_FILE ** std::__miter_base<_IO_FILE**>(_IO_FILE **param_1)

{
  return param_1;
}




void printUnsignedLine(uint param_1)

{
  printf("%u\n",(ulong)param_1);
  return;
}




void bad5(void)

{
  return;
}




/* std::vector<_IO_FILE*, std::allocator<_IO_FILE*> >::begin() const */

undefined8 __thiscall
std::vector<_IO_FILE*,std::allocator<_IO_FILE*>>::begin
          (vector<_IO_FILE*,std::allocator<_IO_FILE*>> *this)

{
  long in_FS_OFFSET;
  _IO_FILE **local_20;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_20 = *(_IO_FILE ***)this;
  __normal_iterator<_IO_FILE*const*,std::vector<_IO_FILE*,std::allocator<_IO_FILE*>>>::
  __normal_iterator((__normal_iterator<_IO_FILE*const*,std::vector<_IO_FILE*,std::allocator<_IO_FILE*>>>
                     *)&local_18,&local_20);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




/* _IO_FILE** std::__copy_move_backward<true, true,
   std::random_access_iterator_tag>::__copy_move_b<_IO_FILE*>(_IO_FILE* const*, _IO_FILE* const*,
   _IO_FILE**) */

_IO_FILE **
std::__copy_move_backward<true,true,std::random_access_iterator_tag>::__copy_move_b<_IO_FILE*>
          (_IO_FILE **param_1,_IO_FILE **param_2,_IO_FILE **param_3)

{
  long lVar1;
  
  lVar1 = (long)param_2 - (long)param_1 >> 3;
  if (lVar1 != 0) {
    memmove(param_3 + -lVar1,param_1,lVar1 * 8);
  }
  return param_3 + -lVar1;
}



