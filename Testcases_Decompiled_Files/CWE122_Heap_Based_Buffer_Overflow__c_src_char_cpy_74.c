
void printHexUnsignedCharLine(byte param_1)

{
  printf("%02x\n",(ulong)param_1);
  return;
}




void stdThreadLockRelease(pthread_mutex_t *param_1)

{
  pthread_mutex_unlock(param_1);
  return;
}




void stdThreadLockDestroy(pthread_mutex_t *param_1)

{
  pthread_mutex_destroy(param_1);
  free(param_1);
  return;
}




/* std::_Rb_tree<int, std::pair<int const, char*>, std::_Select1st<std::pair<int const, char*> >,
   std::less<int>, std::allocator<std::pair<int const, char*> > >::begin() */

undefined8 __thiscall
std::
_Rb_tree<int,std::pair<int_const,char*>,std::_Select1st<std::pair<int_const,char*>>,std::less<int>,std::allocator<std::pair<int_const,char*>>>
::begin(_Rb_tree<int,std::pair<int_const,char*>,std::_Select1st<std::pair<int_const,char*>>,std::less<int>,std::allocator<std::pair<int_const,char*>>>
        *this)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  _Rb_tree_iterator<std::pair<int_const,char*>>::_Rb_tree_iterator
            ((_Rb_tree_iterator<std::pair<int_const,char*>> *)&local_18,
             *(_Rb_tree_node_base **)(this + 0x18));
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




/* std::_Rb_tree<int, std::pair<int const, char*>, std::_Select1st<std::pair<int const, char*> >,
   std::less<int>, std::allocator<std::pair<int const, char*> > >::_Rb_tree_impl<std::less<int>,
   true>::~_Rb_tree_impl() */

void __thiscall
std::
_Rb_tree<int,std::pair<int_const,char*>,std::_Select1st<std::pair<int_const,char*>>,std::less<int>,std::allocator<std::pair<int_const,char*>>>
::_Rb_tree_impl<std::less<int>,true>::~_Rb_tree_impl(_Rb_tree_impl<std::less<int>,true> *this)

{
  allocator<std::_Rb_tree_node<std::pair<int_const,char*>>>::~allocator
            ((allocator<std::_Rb_tree_node<std::pair<int_const,char*>>> *)this);
  return;
}




void good2(void)

{
  return;
}




/* std::_Rb_tree_node_base::_S_minimum(std::_Rb_tree_node_base*) */

_Rb_tree_node_base * std::_Rb_tree_node_base::_S_minimum(_Rb_tree_node_base *param_1)

{
  _Rb_tree_node_base *local_10;
  
  for (local_10 = param_1; *(long *)(local_10 + 0x10) != 0;
      local_10 = *(_Rb_tree_node_base **)(local_10 + 0x10)) {
  }
  return local_10;
}




/* std::_Rb_tree_node<std::pair<int const, char*> >* std::_Rb_tree<int, std::pair<int const, char*>,
   std::_Select1st<std::pair<int const, char*> >, std::less<int>, std::allocator<std::pair<int
   const, char*> > >::_M_create_node<std::pair<int const, char*> const&>(std::pair<int const, char*>
   const&) */

_Rb_tree_node * __thiscall
std::
_Rb_tree<int,std::pair<int_const,char*>,std::_Select1st<std::pair<int_const,char*>>,std::less<int>,std::allocator<std::pair<int_const,char*>>>
::_M_create_node<std::pair<int_const,char*>const&>
          (_Rb_tree<int,std::pair<int_const,char*>,std::_Select1st<std::pair<int_const,char*>>,std::less<int>,std::allocator<std::pair<int_const,char*>>>
           *this,pair *param_1)

{
  _Rb_tree_node *p_Var1;
  pair *ppVar2;
  
  p_Var1 = (_Rb_tree_node *)_M_get_node(this);
  ppVar2 = forward<std::pair<int_const,char*>const&>((type *)param_1);
  _M_construct_node<std::pair<int_const,char*>const&>(this,p_Var1,ppVar2);
  return p_Var1;
}




void bad7(void)

{
  return;
}




void printWLine(long param_1)

{
  if (param_1 != 0) {
    wprintf(L"%ls\n",param_1);
  }
  return;
}




/* std::_Rb_tree<int, std::pair<int const, char*>, std::_Select1st<std::pair<int const, char*> >,
   std::less<int>, std::allocator<std::pair<int const, char*> >
   >::_M_put_node(std::_Rb_tree_node<std::pair<int const, char*> >*) */

void __thiscall
std::
_Rb_tree<int,std::pair<int_const,char*>,std::_Select1st<std::pair<int_const,char*>>,std::less<int>,std::allocator<std::pair<int_const,char*>>>
::_M_put_node(_Rb_tree<int,std::pair<int_const,char*>,std::_Select1st<std::pair<int_const,char*>>,std::less<int>,std::allocator<std::pair<int_const,char*>>>
              *this,_Rb_tree_node *param_1)

{
  allocator *paVar1;
  
  paVar1 = (allocator *)_M_get_Node_allocator(this);
  allocator_traits<std::allocator<std::_Rb_tree_node<std::pair<int_const,char*>>>>::deallocate
            (paVar1,param_1,1);
  return;
}




/* std::allocator<std::_Rb_tree_node<std::pair<int const, char*> > >::~allocator() */

void __thiscall
std::allocator<std::_Rb_tree_node<std::pair<int_const,char*>>>::~allocator
          (allocator<std::_Rb_tree_node<std::pair<int_const,char*>>> *this)

{
  new_allocator<std::_Rb_tree_node<std::pair<int_const,char*>>>::~new_allocator
            ((new_allocator<std::_Rb_tree_node<std::pair<int_const,char*>>> *)this);
  return;
}




/* CWE122_Heap_Based_Buffer_Overflow__c_src_char_cpy_74::goodG2B() */

void CWE122_Heap_Based_Buffer_Overflow__c_src_char_cpy_74::goodG2B(void)

{
  void *__s;
  undefined8 *puVar1;
  long in_FS_OFFSET;
  map<int,char*,std::less<int>,std::allocator<std::pair<int_const,char*>>> local_88 [48];
  int local_58 [14];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  std::map<int,char*,std::less<int>,std::allocator<std::pair<int_const,char*>>>::map(local_88);
  __s = malloc(100);
  if (__s == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  memset(__s,0x41,0x31);
  *(undefined *)((long)__s + 0x31) = 0;
  local_58[0] = 0;
                    /* try { // try from 00102f69 to 00102fd2 has its CatchHandler @ 0010301e */
  puVar1 = (undefined8 *)
           std::map<int,char*,std::less<int>,std::allocator<std::pair<int_const,char*>>>::operator[]
                     (local_88,local_58);
  *puVar1 = __s;
  local_58[0] = 1;
  puVar1 = (undefined8 *)
           std::map<int,char*,std::less<int>,std::allocator<std::pair<int_const,char*>>>::operator[]
                     (local_88,local_58);
  *puVar1 = __s;
  local_58[0] = 2;
  puVar1 = (undefined8 *)
           std::map<int,char*,std::less<int>,std::allocator<std::pair<int_const,char*>>>::operator[]
                     (local_88,local_58);
  *puVar1 = __s;
  std::map<int,char*,std::less<int>,std::allocator<std::pair<int_const,char*>>>::map
            ((map<int,char*,std::less<int>,std::allocator<std::pair<int_const,char*>>> *)local_58,
             (map *)local_88);
                    /* try { // try from 00102fda to 00102fde has its CatchHandler @ 00103009 */
  goodG2BSink((map)local_58);
  std::map<int,char*,std::less<int>,std::allocator<std::pair<int_const,char*>>>::~map
            ((map<int,char*,std::less<int>,std::allocator<std::pair<int_const,char*>>> *)local_58);
  std::map<int,char*,std::less<int>,std::allocator<std::pair<int_const,char*>>>::~map(local_88);
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




/* std::_Rb_tree_node_base::_S_maximum(std::_Rb_tree_node_base*) */

_Rb_tree_node_base * std::_Rb_tree_node_base::_S_maximum(_Rb_tree_node_base *param_1)

{
  _Rb_tree_node_base *local_10;
  
  for (local_10 = param_1; *(long *)(local_10 + 0x18) != 0;
      local_10 = *(_Rb_tree_node_base **)(local_10 + 0x18)) {
  }
  return local_10;
}




/* std::_Rb_tree<int, std::pair<int const, char*>, std::_Select1st<std::pair<int const, char*> >,
   std::less<int>, std::allocator<std::pair<int const, char*> > >::_Rb_tree_impl<std::less<int>,
   true>::_Rb_tree_impl(std::_Rb_tree<int, std::pair<int const, char*>,
   std::_Select1st<std::pair<int const, char*> >, std::less<int>, std::allocator<std::pair<int
   const, char*> > >::_Rb_tree_impl<std::less<int>, true> const&) */

void std::
     _Rb_tree<int,std::pair<int_const,char*>,std::_Select1st<std::pair<int_const,char*>>,std::less<int>,std::allocator<std::pair<int_const,char*>>>
     ::_Rb_tree_impl<std::less<int>,true>::_Rb_tree_impl(_Rb_tree_impl *param_1)

{
  long lVar1;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  __alloc_traits<std::allocator<std::_Rb_tree_node<std::pair<int_const,char*>>>,std::_Rb_tree_node<std::pair<int_const,char*>>>
  ::_S_select_on_copy((allocator *)param_1);
  _Rb_tree_key_compare<std::less<int>>::_Rb_tree_key_compare((less *)param_1);
  _Rb_tree_header::_Rb_tree_header((_Rb_tree_header *)(param_1 + 8));
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




/* std::_Rb_tree<int, std::pair<int const, char*>, std::_Select1st<std::pair<int const, char*> >,
   std::less<int>, std::allocator<std::pair<int const, char*> >
   >::_S_maximum(std::_Rb_tree_node_base*) */

void std::
     _Rb_tree<int,std::pair<int_const,char*>,std::_Select1st<std::pair<int_const,char*>>,std::less<int>,std::allocator<std::pair<int_const,char*>>>
     ::_S_maximum(_Rb_tree_node_base *param_1)

{
  _Rb_tree_node_base::_S_maximum(param_1);
  return;
}




/* std::_Rb_tree_iterator<std::pair<int const, char*> >::TEMPNAMEPLACEHOLDERVALUE() */

_Rb_tree_iterator<std::pair<int_const,char*>> * __thiscall
std::_Rb_tree_iterator<std::pair<int_const,char*>>::operator++
          (_Rb_tree_iterator<std::pair<int_const,char*>> *this)

{
  undefined8 uVar1;
  
  uVar1 = std::_Rb_tree_increment(*(_Rb_tree_node_base **)this);
  *(undefined8 *)this = uVar1;
  return this;
}




/* std::_Rb_tree<int, std::pair<int const, char*>, std::_Select1st<std::pair<int const, char*> >,
   std::less<int>, std::allocator<std::pair<int const, char*> >
   >::_S_minimum(std::_Rb_tree_node_base*) */

void std::
     _Rb_tree<int,std::pair<int_const,char*>,std::_Select1st<std::pair<int_const,char*>>,std::less<int>,std::allocator<std::pair<int_const,char*>>>
     ::_S_minimum(_Rb_tree_node_base *param_1)

{
  _Rb_tree_node_base::_S_minimum(param_1);
  return;
}




/* std::pair<std::_Rb_tree_node_base*, std::_Rb_tree_node_base*>::pair<std::_Rb_tree_node_base*&,
   std::_Rb_tree_node_base*&, true>(std::_Rb_tree_node_base*&, std::_Rb_tree_node_base*&) */

void __thiscall
std::pair<std::_Rb_tree_node_base*,std::_Rb_tree_node_base*>::
pair<std::_Rb_tree_node_base*&,std::_Rb_tree_node_base*&,true>
          (pair<std::_Rb_tree_node_base*,std::_Rb_tree_node_base*> *this,
          _Rb_tree_node_base **param_1,_Rb_tree_node_base **param_2)

{
  _Rb_tree_node_base **pp_Var1;
  
  pp_Var1 = forward<std::_Rb_tree_node_base*&>((type *)param_1);
  *(_Rb_tree_node_base **)this = *pp_Var1;
  pp_Var1 = forward<std::_Rb_tree_node_base*&>((type *)param_2);
  *(_Rb_tree_node_base **)(this + 8) = *pp_Var1;
  return;
}




/* CWE122_Heap_Based_Buffer_Overflow__c_src_char_cpy_74::good() */

void CWE122_Heap_Based_Buffer_Overflow__c_src_char_cpy_74::good(void)

{
  goodG2B();
  return;
}




void printFloatLine(float param_1)

{
  printf("%f\n",(double)param_1);
  return;
}




void printLongLine(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




void printDoubleLine(undefined8 param_1)

{
  printf("%g\n",param_1);
  return;
}




void good3(void)

{
  return;
}




void good5(void)

{
  return;
}




void good9(void)

{
  return;
}




void printStructLine(uint *param_1)

{
  printf("%d -- %d\n",(ulong)*param_1,(ulong)param_1[1]);
  return;
}




/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* std::tuple<int&&>&& std::forward<std::tuple<int&&> >(std::remove_reference<std::tuple<int&&>
   >::type&) */

tuple * std::forward<std::tuple<int&&>>(type *param_1)

{
  return (tuple *)param_1;
}




/* std::_Rb_tree<int, std::pair<int const, char*>, std::_Select1st<std::pair<int const, char*> >,
   std::less<int>, std::allocator<std::pair<int const, char*> > >::key_comp() const */

void std::
     _Rb_tree<int,std::pair<int_const,char*>,std::_Select1st<std::pair<int_const,char*>>,std::less<int>,std::allocator<std::pair<int_const,char*>>>
     ::key_comp(void)

{
  return;
}




/* CWE122_Heap_Based_Buffer_Overflow__c_src_char_cpy_74::bad() */

void CWE122_Heap_Based_Buffer_Overflow__c_src_char_cpy_74::bad(void)

{
  void *__s;
  undefined8 *puVar1;
  long in_FS_OFFSET;
  map<int,char*,std::less<int>,std::allocator<std::pair<int_const,char*>>> local_88 [48];
  int local_58 [14];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  std::map<int,char*,std::less<int>,std::allocator<std::pair<int_const,char*>>>::map(local_88);
  __s = malloc(100);
  if (__s == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  memset(__s,0x41,99);
  *(undefined *)((long)__s + 99) = 0;
  local_58[0] = 0;
                    /* try { // try from 00102dfb to 00102e64 has its CatchHandler @ 00102eb0 */
  puVar1 = (undefined8 *)
           std::map<int,char*,std::less<int>,std::allocator<std::pair<int_const,char*>>>::operator[]
                     (local_88,local_58);
  *puVar1 = __s;
  local_58[0] = 1;
  puVar1 = (undefined8 *)
           std::map<int,char*,std::less<int>,std::allocator<std::pair<int_const,char*>>>::operator[]
                     (local_88,local_58);
  *puVar1 = __s;
  local_58[0] = 2;
  puVar1 = (undefined8 *)
           std::map<int,char*,std::less<int>,std::allocator<std::pair<int_const,char*>>>::operator[]
                     (local_88,local_58);
  *puVar1 = __s;
  std::map<int,char*,std::less<int>,std::allocator<std::pair<int_const,char*>>>::map
            ((map<int,char*,std::less<int>,std::allocator<std::pair<int_const,char*>>> *)local_58,
             (map *)local_88);
                    /* try { // try from 00102e6c to 00102e70 has its CatchHandler @ 00102e9b */
  badSink((map)local_58);
  std::map<int,char*,std::less<int>,std::allocator<std::pair<int_const,char*>>>::~map
            ((map<int,char*,std::less<int>,std::allocator<std::pair<int_const,char*>>> *)local_58);
  std::map<int,char*,std::less<int>,std::allocator<std::pair<int_const,char*>>>::~map(local_88);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




/* void std::_Rb_tree<int, std::pair<int const, char*>, std::_Select1st<std::pair<int const, char*>
   >, std::less<int>, std::allocator<std::pair<int const, char*> >
   >::_M_construct_node<std::piecewise_construct_t const&, std::tuple<int&&>, std::tuple<>
   >(std::_Rb_tree_node<std::pair<int const, char*> >*, std::piecewise_construct_t const&,
   std::tuple<int&&>&&, std::tuple<>&&) */

void __thiscall
std::
_Rb_tree<int,std::pair<int_const,char*>,std::_Select1st<std::pair<int_const,char*>>,std::less<int>,std::allocator<std::pair<int_const,char*>>>
::_M_construct_node<std::piecewise_construct_t_const&,std::tuple<int&&>,std::tuple<>>
          (_Rb_tree<int,std::pair<int_const,char*>,std::_Select1st<std::pair<int_const,char*>>,std::less<int>,std::allocator<std::pair<int_const,char*>>>
           *this,_Rb_tree_node *param_1,piecewise_construct_t *param_2,tuple *param_3,tuple *param_4
          )

{
  tuple *ptVar1;
  tuple *ptVar2;
  piecewise_construct_t *ppVar3;
  pair *ppVar4;
  allocator *paVar5;
  
  operator_new(0x30,param_1);
  ptVar1 = forward<std::tuple<>>((type *)param_4);
  ptVar2 = forward<std::tuple<int&&>>((type *)param_3);
  ppVar3 = forward<std::piecewise_construct_t_const&>((type *)param_2);
  ppVar4 = (pair *)_Rb_tree_node<std::pair<int_const,char*>>::_M_valptr
                             ((_Rb_tree_node<std::pair<int_const,char*>> *)param_1);
  paVar5 = (allocator *)_M_get_Node_allocator(this);
                    /* try { // try from 0010246f to 00102473 has its CatchHandler @ 00102476 */
  allocator_traits<std::allocator<std::_Rb_tree_node<std::pair<int_const,char*>>>>::
  construct<std::pair<int_const,char*>,std::piecewise_construct_t_const&,std::tuple<int&&>,std::tuple<>>
            (paVar5,ppVar4,ppVar3,ptVar2,ptVar1);
  return;
}




void good7(void)

{
  return;
}




void printUnsignedLine(uint param_1)

{
  printf("%u\n",(ulong)param_1);
  return;
}




/* std::_Rb_tree<int, std::pair<int const, char*>, std::_Select1st<std::pair<int const, char*> >,
   std::less<int>, std::allocator<std::pair<int const, char*> >
   >::_M_drop_node(std::_Rb_tree_node<std::pair<int const, char*> >*) */

void __thiscall
std::
_Rb_tree<int,std::pair<int_const,char*>,std::_Select1st<std::pair<int_const,char*>>,std::less<int>,std::allocator<std::pair<int_const,char*>>>
::_M_drop_node(_Rb_tree<int,std::pair<int_const,char*>,std::_Select1st<std::pair<int_const,char*>>,std::less<int>,std::allocator<std::pair<int_const,char*>>>
               *this,_Rb_tree_node *param_1)

{
  _M_destroy_node(this,param_1);
  _M_put_node(this,param_1);
  return;
}




/* std::_Tuple_impl<0ul, int&&>::_Tuple_impl<int>(int&&) */

void __thiscall
std::_Tuple_impl<0ul,int&&>::_Tuple_impl<int>(_Tuple_impl<0ul,int&&> *this,int *param_1)

{
  int *piVar1;
  
  piVar1 = forward<int>((type *)param_1);
  _Head_base<0ul,int&&,false>::_Head_base<int>((_Head_base<0ul,int&&,false> *)this,piVar1);
  return;
}




/* std::_Rb_tree_node<std::pair<int const, char*> >* std::_Rb_tree<int, std::pair<int const, char*>,
   std::_Select1st<std::pair<int const, char*> >, std::less<int>, std::allocator<std::pair<int
   const, char*> > >::_Alloc_node::TEMPNAMEPLACEHOLDERVALUE(std::pair<int const, char*> const&)
   const */

_Rb_tree_node * __thiscall
std::
_Rb_tree<int,std::pair<int_const,char*>,std::_Select1st<std::pair<int_const,char*>>,std::less<int>,std::allocator<std::pair<int_const,char*>>>
::_Alloc_node::operator()(_Alloc_node *this,pair *param_1)

{
  _Rb_tree<int,std::pair<int_const,char*>,std::_Select1st<std::pair<int_const,char*>>,std::less<int>,std::allocator<std::pair<int_const,char*>>>
  *this_00;
  pair *ppVar1;
  _Rb_tree_node *p_Var2;
  
  this_00 = *(_Rb_tree<int,std::pair<int_const,char*>,std::_Select1st<std::pair<int_const,char*>>,std::less<int>,std::allocator<std::pair<int_const,char*>>>
              **)this;
  ppVar1 = forward<std::pair<int_const,char*>const&>((type *)param_1);
  p_Var2 = _M_create_node<std::pair<int_const,char*>const&>(this_00,ppVar1);
  return p_Var2;
}




/* std::_Rb_tree<int, std::pair<int const, char*>, std::_Select1st<std::pair<int const, char*> >,
   std::less<int>, std::allocator<std::pair<int const, char*> >
   >::_M_get_insert_hint_unique_pos(std::_Rb_tree_const_iterator<std::pair<int const, char*> >, int
   const&) */

undefined8 __thiscall
std::
_Rb_tree<int,std::pair<int_const,char*>,std::_Select1st<std::pair<int_const,char*>>,std::less<int>,std::allocator<std::pair<int_const,char*>>>
::_M_get_insert_hint_unique_pos
          (_Rb_tree<int,std::pair<int_const,char*>,std::_Select1st<std::pair<int_const,char*>>,std::less<int>,std::allocator<std::pair<int_const,char*>>>
           *this,_Rb_tree_const_iterator param_1,int *param_2)

{
  bool bVar1;
  _Rb_tree<int,std::pair<int_const,char*>,std::_Select1st<std::pair<int_const,char*>>,std::less<int>,std::allocator<std::pair<int_const,char*>>>
  *p_Var2;
  char cVar3;
  _Rb_tree_node_base *p_Var4;
  _Rb_tree_node_base *p_Var5;
  long lVar6;
  undefined8 *puVar7;
  int *piVar8;
  _Rb_tree_node_base **pp_Var9;
  long *plVar10;
  _Rb_tree_node_base **pp_Var11;
  undefined4 in_register_00000034;
  long in_FS_OFFSET;
  undefined8 local_68;
  _Rb_tree<int,std::pair<int_const,char*>,std::_Select1st<std::pair<int_const,char*>>,std::less<int>,std::allocator<std::pair<int_const,char*>>>
  *local_60;
  _Rb_tree_node_base *local_50;
  _Rb_tree_node_base *local_48;
  _Rb_tree_node_base *local_40;
  undefined8 local_38 [3];
  long local_20;
  
  local_68 = CONCAT44(in_register_00000034,param_1);
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  local_60 = this;
  p_Var4 = (_Rb_tree_node_base *)
           _Rb_tree_const_iterator<std::pair<int_const,char*>>::_M_const_cast
                     ((_Rb_tree_const_iterator<std::pair<int_const,char*>> *)&local_68);
  local_50 = p_Var4;
  p_Var5 = (_Rb_tree_node_base *)_M_end(local_60);
  p_Var2 = local_60;
  if (p_Var4 != p_Var5) {
    piVar8 = (int *)_S_key(local_50);
    cVar3 = less<int>::operator()((less<int> *)p_Var2,param_2,piVar8);
    p_Var4 = local_50;
    p_Var2 = local_60;
    if (cVar3 == '\0') {
      piVar8 = (int *)_S_key(local_50);
      cVar3 = less<int>::operator()((less<int> *)p_Var2,piVar8,param_2);
      p_Var4 = local_50;
      if (cVar3 == '\0') {
        local_40 = (_Rb_tree_node_base *)0x0;
        pair<std::_Rb_tree_node_base*,std::_Rb_tree_node_base*>::
        pair<std::_Rb_tree_node_base*&,true>
                  ((pair<std::_Rb_tree_node_base*,std::_Rb_tree_node_base*> *)local_38,&local_50,
                   &local_40);
      }
      else {
        local_48 = local_50;
        plVar10 = (long *)_M_rightmost(local_60);
        p_Var2 = local_60;
        if (p_Var4 == (_Rb_tree_node_base *)*plVar10) {
          pp_Var9 = (_Rb_tree_node_base **)_M_rightmost(local_60);
          local_40 = (_Rb_tree_node_base *)0x0;
          pair<std::_Rb_tree_node_base*,std::_Rb_tree_node_base*>::
          pair<std::_Rb_tree_node_base*&,true>
                    ((pair<std::_Rb_tree_node_base*,std::_Rb_tree_node_base*> *)local_38,&local_40,
                     pp_Var9);
        }
        else {
          puVar7 = (undefined8 *)
                   _Rb_tree_iterator<std::pair<int_const,char*>>::operator++
                             ((_Rb_tree_iterator<std::pair<int_const,char*>> *)&local_48);
          piVar8 = (int *)_S_key((_Rb_tree_node_base *)*puVar7);
          cVar3 = less<int>::operator()((less<int> *)p_Var2,param_2,piVar8);
          if (cVar3 == '\0') {
            local_38[0] = _M_get_insert_unique_pos(local_60,param_2);
          }
          else {
            lVar6 = _S_right(local_50);
            if (lVar6 == 0) {
              local_40 = (_Rb_tree_node_base *)0x0;
              pair<std::_Rb_tree_node_base*,std::_Rb_tree_node_base*>::
              pair<std::_Rb_tree_node_base*&,true>
                        ((pair<std::_Rb_tree_node_base*,std::_Rb_tree_node_base*> *)local_38,
                         &local_40,&local_50);
            }
            else {
              pair<std::_Rb_tree_node_base*,std::_Rb_tree_node_base*>::
              pair<std::_Rb_tree_node_base*&,std::_Rb_tree_node_base*&,true>
                        ((pair<std::_Rb_tree_node_base*,std::_Rb_tree_node_base*> *)local_38,
                         &local_48,&local_48);
            }
          }
        }
      }
    }
    else {
      local_48 = local_50;
      plVar10 = (long *)_M_leftmost(local_60);
      p_Var2 = local_60;
      if (p_Var4 == (_Rb_tree_node_base *)*plVar10) {
        pp_Var9 = (_Rb_tree_node_base **)_M_leftmost(local_60);
        pp_Var11 = (_Rb_tree_node_base **)_M_leftmost(local_60);
        pair<std::_Rb_tree_node_base*,std::_Rb_tree_node_base*>::
        pair<std::_Rb_tree_node_base*&,std::_Rb_tree_node_base*&,true>
                  ((pair<std::_Rb_tree_node_base*,std::_Rb_tree_node_base*> *)local_38,pp_Var11,
                   pp_Var9);
      }
      else {
        puVar7 = (undefined8 *)
                 _Rb_tree_iterator<std::pair<int_const,char*>>::operator--
                           ((_Rb_tree_iterator<std::pair<int_const,char*>> *)&local_48);
        piVar8 = (int *)_S_key((_Rb_tree_node_base *)*puVar7);
        cVar3 = less<int>::operator()((less<int> *)p_Var2,piVar8,param_2);
        if (cVar3 == '\0') {
          local_38[0] = _M_get_insert_unique_pos(local_60,param_2);
        }
        else {
          lVar6 = _S_right(local_48);
          if (lVar6 == 0) {
            local_40 = (_Rb_tree_node_base *)0x0;
            pair<std::_Rb_tree_node_base*,std::_Rb_tree_node_base*>::
            pair<std::_Rb_tree_node_base*&,true>
                      ((pair<std::_Rb_tree_node_base*,std::_Rb_tree_node_base*> *)local_38,&local_40
                       ,&local_48);
          }
          else {
            pair<std::_Rb_tree_node_base*,std::_Rb_tree_node_base*>::
            pair<std::_Rb_tree_node_base*&,std::_Rb_tree_node_base*&,true>
                      ((pair<std::_Rb_tree_node_base*,std::_Rb_tree_node_base*> *)local_38,&local_50
                       ,&local_50);
          }
        }
      }
    }
    goto LAB_00102066;
  }
  lVar6 = size(local_60);
  p_Var2 = local_60;
  if (lVar6 == 0) {
LAB_00101d7a:
    bVar1 = false;
  }
  else {
    puVar7 = (undefined8 *)_M_rightmost(local_60);
    piVar8 = (int *)_S_key((_Rb_tree_node_base *)*puVar7);
    cVar3 = less<int>::operator()((less<int> *)p_Var2,piVar8,param_2);
    if (cVar3 == '\0') goto LAB_00101d7a;
    bVar1 = true;
  }
  if (bVar1) {
    pp_Var9 = (_Rb_tree_node_base **)_M_rightmost(local_60);
    local_40 = (_Rb_tree_node_base *)0x0;
    pair<std::_Rb_tree_node_base*,std::_Rb_tree_node_base*>::pair<std::_Rb_tree_node_base*&,true>
              ((pair<std::_Rb_tree_node_base*,std::_Rb_tree_node_base*> *)local_38,&local_40,pp_Var9
              );
  }
  else {
    local_38[0] = _M_get_insert_unique_pos(local_60,param_2);
  }
LAB_00102066:
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_38[0];
}




/* std::map<int, char*, std::less<int>, std::allocator<std::pair<int const, char*> >
   >::lower_bound(int const&) */

void __thiscall
std::map<int,char*,std::less<int>,std::allocator<std::pair<int_const,char*>>>::lower_bound
          (map<int,char*,std::less<int>,std::allocator<std::pair<int_const,char*>>> *this,
          int *param_1)

{
  _Rb_tree<int,std::pair<int_const,char*>,std::_Select1st<std::pair<int_const,char*>>,std::less<int>,std::allocator<std::pair<int_const,char*>>>
  ::lower_bound((_Rb_tree<int,std::pair<int_const,char*>,std::_Select1st<std::pair<int_const,char*>>,std::less<int>,std::allocator<std::pair<int_const,char*>>>
                 *)this,param_1);
  return;
}




/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* int&& std::forward<int&&>(std::remove_reference<int&&>::type&) */

int * std::forward<int&&>(type *param_1)

{
  return (int *)param_1;
}




/* std::map<int, char*, std::less<int>, std::allocator<std::pair<int const, char*> >
   >::map(std::map<int, char*, std::less<int>, std::allocator<std::pair<int const, char*> > >
   const&) */

void __thiscall
std::map<int,char*,std::less<int>,std::allocator<std::pair<int_const,char*>>>::map
          (map<int,char*,std::less<int>,std::allocator<std::pair<int_const,char*>>> *this,
          map *param_1)

{
  _Rb_tree<int,std::pair<int_const,char*>,std::_Select1st<std::pair<int_const,char*>>,std::less<int>,std::allocator<std::pair<int_const,char*>>>
  ::_Rb_tree((_Rb_tree<int,std::pair<int_const,char*>,std::_Select1st<std::pair<int_const,char*>>,std::less<int>,std::allocator<std::pair<int_const,char*>>>
              *)this,(_Rb_tree *)param_1);
  return;
}




void bad1(void)

{
  return;
}




/* std::tuple<int&&>::tuple<int, true>(int&&) */

void __thiscall std::tuple<int&&>::tuple<int,true>(tuple<int&&> *this,int *param_1)

{
  int *piVar1;
  
  piVar1 = forward<int>((type *)param_1);
  _Tuple_impl<0ul,int&&>::_Tuple_impl<int>((_Tuple_impl<0ul,int&&> *)this,piVar1);
  return;
}




/* std::pair<std::_Rb_tree_node_base*,
   std::_Rb_tree_node_base*>::pair<std::_Rb_tree_node<std::pair<int const, char*> >*&,
   std::_Rb_tree_node_base*&, true>(std::_Rb_tree_node<std::pair<int const, char*> >*&,
   std::_Rb_tree_node_base*&) */

void __thiscall
std::pair<std::_Rb_tree_node_base*,std::_Rb_tree_node_base*>::
pair<std::_Rb_tree_node<std::pair<int_const,char*>>*&,std::_Rb_tree_node_base*&,true>
          (pair<std::_Rb_tree_node_base*,std::_Rb_tree_node_base*> *this,_Rb_tree_node **param_1,
          _Rb_tree_node_base **param_2)

{
  _Rb_tree_node **pp_Var1;
  _Rb_tree_node_base **pp_Var2;
  
  pp_Var1 = forward<std::_Rb_tree_node<std::pair<int_const,char*>>*&>((type *)param_1);
  *(_Rb_tree_node **)this = *pp_Var1;
  pp_Var2 = forward<std::_Rb_tree_node_base*&>((type *)param_2);
  *(_Rb_tree_node_base **)(this + 8) = *pp_Var2;
  return;
}




/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* std::_Rb_tree_node_base*&
   std::forward<std::_Rb_tree_node_base*&>(std::remove_reference<std::_Rb_tree_node_base*&>::type&)
    */

_Rb_tree_node_base ** std::forward<std::_Rb_tree_node_base*&>(type *param_1)

{
  return (_Rb_tree_node_base **)param_1;
}




/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* std::tuple<>&& std::forward<std::tuple<> >(std::remove_reference<std::tuple<> >::type&) */

tuple * std::forward<std::tuple<>>(type *param_1)

{
  return (tuple *)param_1;
}




/* new_allocator<std::_Rb_tree_node<std::pair<int const, char*> >
   >::deallocate(std::_Rb_tree_node<std::pair<int const, char*> >*, unsigned long) */

void new_allocator<std::_Rb_tree_node<std::pair<int_const,char*>>>::deallocate
               (_Rb_tree_node *param_1,ulong param_2)

{
  operator_delete((void *)param_2);
  return;
}




/* operator delete(void*, void*) */

void operator_delete(void *param_1,void *param_2)

{
  return;
}




/* void new_allocator<std::_Rb_tree_node<std::pair<int const, char*> > >::construct<std::pair<int
   const, char*>, std::pair<int const, char*> const&>(std::pair<int const, char*>*, std::pair<int
   const, char*> const&) */

void __thiscall
new_allocator<std::_Rb_tree_node<std::pair<int_const,char*>>>::
construct<std::pair<int_const,char*>,std::pair<int_const,char*>const&>
          (new_allocator<std::_Rb_tree_node<std::pair<int_const,char*>>> *this,pair *param_1,
          pair *param_2)

{
  undefined8 uVar1;
  pair *ppVar2;
  undefined8 *puVar3;
  
  ppVar2 = std::forward<std::pair<int_const,char*>const&>((type *)param_2);
  puVar3 = (undefined8 *)operator_new(0x10,param_1);
  uVar1 = *(undefined8 *)(ppVar2 + 8);
  *puVar3 = *(undefined8 *)ppVar2;
  puVar3[1] = uVar1;
  return;
}




/* std::_Rb_tree_node<std::pair<int const, char*> >::_M_valptr() */

void __thiscall
std::_Rb_tree_node<std::pair<int_const,char*>>::_M_valptr
          (_Rb_tree_node<std::pair<int_const,char*>> *this)

{
  __aligned_membuf<std::pair<int_const,char*>>::_M_ptr
            ((__aligned_membuf<std::pair<int_const,char*>> *)(this + 0x20));
  return;
}




/* std::_Rb_tree_iterator<std::pair<int const, char*> >::TEMPNAMEPLACEHOLDERVALUE() */

_Rb_tree_iterator<std::pair<int_const,char*>> * __thiscall
std::_Rb_tree_iterator<std::pair<int_const,char*>>::operator--
          (_Rb_tree_iterator<std::pair<int_const,char*>> *this)

{
  undefined8 uVar1;
  
  uVar1 = std::_Rb_tree_decrement(*(_Rb_tree_node_base **)this);
  *(undefined8 *)this = uVar1;
  return this;
}




/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* int& std::__get_helper<0ul, int&&>(std::_Tuple_impl<0ul, int&&>&) */

int * std::__get_helper<0ul,int&&>(_Tuple_impl *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)_Tuple_impl<0ul,int&&>::_M_head(param_1);
  return piVar1;
}




/* std::_Rb_tree_iterator<std::pair<int const, char*> > std::_Rb_tree<int, std::pair<int const,
   char*>, std::_Select1st<std::pair<int const, char*> >, std::less<int>,
   std::allocator<std::pair<int const, char*> > >::_M_emplace_hint_unique<std::piecewise_construct_t
   const&, std::tuple<int&&>, std::tuple<> >(std::_Rb_tree_const_iterator<std::pair<int const,
   char*> >, std::piecewise_construct_t const&, std::tuple<int&&>&&, std::tuple<>&&) */

undefined8 __thiscall
std::
_Rb_tree<int,std::pair<int_const,char*>,std::_Select1st<std::pair<int_const,char*>>,std::less<int>,std::allocator<std::pair<int_const,char*>>>
::_M_emplace_hint_unique<std::piecewise_construct_t_const&,std::tuple<int&&>,std::tuple<>>
          (_Rb_tree<int,std::pair<int_const,char*>,std::_Select1st<std::pair<int_const,char*>>,std::less<int>,std::allocator<std::pair<int_const,char*>>>
           *this,_Rb_tree_const_iterator param_1,type *param_2,type *param_3,type *param_4)

{
  tuple *ptVar1;
  tuple *ptVar2;
  piecewise_construct_t *ppVar3;
  int *piVar4;
  long in_FS_OFFSET;
  undefined8 local_48;
  _Rb_tree_node *local_40;
  undefined local_38 [16];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  ptVar1 = forward<std::tuple<>>(param_4);
  ptVar2 = forward<std::tuple<int&&>>(param_3);
  ppVar3 = forward<std::piecewise_construct_t_const&>(param_2);
  local_40 = _M_create_node<std::piecewise_construct_t_const&,std::tuple<int&&>,std::tuple<>>
                       (this,ppVar3,ptVar2,ptVar1);
                    /* try { // try from 001019fe to 00101a41 has its CatchHandler @ 00101a7f */
  piVar4 = (int *)_S_key(local_40);
  local_38 = _M_get_insert_hint_unique_pos(this,param_1,piVar4);
  if (local_38._8_8_ == (_Rb_tree_node_base *)0x0) {
    _M_drop_node(this,local_40);
    _Rb_tree_iterator<std::pair<int_const,char*>>::_Rb_tree_iterator
              ((_Rb_tree_iterator<std::pair<int_const,char*>> *)&local_48,
               (_Rb_tree_node_base *)local_38._0_8_);
  }
  else {
    local_48 = _M_insert_node(this,local_38._0_8_,local_38._8_8_,local_40);
  }
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_48;
}




/* std::allocator_traits<std::allocator<std::_Rb_tree_node<std::pair<int const, char*> > >
   >::select_on_container_copy_construction(std::allocator<std::_Rb_tree_node<std::pair<int const,
   char*> > > const&) */

allocator *
std::allocator_traits<std::allocator<std::_Rb_tree_node<std::pair<int_const,char*>>>>::
select_on_container_copy_construction(allocator *param_1)

{
  allocator<std::_Rb_tree_node<std::pair<int_const,char*>>>::allocator(param_1);
  return param_1;
}




/* std::tuple<int&&>::tuple(std::tuple<int&&>&&) */

void __thiscall std::tuple<int&&>::tuple(tuple<int&&> *this,tuple *param_1)

{
  _Tuple_impl<0ul,int&&>::_Tuple_impl((_Tuple_impl<0ul,int&&> *)this,(_Tuple_impl *)param_1);
  return;
}




void FUN_00101020(void)

{
  (*(code *)PTR_00108ec8)();
  return;
}




/* std::_Rb_tree_iterator<std::pair<int const, char*> >::TEMPNAMEPLACEHOLDERVALUE() const */

void __thiscall
std::_Rb_tree_iterator<std::pair<int_const,char*>>::operator*
          (_Rb_tree_iterator<std::pair<int_const,char*>> *this)

{
  _Rb_tree_node<std::pair<int_const,char*>>::_M_valptr
            (*(_Rb_tree_node<std::pair<int_const,char*>> **)this);
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




/* std::_Rb_tree<int, std::pair<int const, char*>, std::_Select1st<std::pair<int const, char*> >,
   std::less<int>, std::allocator<std::pair<int const, char*> > >::size() const */

undefined8 __thiscall
std::
_Rb_tree<int,std::pair<int_const,char*>,std::_Select1st<std::pair<int_const,char*>>,std::less<int>,std::allocator<std::pair<int_const,char*>>>
::size(_Rb_tree<int,std::pair<int_const,char*>,std::_Select1st<std::pair<int_const,char*>>,std::less<int>,std::allocator<std::pair<int_const,char*>>>
       *this)

{
  return *(undefined8 *)(this + 0x28);
}




/* std::_Select1st<std::pair<int const, char*> >::TEMPNAMEPLACEHOLDERVALUE(std::pair<int const,
   char*> const&) const */

pair * __thiscall
std::_Select1st<std::pair<int_const,char*>>::operator()
          (_Select1st<std::pair<int_const,char*>> *this,pair *param_1)

{
  return param_1;
}




/* std::allocator<std::_Rb_tree_node<std::pair<int const, char*> > >::allocator() */

void std::allocator<std::_Rb_tree_node<std::pair<int_const,char*>>>::allocator(void)

{
  new_allocator<std::_Rb_tree_node<std::pair<int_const,char*>>>::new_allocator();
  return;
}




/* void std::allocator_traits<std::allocator<std::_Rb_tree_node<std::pair<int const, char*> > >
   >::destroy<std::pair<int const, char*> >(std::allocator<std::_Rb_tree_node<std::pair<int const,
   char*> > >&, std::pair<int const, char*>*) */

void std::allocator_traits<std::allocator<std::_Rb_tree_node<std::pair<int_const,char*>>>>::
     destroy<std::pair<int_const,char*>>(allocator *param_1,pair *param_2)

{
  new_allocator<std::_Rb_tree_node<std::pair<int_const,char*>>>::destroy<std::pair<int_const,char*>>
            ((pair *)param_1);
  return;
}




void printLine(char *param_1)

{
  if (param_1 != (char *)0x0) {
    puts(param_1);
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




/* void new_allocator<std::_Rb_tree_node<std::pair<int const, char*> > >::destroy<std::pair<int
   const, char*> >(std::pair<int const, char*>*) */

void new_allocator<std::_Rb_tree_node<std::pair<int_const,char*>>>::
     destroy<std::pair<int_const,char*>>(pair *param_1)

{
  return;
}




int globalReturnsTrueOrFalse(void)

{
  int iVar1;
  
  iVar1 = rand();
  return iVar1 % 2;
}




void good6(void)

{
  return;
}




/* std::_Rb_tree<int, std::pair<int const, char*>, std::_Select1st<std::pair<int const, char*> >,
   std::less<int>, std::allocator<std::pair<int const, char*> >
   >::_M_insert_node(std::_Rb_tree_node_base*, std::_Rb_tree_node_base*,
   std::_Rb_tree_node<std::pair<int const, char*> >*) */

undefined8 __thiscall
std::
_Rb_tree<int,std::pair<int_const,char*>,std::_Select1st<std::pair<int_const,char*>>,std::less<int>,std::allocator<std::pair<int_const,char*>>>
::_M_insert_node(_Rb_tree<int,std::pair<int_const,char*>,std::_Select1st<std::pair<int_const,char*>>,std::less<int>,std::allocator<std::pair<int_const,char*>>>
                 *this,_Rb_tree_node_base *param_1,_Rb_tree_node_base *param_2,
                _Rb_tree_node *param_3)

{
  char cVar1;
  bool bVar2;
  _Rb_tree_node_base *p_Var3;
  int *piVar4;
  int *piVar5;
  long in_FS_OFFSET;
  undefined8 local_28;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_1 == (_Rb_tree_node_base *)0x0) {
    p_Var3 = (_Rb_tree_node_base *)_M_end(this);
    if (param_2 != p_Var3) {
      piVar4 = (int *)_S_key(param_2);
      piVar5 = (int *)_S_key(param_3);
      cVar1 = less<int>::operator()((less<int> *)this,piVar5,piVar4);
      if (cVar1 == '\0') {
        bVar2 = false;
        goto LAB_00102158;
      }
    }
  }
  bVar2 = true;
LAB_00102158:
  std::_Rb_tree_insert_and_rebalance
            (bVar2,(_Rb_tree_node_base *)param_3,param_2,(_Rb_tree_node_base *)(this + 8));
  *(long *)(this + 0x28) = *(long *)(this + 0x28) + 1;
  _Rb_tree_iterator<std::pair<int_const,char*>>::_Rb_tree_iterator
            ((_Rb_tree_iterator<std::pair<int_const,char*>> *)&local_28,
             (_Rb_tree_node_base *)param_3);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_28;
}




/* std::less<int>::TEMPNAMEPLACEHOLDERVALUE(int const&, int const&) const */

undefined4 __thiscall std::less<int>::operator()(less<int> *this,int *param_1,int *param_2)

{
  return CONCAT31((int3)((uint)*param_2 >> 8),*param_1 < *param_2);
}




/* std::_Rb_tree<int, std::pair<int const, char*>, std::_Select1st<std::pair<int const, char*> >,
   std::less<int>, std::allocator<std::pair<int const, char*> > >::_S_right(std::_Rb_tree_node_base
   const*) */

undefined8
std::
_Rb_tree<int,std::pair<int_const,char*>,std::_Select1st<std::pair<int_const,char*>>,std::less<int>,std::allocator<std::pair<int_const,char*>>>
::_S_right(_Rb_tree_node_base *param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}




/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* int&& std::forward<int>(std::remove_reference<int>::type&) */

int * std::forward<int>(type *param_1)

{
  return (int *)param_1;
}




void bad9(void)

{
  return;
}




/* std::_Head_base<0ul, int&&, false>::_Head_base<int>(int&&) */

void __thiscall
std::_Head_base<0ul,int&&,false>::_Head_base<int>(_Head_base<0ul,int&&,false> *this,int *param_1)

{
  int *piVar1;
  
  piVar1 = forward<int>((type *)param_1);
  *(int **)this = piVar1;
  return;
}




/* new_allocator<std::_Rb_tree_node<std::pair<int const, char*> > >::max_size() const */

undefined8 new_allocator<std::_Rb_tree_node<std::pair<int_const,char*>>>::max_size(void)

{
  return 0x2aaaaaaaaaaaaaa;
}




/* std::_Rb_tree_node<std::pair<int const, char*> >* std::_Rb_tree<int, std::pair<int const, char*>,
   std::_Select1st<std::pair<int const, char*> >, std::less<int>, std::allocator<std::pair<int
   const, char*> > >::_M_copy<std::_Rb_tree<int, std::pair<int const, char*>,
   std::_Select1st<std::pair<int const, char*> >, std::less<int>, std::allocator<std::pair<int
   const, char*> > >::_Alloc_node>(std::_Rb_tree_node<std::pair<int const, char*> > const*,
   std::_Rb_tree_node_base*, std::_Rb_tree<int, std::pair<int const, char*>,
   std::_Select1st<std::pair<int const, char*> >, std::less<int>, std::allocator<std::pair<int
   const, char*> > >::_Alloc_node&) */

_Rb_tree_node * __thiscall
std::
_Rb_tree<int,std::pair<int_const,char*>,std::_Select1st<std::pair<int_const,char*>>,std::less<int>,std::allocator<std::pair<int_const,char*>>>
::
_M_copy<std::_Rb_tree<int,std::pair<int_const,char*>,std::_Select1st<std::pair<int_const,char*>>,std::less<int>,std::allocator<std::pair<int_const,char*>>>::_Alloc_node>
          (_Rb_tree<int,std::pair<int_const,char*>,std::_Select1st<std::pair<int_const,char*>>,std::less<int>,std::allocator<std::pair<int_const,char*>>>
           *this,_Rb_tree_node *param_1,_Rb_tree_node_base *param_2,_Alloc_node *param_3)

{
  _Rb_tree_node *p_Var1;
  _Rb_tree_node *p_Var2;
  _Rb_tree_node *p_Var3;
  _Rb_tree_node *local_40;
  _Rb_tree_node_base *local_38;
  
  p_Var1 = _M_clone_node<std::_Rb_tree<int,std::pair<int_const,char*>,std::_Select1st<std::pair<int_const,char*>>,std::less<int>,std::allocator<std::pair<int_const,char*>>>::_Alloc_node>
                     (this,param_1,param_3);
  *(_Rb_tree_node_base **)(p_Var1 + 8) = param_2;
  if (*(long *)(param_1 + 0x18) != 0) {
    p_Var2 = (_Rb_tree_node *)_S_right((_Rb_tree_node_base *)param_1);
                    /* try { // try from 00103729 to 001037bb has its CatchHandler @ 001037e7 */
    p_Var2 = _M_copy<std::_Rb_tree<int,std::pair<int_const,char*>,std::_Select1st<std::pair<int_const,char*>>,std::less<int>,std::allocator<std::pair<int_const,char*>>>::_Alloc_node>
                       (this,p_Var2,(_Rb_tree_node_base *)p_Var1,param_3);
    *(_Rb_tree_node **)(p_Var1 + 0x18) = p_Var2;
  }
  local_38 = (_Rb_tree_node_base *)_S_left((_Rb_tree_node_base *)param_1);
  local_40 = p_Var1;
  while (local_38 != (_Rb_tree_node_base *)0x0) {
    p_Var2 = _M_clone_node<std::_Rb_tree<int,std::pair<int_const,char*>,std::_Select1st<std::pair<int_const,char*>>,std::less<int>,std::allocator<std::pair<int_const,char*>>>::_Alloc_node>
                       (this,(_Rb_tree_node *)local_38,param_3);
    *(_Rb_tree_node **)(local_40 + 0x10) = p_Var2;
    *(_Rb_tree_node **)(p_Var2 + 8) = local_40;
    if (*(long *)(local_38 + 0x18) != 0) {
      p_Var3 = (_Rb_tree_node *)_S_right(local_38);
      p_Var3 = _M_copy<std::_Rb_tree<int,std::pair<int_const,char*>,std::_Select1st<std::pair<int_const,char*>>,std::less<int>,std::allocator<std::pair<int_const,char*>>>::_Alloc_node>
                         (this,p_Var3,(_Rb_tree_node_base *)p_Var2,param_3);
      *(_Rb_tree_node **)(p_Var2 + 0x18) = p_Var3;
    }
    local_38 = (_Rb_tree_node_base *)_S_left(local_38);
    local_40 = p_Var2;
  }
  return p_Var1;
}




/* std::pair<int const, char*>::pair<int&&>(std::piecewise_construct_t, std::tuple<int&&>,
   std::tuple<>) */

void std::pair<int_const,char*>::pair<int&&>(tuple *param_1,tuple *param_2)

{
  long in_FS_OFFSET;
  undefined local_29;
  tuple *local_28;
  tuple *local_20;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_28 = param_2;
  local_20 = param_1;
  pair<int&&,0ul>(param_1,param_2,(_Index_tuple)&local_29,(_Index_tuple)param_2);
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




/* void std::allocator_traits<std::allocator<std::_Rb_tree_node<std::pair<int const, char*> > >
   >::construct<std::pair<int const, char*>, std::piecewise_construct_t const&, std::tuple<int&&>,
   std::tuple<> >(std::allocator<std::_Rb_tree_node<std::pair<int const, char*> > >&, std::pair<int
   const, char*>*, std::piecewise_construct_t const&, std::tuple<int&&>&&, std::tuple<>&&) */

void std::allocator_traits<std::allocator<std::_Rb_tree_node<std::pair<int_const,char*>>>>::
     construct<std::pair<int_const,char*>,std::piecewise_construct_t_const&,std::tuple<int&&>,std::tuple<>>
               (allocator *param_1,pair *param_2,piecewise_construct_t *param_3,tuple *param_4,
               tuple *param_5)

{
  tuple *ptVar1;
  tuple *ptVar2;
  piecewise_construct_t *ppVar3;
  
  ptVar1 = forward<std::tuple<>>((type *)param_5);
  ptVar2 = forward<std::tuple<int&&>>((type *)param_4);
  ppVar3 = forward<std::piecewise_construct_t_const&>((type *)param_3);
  new_allocator<std::_Rb_tree_node<std::pair<int_const,char*>>>::
  construct<std::pair<int_const,char*>,std::piecewise_construct_t_const&,std::tuple<int&&>,std::tuple<>>
            ((new_allocator<std::_Rb_tree_node<std::pair<int_const,char*>>> *)param_1,param_2,ppVar3
             ,ptVar2,ptVar1);
  return;
}




undefined8 stdThreadDestroy(void *param_1)

{
  free(param_1);
  return 1;
}




/* std::_Tuple_impl<0ul, int&&>::_M_head(std::_Tuple_impl<0ul, int&&>&) */

void std::_Tuple_impl<0ul,int&&>::_M_head(_Tuple_impl *param_1)

{
  _Head_base<0ul,int&&,false>::_M_head((_Head_base *)param_1);
  return;
}




/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* std::_Rb_tree_node<std::pair<int const, char*> >*& std::forward<std::_Rb_tree_node<std::pair<int
   const, char*> >*&>(std::remove_reference<std::_Rb_tree_node<std::pair<int const, char*>
   >*&>::type&) */

_Rb_tree_node ** std::forward<std::_Rb_tree_node<std::pair<int_const,char*>>*&>(type *param_1)

{
  return (_Rb_tree_node **)param_1;
}




/* std::_Rb_tree<int, std::pair<int const, char*>, std::_Select1st<std::pair<int const, char*> >,
   std::less<int>, std::allocator<std::pair<int const, char*> > >::_Rb_tree() */

void __thiscall
std::
_Rb_tree<int,std::pair<int_const,char*>,std::_Select1st<std::pair<int_const,char*>>,std::less<int>,std::allocator<std::pair<int_const,char*>>>
::_Rb_tree(_Rb_tree<int,std::pair<int_const,char*>,std::_Select1st<std::pair<int_const,char*>>,std::less<int>,std::allocator<std::pair<int_const,char*>>>
           *this)

{
  _Rb_tree_impl<std::less<int>,true>::_Rb_tree_impl((_Rb_tree_impl<std::less<int>,true> *)this);
  return;
}




/* std::allocator<std::_Rb_tree_node<std::pair<int const, char*> >
   >::allocator(std::allocator<std::_Rb_tree_node<std::pair<int const, char*> > > const&) */

void std::allocator<std::_Rb_tree_node<std::pair<int_const,char*>>>::allocator(allocator *param_1)

{
  new_allocator<std::_Rb_tree_node<std::pair<int_const,char*>>>::new_allocator
            ((new_allocator *)param_1);
  return;
}




undefined8 main(void)

{
  time_t tVar1;
  
  tVar1 = time((time_t *)0x0);
  srand((uint)tVar1);
  printLine("Calling good()...");
  CWE122_Heap_Based_Buffer_Overflow__c_src_char_cpy_74::good();
  printLine("Finished good()");
  printLine("Calling bad()...");
  CWE122_Heap_Based_Buffer_Overflow__c_src_char_cpy_74::bad();
  printLine("Finished bad()");
  return 0;
}




/* std::map<int, char*, std::less<int>, std::allocator<std::pair<int const, char*> > >::~map() */

void __thiscall
std::map<int,char*,std::less<int>,std::allocator<std::pair<int_const,char*>>>::~map
          (map<int,char*,std::less<int>,std::allocator<std::pair<int_const,char*>>> *this)

{
  _Rb_tree<int,std::pair<int_const,char*>,std::_Select1st<std::pair<int_const,char*>>,std::less<int>,std::allocator<std::pair<int_const,char*>>>
  ::~_Rb_tree((_Rb_tree<int,std::pair<int_const,char*>,std::_Select1st<std::pair<int_const,char*>>,std::less<int>,std::allocator<std::pair<int_const,char*>>>
               *)this);
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




void printShortLine(short param_1)

{
  printf("%hd\n",(ulong)(uint)(int)param_1);
  return;
}




/* __aligned_membuf<std::pair<int const, char*> >::_M_addr() const */

__aligned_membuf<std::pair<int_const,char*>> * __thiscall
__aligned_membuf<std::pair<int_const,char*>>::_M_addr
          (__aligned_membuf<std::pair<int_const,char*>> *this)

{
  return this;
}




/* void std::_Rb_tree<int, std::pair<int const, char*>, std::_Select1st<std::pair<int const, char*>
   >, std::less<int>, std::allocator<std::pair<int const, char*> >
   >::_M_construct_node<std::pair<int const, char*> const&>(std::_Rb_tree_node<std::pair<int const,
   char*> >*, std::pair<int const, char*> const&) */

void __thiscall
std::
_Rb_tree<int,std::pair<int_const,char*>,std::_Select1st<std::pair<int_const,char*>>,std::less<int>,std::allocator<std::pair<int_const,char*>>>
::_M_construct_node<std::pair<int_const,char*>const&>
          (_Rb_tree<int,std::pair<int_const,char*>,std::_Select1st<std::pair<int_const,char*>>,std::less<int>,std::allocator<std::pair<int_const,char*>>>
           *this,_Rb_tree_node *param_1,pair *param_2)

{
  pair *ppVar1;
  pair *ppVar2;
  allocator *paVar3;
  
  operator_new(0x30,param_1);
  ppVar1 = forward<std::pair<int_const,char*>const&>((type *)param_2);
  ppVar2 = (pair *)_Rb_tree_node<std::pair<int_const,char*>>::_M_valptr
                             ((_Rb_tree_node<std::pair<int_const,char*>> *)param_1);
  paVar3 = (allocator *)_M_get_Node_allocator(this);
  allocator_traits<std::allocator<std::_Rb_tree_node<std::pair<int_const,char*>>>>::
  construct<std::pair<int_const,char*>,std::pair<int_const,char*>const&>(paVar3,ppVar2,ppVar1);
  return;
}




/* new_allocator<std::_Rb_tree_node<std::pair<int const, char*> > >::~new_allocator() */

void __thiscall
new_allocator<std::_Rb_tree_node<std::pair<int_const,char*>>>::~new_allocator
          (new_allocator<std::_Rb_tree_node<std::pair<int_const,char*>>> *this)

{
  return;
}




/* new_allocator<std::_Rb_tree_node<std::pair<int const, char*> > >::new_allocator() */

void new_allocator<std::_Rb_tree_node<std::pair<int_const,char*>>>::new_allocator(void)

{
  return;
}




void good8(void)

{
  return;
}




/* __aligned_membuf<std::pair<int const, char*> >::_M_ptr() */

void __thiscall
__aligned_membuf<std::pair<int_const,char*>>::_M_ptr
          (__aligned_membuf<std::pair<int_const,char*>> *this)

{
  _M_addr(this);
  return;
}




void bad4(void)

{
  return;
}




/* std::_Rb_tree<int, std::pair<int const, char*>, std::_Select1st<std::pair<int const, char*> >,
   std::less<int>, std::allocator<std::pair<int const, char*> >
   >::_S_key(std::_Rb_tree_node<std::pair<int const, char*> > const*) */

void std::
     _Rb_tree<int,std::pair<int_const,char*>,std::_Select1st<std::pair<int_const,char*>>,std::less<int>,std::allocator<std::pair<int_const,char*>>>
     ::_S_key(_Rb_tree_node *param_1)

{
  pair *ppVar1;
  long in_FS_OFFSET;
  _Select1st<std::pair<int_const,char*>> local_11;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  ppVar1 = (pair *)_Rb_tree_node<std::pair<int_const,char*>>::_M_valptr
                             ((_Rb_tree_node<std::pair<int_const,char*>> *)param_1);
  _Select1st<std::pair<int_const,char*>>::operator()(&local_11,ppVar1);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void bad6(void)

{
  return;
}




/* new_allocator<std::_Rb_tree_node<std::pair<int const, char*> >
   >::new_allocator(new_allocator<std::_Rb_tree_node<std::pair<int const, char*> > > const&) */

void new_allocator<std::_Rb_tree_node<std::pair<int_const,char*>>>::new_allocator
               (new_allocator *param_1)

{
  return;
}




/* std::_Rb_tree<int, std::pair<int const, char*>, std::_Select1st<std::pair<int const, char*> >,
   std::less<int>, std::allocator<std::pair<int const, char*> >
   >::_Alloc_node::_Alloc_node(std::_Rb_tree<int, std::pair<int const, char*>,
   std::_Select1st<std::pair<int const, char*> >, std::less<int>, std::allocator<std::pair<int
   const, char*> > >&) */

void __thiscall
std::
_Rb_tree<int,std::pair<int_const,char*>,std::_Select1st<std::pair<int_const,char*>>,std::less<int>,std::allocator<std::pair<int_const,char*>>>
::_Alloc_node::_Alloc_node(_Alloc_node *this,_Rb_tree *param_1)

{
  *(_Rb_tree **)this = param_1;
  return;
}




/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* std::remove_reference<int&>::type&& std::move<int&>(int&) */

type * std::move<int&>(int *param_1)

{
  return (type *)param_1;
}




/* std::_Rb_tree<int, std::pair<int const, char*>, std::_Select1st<std::pair<int const, char*> >,
   std::less<int>, std::allocator<std::pair<int const, char*> >
   >::_M_erase(std::_Rb_tree_node<std::pair<int const, char*> >*) */

void __thiscall
std::
_Rb_tree<int,std::pair<int_const,char*>,std::_Select1st<std::pair<int_const,char*>>,std::less<int>,std::allocator<std::pair<int_const,char*>>>
::_M_erase(_Rb_tree<int,std::pair<int_const,char*>,std::_Select1st<std::pair<int_const,char*>>,std::less<int>,std::allocator<std::pair<int_const,char*>>>
           *this,_Rb_tree_node *param_1)

{
  _Rb_tree_node *p_Var1;
  _Rb_tree_node_base *p_Var2;
  undefined8 local_28;
  
  local_28 = param_1;
  while (local_28 != (_Rb_tree_node *)0x0) {
    p_Var1 = (_Rb_tree_node *)_S_right((_Rb_tree_node_base *)local_28);
    _M_erase(this,p_Var1);
    p_Var2 = (_Rb_tree_node_base *)_S_left((_Rb_tree_node_base *)local_28);
    _M_drop_node(this,local_28);
    local_28 = (_Rb_tree_node *)p_Var2;
  }
  return;
}




/* __alloc_traits<std::allocator<std::_Rb_tree_node<std::pair<int const, char*> > >,
   std::_Rb_tree_node<std::pair<int const, char*> >
   >::_S_select_on_copy(std::allocator<std::_Rb_tree_node<std::pair<int const, char*> > > const&) */

allocator *
__alloc_traits<std::allocator<std::_Rb_tree_node<std::pair<int_const,char*>>>,std::_Rb_tree_node<std::pair<int_const,char*>>>
::_S_select_on_copy(allocator *param_1)

{
  long lVar1;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  std::allocator_traits<std::allocator<std::_Rb_tree_node<std::pair<int_const,char*>>>>::
  select_on_container_copy_construction(param_1);
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1;
}




undefined8 globalReturnsTrue(void)

{
  return 1;
}




/* std::_Rb_tree<int, std::pair<int const, char*>, std::_Select1st<std::pair<int const, char*> >,
   std::less<int>, std::allocator<std::pair<int const, char*> > >::~_Rb_tree() */

void __thiscall
std::
_Rb_tree<int,std::pair<int_const,char*>,std::_Select1st<std::pair<int_const,char*>>,std::less<int>,std::allocator<std::pair<int_const,char*>>>
::~_Rb_tree(_Rb_tree<int,std::pair<int_const,char*>,std::_Select1st<std::pair<int_const,char*>>,std::less<int>,std::allocator<std::pair<int_const,char*>>>
            *this)

{
  _Rb_tree_node *p_Var1;
  
  p_Var1 = (_Rb_tree_node *)_M_begin(this);
  _M_erase(this,p_Var1);
  _Rb_tree_impl<std::less<int>,true>::~_Rb_tree_impl((_Rb_tree_impl<std::less<int>,true> *)this);
  return;
}




/* std::_Rb_tree_node<std::pair<int const, char*> >* std::_Rb_tree<int, std::pair<int const, char*>,
   std::_Select1st<std::pair<int const, char*> >, std::less<int>, std::allocator<std::pair<int
   const, char*> > >::_M_clone_node<std::_Rb_tree<int, std::pair<int const, char*>,
   std::_Select1st<std::pair<int const, char*> >, std::less<int>, std::allocator<std::pair<int
   const, char*> > >::_Alloc_node>(std::_Rb_tree_node<std::pair<int const, char*> > const*,
   std::_Rb_tree<int, std::pair<int const, char*>, std::_Select1st<std::pair<int const, char*> >,
   std::less<int>, std::allocator<std::pair<int const, char*> > >::_Alloc_node&) */

_Rb_tree_node * __thiscall
std::
_Rb_tree<int,std::pair<int_const,char*>,std::_Select1st<std::pair<int_const,char*>>,std::less<int>,std::allocator<std::pair<int_const,char*>>>
::
_M_clone_node<std::_Rb_tree<int,std::pair<int_const,char*>,std::_Select1st<std::pair<int_const,char*>>,std::less<int>,std::allocator<std::pair<int_const,char*>>>::_Alloc_node>
          (_Rb_tree<int,std::pair<int_const,char*>,std::_Select1st<std::pair<int_const,char*>>,std::less<int>,std::allocator<std::pair<int_const,char*>>>
           *this,_Rb_tree_node *param_1,_Alloc_node *param_2)

{
  pair *ppVar1;
  _Rb_tree_node *p_Var2;
  
  ppVar1 = (pair *)_Rb_tree_node<std::pair<int_const,char*>>::_M_valptr
                             ((_Rb_tree_node<std::pair<int_const,char*>> *)param_1);
  p_Var2 = _Alloc_node::operator()(param_2,ppVar1);
  *(undefined4 *)p_Var2 = *(undefined4 *)param_1;
  *(undefined8 *)(p_Var2 + 0x10) = 0;
  *(undefined8 *)(p_Var2 + 0x18) = 0;
  return p_Var2;
}




/* std::_Rb_tree<int, std::pair<int const, char*>, std::_Select1st<std::pair<int const, char*> >,
   std::less<int>, std::allocator<std::pair<int const, char*> > >::_M_rightmost() */

_Rb_tree<int,std::pair<int_const,char*>,std::_Select1st<std::pair<int_const,char*>>,std::less<int>,std::allocator<std::pair<int_const,char*>>>
* __thiscall
std::
_Rb_tree<int,std::pair<int_const,char*>,std::_Select1st<std::pair<int_const,char*>>,std::less<int>,std::allocator<std::pair<int_const,char*>>>
::_M_rightmost(_Rb_tree<int,std::pair<int_const,char*>,std::_Select1st<std::pair<int_const,char*>>,std::less<int>,std::allocator<std::pair<int_const,char*>>>
               *this)

{
  return this + 0x20;
}




/* std::_Rb_tree<int, std::pair<int const, char*>, std::_Select1st<std::pair<int const, char*> >,
   std::less<int>, std::allocator<std::pair<int const, char*> > >::_M_leftmost() */

_Rb_tree<int,std::pair<int_const,char*>,std::_Select1st<std::pair<int_const,char*>>,std::less<int>,std::allocator<std::pair<int_const,char*>>>
* __thiscall
std::
_Rb_tree<int,std::pair<int_const,char*>,std::_Select1st<std::pair<int_const,char*>>,std::less<int>,std::allocator<std::pair<int_const,char*>>>
::_M_leftmost(_Rb_tree<int,std::pair<int_const,char*>,std::_Select1st<std::pair<int_const,char*>>,std::less<int>,std::allocator<std::pair<int_const,char*>>>
              *this)

{
  return this + 0x18;
}




/* std::_Rb_tree_iterator<std::pair<int const, char*> >::_Rb_tree_iterator(std::_Rb_tree_node_base*)
    */

void __thiscall
std::_Rb_tree_iterator<std::pair<int_const,char*>>::_Rb_tree_iterator
          (_Rb_tree_iterator<std::pair<int_const,char*>> *this,_Rb_tree_node_base *param_1)

{
  *(_Rb_tree_node_base **)this = param_1;
  return;
}




/* std::_Rb_tree<int, std::pair<int const, char*>, std::_Select1st<std::pair<int const, char*> >,
   std::less<int>, std::allocator<std::pair<int const, char*> > >::_M_root() const */

undefined8 __thiscall
std::
_Rb_tree<int,std::pair<int_const,char*>,std::_Select1st<std::pair<int_const,char*>>,std::less<int>,std::allocator<std::pair<int_const,char*>>>
::_M_root(_Rb_tree<int,std::pair<int_const,char*>,std::_Select1st<std::pair<int_const,char*>>,std::less<int>,std::allocator<std::pair<int_const,char*>>>
          *this)

{
  return *(undefined8 *)(this + 0x10);
}




/* std::_Tuple_impl<0ul, int&&>::_Tuple_impl(std::_Tuple_impl<0ul, int&&>&&) */

void __thiscall
std::_Tuple_impl<0ul,int&&>::_Tuple_impl(_Tuple_impl<0ul,int&&> *this,_Tuple_impl *param_1)

{
  type *ptVar1;
  int *piVar2;
  
  ptVar1 = (type *)_M_head(param_1);
  piVar2 = forward<int&&>(ptVar1);
  _Head_base<0ul,int&&,false>::_Head_base<int>((_Head_base<0ul,int&&,false> *)this,piVar2);
  return;
}




/* std::map<int, char*, std::less<int>, std::allocator<std::pair<int const, char*> > >::key_comp()
   const */

undefined4
std::map<int,char*,std::less<int>,std::allocator<std::pair<int_const,char*>>>::key_comp(void)

{
  undefined4 unaff_EBX;
  
  _Rb_tree<int,std::pair<int_const,char*>,std::_Select1st<std::pair<int_const,char*>>,std::less<int>,std::allocator<std::pair<int_const,char*>>>
  ::key_comp();
  return unaff_EBX;
}




/* std::map<int, char*, std::less<int>, std::allocator<std::pair<int const, char*> > >::map() */

void __thiscall
std::map<int,char*,std::less<int>,std::allocator<std::pair<int_const,char*>>>::map
          (map<int,char*,std::less<int>,std::allocator<std::pair<int_const,char*>>> *this)

{
  _Rb_tree<int,std::pair<int_const,char*>,std::_Select1st<std::pair<int_const,char*>>,std::less<int>,std::allocator<std::pair<int_const,char*>>>
  ::_Rb_tree((_Rb_tree<int,std::pair<int_const,char*>,std::_Select1st<std::pair<int_const,char*>>,std::less<int>,std::allocator<std::pair<int_const,char*>>>
              *)this);
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




/* std::_Rb_tree<int, std::pair<int const, char*>, std::_Select1st<std::pair<int const, char*> >,
   std::less<int>, std::allocator<std::pair<int const, char*> > >::lower_bound(int const&) */

void __thiscall
std::
_Rb_tree<int,std::pair<int_const,char*>,std::_Select1st<std::pair<int_const,char*>>,std::less<int>,std::allocator<std::pair<int_const,char*>>>
::lower_bound(_Rb_tree<int,std::pair<int_const,char*>,std::_Select1st<std::pair<int_const,char*>>,std::less<int>,std::allocator<std::pair<int_const,char*>>>
              *this,int *param_1)

{
  _Rb_tree_node_base *p_Var1;
  _Rb_tree_node *p_Var2;
  
  p_Var1 = (_Rb_tree_node_base *)_M_end(this);
  p_Var2 = (_Rb_tree_node *)_M_begin(this);
  _M_lower_bound(this,p_Var2,p_Var1,param_1);
  return;
}




/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* std::tuple_element<0ul, std::tuple<int&&> >::type& std::get<0ul, int&&>(std::tuple<int&&>&) */

type * std::get<0ul,int&&>(tuple *param_1)

{
  type *ptVar1;
  
  ptVar1 = (type *)__get_helper<0ul,int&&>((_Tuple_impl *)param_1);
  return ptVar1;
}




/* void std::allocator_traits<std::allocator<std::_Rb_tree_node<std::pair<int const, char*> > >
   >::construct<std::pair<int const, char*>, std::pair<int const, char*>
   const&>(std::allocator<std::_Rb_tree_node<std::pair<int const, char*> > >&, std::pair<int const,
   char*>*, std::pair<int const, char*> const&) */

void std::allocator_traits<std::allocator<std::_Rb_tree_node<std::pair<int_const,char*>>>>::
     construct<std::pair<int_const,char*>,std::pair<int_const,char*>const&>
               (allocator *param_1,pair *param_2,pair *param_3)

{
  pair *ppVar1;
  
  ppVar1 = forward<std::pair<int_const,char*>const&>((type *)param_3);
  new_allocator<std::_Rb_tree_node<std::pair<int_const,char*>>>::
  construct<std::pair<int_const,char*>,std::pair<int_const,char*>const&>
            ((new_allocator<std::_Rb_tree_node<std::pair<int_const,char*>>> *)param_1,param_2,ppVar1
            );
  return;
}




/* std::pair<int const, char*>::pair<int&&, 0ul>(std::tuple<int&&>&, std::tuple<>&,
   std::_Index_tuple<0ul>, std::_Index_tuple<>) */

void std::pair<int_const,char*>::pair<int&&,0ul>
               (tuple *param_1,tuple *param_2,_Index_tuple param_3,_Index_tuple param_4)

{
  type *ptVar1;
  int *piVar2;
  
  ptVar1 = get<0ul,int&&>(param_2);
  piVar2 = forward<int&&>((type *)ptVar1);
  *(int *)param_1 = *piVar2;
  *(undefined8 *)(param_1 + 8) = 0;
  return;
}




/* std::_Rb_tree<int, std::pair<int const, char*>, std::_Select1st<std::pair<int const, char*> >,
   std::less<int>, std::allocator<std::pair<int const, char*> > >::_M_end() */

_Rb_tree<int,std::pair<int_const,char*>,std::_Select1st<std::pair<int_const,char*>>,std::less<int>,std::allocator<std::pair<int_const,char*>>>
* __thiscall
std::
_Rb_tree<int,std::pair<int_const,char*>,std::_Select1st<std::pair<int_const,char*>>,std::less<int>,std::allocator<std::pair<int_const,char*>>>
::_M_end(_Rb_tree<int,std::pair<int_const,char*>,std::_Select1st<std::pair<int_const,char*>>,std::less<int>,std::allocator<std::pair<int_const,char*>>>
         *this)

{
  return this + 8;
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
    __isoc99_sscanf(local_18 * 2 + param_3,&DAT_00105094,local_1c);
    *(char *)(local_18 + param_1) = local_1c[0];
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




/* std::map<int, char*, std::less<int>, std::allocator<std::pair<int const, char*> > >::end() */

void __thiscall
std::map<int,char*,std::less<int>,std::allocator<std::pair<int_const,char*>>>::end
          (map<int,char*,std::less<int>,std::allocator<std::pair<int_const,char*>>> *this)

{
  _Rb_tree<int,std::pair<int_const,char*>,std::_Select1st<std::pair<int_const,char*>>,std::less<int>,std::allocator<std::pair<int_const,char*>>>
  ::end((_Rb_tree<int,std::pair<int_const,char*>,std::_Select1st<std::pair<int_const,char*>>,std::less<int>,std::allocator<std::pair<int_const,char*>>>
         *)this);
  return;
}




/* std::_Rb_tree_key_compare<std::less<int> >::_Rb_tree_key_compare(std::less<int> const&) */

void std::_Rb_tree_key_compare<std::less<int>>::_Rb_tree_key_compare(less *param_1)

{
  return;
}




/* CWE122_Heap_Based_Buffer_Overflow__c_src_char_cpy_74::goodG2BSink(std::map<int, char*,
   std::less<int>, std::allocator<std::pair<int const, char*> > >) */

void CWE122_Heap_Based_Buffer_Overflow__c_src_char_cpy_74::goodG2BSink(map param_1)

{
  undefined8 *puVar1;
  undefined4 in_register_0000003c;
  long in_FS_OFFSET;
  int local_54;
  char *local_50;
  char local_48 [56];
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_54 = 2;
  puVar1 = (undefined8 *)
           std::map<int,char*,std::less<int>,std::allocator<std::pair<int_const,char*>>>::operator[]
                     ((map<int,char*,std::less<int>,std::allocator<std::pair<int_const,char*>>> *)
                      CONCAT44(in_register_0000003c,param_1),&local_54);
  local_50 = (char *)*puVar1;
  local_48[0] = '\0';
  local_48[1] = '\0';
  local_48[2] = '\0';
  local_48[3] = '\0';
  local_48[4] = '\0';
  local_48[5] = '\0';
  local_48[6] = '\0';
  local_48[7] = '\0';
  local_48[8] = '\0';
  local_48[9] = '\0';
  local_48[10] = '\0';
  local_48[0xb] = '\0';
  local_48[0xc] = '\0';
  local_48[0xd] = '\0';
  local_48[0xe] = '\0';
  local_48[0xf] = '\0';
  local_48[0x10] = '\0';
  local_48[0x11] = '\0';
  local_48[0x12] = '\0';
  local_48[0x13] = '\0';
  local_48[0x14] = '\0';
  local_48[0x15] = '\0';
  local_48[0x16] = '\0';
  local_48[0x17] = '\0';
  local_48[0x18] = '\0';
  local_48[0x19] = '\0';
  local_48[0x1a] = '\0';
  local_48[0x1b] = '\0';
  local_48[0x1c] = '\0';
  local_48[0x1d] = '\0';
  local_48[0x1e] = '\0';
  local_48[0x1f] = '\0';
  local_48[0x20] = '\0';
  local_48[0x21] = '\0';
  local_48[0x22] = '\0';
  local_48[0x23] = '\0';
  local_48[0x24] = '\0';
  local_48[0x25] = '\0';
  local_48[0x26] = '\0';
  local_48[0x27] = '\0';
  local_48[0x28] = '\0';
  local_48[0x29] = '\0';
  local_48[0x2a] = '\0';
  local_48[0x2b] = '\0';
  local_48[0x2c] = '\0';
  local_48[0x2d] = '\0';
  local_48[0x2e] = '\0';
  local_48[0x2f] = '\0';
  local_48[0x30] = '\0';
  local_48[0x31] = '\0';
  strcpy(local_48,local_50);
  printLine(local_50);
  free(local_50);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




/* operator new(unsigned long, void*) */

void * operator_new(ulong param_1,void *param_2)

{
  return param_2;
}




/* std::_Rb_tree<int, std::pair<int const, char*>, std::_Select1st<std::pair<int const, char*> >,
   std::less<int>, std::allocator<std::pair<int const, char*> > >::_Rb_tree(std::_Rb_tree<int,
   std::pair<int const, char*>, std::_Select1st<std::pair<int const, char*> >, std::less<int>,
   std::allocator<std::pair<int const, char*> > > const&) */

void __thiscall
std::
_Rb_tree<int,std::pair<int_const,char*>,std::_Select1st<std::pair<int_const,char*>>,std::less<int>,std::allocator<std::pair<int_const,char*>>>
::_Rb_tree(_Rb_tree<int,std::pair<int_const,char*>,std::_Select1st<std::pair<int_const,char*>>,std::less<int>,std::allocator<std::pair<int_const,char*>>>
           *this,_Rb_tree *param_1)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  
  _Rb_tree_impl<std::less<int>,true>::_Rb_tree_impl((_Rb_tree_impl *)this);
  lVar1 = _M_root((_Rb_tree<int,std::pair<int_const,char*>,std::_Select1st<std::pair<int_const,char*>>,std::less<int>,std::allocator<std::pair<int_const,char*>>>
                   *)param_1);
  if (lVar1 != 0) {
    puVar2 = (undefined8 *)_M_root(this);
                    /* try { // try from 00103323 to 00103327 has its CatchHandler @ 0010332d */
    uVar3 = _M_copy(this,param_1);
    *puVar2 = uVar3;
  }
  return;
}




/* std::pair<std::_Rb_tree_node_base*, std::_Rb_tree_node_base*>::pair<std::_Rb_tree_node_base*&,
   true>(std::_Rb_tree_node_base* const&, std::_Rb_tree_node_base*&) */

void __thiscall
std::pair<std::_Rb_tree_node_base*,std::_Rb_tree_node_base*>::pair<std::_Rb_tree_node_base*&,true>
          (pair<std::_Rb_tree_node_base*,std::_Rb_tree_node_base*> *this,
          _Rb_tree_node_base **param_1,_Rb_tree_node_base **param_2)

{
  _Rb_tree_node_base **pp_Var1;
  
  *(_Rb_tree_node_base **)this = *param_1;
  pp_Var1 = forward<std::_Rb_tree_node_base*&>((type *)param_2);
  *(_Rb_tree_node_base **)(this + 8) = *pp_Var1;
  return;
}




/* std::_Rb_tree<int, std::pair<int const, char*>, std::_Select1st<std::pair<int const, char*> >,
   std::less<int>, std::allocator<std::pair<int const, char*> > >::_Rb_tree_impl<std::less<int>,
   true>::_Rb_tree_impl() */

void __thiscall
std::
_Rb_tree<int,std::pair<int_const,char*>,std::_Select1st<std::pair<int_const,char*>>,std::less<int>,std::allocator<std::pair<int_const,char*>>>
::_Rb_tree_impl<std::less<int>,true>::_Rb_tree_impl(_Rb_tree_impl<std::less<int>,true> *this)

{
  allocator<std::_Rb_tree_node<std::pair<int_const,char*>>>::allocator();
  _Rb_tree_key_compare<std::less<int>>::_Rb_tree_key_compare();
  _Rb_tree_header::_Rb_tree_header((_Rb_tree_header *)(this + 8));
  return;
}




/* std::_Rb_tree<int, std::pair<int const, char*>, std::_Select1st<std::pair<int const, char*> >,
   std::less<int>, std::allocator<std::pair<int const, char*> > >::_M_get_Node_allocator() */

_Rb_tree<int,std::pair<int_const,char*>,std::_Select1st<std::pair<int_const,char*>>,std::less<int>,std::allocator<std::pair<int_const,char*>>>
* __thiscall
std::
_Rb_tree<int,std::pair<int_const,char*>,std::_Select1st<std::pair<int_const,char*>>,std::less<int>,std::allocator<std::pair<int_const,char*>>>
::_M_get_Node_allocator
          (_Rb_tree<int,std::pair<int_const,char*>,std::_Select1st<std::pair<int_const,char*>>,std::less<int>,std::allocator<std::pair<int_const,char*>>>
           *this)

{
  return this;
}




/* std::_Rb_tree<int, std::pair<int const, char*>, std::_Select1st<std::pair<int const, char*> >,
   std::less<int>, std::allocator<std::pair<int const, char*> >
   >::_M_destroy_node(std::_Rb_tree_node<std::pair<int const, char*> >*) */

void __thiscall
std::
_Rb_tree<int,std::pair<int_const,char*>,std::_Select1st<std::pair<int_const,char*>>,std::less<int>,std::allocator<std::pair<int_const,char*>>>
::_M_destroy_node(_Rb_tree<int,std::pair<int_const,char*>,std::_Select1st<std::pair<int_const,char*>>,std::less<int>,std::allocator<std::pair<int_const,char*>>>
                  *this,_Rb_tree_node *param_1)

{
  pair *ppVar1;
  allocator *paVar2;
  
  ppVar1 = (pair *)_Rb_tree_node<std::pair<int_const,char*>>::_M_valptr
                             ((_Rb_tree_node<std::pair<int_const,char*>> *)param_1);
  paVar2 = (allocator *)_M_get_Node_allocator(this);
  allocator_traits<std::allocator<std::_Rb_tree_node<std::pair<int_const,char*>>>>::
  destroy<std::pair<int_const,char*>>(paVar2,ppVar1);
  return;
}




void printIntLine(uint param_1)

{
  printf("%d\n",(ulong)param_1);
  return;
}




/* new_allocator<std::_Rb_tree_node<std::pair<int const, char*> > >::allocate(unsigned long, void
   const*) */

void new_allocator<std::_Rb_tree_node<std::pair<int_const,char*>>>::allocate
               (ulong param_1,void *param_2)

{
  void *pvVar1;
  
  pvVar1 = (void *)max_size();
  if (pvVar1 < param_2) {
    std::__throw_bad_alloc();
  }
  operator_new((long)param_2 * 0x30);
  return;
}




void bad5(void)

{
  return;
}




/* std::_Rb_tree<int, std::pair<int const, char*>, std::_Select1st<std::pair<int const, char*> >,
   std::less<int>, std::allocator<std::pair<int const, char*> > >::_M_get_node() */

void __thiscall
std::
_Rb_tree<int,std::pair<int_const,char*>,std::_Select1st<std::pair<int_const,char*>>,std::less<int>,std::allocator<std::pair<int_const,char*>>>
::_M_get_node(_Rb_tree<int,std::pair<int_const,char*>,std::_Select1st<std::pair<int_const,char*>>,std::less<int>,std::allocator<std::pair<int_const,char*>>>
              *this)

{
  allocator *paVar1;
  
  paVar1 = (allocator *)_M_get_Node_allocator(this);
  allocator_traits<std::allocator<std::_Rb_tree_node<std::pair<int_const,char*>>>>::allocate
            (paVar1,1);
  return;
}




/* std::_Rb_tree<int, std::pair<int const, char*>, std::_Select1st<std::pair<int const, char*> >,
   std::less<int>, std::allocator<std::pair<int const, char*> > >::_M_get_insert_unique_pos(int
   const&) */

undefined8 __thiscall
std::
_Rb_tree<int,std::pair<int_const,char*>,std::_Select1st<std::pair<int_const,char*>>,std::less<int>,std::allocator<std::pair<int_const,char*>>>
::_M_get_insert_unique_pos
          (_Rb_tree<int,std::pair<int_const,char*>,std::_Select1st<std::pair<int_const,char*>>,std::less<int>,std::allocator<std::pair<int_const,char*>>>
           *this,int *param_1)

{
  char cVar1;
  int *piVar2;
  long in_FS_OFFSET;
  char local_59;
  _Rb_tree_node *local_58;
  _Rb_tree_node_base *local_50;
  _Rb_tree_node_base *local_48;
  _Rb_tree_node_base *local_40;
  undefined8 local_38 [3];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  local_58 = (_Rb_tree_node *)_M_begin(this);
  local_50 = (_Rb_tree_node_base *)_M_end(this);
  local_59 = '\x01';
  while (local_58 != (_Rb_tree_node *)0x0) {
    local_50 = (_Rb_tree_node_base *)local_58;
    piVar2 = (int *)_S_key(local_58);
    local_59 = less<int>::operator()((less<int> *)this,param_1,piVar2);
    if (local_59 == '\0') {
      local_58 = (_Rb_tree_node *)_S_right((_Rb_tree_node_base *)local_58);
    }
    else {
      local_58 = (_Rb_tree_node *)_S_left((_Rb_tree_node_base *)local_58);
    }
  }
  _Rb_tree_iterator<std::pair<int_const,char*>>::_Rb_tree_iterator
            ((_Rb_tree_iterator<std::pair<int_const,char*>> *)&local_48,local_50);
  if (local_59 != '\0') {
    local_38[0] = begin(this);
    cVar1 = operator==((_Rb_tree_iterator *)&local_48,(_Rb_tree_iterator *)local_38);
    if (cVar1 != '\0') {
      pair<std::_Rb_tree_node_base*,std::_Rb_tree_node_base*>::
      pair<std::_Rb_tree_node<std::pair<int_const,char*>>*&,std::_Rb_tree_node_base*&,true>
                ((pair<std::_Rb_tree_node_base*,std::_Rb_tree_node_base*> *)local_38,&local_58,
                 &local_50);
      goto LAB_0010271a;
    }
    _Rb_tree_iterator<std::pair<int_const,char*>>::operator--
              ((_Rb_tree_iterator<std::pair<int_const,char*>> *)&local_48);
  }
  piVar2 = (int *)_S_key(local_48);
  cVar1 = less<int>::operator()((less<int> *)this,piVar2,param_1);
  if (cVar1 == '\0') {
    local_40 = (_Rb_tree_node_base *)0x0;
    pair<std::_Rb_tree_node_base*,std::_Rb_tree_node_base*>::pair<std::_Rb_tree_node_base*&,true>
              ((pair<std::_Rb_tree_node_base*,std::_Rb_tree_node_base*> *)local_38,&local_48,
               &local_40);
  }
  else {
    pair<std::_Rb_tree_node_base*,std::_Rb_tree_node_base*>::
    pair<std::_Rb_tree_node<std::pair<int_const,char*>>*&,std::_Rb_tree_node_base*&,true>
              ((pair<std::_Rb_tree_node_base*,std::_Rb_tree_node_base*> *)local_38,&local_58,
               &local_50);
  }
LAB_0010271a:
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return local_38[0];
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




/* std::_Rb_tree<int, std::pair<int const, char*>, std::_Select1st<std::pair<int const, char*> >,
   std::less<int>, std::allocator<std::pair<int const, char*> > >::_M_begin() */

undefined8 __thiscall
std::
_Rb_tree<int,std::pair<int_const,char*>,std::_Select1st<std::pair<int_const,char*>>,std::less<int>,std::allocator<std::pair<int_const,char*>>>
::_M_begin(_Rb_tree<int,std::pair<int_const,char*>,std::_Select1st<std::pair<int_const,char*>>,std::less<int>,std::allocator<std::pair<int_const,char*>>>
           *this)

{
  return *(undefined8 *)(this + 0x10);
}




/* std::_Rb_tree<int, std::pair<int const, char*>, std::_Select1st<std::pair<int const, char*> >,
   std::less<int>, std::allocator<std::pair<int const, char*> >
   >::_S_right(std::_Rb_tree_node_base*) */

undefined8
std::
_Rb_tree<int,std::pair<int_const,char*>,std::_Select1st<std::pair<int_const,char*>>,std::less<int>,std::allocator<std::pair<int_const,char*>>>
::_S_right(_Rb_tree_node_base *param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}




/* void new_allocator<std::_Rb_tree_node<std::pair<int const, char*> > >::construct<std::pair<int
   const, char*>, std::piecewise_construct_t const&, std::tuple<int&&>, std::tuple<> >(std::pair<int
   const, char*>*, std::piecewise_construct_t const&, std::tuple<int&&>&&, std::tuple<>&&) */

void __thiscall
new_allocator<std::_Rb_tree_node<std::pair<int_const,char*>>>::
construct<std::pair<int_const,char*>,std::piecewise_construct_t_const&,std::tuple<int&&>,std::tuple<>>
          (new_allocator<std::_Rb_tree_node<std::pair<int_const,char*>>> *this,pair *param_1,
          piecewise_construct_t *param_2,tuple *param_3,tuple *param_4)

{
  tuple *ptVar1;
  void *pvVar2;
  long in_FS_OFFSET;
  tuple<int&&> local_38 [8];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  std::forward<std::piecewise_construct_t_const&>((type *)param_2);
  ptVar1 = std::forward<std::tuple<int&&>>((type *)param_3);
  std::tuple<int&&>::tuple(local_38,ptVar1);
  std::forward<std::tuple<>>((type *)param_4);
  pvVar2 = operator_new(0x10,param_1);
                    /* try { // try from 00102be2 to 00102be6 has its CatchHandler @ 00102be9 */
  std::pair<int_const,char*>::pair<int&&>(pvVar2,local_38);
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




/* std::_Rb_tree<int, std::pair<int const, char*>, std::_Select1st<std::pair<int const, char*> >,
   std::less<int>, std::allocator<std::pair<int const, char*> > >::_S_key(std::_Rb_tree_node_base
   const*) */

void std::
     _Rb_tree<int,std::pair<int_const,char*>,std::_Select1st<std::pair<int_const,char*>>,std::less<int>,std::allocator<std::pair<int_const,char*>>>
     ::_S_key(_Rb_tree_node_base *param_1)

{
  _S_key((_Rb_tree_node *)param_1);
  return;
}




/* std::_Rb_tree<int, std::pair<int const, char*>, std::_Select1st<std::pair<int const, char*> >,
   std::less<int>, std::allocator<std::pair<int const, char*> > >::_M_root() */

_Rb_tree<int,std::pair<int_const,char*>,std::_Select1st<std::pair<int_const,char*>>,std::less<int>,std::allocator<std::pair<int_const,char*>>>
* __thiscall
std::
_Rb_tree<int,std::pair<int_const,char*>,std::_Select1st<std::pair<int_const,char*>>,std::less<int>,std::allocator<std::pair<int_const,char*>>>
::_M_root(_Rb_tree<int,std::pair<int_const,char*>,std::_Select1st<std::pair<int_const,char*>>,std::less<int>,std::allocator<std::pair<int_const,char*>>>
          *this)

{
  return this + 0x10;
}




undefined8 globalReturnsFalse(void)

{
  return 0;
}




/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* std::TEMPNAMEPLACEHOLDERVALUE(std::_Rb_tree_iterator<std::pair<int const, char*> > const&,
   std::_Rb_tree_iterator<std::pair<int const, char*> > const&) */

undefined8 std::operator==(_Rb_tree_iterator *param_1,_Rb_tree_iterator *param_2)

{
  return CONCAT71((int7)((ulong)*(long *)param_2 >> 8),*(long *)param_1 == *(long *)param_2);
}




/* std::_Rb_tree<int, std::pair<int const, char*>, std::_Select1st<std::pair<int const, char*> >,
   std::less<int>, std::allocator<std::pair<int const, char*> > >::_M_begin() const */

undefined8 __thiscall
std::
_Rb_tree<int,std::pair<int_const,char*>,std::_Select1st<std::pair<int_const,char*>>,std::less<int>,std::allocator<std::pair<int_const,char*>>>
::_M_begin(_Rb_tree<int,std::pair<int_const,char*>,std::_Select1st<std::pair<int_const,char*>>,std::less<int>,std::allocator<std::pair<int_const,char*>>>
           *this)

{
  return *(undefined8 *)(this + 0x10);
}




void printHexCharLine(char param_1)

{
  printf("%02x\n",(ulong)(uint)(int)param_1);
  return;
}




/* std::pair<std::_Rb_tree_node_base*, std::_Rb_tree_node_base*>::pair<std::_Rb_tree_node_base*&,
   true>(std::_Rb_tree_node_base*&, std::_Rb_tree_node_base* const&) */

void __thiscall
std::pair<std::_Rb_tree_node_base*,std::_Rb_tree_node_base*>::pair<std::_Rb_tree_node_base*&,true>
          (pair<std::_Rb_tree_node_base*,std::_Rb_tree_node_base*> *this,
          _Rb_tree_node_base **param_1,_Rb_tree_node_base **param_2)

{
  _Rb_tree_node_base **pp_Var1;
  
  pp_Var1 = forward<std::_Rb_tree_node_base*&>((type *)param_1);
  *(_Rb_tree_node_base **)this = *pp_Var1;
  *(_Rb_tree_node_base **)(this + 8) = *param_2;
  return;
}




/* std::_Rb_tree_header::_M_reset() */

void __thiscall std::_Rb_tree_header::_M_reset(_Rb_tree_header *this)

{
  *(undefined8 *)(this + 8) = 0;
  *(_Rb_tree_header **)(this + 0x10) = this;
  *(_Rb_tree_header **)(this + 0x18) = this;
  *(undefined8 *)(this + 0x20) = 0;
  return;
}




void bad3(void)

{
  return;
}




void stdThreadLockAcquire(pthread_mutex_t *param_1)

{
  pthread_mutex_lock(param_1);
  return;
}




/* std::tuple<int&&> std::forward_as_tuple<int>(int&&) */

tuple<int&&> * std::forward_as_tuple<int>(tuple<int&&> *param_1,type *param_2)

{
  int *piVar1;
  
  piVar1 = forward<int>(param_2);
  tuple<int&&>::tuple<int,true>(param_1,piVar1);
  return param_1;
}




/* std::_Rb_tree_node<std::pair<int const, char*> >* std::_Rb_tree<int, std::pair<int const, char*>,
   std::_Select1st<std::pair<int const, char*> >, std::less<int>, std::allocator<std::pair<int
   const, char*> > >::_M_copy<std::_Rb_tree<int, std::pair<int const, char*>,
   std::_Select1st<std::pair<int const, char*> >, std::less<int>, std::allocator<std::pair<int
   const, char*> > >::_Alloc_node>(std::_Rb_tree<int, std::pair<int const, char*>,
   std::_Select1st<std::pair<int const, char*> >, std::less<int>, std::allocator<std::pair<int
   const, char*> > > const&, std::_Rb_tree<int, std::pair<int const, char*>,
   std::_Select1st<std::pair<int const, char*> >, std::less<int>, std::allocator<std::pair<int
   const, char*> > >::_Alloc_node&) */

_Rb_tree_node * __thiscall
std::
_Rb_tree<int,std::pair<int_const,char*>,std::_Select1st<std::pair<int_const,char*>>,std::less<int>,std::allocator<std::pair<int_const,char*>>>
::
_M_copy<std::_Rb_tree<int,std::pair<int_const,char*>,std::_Select1st<std::pair<int_const,char*>>,std::less<int>,std::allocator<std::pair<int_const,char*>>>::_Alloc_node>
          (_Rb_tree<int,std::pair<int_const,char*>,std::_Select1st<std::pair<int_const,char*>>,std::less<int>,std::allocator<std::pair<int_const,char*>>>
           *this,_Rb_tree *param_1,_Alloc_node *param_2)

{
  _Rb_tree_node_base *p_Var1;
  _Rb_tree_node *p_Var2;
  undefined8 *puVar3;
  undefined8 uVar4;
  
  p_Var1 = (_Rb_tree_node_base *)_M_end(this);
  p_Var2 = (_Rb_tree_node *)
           _M_begin((_Rb_tree<int,std::pair<int_const,char*>,std::_Select1st<std::pair<int_const,char*>>,std::less<int>,std::allocator<std::pair<int_const,char*>>>
                     *)param_1);
  p_Var2 = _M_copy<std::_Rb_tree<int,std::pair<int_const,char*>,std::_Select1st<std::pair<int_const,char*>>,std::less<int>,std::allocator<std::pair<int_const,char*>>>::_Alloc_node>
                     (this,p_Var2,p_Var1,param_2);
  puVar3 = (undefined8 *)_M_leftmost(this);
  uVar4 = _S_minimum((_Rb_tree_node_base *)p_Var2);
  *puVar3 = uVar4;
  puVar3 = (undefined8 *)_M_rightmost(this);
  uVar4 = _S_maximum((_Rb_tree_node_base *)p_Var2);
  *puVar3 = uVar4;
  *(undefined8 *)(this + 0x28) = *(undefined8 *)(param_1 + 0x28);
  return p_Var2;
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




/* std::_Rb_tree_node<std::pair<int const, char*> >* std::_Rb_tree<int, std::pair<int const, char*>,
   std::_Select1st<std::pair<int const, char*> >, std::less<int>, std::allocator<std::pair<int
   const, char*> > >::_M_create_node<std::piecewise_construct_t const&, std::tuple<int&&>,
   std::tuple<> >(std::piecewise_construct_t const&, std::tuple<int&&>&&, std::tuple<>&&) */

_Rb_tree_node * __thiscall
std::
_Rb_tree<int,std::pair<int_const,char*>,std::_Select1st<std::pair<int_const,char*>>,std::less<int>,std::allocator<std::pair<int_const,char*>>>
::_M_create_node<std::piecewise_construct_t_const&,std::tuple<int&&>,std::tuple<>>
          (_Rb_tree<int,std::pair<int_const,char*>,std::_Select1st<std::pair<int_const,char*>>,std::less<int>,std::allocator<std::pair<int_const,char*>>>
           *this,piecewise_construct_t *param_1,tuple *param_2,tuple *param_3)

{
  _Rb_tree_node *p_Var1;
  tuple *ptVar2;
  tuple *ptVar3;
  piecewise_construct_t *ppVar4;
  
  p_Var1 = (_Rb_tree_node *)_M_get_node(this);
  ptVar2 = forward<std::tuple<>>((type *)param_3);
  ptVar3 = forward<std::tuple<int&&>>((type *)param_2);
  ppVar4 = forward<std::piecewise_construct_t_const&>((type *)param_1);
  _M_construct_node<std::piecewise_construct_t_const&,std::tuple<int&&>,std::tuple<>>
            (this,p_Var1,ppVar4,ptVar3,ptVar2);
  return p_Var1;
}




/* std::allocator_traits<std::allocator<std::_Rb_tree_node<std::pair<int const, char*> > >
   >::deallocate(std::allocator<std::_Rb_tree_node<std::pair<int const, char*> > >&,
   std::_Rb_tree_node<std::pair<int const, char*> >*, unsigned long) */

void std::allocator_traits<std::allocator<std::_Rb_tree_node<std::pair<int_const,char*>>>>::
     deallocate(allocator *param_1,_Rb_tree_node *param_2,ulong param_3)

{
  new_allocator<std::_Rb_tree_node<std::pair<int_const,char*>>>::deallocate
            ((_Rb_tree_node *)param_1,(ulong)param_2);
  return;
}




/* std::_Rb_tree_const_iterator<std::pair<int const, char*>
   >::_Rb_tree_const_iterator(std::_Rb_tree_iterator<std::pair<int const, char*> > const&) */

void __thiscall
std::_Rb_tree_const_iterator<std::pair<int_const,char*>>::_Rb_tree_const_iterator
          (_Rb_tree_const_iterator<std::pair<int_const,char*>> *this,_Rb_tree_iterator *param_1)

{
  *(undefined8 *)this = *(undefined8 *)param_1;
  return;
}




/* __aligned_membuf<std::pair<int const, char*> >::_M_addr() */

__aligned_membuf<std::pair<int_const,char*>> * __thiscall
__aligned_membuf<std::pair<int_const,char*>>::_M_addr
          (__aligned_membuf<std::pair<int_const,char*>> *this)

{
  return this;
}




void good1(void)

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
    __isoc99_swscanf(local_18 * 8 + param_3,&DAT_0010509c,local_1c);
    *(char *)(local_18 + param_1) = local_1c[0];
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




/* std::_Rb_tree_const_iterator<std::pair<int const, char*> >::_M_const_cast() const */

undefined8 __thiscall
std::_Rb_tree_const_iterator<std::pair<int_const,char*>>::_M_const_cast
          (_Rb_tree_const_iterator<std::pair<int_const,char*>> *this)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  _Rb_tree_iterator<std::pair<int_const,char*>>::_Rb_tree_iterator
            ((_Rb_tree_iterator<std::pair<int_const,char*>> *)&local_18,*(_Rb_tree_node_base **)this
            );
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




/* std::_Head_base<0ul, int&&, false>::_M_head(std::_Head_base<0ul, int&&, false>&) */

undefined8 std::_Head_base<0ul,int&&,false>::_M_head(_Head_base *param_1)

{
  return *(undefined8 *)param_1;
}




void bad2(void)

{
  return;
}




/* __aligned_membuf<std::pair<int const, char*> >::_M_ptr() const */

void __thiscall
__aligned_membuf<std::pair<int_const,char*>>::_M_ptr
          (__aligned_membuf<std::pair<int_const,char*>> *this)

{
  _M_addr(this);
  return;
}




/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* std::piecewise_construct_t const& std::forward<std::piecewise_construct_t
   const&>(std::remove_reference<std::piecewise_construct_t const&>::type&) */

piecewise_construct_t * std::forward<std::piecewise_construct_t_const&>(type *param_1)

{
  return (piecewise_construct_t *)param_1;
}




/* std::_Rb_tree_key_compare<std::less<int> >::_Rb_tree_key_compare() */

void std::_Rb_tree_key_compare<std::less<int>>::_Rb_tree_key_compare(void)

{
  return;
}




void internal_start(long param_1)

{
  (**(code **)(param_1 + 8))(*(undefined8 *)(param_1 + 0x10));
                    /* WARNING: Subroutine does not return */
  pthread_exit((void *)0x0);
}




/* std::_Rb_tree_node<std::pair<int const, char*> >::_M_valptr() const */

void __thiscall
std::_Rb_tree_node<std::pair<int_const,char*>>::_M_valptr
          (_Rb_tree_node<std::pair<int_const,char*>> *this)

{
  __aligned_membuf<std::pair<int_const,char*>>::_M_ptr
            ((__aligned_membuf<std::pair<int_const,char*>> *)(this + 0x20));
  return;
}




/* CWE122_Heap_Based_Buffer_Overflow__c_src_char_cpy_74::badSink(std::map<int, char*,
   std::less<int>, std::allocator<std::pair<int const, char*> > >) */

void CWE122_Heap_Based_Buffer_Overflow__c_src_char_cpy_74::badSink(map param_1)

{
  undefined8 *puVar1;
  undefined4 in_register_0000003c;
  long in_FS_OFFSET;
  int local_54;
  char *local_50;
  char local_48 [56];
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_54 = 2;
  puVar1 = (undefined8 *)
           std::map<int,char*,std::less<int>,std::allocator<std::pair<int_const,char*>>>::operator[]
                     ((map<int,char*,std::less<int>,std::allocator<std::pair<int_const,char*>>> *)
                      CONCAT44(in_register_0000003c,param_1),&local_54);
  local_50 = (char *)*puVar1;
  local_48[0] = '\0';
  local_48[1] = '\0';
  local_48[2] = '\0';
  local_48[3] = '\0';
  local_48[4] = '\0';
  local_48[5] = '\0';
  local_48[6] = '\0';
  local_48[7] = '\0';
  local_48[8] = '\0';
  local_48[9] = '\0';
  local_48[10] = '\0';
  local_48[0xb] = '\0';
  local_48[0xc] = '\0';
  local_48[0xd] = '\0';
  local_48[0xe] = '\0';
  local_48[0xf] = '\0';
  local_48[0x10] = '\0';
  local_48[0x11] = '\0';
  local_48[0x12] = '\0';
  local_48[0x13] = '\0';
  local_48[0x14] = '\0';
  local_48[0x15] = '\0';
  local_48[0x16] = '\0';
  local_48[0x17] = '\0';
  local_48[0x18] = '\0';
  local_48[0x19] = '\0';
  local_48[0x1a] = '\0';
  local_48[0x1b] = '\0';
  local_48[0x1c] = '\0';
  local_48[0x1d] = '\0';
  local_48[0x1e] = '\0';
  local_48[0x1f] = '\0';
  local_48[0x20] = '\0';
  local_48[0x21] = '\0';
  local_48[0x22] = '\0';
  local_48[0x23] = '\0';
  local_48[0x24] = '\0';
  local_48[0x25] = '\0';
  local_48[0x26] = '\0';
  local_48[0x27] = '\0';
  local_48[0x28] = '\0';
  local_48[0x29] = '\0';
  local_48[0x2a] = '\0';
  local_48[0x2b] = '\0';
  local_48[0x2c] = '\0';
  local_48[0x2d] = '\0';
  local_48[0x2e] = '\0';
  local_48[0x2f] = '\0';
  local_48[0x30] = '\0';
  local_48[0x31] = '\0';
  strcpy(local_48,local_50);
  printLine(local_50);
  free(local_50);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




/* std::_Rb_tree<int, std::pair<int const, char*>, std::_Select1st<std::pair<int const, char*> >,
   std::less<int>, std::allocator<std::pair<int const, char*> > >::end() */

undefined8 __thiscall
std::
_Rb_tree<int,std::pair<int_const,char*>,std::_Select1st<std::pair<int_const,char*>>,std::less<int>,std::allocator<std::pair<int_const,char*>>>
::end(_Rb_tree<int,std::pair<int_const,char*>,std::_Select1st<std::pair<int_const,char*>>,std::less<int>,std::allocator<std::pair<int_const,char*>>>
      *this)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  _Rb_tree_iterator<std::pair<int_const,char*>>::_Rb_tree_iterator
            ((_Rb_tree_iterator<std::pair<int_const,char*>> *)&local_18,
             (_Rb_tree_node_base *)(this + 8));
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




/* std::_Rb_tree_header::_Rb_tree_header() */

void __thiscall std::_Rb_tree_header::_Rb_tree_header(_Rb_tree_header *this)

{
  *(undefined4 *)this = 0;
  _M_reset(this);
  return;
}




/* std::allocator_traits<std::allocator<std::_Rb_tree_node<std::pair<int const, char*> > >
   >::allocate(std::allocator<std::_Rb_tree_node<std::pair<int const, char*> > >&, unsigned long) */

void std::allocator_traits<std::allocator<std::_Rb_tree_node<std::pair<int_const,char*>>>>::allocate
               (allocator *param_1,ulong param_2)

{
  new_allocator<std::_Rb_tree_node<std::pair<int_const,char*>>>::allocate
            ((ulong)param_1,(void *)param_2);
  return;
}




/* std::_Rb_tree<int, std::pair<int const, char*>, std::_Select1st<std::pair<int const, char*> >,
   std::less<int>, std::allocator<std::pair<int const, char*> >
   >::_M_lower_bound(std::_Rb_tree_node<std::pair<int const, char*> >*, std::_Rb_tree_node_base*,
   int const&) */

undefined8 __thiscall
std::
_Rb_tree<int,std::pair<int_const,char*>,std::_Select1st<std::pair<int_const,char*>>,std::less<int>,std::allocator<std::pair<int_const,char*>>>
::_M_lower_bound(_Rb_tree<int,std::pair<int_const,char*>,std::_Select1st<std::pair<int_const,char*>>,std::less<int>,std::allocator<std::pair<int_const,char*>>>
                 *this,_Rb_tree_node *param_1,_Rb_tree_node_base *param_2,int *param_3)

{
  char cVar1;
  int *piVar2;
  long in_FS_OFFSET;
  _Rb_tree_node_base *local_40;
  _Rb_tree_node *local_38;
  undefined8 local_28;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  local_40 = param_2;
  local_38 = param_1;
  while (local_38 != (_Rb_tree_node *)0x0) {
    piVar2 = (int *)_S_key(local_38);
    cVar1 = less<int>::operator()((less<int> *)this,piVar2,param_3);
    if (cVar1 == '\x01') {
      local_38 = (_Rb_tree_node *)_S_right((_Rb_tree_node_base *)local_38);
    }
    else {
      local_40 = (_Rb_tree_node_base *)local_38;
      local_38 = (_Rb_tree_node *)_S_left((_Rb_tree_node_base *)local_38);
    }
  }
  _Rb_tree_iterator<std::pair<int_const,char*>>::_Rb_tree_iterator
            ((_Rb_tree_iterator<std::pair<int_const,char*>> *)&local_28,local_40);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_28;
}




void good4(void)

{
  return;
}




/* std::_Rb_tree<int, std::pair<int const, char*>, std::_Select1st<std::pair<int const, char*> >,
   std::less<int>, std::allocator<std::pair<int const, char*> > >::_S_left(std::_Rb_tree_node_base*)
    */

undefined8
std::
_Rb_tree<int,std::pair<int_const,char*>,std::_Select1st<std::pair<int_const,char*>>,std::less<int>,std::allocator<std::pair<int_const,char*>>>
::_S_left(_Rb_tree_node_base *param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}




/* std::map<int, char*, std::less<int>, std::allocator<std::pair<int const, char*> >
   >::operator[](int&&) */

long __thiscall
std::map<int,char*,std::less<int>,std::allocator<std::pair<int_const,char*>>>::operator[]
          (map<int,char*,std::less<int>,std::allocator<std::pair<int_const,char*>>> *this,
          int *param_1)

{
  bool bVar1;
  char cVar2;
  int *piVar3;
  type *ptVar4;
  long lVar5;
  long in_FS_OFFSET;
  undefined local_39;
  undefined8 local_38;
  less<int> local_30 [8];
  undefined8 local_28;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  local_38 = lower_bound(this,param_1);
  local_28 = end(this);
  cVar2 = operator==((_Rb_tree_iterator *)&local_38,(_Rb_tree_iterator *)&local_28);
  if (cVar2 == '\0') {
    key_comp();
    piVar3 = (int *)_Rb_tree_iterator<std::pair<int_const,char*>>::operator*
                              ((_Rb_tree_iterator<std::pair<int_const,char*>> *)&local_38);
    cVar2 = less<int>::operator()(local_30,param_1,piVar3);
    if (cVar2 == '\0') {
      bVar1 = false;
      goto LAB_00101782;
    }
  }
  bVar1 = true;
LAB_00101782:
  if (bVar1) {
    ptVar4 = move<int&>(param_1);
    forward_as_tuple<int>(local_30,ptVar4);
    _Rb_tree_const_iterator<std::pair<int_const,char*>>::_Rb_tree_const_iterator
              ((_Rb_tree_const_iterator<std::pair<int_const,char*>> *)&local_28,
               (_Rb_tree_iterator *)&local_38);
    local_38 = _Rb_tree<int,std::pair<int_const,char*>,std::_Select1st<std::pair<int_const,char*>>,std::less<int>,std::allocator<std::pair<int_const,char*>>>
               ::
               _M_emplace_hint_unique<std::piecewise_construct_t_const&,std::tuple<int&&>,std::tuple<>>
                         ((_Rb_tree<int,std::pair<int_const,char*>,std::_Select1st<std::pair<int_const,char*>>,std::less<int>,std::allocator<std::pair<int_const,char*>>>
                           *)this,local_28,&piecewise_construct,local_30,&local_39);
  }
  lVar5 = _Rb_tree_iterator<std::pair<int_const,char*>>::operator*
                    ((_Rb_tree_iterator<std::pair<int_const,char*>> *)&local_38);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return lVar5 + 8;
}




/* std::_Rb_tree<int, std::pair<int const, char*>, std::_Select1st<std::pair<int const, char*> >,
   std::less<int>, std::allocator<std::pair<int const, char*> > >::_S_left(std::_Rb_tree_node_base
   const*) */

undefined8
std::
_Rb_tree<int,std::pair<int_const,char*>,std::_Select1st<std::pair<int_const,char*>>,std::less<int>,std::allocator<std::pair<int_const,char*>>>
::_S_left(_Rb_tree_node_base *param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}




/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* std::pair<int const, char*> const& std::forward<std::pair<int const, char*>
   const&>(std::remove_reference<std::pair<int const, char*> const&>::type&) */

pair * std::forward<std::pair<int_const,char*>const&>(type *param_1)

{
  return (pair *)param_1;
}




/* std::_Rb_tree<int, std::pair<int const, char*>, std::_Select1st<std::pair<int const, char*> >,
   std::less<int>, std::allocator<std::pair<int const, char*> > >::_M_copy(std::_Rb_tree<int,
   std::pair<int const, char*>, std::_Select1st<std::pair<int const, char*> >, std::less<int>,
   std::allocator<std::pair<int const, char*> > > const&) */

void __thiscall
std::
_Rb_tree<int,std::pair<int_const,char*>,std::_Select1st<std::pair<int_const,char*>>,std::less<int>,std::allocator<std::pair<int_const,char*>>>
::_M_copy(_Rb_tree<int,std::pair<int_const,char*>,std::_Select1st<std::pair<int_const,char*>>,std::less<int>,std::allocator<std::pair<int_const,char*>>>
          *this,_Rb_tree *param_1)

{
  long in_FS_OFFSET;
  _Alloc_node local_18 [8];
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  _Alloc_node::_Alloc_node(local_18,(_Rb_tree *)this);
  _M_copy<std::_Rb_tree<int,std::pair<int_const,char*>,std::_Select1st<std::pair<int_const,char*>>,std::less<int>,std::allocator<std::pair<int_const,char*>>>::_Alloc_node>
            (this,param_1,local_18);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



