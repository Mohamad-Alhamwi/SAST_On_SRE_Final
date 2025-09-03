
/* new_allocator<int*>::~new_allocator() */

void __thiscall new_allocator<int*>::~new_allocator(new_allocator<int*> *this)

{
  return;
}




/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* int** std::__copy_move_a2<true, int**, int**>(int**, int**, int**) */

int ** std::__copy_move_a2<true,int**,int**>(int **param_1,int **param_2,int **param_3)

{
  int **ppiVar1;
  int **ppiVar2;
  int **ppiVar3;
  int **local_30;
  int **local_28;
  int **local_20;
  
  local_30 = param_3;
  local_28 = param_2;
  local_20 = param_1;
  ppiVar1 = __niter_base<int**>(param_3);
  ppiVar2 = __niter_base<int**>(local_28);
  ppiVar3 = __niter_base<int**>(local_20);
  ppiVar1 = __copy_move_a<true,int**,int**>(ppiVar3,ppiVar2,ppiVar1);
  ppiVar1 = __niter_wrap<int**>(&local_30,ppiVar1);
  return ppiVar1;
}




void printStructLine(uint *param_1)

{
  printf("%d -- %d\n",(ulong)*param_1,(ulong)param_1[1]);
  return;
}




/* CWE476_NULL_Pointer_Dereference__int_72::goodG2BSink(std::vector<int*, std::allocator<int*> >) */

void CWE476_NULL_Pointer_Dereference__int_72::goodG2BSink
               (vector<int*,std::allocator<int*>> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)std::vector<int*,std::allocator<int*>>::operator[](param_1,2);
  printIntLine(*(undefined4 *)*puVar1);
  return;
}




/* CWE476_NULL_Pointer_Dereference__int_72::goodB2G() */

void CWE476_NULL_Pointer_Dereference__int_72::goodB2G(void)

{
  long in_FS_OFFSET;
  undefined8 local_68;
  undefined8 local_60;
  vector<int*,std::allocator<int*>> local_58 [32];
  undefined8 local_38 [3];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  std::vector<int*,std::allocator<int*>>::vector(local_58);
  local_68 = 0;
  local_60 = std::vector<int*,std::allocator<int*>>::end(local_58);
  __normal_iterator<int*const*,std::vector<int*,std::allocator<int*>>>::__normal_iterator<int**>
            ((__normal_iterator<int*const*,std::vector<int*,std::allocator<int*>>> *)local_38,
             (__normal_iterator *)&local_60);
                    /* try { // try from 00101824 to 001018b9 has its CatchHandler @ 00101905 */
  std::vector<int*,std::allocator<int*>>::insert(local_58,local_38[0],1,&local_68);
  local_60 = std::vector<int*,std::allocator<int*>>::end(local_58);
  __normal_iterator<int*const*,std::vector<int*,std::allocator<int*>>>::__normal_iterator<int**>
            ((__normal_iterator<int*const*,std::vector<int*,std::allocator<int*>>> *)local_38,
             (__normal_iterator *)&local_60);
  std::vector<int*,std::allocator<int*>>::insert(local_58,local_38[0],1,&local_68);
  local_60 = std::vector<int*,std::allocator<int*>>::end(local_58);
  __normal_iterator<int*const*,std::vector<int*,std::allocator<int*>>>::__normal_iterator<int**>
            ((__normal_iterator<int*const*,std::vector<int*,std::allocator<int*>>> *)local_38,
             (__normal_iterator *)&local_60);
  std::vector<int*,std::allocator<int*>>::insert(local_58,local_38[0],1,&local_68);
  std::vector<int*,std::allocator<int*>>::vector
            ((vector<int*,std::allocator<int*>> *)local_38,(vector *)local_58);
                    /* try { // try from 001018c1 to 001018c5 has its CatchHandler @ 001018f0 */
  goodB2GSink(local_38);
  std::vector<int*,std::allocator<int*>>::~vector((vector<int*,std::allocator<int*>> *)local_38);
  std::vector<int*,std::allocator<int*>>::~vector(local_58);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




/* __normal_iterator<int**, std::vector<int*, std::allocator<int*> >
   >::TEMPNAMEPLACEHOLDERVALUE(long) const */

undefined8 __thiscall
__normal_iterator<int**,std::vector<int*,std::allocator<int*>>>::operator+
          (__normal_iterator<int**,std::vector<int*,std::allocator<int*>>> *this,long param_1)

{
  long in_FS_OFFSET;
  int **local_20;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_20 = (int **)(*(long *)this + param_1 * 8);
  __normal_iterator((__normal_iterator<int**,std::vector<int*,std::allocator<int*>>> *)&local_18,
                    &local_20);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* int** std::fill_n<int**, unsigned long, int*>(int**, unsigned long, int* const&) */

int ** std::fill_n<int**,unsigned_long,int*>(int **param_1,ulong param_2,int **param_3)

{
  __type _Var1;
  int **ppiVar2;
  undefined4 extraout_var;
  int **local_10;
  
  local_10 = param_1;
  ppiVar2 = __niter_base<int**>(param_1);
  _Var1 = __fill_n_a<int**,unsigned_long,int*>(ppiVar2,param_2,param_3);
  ppiVar2 = __niter_wrap<int**>(&local_10,(int **)CONCAT44(extraout_var,_Var1));
  return ppiVar2;
}




/* int** std::__copy_move_a2<false, __normal_iterator<int* const*, std::vector<int*,
   std::allocator<int*> > >, int**>(__normal_iterator<int* const*, std::vector<int*,
   std::allocator<int*> > >, __normal_iterator<int* const*, std::vector<int*, std::allocator<int*> >
   >, int**) */

void std::
     __copy_move_a2<false,__normal_iterator<int*const*,std::vector<int*,std::allocator<int*>>>,int**>
               (undefined8 param_1,undefined8 param_2,int **param_3)

{
  int **ppiVar1;
  int **ppiVar2;
  int **ppiVar3;
  int **local_30;
  undefined8 local_28;
  undefined8 local_20;
  
  local_30 = param_3;
  local_28 = param_2;
  local_20 = param_1;
  ppiVar1 = __niter_base<int**>(param_3);
  ppiVar2 = (int **)__niter_base<int*const*,std::vector<int*,std::allocator<int*>>>(local_28);
  ppiVar3 = (int **)__niter_base<int*const*,std::vector<int*,std::allocator<int*>>>(local_20);
  ppiVar1 = __copy_move_a<false,int*const*,int**>(ppiVar3,ppiVar2,ppiVar1);
  __niter_wrap<int**>(&local_30,ppiVar1);
  return;
}




/* std::allocator_traits<std::allocator<int*>
   >::select_on_container_copy_construction(std::allocator<int*> const&) */

allocator *
std::allocator_traits<std::allocator<int*>>::select_on_container_copy_construction
          (allocator *param_1)

{
  allocator<int*>::allocator(param_1);
  return param_1;
}




/* CWE476_NULL_Pointer_Dereference__int_72::bad() */

void CWE476_NULL_Pointer_Dereference__int_72::bad(void)

{
  long in_FS_OFFSET;
  undefined8 local_68;
  undefined8 local_60;
  vector<int*,std::allocator<int*>> local_58 [32];
  undefined8 local_38 [3];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  std::vector<int*,std::allocator<int*>>::vector(local_58);
  local_68 = 0;
  local_60 = std::vector<int*,std::allocator<int*>>::end(local_58);
  __normal_iterator<int*const*,std::vector<int*,std::allocator<int*>>>::__normal_iterator<int**>
            ((__normal_iterator<int*const*,std::vector<int*,std::allocator<int*>>> *)local_38,
             (__normal_iterator *)&local_60);
                    /* try { // try from 00101533 to 001015c8 has its CatchHandler @ 00101614 */
  std::vector<int*,std::allocator<int*>>::insert(local_58,local_38[0],1,&local_68);
  local_60 = std::vector<int*,std::allocator<int*>>::end(local_58);
  __normal_iterator<int*const*,std::vector<int*,std::allocator<int*>>>::__normal_iterator<int**>
            ((__normal_iterator<int*const*,std::vector<int*,std::allocator<int*>>> *)local_38,
             (__normal_iterator *)&local_60);
  std::vector<int*,std::allocator<int*>>::insert(local_58,local_38[0],1,&local_68);
  local_60 = std::vector<int*,std::allocator<int*>>::end(local_58);
  __normal_iterator<int*const*,std::vector<int*,std::allocator<int*>>>::__normal_iterator<int**>
            ((__normal_iterator<int*const*,std::vector<int*,std::allocator<int*>>> *)local_38,
             (__normal_iterator *)&local_60);
  std::vector<int*,std::allocator<int*>>::insert(local_58,local_38[0],1,&local_68);
  std::vector<int*,std::allocator<int*>>::vector
            ((vector<int*,std::allocator<int*>> *)local_38,(vector *)local_58);
                    /* try { // try from 001015d0 to 001015d4 has its CatchHandler @ 001015ff */
  badSink(local_38);
  std::vector<int*,std::allocator<int*>>::~vector((vector<int*,std::allocator<int*>> *)local_38);
  std::vector<int*,std::allocator<int*>>::~vector(local_58);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




/* void std::allocator_traits<std::allocator<int*> >::destroy<int*>(std::allocator<int*>&, int**) */

void std::allocator_traits<std::allocator<int*>>::destroy<int*>(allocator *param_1,int **param_2)

{
  new_allocator<int*>::destroy<int*>((int **)param_1);
  return;
}




/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* std::move_iterator<int**> std::make_move_iterator<int**>(int**) */

move_iterator std::make_move_iterator<int**>(int **param_1)

{
  long in_FS_OFFSET;
  move_iterator local_18 [2];
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  move_iterator<int**>::move_iterator((move_iterator<int**> *)local_18,param_1);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18[0];
}




void good5(void)

{
  return;
}




/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* __enable_if<std::__is_scalar<int*>::__value, void>::__type std::__fill_a<int**, int*>(int**,
   int**, int* const&) */

__type std::__fill_a<int**,int*>(int **param_1,int **param_2,int **param_3)

{
  int *piVar1;
  int **local_20;
  
  piVar1 = *param_3;
  for (local_20 = param_1; local_20 != param_2; local_20 = local_20 + 1) {
    *local_20 = piVar1;
  }
  return (__type)local_20;
}




/* CWE476_NULL_Pointer_Dereference__int_72::goodG2B() */

void CWE476_NULL_Pointer_Dereference__int_72::goodG2B(void)

{
  long in_FS_OFFSET;
  undefined4 local_6c;
  undefined4 *local_68;
  undefined8 local_60;
  vector<int*,std::allocator<int*>> local_58 [32];
  undefined8 local_38 [3];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  local_6c = 5;
  std::vector<int*,std::allocator<int*>>::vector(local_58);
  local_68 = &local_6c;
  local_60 = std::vector<int*,std::allocator<int*>>::end(local_58);
  __normal_iterator<int*const*,std::vector<int*,std::allocator<int*>>>::__normal_iterator<int**>
            ((__normal_iterator<int*const*,std::vector<int*,std::allocator<int*>>> *)local_38,
             (__normal_iterator *)&local_60);
                    /* try { // try from 001016af to 00101744 has its CatchHandler @ 00101790 */
  std::vector<int*,std::allocator<int*>>::insert(local_58,local_38[0],1,&local_68);
  local_60 = std::vector<int*,std::allocator<int*>>::end(local_58);
  __normal_iterator<int*const*,std::vector<int*,std::allocator<int*>>>::__normal_iterator<int**>
            ((__normal_iterator<int*const*,std::vector<int*,std::allocator<int*>>> *)local_38,
             (__normal_iterator *)&local_60);
  std::vector<int*,std::allocator<int*>>::insert(local_58,local_38[0],1,&local_68);
  local_60 = std::vector<int*,std::allocator<int*>>::end(local_58);
  __normal_iterator<int*const*,std::vector<int*,std::allocator<int*>>>::__normal_iterator<int**>
            ((__normal_iterator<int*const*,std::vector<int*,std::allocator<int*>>> *)local_38,
             (__normal_iterator *)&local_60);
  std::vector<int*,std::allocator<int*>>::insert(local_58,local_38[0],1,&local_68);
  std::vector<int*,std::allocator<int*>>::vector
            ((vector<int*,std::allocator<int*>> *)local_38,(vector *)local_58);
                    /* try { // try from 0010174c to 00101750 has its CatchHandler @ 0010177b */
  goodG2BSink(local_38);
  std::vector<int*,std::allocator<int*>>::~vector((vector<int*,std::allocator<int*>> *)local_38);
  std::vector<int*,std::allocator<int*>>::~vector(local_58);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




/* new_allocator<int*>::max_size() const */

undefined8 new_allocator<int*>::max_size(void)

{
  return 0xfffffffffffffff;
}




void printLongLine(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




void internal_start(long param_1)

{
  (**(code **)(param_1 + 8))(*(undefined8 *)(param_1 + 0x10));
                    /* WARNING: Subroutine does not return */
  pthread_exit((void *)0x0);
}




/* std::vector<int*, std::allocator<int*> >::vector(std::vector<int*, std::allocator<int*> > const&)
    */

void __thiscall
std::vector<int*,std::allocator<int*>>::vector
          (vector<int*,std::allocator<int*>> *this,vector *param_1)

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
  _Vector_base<int*,std::allocator<int*>>::_M_get_Tp_allocator
            ((_Vector_base<int*,std::allocator<int*>> *)param_1);
  __alloc_traits<std::allocator<int*>,int*>::_S_select_on_copy(&local_31);
  uVar1 = size((vector<int*,std::allocator<int*>> *)param_1);
                    /* try { // try from 00101cb0 to 00101cb4 has its CatchHandler @ 00101d1d */
  _Vector_base<int*,std::allocator<int*>>::_Vector_base
            ((_Vector_base<int*,std::allocator<int*>> *)this,uVar1,&local_31);
  allocator<int*>::~allocator((allocator<int*> *)&local_31);
  uVar2 = _Vector_base<int*,std::allocator<int*>>::_M_get_Tp_allocator
                    ((_Vector_base<int*,std::allocator<int*>> *)this);
  uVar5 = *(undefined8 *)this;
  uVar3 = end((vector<int*,std::allocator<int*>> *)param_1);
  uVar4 = begin((vector<int*,std::allocator<int*>> *)param_1);
                    /* try { // try from 00101cfe to 00101d02 has its CatchHandler @ 00101d3b */
  uVar5 = __uninitialized_copy_a<__normal_iterator<int*const*,std::vector<int*,std::allocator<int*>>>,int**,int*>
                    (uVar4,uVar3,uVar5,uVar2);
  *(undefined8 *)(this + 8) = uVar5;
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




/* std::vector<int*, std::allocator<int*> >::max_size() const */

void __thiscall
std::vector<int*,std::allocator<int*>>::max_size(vector<int*,std::allocator<int*>> *this)

{
  allocator *paVar1;
  
  paVar1 = (allocator *)
           _Vector_base<int*,std::allocator<int*>>::_M_get_Tp_allocator
                     ((_Vector_base<int*,std::allocator<int*>> *)this);
  _S_max_size(paVar1);
  return;
}




/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* int** std::__miter_base<int**>(int**) */

int ** std::__miter_base<int**>(int **param_1)

{
  return param_1;
}




/* int** std::__copy_move<false, true, std::random_access_iterator_tag>::__copy_m<int*>(int* const*,
   int* const*, int**) */

int ** std::__copy_move<false,true,std::random_access_iterator_tag>::__copy_m<int*>
                 (int **param_1,int **param_2,int **param_3)

{
  long lVar1;
  
  lVar1 = (long)param_2 - (long)param_1 >> 3;
  if (lVar1 != 0) {
    memmove(param_3,param_1,lVar1 * 8);
  }
  return param_3 + lVar1;
}




/* void std::_Destroy_aux<true>::__destroy<int**>(int**, int**) */

void std::_Destroy_aux<true>::__destroy<int**>(int **param_1,int **param_2)

{
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




/* CWE476_NULL_Pointer_Dereference__int_72::goodB2GSink(std::vector<int*, std::allocator<int*> >) */

void CWE476_NULL_Pointer_Dereference__int_72::goodB2GSink
               (vector<int*,std::allocator<int*>> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)std::vector<int*,std::allocator<int*>>::operator[](param_1,2);
  if ((undefined4 *)*puVar1 == (undefined4 *)0x0) {
    printLine("data is NULL");
  }
  else {
    printIntLine(*(undefined4 *)*puVar1);
  }
  return;
}




void bad4(void)

{
  return;
}




int globalReturnsTrueOrFalse(void)

{
  int iVar1;
  
  iVar1 = rand();
  return iVar1 % 2;
}




/* void new_allocator<int*>::construct<int*, int* const&>(int**, int* const&) */

void __thiscall
new_allocator<int*>::construct<int*,int*const&>
          (new_allocator<int*> *this,int **param_1,int **param_2)

{
  int *piVar1;
  int **ppiVar2;
  undefined8 *puVar3;
  
  ppiVar2 = std::forward<int*const&>((type *)param_2);
  piVar1 = *ppiVar2;
  puVar3 = (undefined8 *)operator_new(8,param_1);
  *puVar3 = piVar1;
  return;
}




/* std::allocator_traits<std::allocator<int*> >::max_size(std::allocator<int*> const&) */

void std::allocator_traits<std::allocator<int*>>::max_size(allocator *param_1)

{
  new_allocator<int*>::max_size();
  return;
}




/* __normal_iterator<int**, std::vector<int*, std::allocator<int*> > >::base() const */

__normal_iterator<int**,std::vector<int*,std::allocator<int*>>> * __thiscall
__normal_iterator<int**,std::vector<int*,std::allocator<int*>>>::base
          (__normal_iterator<int**,std::vector<int*,std::allocator<int*>>> *this)

{
  return this;
}




void printLongLongLine(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




/* std::vector<int*, std::allocator<int*> >::~vector() */

void __thiscall
std::vector<int*,std::allocator<int*>>::~vector(vector<int*,std::allocator<int*>> *this)

{
  allocator *paVar1;
  
  paVar1 = (allocator *)
           _Vector_base<int*,std::allocator<int*>>::_M_get_Tp_allocator
                     ((_Vector_base<int*,std::allocator<int*>> *)this);
  _Destroy<int**,int*>(*(int ***)this,*(int ***)(this + 8),paVar1);
  _Vector_base<int*,std::allocator<int*>>::~_Vector_base
            ((_Vector_base<int*,std::allocator<int*>> *)this);
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




void good8(void)

{
  return;
}




void bad5(void)

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




/* std::_Vector_base<int*, std::allocator<int*> >::_Vector_base() */

void __thiscall
std::_Vector_base<int*,std::allocator<int*>>::_Vector_base
          (_Vector_base<int*,std::allocator<int*>> *this)

{
  _Vector_impl::_Vector_impl((_Vector_impl *)this);
  return;
}




void stdThreadLockRelease(pthread_mutex_t *param_1)

{
  pthread_mutex_unlock(param_1);
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




/* std::vector<int*, std::allocator<int*> >::_S_max_size(std::allocator<int*> const&) */

ulong std::vector<int*,std::allocator<int*>>::_S_max_size(allocator *param_1)

{
  ulong *puVar1;
  long in_FS_OFFSET;
  ulong local_20;
  ulong local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_20 = 0xfffffffffffffff;
  local_18 = allocator_traits<std::allocator<int*>>::max_size(param_1);
  puVar1 = min<unsigned_long>(&local_20,&local_18);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return *puVar1;
}




/* new_allocator<int*>::allocate(unsigned long, void const*) */

void new_allocator<int*>::allocate(ulong param_1,void *param_2)

{
  void *pvVar1;
  
  pvVar1 = (void *)max_size();
  if (pvVar1 < param_2) {
    std::__throw_bad_alloc();
  }
  operator_new((long)param_2 << 3);
  return;
}




/* std::vector<int*, std::allocator<int*> >::end() const */

undefined8 __thiscall
std::vector<int*,std::allocator<int*>>::end(vector<int*,std::allocator<int*>> *this)

{
  long in_FS_OFFSET;
  int **local_20;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_20 = *(int ***)(this + 8);
  __normal_iterator<int*const*,std::vector<int*,std::allocator<int*>>>::__normal_iterator
            ((__normal_iterator<int*const*,std::vector<int*,std::allocator<int*>>> *)&local_18,
             &local_20);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* std::move_iterator<int**> std::__make_move_if_noexcept_iterator<int*, std::move_iterator<int**>
   >(int**) */

move_iterator std::__make_move_if_noexcept_iterator<int*,std::move_iterator<int**>>(int **param_1)

{
  long in_FS_OFFSET;
  move_iterator local_18 [2];
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  move_iterator<int**>::move_iterator((move_iterator<int**> *)local_18,param_1);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18[0];
}




void bad8(void)

{
  return;
}




/* std::vector<int*, std::allocator<int*> >::begin() */

undefined8 __thiscall
std::vector<int*,std::allocator<int*>>::begin(vector<int*,std::allocator<int*>> *this)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  __normal_iterator<int**,std::vector<int*,std::allocator<int*>>>::__normal_iterator
            ((__normal_iterator<int**,std::vector<int*,std::allocator<int*>>> *)&local_18,
             (int ***)this);
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




/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* void std::_Destroy<int**>(int**, int**) */

void std::_Destroy<int**>(int **param_1,int **param_2)

{
  _Destroy_aux<true>::__destroy<int**>(param_1,param_2);
  return;
}




/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* int** std::move_backward<int**, int**>(int**, int**, int**) */

int ** std::move_backward<int**,int**>(int **param_1,int **param_2,int **param_3)

{
  int **ppiVar1;
  int **ppiVar2;
  
  ppiVar1 = __miter_base<int**>(param_2);
  ppiVar2 = __miter_base<int**>(param_1);
  ppiVar1 = __copy_move_backward_a2<true,int**,int**>(ppiVar2,ppiVar1,param_3);
  return ppiVar1;
}




/* std::vector<int*, std::allocator<int*> >::_Temporary_value::_M_ptr() */

_Temporary_value * __thiscall
std::vector<int*,std::allocator<int*>>::_Temporary_value::_M_ptr(_Temporary_value *this)

{
  return this + 8;
}




/* std::vector<int*, std::allocator<int*> >::_Temporary_value::_M_val() */

void __thiscall
std::vector<int*,std::allocator<int*>>::_Temporary_value::_M_val(_Temporary_value *this)

{
  _M_ptr(this);
  return;
}




/* __normal_iterator<int* const*, std::vector<int*, std::allocator<int*> > >::difference_type
   TEMPNAMEPLACEHOLDERVALUE(__normal_iterator<int* const*, std::vector<int*, std::allocator<int*> >
   > const&, __normal_iterator<int* const*, std::vector<int*, std::allocator<int*> > > const&) */

difference_type operator-(__normal_iterator *param_1,__normal_iterator *param_2)

{
  long lVar1;
  long *plVar2;
  
  plVar2 = (long *)__normal_iterator<int*const*,std::vector<int*,std::allocator<int*>>>::base
                             ((__normal_iterator<int*const*,std::vector<int*,std::allocator<int*>>>
                               *)param_1);
  lVar1 = *plVar2;
  plVar2 = (long *)__normal_iterator<int*const*,std::vector<int*,std::allocator<int*>>>::base
                             ((__normal_iterator<int*const*,std::vector<int*,std::allocator<int*>>>
                               *)param_2);
  return (difference_type)(lVar1 - *plVar2 >> 3);
}




/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* int** std::copy<std::move_iterator<int**>, int**>(std::move_iterator<int**>,
   std::move_iterator<int**>, int**) */

int ** std::copy<std::move_iterator<int**>,int**>
                 (move_iterator param_1,move_iterator param_2,int **param_3)

{
  int **ppiVar1;
  int **ppiVar2;
  
  ppiVar1 = (int **)__miter_base<int**>(param_2);
  ppiVar2 = (int **)__miter_base<int**>(param_1);
  ppiVar1 = __copy_move_a2<true,int**,int**>(ppiVar2,ppiVar1,param_3);
  return ppiVar1;
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




/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* int** std::__uninitialized_move_if_noexcept_a<int**, int**, std::allocator<int*> >(int**, int**,
   int**, std::allocator<int*>&) */

int ** std::__uninitialized_move_if_noexcept_a<int**,int**,std::allocator<int*>>
                 (int **param_1,int **param_2,int **param_3,allocator *param_4)

{
  move_iterator mVar1;
  move_iterator mVar2;
  int **ppiVar3;
  
  mVar1 = __make_move_if_noexcept_iterator<int*,std::move_iterator<int**>>(param_2);
  mVar2 = __make_move_if_noexcept_iterator<int*,std::move_iterator<int**>>(param_1);
  ppiVar3 = __uninitialized_copy_a<std::move_iterator<int**>,int**,int*>
                      (mVar2,mVar1,param_3,param_4);
  return ppiVar3;
}




/* new_allocator<int*>::new_allocator(new_allocator<int*> const&) */

void new_allocator<int*>::new_allocator(new_allocator *param_1)

{
  return;
}




void good9(void)

{
  return;
}




/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* int* const& std::forward<int* const&>(std::remove_reference<int* const&>::type&) */

int ** std::forward<int*const&>(type *param_1)

{
  return (int **)param_1;
}




/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* __enable_if<std::__is_scalar<int*>::__value, int**>::__type std::__fill_n_a<int**, unsigned long,
   int*>(int**, unsigned long, int* const&) */

__type std::__fill_n_a<int**,unsigned_long,int*>(int **param_1,ulong param_2,int **param_3)

{
  int *piVar1;
  int **local_20;
  ulong local_18;
  
  piVar1 = *param_3;
  local_20 = param_1;
  for (local_18 = param_2; local_18 != 0; local_18 = local_18 - 1) {
    *local_20 = piVar1;
    local_20 = local_20 + 1;
  }
  return (__type)local_20;
}




/* __normal_iterator<int* const*, std::vector<int*, std::allocator<int*> >
   >::__normal_iterator<int**>(__normal_iterator<int**, __enable_if<std::__are_same<int**,
   int**>::__value, std::vector<int*, std::allocator<int*> > >::__type> const&) */

void __thiscall
__normal_iterator<int*const*,std::vector<int*,std::allocator<int*>>>::__normal_iterator<int**>
          (__normal_iterator<int*const*,std::vector<int*,std::allocator<int*>>> *this,
          __normal_iterator *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)
           __normal_iterator<int**,std::vector<int*,std::allocator<int*>>>::base
                     ((__normal_iterator<int**,std::vector<int*,std::allocator<int*>>> *)param_1);
  *(undefined8 *)this = *puVar1;
  return;
}




/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* int** std::__niter_base<int**>(int**) */

int ** std::__niter_base<int**>(int **param_1)

{
  return param_1;
}




/* int** std::__uninitialized_copy<true>::__uninit_copy<__normal_iterator<int* const*,
   std::vector<int*, std::allocator<int*> > >, int**>(__normal_iterator<int* const*,
   std::vector<int*, std::allocator<int*> > >, __normal_iterator<int* const*, std::vector<int*,
   std::allocator<int*> > >, int**) */

void std::__uninitialized_copy<true>::
     __uninit_copy<__normal_iterator<int*const*,std::vector<int*,std::allocator<int*>>>,int**>
               (undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  copy<__normal_iterator<int*const*,std::vector<int*,std::allocator<int*>>>,int**>
            (param_1,param_2,param_3);
  return;
}




/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* int** std::__copy_move_backward_a2<true, int**, int**>(int**, int**, int**) */

int ** std::__copy_move_backward_a2<true,int**,int**>(int **param_1,int **param_2,int **param_3)

{
  int **ppiVar1;
  int **ppiVar2;
  int **ppiVar3;
  int **local_30;
  int **local_28;
  int **local_20;
  
  local_30 = param_3;
  local_28 = param_2;
  local_20 = param_1;
  ppiVar1 = __niter_base<int**>(param_3);
  ppiVar2 = __niter_base<int**>(local_28);
  ppiVar3 = __niter_base<int**>(local_20);
  ppiVar1 = __copy_move_backward_a<true,int**,int**>(ppiVar3,ppiVar2,ppiVar1);
  ppiVar1 = __niter_wrap<int**>(&local_30,ppiVar1);
  return ppiVar1;
}




/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* int** std::__uninitialized_move_a<int**, int**, std::allocator<int*> >(int**, int**, int**,
   std::allocator<int*>&) */

int ** std::__uninitialized_move_a<int**,int**,std::allocator<int*>>
                 (int **param_1,int **param_2,int **param_3,allocator *param_4)

{
  move_iterator mVar1;
  move_iterator mVar2;
  int **ppiVar3;
  
  mVar1 = make_move_iterator<int**>(param_2);
  mVar2 = make_move_iterator<int**>(param_1);
  ppiVar3 = __uninitialized_copy_a<std::move_iterator<int**>,int**,int*>
                      (mVar2,mVar1,param_3,param_4);
  return ppiVar3;
}




/* std::allocator_traits<std::allocator<int*> >::allocate(std::allocator<int*>&, unsigned long) */

void std::allocator_traits<std::allocator<int*>>::allocate(allocator *param_1,ulong param_2)

{
  new_allocator<int*>::allocate((ulong)param_1,(void *)param_2);
  return;
}




/* std::_Vector_base<int*, std::allocator<int*> >::_M_deallocate(int**, unsigned long) */

void __thiscall
std::_Vector_base<int*,std::allocator<int*>>::_M_deallocate
          (_Vector_base<int*,std::allocator<int*>> *this,int **param_1,ulong param_2)

{
  if (param_1 != (int **)0x0) {
    allocator_traits<std::allocator<int*>>::deallocate((allocator *)this,param_1,param_2);
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




void good3(void)

{
  return;
}




/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* int** std::__uninitialized_copy_a<std::move_iterator<int**>, int**,
   int*>(std::move_iterator<int**>, std::move_iterator<int**>, int**, std::allocator<int*>&) */

int ** std::__uninitialized_copy_a<std::move_iterator<int**>,int**,int*>
                 (move_iterator param_1,move_iterator param_2,int **param_3,allocator *param_4)

{
  int **ppiVar1;
  
  ppiVar1 = uninitialized_copy<std::move_iterator<int**>,int**>(param_1,param_2,param_3);
  return ppiVar1;
}




/* void new_allocator<int*>::destroy<int*>(int**) */

void new_allocator<int*>::destroy<int*>(int **param_1)

{
  return;
}




/* __normal_iterator<int* const*, std::vector<int*, std::allocator<int*> > >::__normal_iterator(int*
   const* const&) */

void __thiscall
__normal_iterator<int*const*,std::vector<int*,std::allocator<int*>>>::__normal_iterator
          (__normal_iterator<int*const*,std::vector<int*,std::allocator<int*>>> *this,int ***param_1
          )

{
  *(int ***)this = *param_1;
  return;
}




/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* decltype (__miter_base(({parm#1}.base)())) std::__miter_base<int**>(std::move_iterator<int**>) */

void std::__miter_base<int**>(move_iterator param_1)

{
  int **ppiVar1;
  undefined4 in_register_0000003c;
  undefined8 local_10;
  
  local_10 = CONCAT44(in_register_0000003c,param_1);
  ppiVar1 = (int **)move_iterator<int**>::base((move_iterator<int**> *)&local_10);
  __miter_base<int**>(ppiVar1);
  return;
}




/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* int** std::__niter_wrap<int**>(int** const&, int**) */

int ** std::__niter_wrap<int**>(int ***param_1,int **param_2)

{
  return param_2;
}




void printSizeTLine(undefined8 param_1)

{
  printf("%zu\n",param_1);
  return;
}




/* std::vector<int*, std::allocator<int*> >::_Temporary_value::_Temporary_value<int*
   const&>(std::vector<int*, std::allocator<int*> >*, int* const&) */

void __thiscall
std::vector<int*,std::allocator<int*>>::_Temporary_value::_Temporary_value<int*const&>
          (_Temporary_value *this,vector *param_1,int **param_2)

{
  int **ppiVar1;
  int **ppiVar2;
  
  *(vector **)this = param_1;
  ppiVar1 = forward<int*const&>((type *)param_2);
  ppiVar2 = (int **)_M_ptr(this);
  allocator_traits<std::allocator<int*>>::construct<int*,int*const&>
            (*(allocator **)this,ppiVar2,ppiVar1);
  return;
}




/* std::vector<int*, std::allocator<int*> >::size() const */

long __thiscall
std::vector<int*,std::allocator<int*>>::size(vector<int*,std::allocator<int*>> *this)

{
  return *(long *)(this + 8) - *(long *)this >> 3;
}




void printIntLine(uint param_1)

{
  printf("%d\n",(ulong)param_1);
  return;
}




/* std::_Vector_base<int*, std::allocator<int*> >::_M_get_Tp_allocator() const */

_Vector_base<int*,std::allocator<int*>> * __thiscall
std::_Vector_base<int*,std::allocator<int*>>::_M_get_Tp_allocator
          (_Vector_base<int*,std::allocator<int*>> *this)

{
  return this;
}




/* __normal_iterator<int* const*, std::vector<int*, std::allocator<int*> > >::base() const */

__normal_iterator<int*const*,std::vector<int*,std::allocator<int*>>> * __thiscall
__normal_iterator<int*const*,std::vector<int*,std::allocator<int*>>>::base
          (__normal_iterator<int*const*,std::vector<int*,std::allocator<int*>>> *this)

{
  return this;
}




/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* int** std::uninitialized_fill_n<int**, unsigned long, int*>(int**, unsigned long, int* const&) */

int ** std::uninitialized_fill_n<int**,unsigned_long,int*>
                 (int **param_1,ulong param_2,int **param_3)

{
  int **ppiVar1;
  
  ppiVar1 = __uninitialized_fill_n<true>::__uninit_fill_n<int**,unsigned_long,int*>
                      (param_1,param_2,param_3);
  return ppiVar1;
}




/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* void std::fill<int**, int*>(int**, int**, int* const&) */

void std::fill<int**,int*>(int **param_1,int **param_2,int **param_3)

{
  int **ppiVar1;
  int **ppiVar2;
  
  ppiVar1 = __niter_base<int**>(param_2);
  ppiVar2 = __niter_base<int**>(param_1);
  __fill_a<int**,int*>(ppiVar2,ppiVar1,param_3);
  return;
}




/* CWE476_NULL_Pointer_Dereference__int_72::good() */

void CWE476_NULL_Pointer_Dereference__int_72::good(void)

{
  goodG2B();
  goodB2G();
  return;
}




/* int** std::__copy_move<true, true, std::random_access_iterator_tag>::__copy_m<int*>(int* const*,
   int* const*, int**) */

int ** std::__copy_move<true,true,std::random_access_iterator_tag>::__copy_m<int*>
                 (int **param_1,int **param_2,int **param_3)

{
  long lVar1;
  
  lVar1 = (long)param_2 - (long)param_1 >> 3;
  if (lVar1 != 0) {
    memmove(param_3,param_1,lVar1 * 8);
  }
  return param_3 + lVar1;
}




/* __normal_iterator<int**, std::vector<int*, std::allocator<int*> > >::difference_type
   TEMPNAMEPLACEHOLDERVALUE(__normal_iterator<int**, std::vector<int*, std::allocator<int*> > >
   const&, __normal_iterator<int**, std::vector<int*, std::allocator<int*> > > const&) */

difference_type operator-(__normal_iterator *param_1,__normal_iterator *param_2)

{
  long lVar1;
  long *plVar2;
  
  plVar2 = (long *)__normal_iterator<int**,std::vector<int*,std::allocator<int*>>>::base
                             ((__normal_iterator<int**,std::vector<int*,std::allocator<int*>>> *)
                              param_1);
  lVar1 = *plVar2;
  plVar2 = (long *)__normal_iterator<int**,std::vector<int*,std::allocator<int*>>>::base
                             ((__normal_iterator<int**,std::vector<int*,std::allocator<int*>>> *)
                              param_2);
  return (difference_type)(lVar1 - *plVar2 >> 3);
}




/* int** std::__copy_move_backward<true, true,
   std::random_access_iterator_tag>::__copy_move_b<int*>(int* const*, int* const*, int**) */

int ** std::__copy_move_backward<true,true,std::random_access_iterator_tag>::__copy_move_b<int*>
                 (int **param_1,int **param_2,int **param_3)

{
  long lVar1;
  
  lVar1 = (long)param_2 - (long)param_1 >> 3;
  if (lVar1 != 0) {
    memmove(param_3 + -lVar1,param_1,lVar1 * 8);
  }
  return param_3 + -lVar1;
}




/* std::_Vector_base<int*, std::allocator<int*> >::~_Vector_base() */

void __thiscall
std::_Vector_base<int*,std::allocator<int*>>::~_Vector_base
          (_Vector_base<int*,std::allocator<int*>> *this)

{
  _M_deallocate(this,*(int ***)this,*(long *)(this + 0x10) - *(long *)this >> 3);
  _Vector_impl::~_Vector_impl((_Vector_impl *)this);
  return;
}




/* std::vector<int*, std::allocator<int*> >::insert(__normal_iterator<int* const*, std::vector<int*,
   std::allocator<int*> > >, unsigned long, int* const&) */

void __thiscall
std::vector<int*,std::allocator<int*>>::insert
          (vector<int*,std::allocator<int*>> *this,undefined8 param_2,undefined8 param_3,
          undefined8 param_4)

{
  difference_type dVar1;
  undefined4 extraout_var;
  undefined8 uVar2;
  long in_FS_OFFSET;
  undefined8 local_38;
  vector<int*,std::allocator<int*>> *local_30;
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
  uVar2 = __normal_iterator<int**,std::vector<int*,std::allocator<int*>>>::operator+
                    ((__normal_iterator<int**,std::vector<int*,std::allocator<int*>>> *)&local_20,
                     local_18);
  _M_fill_insert(local_30,uVar2,param_3,param_4);
  local_20 = begin(local_30);
  __normal_iterator<int**,std::vector<int*,std::allocator<int*>>>::operator+
            ((__normal_iterator<int**,std::vector<int*,std::allocator<int*>>> *)&local_20,local_18);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
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




void bad6(void)

{
  return;
}




void good1(void)

{
  return;
}




/* std::allocator<int*>::allocator() */

void std::allocator<int*>::allocator(void)

{
  new_allocator<int*>::new_allocator();
  return;
}




/* std::_Vector_base<int*, std::allocator<int*> >::_Vector_impl::_Vector_impl(std::allocator<int*>
   const&) */

void __thiscall
std::_Vector_base<int*,std::allocator<int*>>::_Vector_impl::_Vector_impl
          (_Vector_impl *this,allocator *param_1)

{
  allocator<int*>::allocator((allocator *)this);
  _Vector_impl_data::_Vector_impl_data((_Vector_impl_data *)this);
  return;
}




/* __normal_iterator<int**, std::vector<int*, std::allocator<int*> > >::__normal_iterator(int**
   const&) */

void __thiscall
__normal_iterator<int**,std::vector<int*,std::allocator<int*>>>::__normal_iterator
          (__normal_iterator<int**,std::vector<int*,std::allocator<int*>>> *this,int ***param_1)

{
  *(int ***)this = *param_1;
  return;
}




void bad1(void)

{
  return;
}




void printShortLine(short param_1)

{
  printf("%hd\n",(ulong)(uint)(int)param_1);
  return;
}




/* std::move_iterator<int**>::move_iterator(int**) */

void __thiscall std::move_iterator<int**>::move_iterator(move_iterator<int**> *this,int **param_1)

{
  *(int ***)this = param_1;
  return;
}




void printWLine(long param_1)

{
  if (param_1 != 0) {
    wprintf(L"%ls\n",param_1);
  }
  return;
}




/* int* const* std::__niter_base<int* const*, std::vector<int*, std::allocator<int*> >
   >(__normal_iterator<int* const*, std::vector<int*, std::allocator<int*> > >) */

undefined8 std::__niter_base<int*const*,std::vector<int*,std::allocator<int*>>>(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined8 local_10;
  
  local_10 = param_1;
  puVar1 = (undefined8 *)
           __normal_iterator<int*const*,std::vector<int*,std::allocator<int*>>>::base
                     ((__normal_iterator<int*const*,std::vector<int*,std::allocator<int*>>> *)
                      &local_10);
  return *puVar1;
}




/* std::allocator<int*>::~allocator() */

void __thiscall std::allocator<int*>::~allocator(allocator<int*> *this)

{
  new_allocator<int*>::~new_allocator((new_allocator<int*> *)this);
  return;
}




/* std::vector<int*, std::allocator<int*> >::cbegin() const */

undefined8 __thiscall
std::vector<int*,std::allocator<int*>>::cbegin(vector<int*,std::allocator<int*>> *this)

{
  long in_FS_OFFSET;
  int **local_20;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_20 = *(int ***)this;
  __normal_iterator<int*const*,std::vector<int*,std::allocator<int*>>>::__normal_iterator
            ((__normal_iterator<int*const*,std::vector<int*,std::allocator<int*>>> *)&local_18,
             &local_20);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
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




/* int** std::__uninitialized_copy_a<__normal_iterator<int* const*, std::vector<int*,
   std::allocator<int*> > >, int**, int*>(__normal_iterator<int* const*, std::vector<int*,
   std::allocator<int*> > >, __normal_iterator<int* const*, std::vector<int*, std::allocator<int*> >
   >, int**, std::allocator<int*>&) */

void std::
     __uninitialized_copy_a<__normal_iterator<int*const*,std::vector<int*,std::allocator<int*>>>,int**,int*>
               (undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  uninitialized_copy<__normal_iterator<int*const*,std::vector<int*,std::allocator<int*>>>,int**>
            (param_1,param_2,param_3);
  return;
}




/* std::_Vector_base<int*, std::allocator<int*> >::_Vector_impl::_Vector_impl() */

void __thiscall
std::_Vector_base<int*,std::allocator<int*>>::_Vector_impl::_Vector_impl(_Vector_impl *this)

{
  allocator<int*>::allocator();
  _Vector_impl_data::_Vector_impl_data((_Vector_impl_data *)this);
  return;
}




/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* int** std::__copy_move_backward_a<true, int**, int**>(int**, int**, int**) */

int ** std::__copy_move_backward_a<true,int**,int**>(int **param_1,int **param_2,int **param_3)

{
  int **ppiVar1;
  
  ppiVar1 = __copy_move_backward<true,true,std::random_access_iterator_tag>::__copy_move_b<int*>
                      (param_1,param_2,param_3);
  return ppiVar1;
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




void good7(void)

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




/* int** std::uninitialized_copy<__normal_iterator<int* const*, std::vector<int*,
   std::allocator<int*> > >, int**>(__normal_iterator<int* const*, std::vector<int*,
   std::allocator<int*> > >, __normal_iterator<int* const*, std::vector<int*, std::allocator<int*> >
   >, int**) */

void std::
     uninitialized_copy<__normal_iterator<int*const*,std::vector<int*,std::allocator<int*>>>,int**>
               (undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  __uninitialized_copy<true>::
  __uninit_copy<__normal_iterator<int*const*,std::vector<int*,std::allocator<int*>>>,int**>
            (param_1,param_2,param_3);
  return;
}




/* std::vector<int*, std::allocator<int*> >::_M_fill_insert(__normal_iterator<int**,
   std::vector<int*, std::allocator<int*> > >, unsigned long, int* const&) */

void __thiscall
std::vector<int*,std::allocator<int*>>::_M_fill_insert
          (vector<int*,std::allocator<int*>> *this,undefined8 param_2,ulong param_3,int **param_4)

{
  long lVar1;
  difference_type dVar2;
  undefined4 extraout_var;
  allocator *paVar3;
  undefined8 *puVar4;
  long *plVar5;
  int **ppiVar6;
  undefined4 extraout_var_00;
  long in_FS_OFFSET;
  undefined8 local_88;
  vector<int*,std::allocator<int*>> *local_80;
  undefined8 local_78;
  int **local_70;
  ulong local_68;
  long local_60;
  int **local_58;
  int **local_50;
  ulong local_48;
  int **local_40;
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
      local_70 = (int **)_Vector_base<int*,std::allocator<int*>>::_M_allocate
                                   ((_Vector_base<int*,std::allocator<int*>> *)local_80,local_68);
      local_58 = local_70;
      paVar3 = (allocator *)
               _Vector_base<int*,std::allocator<int*>>::_M_get_Tp_allocator
                         ((_Vector_base<int*,std::allocator<int*>> *)local_80);
                    /* try { // try from 00102220 to 001022ab has its CatchHandler @ 00102363 */
      __uninitialized_fill_n_a<int**,unsigned_long,int*,int*>
                (local_58 + local_60,param_3,param_4,paVar3);
      local_70 = (int **)0x0;
      paVar3 = (allocator *)
               _Vector_base<int*,std::allocator<int*>>::_M_get_Tp_allocator
                         ((_Vector_base<int*,std::allocator<int*>> *)local_80);
      puVar4 = (undefined8 *)
               __normal_iterator<int**,std::vector<int*,std::allocator<int*>>>::base
                         ((__normal_iterator<int**,std::vector<int*,std::allocator<int*>>> *)
                          &local_88);
      local_70 = __uninitialized_move_if_noexcept_a<int**,int**,std::allocator<int*>>
                           (*(int ***)local_80,(int **)*puVar4,local_58,paVar3);
      local_70 = local_70 + param_3;
      paVar3 = (allocator *)
               _Vector_base<int*,std::allocator<int*>>::_M_get_Tp_allocator
                         ((_Vector_base<int*,std::allocator<int*>> *)local_80);
      ppiVar6 = *(int ***)(local_80 + 8);
      puVar4 = (undefined8 *)
               __normal_iterator<int**,std::vector<int*,std::allocator<int*>>>::base
                         ((__normal_iterator<int**,std::vector<int*,std::allocator<int*>>> *)
                          &local_88);
      local_70 = __uninitialized_move_if_noexcept_a<int**,int**,std::allocator<int*>>
                           ((int **)*puVar4,ppiVar6,local_70,paVar3);
      paVar3 = (allocator *)
               _Vector_base<int*,std::allocator<int*>>::_M_get_Tp_allocator
                         ((_Vector_base<int*,std::allocator<int*>> *)local_80);
      _Destroy<int**,int*>(*(int ***)local_80,*(int ***)(local_80 + 8),paVar3);
      _Vector_base<int*,std::allocator<int*>>::_M_deallocate
                ((_Vector_base<int*,std::allocator<int*>> *)local_80,*(int ***)local_80,
                 *(long *)(local_80 + 0x10) - *(long *)local_80 >> 3);
      *(int ***)local_80 = local_58;
      *(int ***)(local_80 + 8) = local_70;
      *(int ***)(local_80 + 0x10) = local_58 + local_68;
    }
    else {
      _Temporary_value::_Temporary_value<int*const&>(local_38,(vector *)this,param_4);
                    /* try { // try from 00101fa0 to 00102173 has its CatchHandler @ 00102345 */
      local_50 = (int **)_Temporary_value::_M_val(local_38);
      local_78 = end(local_80);
      dVar2 = operator-((__normal_iterator *)&local_78,(__normal_iterator *)&local_88);
      local_48 = CONCAT44(extraout_var,dVar2);
      local_40 = *(int ***)(local_80 + 8);
      if (param_3 < local_48) {
        paVar3 = (allocator *)
                 _Vector_base<int*,std::allocator<int*>>::_M_get_Tp_allocator
                           ((_Vector_base<int*,std::allocator<int*>> *)local_80);
        __uninitialized_move_a<int**,int**,std::allocator<int*>>
                  ((int **)(param_3 * -8 + *(long *)(local_80 + 8)),*(int ***)(local_80 + 8),
                   *(int ***)(local_80 + 8),paVar3);
        *(ulong *)(local_80 + 8) = param_3 * 8 + *(long *)(local_80 + 8);
        ppiVar6 = local_40 + -param_3;
        puVar4 = (undefined8 *)
                 __normal_iterator<int**,std::vector<int*,std::allocator<int*>>>::base
                           ((__normal_iterator<int**,std::vector<int*,std::allocator<int*>>> *)
                            &local_88);
        move_backward<int**,int**>((int **)*puVar4,ppiVar6,local_40);
        plVar5 = (long *)__normal_iterator<int**,std::vector<int*,std::allocator<int*>>>::base
                                   ((__normal_iterator<int**,std::vector<int*,std::allocator<int*>>>
                                     *)&local_88);
        lVar1 = *plVar5;
        puVar4 = (undefined8 *)
                 __normal_iterator<int**,std::vector<int*,std::allocator<int*>>>::base
                           ((__normal_iterator<int**,std::vector<int*,std::allocator<int*>>> *)
                            &local_88);
        fill<int**,int*>((int **)*puVar4,(int **)(lVar1 + param_3 * 8),local_50);
      }
      else {
        paVar3 = (allocator *)
                 _Vector_base<int*,std::allocator<int*>>::_M_get_Tp_allocator
                           ((_Vector_base<int*,std::allocator<int*>> *)local_80);
        ppiVar6 = __uninitialized_fill_n_a<int**,unsigned_long,int*,int*>
                            (*(int ***)(local_80 + 8),param_3 - local_48,local_50,paVar3);
        *(int ***)(local_80 + 8) = ppiVar6;
        paVar3 = (allocator *)
                 _Vector_base<int*,std::allocator<int*>>::_M_get_Tp_allocator
                           ((_Vector_base<int*,std::allocator<int*>> *)local_80);
        ppiVar6 = *(int ***)(local_80 + 8);
        puVar4 = (undefined8 *)
                 __normal_iterator<int**,std::vector<int*,std::allocator<int*>>>::base
                           ((__normal_iterator<int**,std::vector<int*,std::allocator<int*>>> *)
                            &local_88);
        __uninitialized_move_a<int**,int**,std::allocator<int*>>
                  ((int **)*puVar4,local_40,ppiVar6,paVar3);
        *(ulong *)(local_80 + 8) = local_48 * 8 + *(long *)(local_80 + 8);
        puVar4 = (undefined8 *)
                 __normal_iterator<int**,std::vector<int*,std::allocator<int*>>>::base
                           ((__normal_iterator<int**,std::vector<int*,std::allocator<int*>>> *)
                            &local_88);
        fill<int**,int*>((int **)*puVar4,local_40,local_50);
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




/* __alloc_traits<std::allocator<int*>, int*>::_S_select_on_copy(std::allocator<int*> const&) */

allocator * __alloc_traits<std::allocator<int*>,int*>::_S_select_on_copy(allocator *param_1)

{
  long lVar1;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  std::allocator_traits<std::allocator<int*>>::select_on_container_copy_construction(param_1);
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1;
}




/* int** std::__uninitialized_fill_n<true>::__uninit_fill_n<int**, unsigned long, int*>(int**,
   unsigned long, int* const&) */

int ** std::__uninitialized_fill_n<true>::__uninit_fill_n<int**,unsigned_long,int*>
                 (int **param_1,ulong param_2,int **param_3)

{
  int **ppiVar1;
  
  ppiVar1 = fill_n<int**,unsigned_long,int*>(param_1,param_2,param_3);
  return ppiVar1;
}




/* std::_Vector_base<int*, std::allocator<int*> >::_M_get_Tp_allocator() */

_Vector_base<int*,std::allocator<int*>> * __thiscall
std::_Vector_base<int*,std::allocator<int*>>::_M_get_Tp_allocator
          (_Vector_base<int*,std::allocator<int*>> *this)

{
  return this;
}




/* std::vector<int*, std::allocator<int*> >::_Temporary_value::~_Temporary_value() */

void __thiscall
std::vector<int*,std::allocator<int*>>::_Temporary_value::~_Temporary_value(_Temporary_value *this)

{
  int **ppiVar1;
  
  ppiVar1 = (int **)_M_ptr(this);
  allocator_traits<std::allocator<int*>>::destroy<int*>(*(allocator **)this,ppiVar1);
  return;
}




void printDoubleLine(undefined8 param_1)

{
  printf("%g\n",param_1);
  return;
}




/* void std::allocator_traits<std::allocator<int*> >::construct<int*, int*
   const&>(std::allocator<int*>&, int**, int* const&) */

void std::allocator_traits<std::allocator<int*>>::construct<int*,int*const&>
               (allocator *param_1,int **param_2,int **param_3)

{
  int **ppiVar1;
  
  ppiVar1 = forward<int*const&>((type *)param_3);
  new_allocator<int*>::construct<int*,int*const&>((new_allocator<int*> *)param_1,param_2,ppiVar1);
  return;
}




/* int** std::copy<__normal_iterator<int* const*, std::vector<int*, std::allocator<int*> > >,
   int**>(__normal_iterator<int* const*, std::vector<int*, std::allocator<int*> > >,
   __normal_iterator<int* const*, std::vector<int*, std::allocator<int*> > >, int**) */

void std::copy<__normal_iterator<int*const*,std::vector<int*,std::allocator<int*>>>,int**>
               (undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = __miter_base<__normal_iterator<int*const*,std::vector<int*,std::allocator<int*>>>>
                    (param_2);
  uVar2 = __miter_base<__normal_iterator<int*const*,std::vector<int*,std::allocator<int*>>>>
                    (param_1);
  __copy_move_a2<false,__normal_iterator<int*const*,std::vector<int*,std::allocator<int*>>>,int**>
            (uVar2,uVar1,param_3);
  return;
}




/* std::_Vector_base<int*, std::allocator<int*> >::_M_allocate(unsigned long) */

undefined8 __thiscall
std::_Vector_base<int*,std::allocator<int*>>::_M_allocate
          (_Vector_base<int*,std::allocator<int*>> *this,ulong param_1)

{
  undefined8 uVar1;
  
  if (param_1 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = allocator_traits<std::allocator<int*>>::allocate((allocator *)this,param_1);
  }
  return uVar1;
}




/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* int** std::__copy_move_a<false, int* const*, int**>(int* const*, int* const*, int**) */

int ** std::__copy_move_a<false,int*const*,int**>(int **param_1,int **param_2,int **param_3)

{
  int **ppiVar1;
  
  ppiVar1 = __copy_move<false,true,std::random_access_iterator_tag>::__copy_m<int*>
                      (param_1,param_2,param_3);
  return ppiVar1;
}




/* std::_Vector_base<int*, std::allocator<int*> >::_Vector_impl_data::_Vector_impl_data() */

void __thiscall
std::_Vector_base<int*,std::allocator<int*>>::_Vector_impl_data::_Vector_impl_data
          (_Vector_impl_data *this)

{
  *(undefined8 *)this = 0;
  *(undefined8 *)(this + 8) = 0;
  *(undefined8 *)(this + 0x10) = 0;
  return;
}




void good2(void)

{
  return;
}




undefined8 globalReturnsTrue(void)

{
  return 1;
}




/* int** std::__uninitialized_copy<true>::__uninit_copy<std::move_iterator<int**>,
   int**>(std::move_iterator<int**>, std::move_iterator<int**>, int**) */

int ** std::__uninitialized_copy<true>::__uninit_copy<std::move_iterator<int**>,int**>
                 (move_iterator param_1,move_iterator param_2,int **param_3)

{
  int **ppiVar1;
  
  ppiVar1 = copy<std::move_iterator<int**>,int**>(param_1,param_2,param_3);
  return ppiVar1;
}




/* new_allocator<int*>::deallocate(int**, unsigned long) */

void new_allocator<int*>::deallocate(int **param_1,ulong param_2)

{
  operator_delete((void *)param_2);
  return;
}




/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* int** std::uninitialized_copy<std::move_iterator<int**>, int**>(std::move_iterator<int**>,
   std::move_iterator<int**>, int**) */

int ** std::uninitialized_copy<std::move_iterator<int**>,int**>
                 (move_iterator param_1,move_iterator param_2,int **param_3)

{
  int **ppiVar1;
  
  ppiVar1 = __uninitialized_copy<true>::__uninit_copy<std::move_iterator<int**>,int**>
                      (param_1,param_2,param_3);
  return ppiVar1;
}




/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* void std::_Destroy<int**, int*>(int**, int**, std::allocator<int*>&) */

void std::_Destroy<int**,int*>(int **param_1,int **param_2,allocator *param_3)

{
  _Destroy<int**>(param_1,param_2);
  return;
}




void bad7(void)

{
  return;
}




void bad2(void)

{
  return;
}




void FUN_00101020(void)

{
  (*(code *)PTR_00106ee8)();
  return;
}




/* new_allocator<int*>::new_allocator() */

void new_allocator<int*>::new_allocator(void)

{
  return;
}




/* std::vector<int*, std::allocator<int*> >::begin() const */

undefined8 __thiscall
std::vector<int*,std::allocator<int*>>::begin(vector<int*,std::allocator<int*>> *this)

{
  long in_FS_OFFSET;
  int **local_20;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_20 = *(int ***)this;
  __normal_iterator<int*const*,std::vector<int*,std::allocator<int*>>>::__normal_iterator
            ((__normal_iterator<int*const*,std::vector<int*,std::allocator<int*>>> *)&local_18,
             &local_20);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* int** std::__uninitialized_fill_n_a<int**, unsigned long, int*, int*>(int**, unsigned long, int*
   const&, std::allocator<int*>&) */

int ** std::__uninitialized_fill_n_a<int**,unsigned_long,int*,int*>
                 (int **param_1,ulong param_2,int **param_3,allocator *param_4)

{
  int **ppiVar1;
  
  ppiVar1 = uninitialized_fill_n<int**,unsigned_long,int*>(param_1,param_2,param_3);
  return ppiVar1;
}




/* std::allocator_traits<std::allocator<int*> >::deallocate(std::allocator<int*>&, int**, unsigned
   long) */

void std::allocator_traits<std::allocator<int*>>::deallocate
               (allocator *param_1,int **param_2,ulong param_3)

{
  new_allocator<int*>::deallocate((int **)param_1,(ulong)param_2);
  return;
}




/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* int** std::__copy_move_a<true, int**, int**>(int**, int**, int**) */

int ** std::__copy_move_a<true,int**,int**>(int **param_1,int **param_2,int **param_3)

{
  int **ppiVar1;
  
  ppiVar1 = __copy_move<true,true,std::random_access_iterator_tag>::__copy_m<int*>
                      (param_1,param_2,param_3);
  return ppiVar1;
}




/* std::vector<int*, std::allocator<int*> >::operator[](unsigned long) */

long __thiscall
std::vector<int*,std::allocator<int*>>::operator[]
          (vector<int*,std::allocator<int*>> *this,ulong param_1)

{
  return *(long *)this + param_1 * 8;
}




undefined8 globalReturnsFalse(void)

{
  return 0;
}




void bad9(void)

{
  return;
}




void good4(void)

{
  return;
}




undefined8 main(void)

{
  time_t tVar1;
  
  tVar1 = time((time_t *)0x0);
  srand((uint)tVar1);
  printLine("Calling good()...");
  CWE476_NULL_Pointer_Dereference__int_72::good();
  printLine("Finished good()");
  printLine("Calling bad()...");
  CWE476_NULL_Pointer_Dereference__int_72::bad();
  printLine("Finished bad()");
  return 0;
}




/* std::_Vector_base<int*, std::allocator<int*> >::_Vector_base(unsigned long, std::allocator<int*>
   const&) */

void __thiscall
std::_Vector_base<int*,std::allocator<int*>>::_Vector_base
          (_Vector_base<int*,std::allocator<int*>> *this,ulong param_1,allocator *param_2)

{
  _Vector_impl::_Vector_impl((_Vector_impl *)this,param_2);
                    /* try { // try from 001025ac to 001025b0 has its CatchHandler @ 001025b3 */
  _M_create_storage(this,param_1);
  return;
}




void bad3(void)

{
  return;
}




/* std::vector<int*, std::allocator<int*> >::_M_check_len(unsigned long, char const*) const */

ulong __thiscall
std::vector<int*,std::allocator<int*>>::_M_check_len
          (vector<int*,std::allocator<int*>> *this,ulong param_1,char *param_2)

{
  long lVar1;
  long lVar2;
  ulong *puVar3;
  ulong uVar4;
  ulong uVar5;
  long in_FS_OFFSET;
  ulong local_48;
  vector<int*,std::allocator<int*>> *local_40;
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




/* std::_Vector_base<int*, std::allocator<int*> >::_Vector_impl::~_Vector_impl() */

void __thiscall
std::_Vector_base<int*,std::allocator<int*>>::_Vector_impl::~_Vector_impl(_Vector_impl *this)

{
  allocator<int*>::~allocator((allocator<int*> *)this);
  return;
}




/* __normal_iterator<int* const*, std::vector<int*, std::allocator<int*> > >
   std::__miter_base<__normal_iterator<int* const*, std::vector<int*, std::allocator<int*> > >
   >(__normal_iterator<int* const*, std::vector<int*, std::allocator<int*> > >) */

undefined8
std::__miter_base<__normal_iterator<int*const*,std::vector<int*,std::allocator<int*>>>>
          (undefined8 param_1)

{
  return param_1;
}




/* CWE476_NULL_Pointer_Dereference__int_72::badSink(std::vector<int*, std::allocator<int*> >) */

void CWE476_NULL_Pointer_Dereference__int_72::badSink(vector<int*,std::allocator<int*>> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)std::vector<int*,std::allocator<int*>>::operator[](param_1,2);
  printIntLine(*(undefined4 *)*puVar1);
  return;
}




/* std::allocator<int*>::allocator(std::allocator<int*> const&) */

void std::allocator<int*>::allocator(allocator *param_1)

{
  new_allocator<int*>::new_allocator((new_allocator *)param_1);
  return;
}




void printHexCharLine(char param_1)

{
  printf("%02x\n",(ulong)(uint)(int)param_1);
  return;
}




/* std::vector<int*, std::allocator<int*> >::end() */

undefined8 __thiscall
std::vector<int*,std::allocator<int*>>::end(vector<int*,std::allocator<int*>> *this)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  __normal_iterator<int**,std::vector<int*,std::allocator<int*>>>::__normal_iterator
            ((__normal_iterator<int**,std::vector<int*,std::allocator<int*>>> *)&local_18,
             (int ***)(this + 8));
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void printFloatLine(float param_1)

{
  printf("%f\n",(double)param_1);
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




undefined8 stdThreadDestroy(void *param_1)

{
  free(param_1);
  return 1;
}




/* std::vector<int*, std::allocator<int*> >::vector() */

void __thiscall
std::vector<int*,std::allocator<int*>>::vector(vector<int*,std::allocator<int*>> *this)

{
  _Vector_base<int*,std::allocator<int*>>::_Vector_base
            ((_Vector_base<int*,std::allocator<int*>> *)this);
  return;
}




void good6(void)

{
  return;
}




/* std::_Vector_base<int*, std::allocator<int*> >::_M_create_storage(unsigned long) */

void __thiscall
std::_Vector_base<int*,std::allocator<int*>>::_M_create_storage
          (_Vector_base<int*,std::allocator<int*>> *this,ulong param_1)

{
  undefined8 uVar1;
  
  uVar1 = _M_allocate(this,param_1);
  *(undefined8 *)this = uVar1;
  *(undefined8 *)(this + 8) = *(undefined8 *)this;
  *(ulong *)(this + 0x10) = param_1 * 8 + *(long *)this;
  return;
}




/* std::move_iterator<int**>::base() const */

undefined8 __thiscall std::move_iterator<int**>::base(move_iterator<int**> *this)

{
  return *(undefined8 *)this;
}




void stdThreadLockDestroy(pthread_mutex_t *param_1)

{
  pthread_mutex_destroy(param_1);
  free(param_1);
  return;
}



