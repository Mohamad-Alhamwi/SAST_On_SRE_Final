
/* std::_Rb_tree<int, std::pair<int const, int>, std::_Select1st<std::pair<int const, int> >,
   std::less<int>, std::allocator<std::pair<int const, int> >
   >::_M_get_insert_hint_unique_pos(std::_Rb_tree_const_iterator<std::pair<int const, int> >, int
   const&) */

undefined8 __thiscall
std::
_Rb_tree<int,std::pair<int_const,int>,std::_Select1st<std::pair<int_const,int>>,std::less<int>,std::allocator<std::pair<int_const,int>>>
::_M_get_insert_hint_unique_pos
          (_Rb_tree<int,std::pair<int_const,int>,std::_Select1st<std::pair<int_const,int>>,std::less<int>,std::allocator<std::pair<int_const,int>>>
           *this,_Rb_tree_const_iterator param_1,int *param_2)

{
  bool bVar1;
  _Rb_tree<int,std::pair<int_const,int>,std::_Select1st<std::pair<int_const,int>>,std::less<int>,std::allocator<std::pair<int_const,int>>>
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
  _Rb_tree<int,std::pair<int_const,int>,std::_Select1st<std::pair<int_const,int>>,std::less<int>,std::allocator<std::pair<int_const,int>>>
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
           _Rb_tree_const_iterator<std::pair<int_const,int>>::_M_const_cast
                     ((_Rb_tree_const_iterator<std::pair<int_const,int>> *)&local_68);
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
                   _Rb_tree_iterator<std::pair<int_const,int>>::operator++
                             ((_Rb_tree_iterator<std::pair<int_const,int>> *)&local_48);
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
                 _Rb_tree_iterator<std::pair<int_const,int>>::operator--
                           ((_Rb_tree_iterator<std::pair<int_const,int>> *)&local_48);
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
    goto LAB_001020a0;
  }
  lVar6 = size(local_60);
  p_Var2 = local_60;
  if (lVar6 == 0) {
LAB_00101db4:
    bVar1 = false;
  }
  else {
    puVar7 = (undefined8 *)_M_rightmost(local_60);
    piVar8 = (int *)_S_key((_Rb_tree_node_base *)*puVar7);
    cVar3 = less<int>::operator()((less<int> *)p_Var2,piVar8,param_2);
    if (cVar3 == '\0') goto LAB_00101db4;
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
LAB_001020a0:
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_38[0];
}




/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* int&& std::forward<int&&>(std::remove_reference<int&&>::type&) */

int * std::forward<int&&>(type *param_1)

{
  return (int *)param_1;
}




/* new_allocator<std::_Rb_tree_node<std::pair<int const, int> >
   >::new_allocator(new_allocator<std::_Rb_tree_node<std::pair<int const, int> > > const&) */

void new_allocator<std::_Rb_tree_node<std::pair<int_const,int>>>::new_allocator
               (new_allocator *param_1)

{
  return;
}




void printUnsignedLine(uint param_1)

{
  printf("%u\n",(ulong)param_1);
  return;
}




/* std::less<int>::TEMPNAMEPLACEHOLDERVALUE(int const&, int const&) const */

undefined4 __thiscall std::less<int>::operator()(less<int> *this,int *param_1,int *param_2)

{
  return CONCAT31((int3)((uint)*param_2 >> 8),*param_1 < *param_2);
}




/* std::_Rb_tree<int, std::pair<int const, int>, std::_Select1st<std::pair<int const, int> >,
   std::less<int>, std::allocator<std::pair<int const, int> > >::lower_bound(int const&) */

void __thiscall
std::
_Rb_tree<int,std::pair<int_const,int>,std::_Select1st<std::pair<int_const,int>>,std::less<int>,std::allocator<std::pair<int_const,int>>>
::lower_bound(_Rb_tree<int,std::pair<int_const,int>,std::_Select1st<std::pair<int_const,int>>,std::less<int>,std::allocator<std::pair<int_const,int>>>
              *this,int *param_1)

{
  _Rb_tree_node_base *p_Var1;
  _Rb_tree_node *p_Var2;
  
  p_Var1 = (_Rb_tree_node_base *)_M_end(this);
  p_Var2 = (_Rb_tree_node *)_M_begin(this);
  _M_lower_bound(this,p_Var2,p_Var1,param_1);
  return;
}




void printLongLongLine(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




void stdThreadLockAcquire(pthread_mutex_t *param_1)

{
  pthread_mutex_lock(param_1);
  return;
}




/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* std::remove_reference<int&>::type&& std::move<int&>(int&) */

type * std::move<int&>(int *param_1)

{
  return (type *)param_1;
}




/* new_allocator<std::_Rb_tree_node<std::pair<int const, int> > >::allocate(unsigned long, void
   const*) */

void new_allocator<std::_Rb_tree_node<std::pair<int_const,int>>>::allocate
               (ulong param_1,void *param_2)

{
  void *pvVar1;
  
  pvVar1 = (void *)max_size();
  if (pvVar1 < param_2) {
    std::__throw_bad_alloc();
  }
  operator_new((long)param_2 * 0x28);
  return;
}




/* std::_Rb_tree<int, std::pair<int const, int>, std::_Select1st<std::pair<int const, int> >,
   std::less<int>, std::allocator<std::pair<int const, int> > >::_M_copy(std::_Rb_tree<int,
   std::pair<int const, int>, std::_Select1st<std::pair<int const, int> >, std::less<int>,
   std::allocator<std::pair<int const, int> > > const&) */

void __thiscall
std::
_Rb_tree<int,std::pair<int_const,int>,std::_Select1st<std::pair<int_const,int>>,std::less<int>,std::allocator<std::pair<int_const,int>>>
::_M_copy(_Rb_tree<int,std::pair<int_const,int>,std::_Select1st<std::pair<int_const,int>>,std::less<int>,std::allocator<std::pair<int_const,int>>>
          *this,_Rb_tree *param_1)

{
  long in_FS_OFFSET;
  _Alloc_node local_18 [8];
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  _Alloc_node::_Alloc_node(local_18,(_Rb_tree *)this);
  _M_copy<std::_Rb_tree<int,std::pair<int_const,int>,std::_Select1st<std::pair<int_const,int>>,std::less<int>,std::allocator<std::pair<int_const,int>>>::_Alloc_node>
            (this,param_1,local_18);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
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
    __isoc99_sscanf(local_18 * 2 + param_3,&DAT_001050a4,local_1c);
    *(char *)(local_18 + param_1) = local_1c[0];
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void printShortLine(short param_1)

{
  printf("%hd\n",(ulong)(uint)(int)param_1);
  return;
}




/* std::_Rb_tree_iterator<std::pair<int const, int> >::_Rb_tree_iterator(std::_Rb_tree_node_base*)
    */

void __thiscall
std::_Rb_tree_iterator<std::pair<int_const,int>>::_Rb_tree_iterator
          (_Rb_tree_iterator<std::pair<int_const,int>> *this,_Rb_tree_node_base *param_1)

{
  *(_Rb_tree_node_base **)this = param_1;
  return;
}




void printSizeTLine(undefined8 param_1)

{
  printf("%zu\n",param_1);
  return;
}




/* std::map<int, int, std::less<int>, std::allocator<std::pair<int const, int> >
   >::operator[](int&&) */

long __thiscall
std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::operator[]
          (map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>> *this,int *param_1)

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
    piVar3 = (int *)_Rb_tree_iterator<std::pair<int_const,int>>::operator*
                              ((_Rb_tree_iterator<std::pair<int_const,int>> *)&local_38);
    cVar2 = less<int>::operator()(local_30,param_1,piVar3);
    if (cVar2 == '\0') {
      bVar1 = false;
      goto LAB_001017bc;
    }
  }
  bVar1 = true;
LAB_001017bc:
  if (bVar1) {
    ptVar4 = move<int&>(param_1);
    forward_as_tuple<int>(local_30,ptVar4);
    _Rb_tree_const_iterator<std::pair<int_const,int>>::_Rb_tree_const_iterator
              ((_Rb_tree_const_iterator<std::pair<int_const,int>> *)&local_28,
               (_Rb_tree_iterator *)&local_38);
    local_38 = _Rb_tree<int,std::pair<int_const,int>,std::_Select1st<std::pair<int_const,int>>,std::less<int>,std::allocator<std::pair<int_const,int>>>
               ::
               _M_emplace_hint_unique<std::piecewise_construct_t_const&,std::tuple<int&&>,std::tuple<>>
                         ((_Rb_tree<int,std::pair<int_const,int>,std::_Select1st<std::pair<int_const,int>>,std::less<int>,std::allocator<std::pair<int_const,int>>>
                           *)this,local_28,&piecewise_construct,local_30,&local_39);
  }
  lVar5 = _Rb_tree_iterator<std::pair<int_const,int>>::operator*
                    ((_Rb_tree_iterator<std::pair<int_const,int>> *)&local_38);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return lVar5 + 4;
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




void good3(void)

{
  return;
}




void bad9(void)

{
  return;
}




/* new_allocator<std::_Rb_tree_node<std::pair<int const, int> > >::~new_allocator() */

void __thiscall
new_allocator<std::_Rb_tree_node<std::pair<int_const,int>>>::~new_allocator
          (new_allocator<std::_Rb_tree_node<std::pair<int_const,int>>> *this)

{
  return;
}




void bad8(void)

{
  return;
}




void printFloatLine(float param_1)

{
  printf("%f\n",(double)param_1);
  return;
}




/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* int&& std::forward<int>(std::remove_reference<int>::type&) */

int * std::forward<int>(type *param_1)

{
  return (int *)param_1;
}




/* std::_Rb_tree_node<std::pair<int const, int> >* std::_Rb_tree<int, std::pair<int const, int>,
   std::_Select1st<std::pair<int const, int> >, std::less<int>, std::allocator<std::pair<int const,
   int> > >::_M_create_node<std::piecewise_construct_t const&, std::tuple<int&&>, std::tuple<>
   >(std::piecewise_construct_t const&, std::tuple<int&&>&&, std::tuple<>&&) */

_Rb_tree_node * __thiscall
std::
_Rb_tree<int,std::pair<int_const,int>,std::_Select1st<std::pair<int_const,int>>,std::less<int>,std::allocator<std::pair<int_const,int>>>
::_M_create_node<std::piecewise_construct_t_const&,std::tuple<int&&>,std::tuple<>>
          (_Rb_tree<int,std::pair<int_const,int>,std::_Select1st<std::pair<int_const,int>>,std::less<int>,std::allocator<std::pair<int_const,int>>>
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




/* std::tuple<int&&>::tuple(std::tuple<int&&>&&) */

void __thiscall std::tuple<int&&>::tuple(tuple<int&&> *this,tuple *param_1)

{
  _Tuple_impl<0ul,int&&>::_Tuple_impl((_Tuple_impl<0ul,int&&> *)this,(_Tuple_impl *)param_1);
  return;
}




void printIntLine(uint param_1)

{
  printf("%d\n",(ulong)param_1);
  return;
}




/* std::pair<std::_Rb_tree_node_base*,
   std::_Rb_tree_node_base*>::pair<std::_Rb_tree_node<std::pair<int const, int> >*&,
   std::_Rb_tree_node_base*&, true>(std::_Rb_tree_node<std::pair<int const, int> >*&,
   std::_Rb_tree_node_base*&) */

void __thiscall
std::pair<std::_Rb_tree_node_base*,std::_Rb_tree_node_base*>::
pair<std::_Rb_tree_node<std::pair<int_const,int>>*&,std::_Rb_tree_node_base*&,true>
          (pair<std::_Rb_tree_node_base*,std::_Rb_tree_node_base*> *this,_Rb_tree_node **param_1,
          _Rb_tree_node_base **param_2)

{
  _Rb_tree_node **pp_Var1;
  _Rb_tree_node_base **pp_Var2;
  
  pp_Var1 = forward<std::_Rb_tree_node<std::pair<int_const,int>>*&>((type *)param_1);
  *(_Rb_tree_node **)this = *pp_Var1;
  pp_Var2 = forward<std::_Rb_tree_node_base*&>((type *)param_2);
  *(_Rb_tree_node_base **)(this + 8) = *pp_Var2;
  return;
}




/* std::_Rb_tree_header::_Rb_tree_header() */

void __thiscall std::_Rb_tree_header::_Rb_tree_header(_Rb_tree_header *this)

{
  *(undefined4 *)this = 0;
  _M_reset(this);
  return;
}




/* std::_Tuple_impl<0ul, int&&>::_M_head(std::_Tuple_impl<0ul, int&&>&) */

void std::_Tuple_impl<0ul,int&&>::_M_head(_Tuple_impl *param_1)

{
  _Head_base<0ul,int&&,false>::_M_head((_Head_base *)param_1);
  return;
}




undefined8 stdThreadDestroy(void *param_1)

{
  free(param_1);
  return 1;
}




/* void new_allocator<std::_Rb_tree_node<std::pair<int const, int> > >::destroy<std::pair<int const,
   int> >(std::pair<int const, int>*) */

void new_allocator<std::_Rb_tree_node<std::pair<int_const,int>>>::destroy<std::pair<int_const,int>>
               (pair *param_1)

{
  return;
}




/* std::_Rb_tree<int, std::pair<int const, int>, std::_Select1st<std::pair<int const, int> >,
   std::less<int>, std::allocator<std::pair<int const, int> > >::_M_get_insert_unique_pos(int
   const&) */

undefined8 __thiscall
std::
_Rb_tree<int,std::pair<int_const,int>,std::_Select1st<std::pair<int_const,int>>,std::less<int>,std::allocator<std::pair<int_const,int>>>
::_M_get_insert_unique_pos
          (_Rb_tree<int,std::pair<int_const,int>,std::_Select1st<std::pair<int_const,int>>,std::less<int>,std::allocator<std::pair<int_const,int>>>
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
  _Rb_tree_iterator<std::pair<int_const,int>>::_Rb_tree_iterator
            ((_Rb_tree_iterator<std::pair<int_const,int>> *)&local_48,local_50);
  if (local_59 != '\0') {
    local_38[0] = begin(this);
    cVar1 = operator==((_Rb_tree_iterator *)&local_48,(_Rb_tree_iterator *)local_38);
    if (cVar1 != '\0') {
      pair<std::_Rb_tree_node_base*,std::_Rb_tree_node_base*>::
      pair<std::_Rb_tree_node<std::pair<int_const,int>>*&,std::_Rb_tree_node_base*&,true>
                ((pair<std::_Rb_tree_node_base*,std::_Rb_tree_node_base*> *)local_38,&local_58,
                 &local_50);
      goto LAB_00102754;
    }
    _Rb_tree_iterator<std::pair<int_const,int>>::operator--
              ((_Rb_tree_iterator<std::pair<int_const,int>> *)&local_48);
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
    pair<std::_Rb_tree_node<std::pair<int_const,int>>*&,std::_Rb_tree_node_base*&,true>
              ((pair<std::_Rb_tree_node_base*,std::_Rb_tree_node_base*> *)local_38,&local_58,
               &local_50);
  }
LAB_00102754:
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return local_38[0];
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void printStructLine(uint *param_1)

{
  printf("%d -- %d\n",(ulong)*param_1,(ulong)param_1[1]);
  return;
}




/* std::_Rb_tree_const_iterator<std::pair<int const, int>
   >::_Rb_tree_const_iterator(std::_Rb_tree_iterator<std::pair<int const, int> > const&) */

void __thiscall
std::_Rb_tree_const_iterator<std::pair<int_const,int>>::_Rb_tree_const_iterator
          (_Rb_tree_const_iterator<std::pair<int_const,int>> *this,_Rb_tree_iterator *param_1)

{
  *(undefined8 *)this = *(undefined8 *)param_1;
  return;
}




/* std::_Rb_tree<int, std::pair<int const, int>, std::_Select1st<std::pair<int const, int> >,
   std::less<int>, std::allocator<std::pair<int const, int> > >::_M_begin() const */

undefined8 __thiscall
std::
_Rb_tree<int,std::pair<int_const,int>,std::_Select1st<std::pair<int_const,int>>,std::less<int>,std::allocator<std::pair<int_const,int>>>
::_M_begin(_Rb_tree<int,std::pair<int_const,int>,std::_Select1st<std::pair<int_const,int>>,std::less<int>,std::allocator<std::pair<int_const,int>>>
           *this)

{
  return *(undefined8 *)(this + 0x10);
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




/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* std::tuple<int&&>&& std::forward<std::tuple<int&&> >(std::remove_reference<std::tuple<int&&>
   >::type&) */

tuple * std::forward<std::tuple<int&&>>(type *param_1)

{
  return (tuple *)param_1;
}




/* std::allocator_traits<std::allocator<std::_Rb_tree_node<std::pair<int const, int> > >
   >::select_on_container_copy_construction(std::allocator<std::_Rb_tree_node<std::pair<int const,
   int> > > const&) */

allocator *
std::allocator_traits<std::allocator<std::_Rb_tree_node<std::pair<int_const,int>>>>::
select_on_container_copy_construction(allocator *param_1)

{
  allocator<std::_Rb_tree_node<std::pair<int_const,int>>>::allocator(param_1);
  return param_1;
}




/* std::_Rb_tree_node<std::pair<int const, int> >* std::_Rb_tree<int, std::pair<int const, int>,
   std::_Select1st<std::pair<int const, int> >, std::less<int>, std::allocator<std::pair<int const,
   int> > >::_M_create_node<std::pair<int const, int> const&>(std::pair<int const, int> const&) */

_Rb_tree_node * __thiscall
std::
_Rb_tree<int,std::pair<int_const,int>,std::_Select1st<std::pair<int_const,int>>,std::less<int>,std::allocator<std::pair<int_const,int>>>
::_M_create_node<std::pair<int_const,int>const&>
          (_Rb_tree<int,std::pair<int_const,int>,std::_Select1st<std::pair<int_const,int>>,std::less<int>,std::allocator<std::pair<int_const,int>>>
           *this,pair *param_1)

{
  _Rb_tree_node *p_Var1;
  pair *ppVar2;
  
  p_Var1 = (_Rb_tree_node *)_M_get_node(this);
  ppVar2 = forward<std::pair<int_const,int>const&>((type *)param_1);
  _M_construct_node<std::pair<int_const,int>const&>(this,p_Var1,ppVar2);
  return p_Var1;
}




/* std::_Rb_tree<int, std::pair<int const, int>, std::_Select1st<std::pair<int const, int> >,
   std::less<int>, std::allocator<std::pair<int const, int> > >::_Rb_tree(std::_Rb_tree<int,
   std::pair<int const, int>, std::_Select1st<std::pair<int const, int> >, std::less<int>,
   std::allocator<std::pair<int const, int> > > const&) */

void __thiscall
std::
_Rb_tree<int,std::pair<int_const,int>,std::_Select1st<std::pair<int_const,int>>,std::less<int>,std::allocator<std::pair<int_const,int>>>
::_Rb_tree(_Rb_tree<int,std::pair<int_const,int>,std::_Select1st<std::pair<int_const,int>>,std::less<int>,std::allocator<std::pair<int_const,int>>>
           *this,_Rb_tree *param_1)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  
  _Rb_tree_impl<std::less<int>,true>::_Rb_tree_impl((_Rb_tree_impl *)this);
  lVar1 = _M_root((_Rb_tree<int,std::pair<int_const,int>,std::_Select1st<std::pair<int_const,int>>,std::less<int>,std::allocator<std::pair<int_const,int>>>
                   *)param_1);
  if (lVar1 != 0) {
    puVar2 = (undefined8 *)_M_root(this);
                    /* try { // try from 00103343 to 00103347 has its CatchHandler @ 0010334d */
    uVar3 = _M_copy(this,param_1);
    *puVar2 = uVar3;
  }
  return;
}




void printWLine(long param_1)

{
  if (param_1 != 0) {
    wprintf(L"%ls\n",param_1);
  }
  return;
}




void bad4(void)

{
  return;
}




/* std::_Rb_tree<int, std::pair<int const, int>, std::_Select1st<std::pair<int const, int> >,
   std::less<int>, std::allocator<std::pair<int const, int> > >::_S_right(std::_Rb_tree_node_base*)
    */

undefined8
std::
_Rb_tree<int,std::pair<int_const,int>,std::_Select1st<std::pair<int_const,int>>,std::less<int>,std::allocator<std::pair<int_const,int>>>
::_S_right(_Rb_tree_node_base *param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}




/* std::allocator_traits<std::allocator<std::_Rb_tree_node<std::pair<int const, int> > >
   >::deallocate(std::allocator<std::_Rb_tree_node<std::pair<int const, int> > >&,
   std::_Rb_tree_node<std::pair<int const, int> >*, unsigned long) */

void std::allocator_traits<std::allocator<std::_Rb_tree_node<std::pair<int_const,int>>>>::deallocate
               (allocator *param_1,_Rb_tree_node *param_2,ulong param_3)

{
  new_allocator<std::_Rb_tree_node<std::pair<int_const,int>>>::deallocate
            ((_Rb_tree_node *)param_1,(ulong)param_2);
  return;
}




void FUN_00101020(void)

{
  (*(code *)PTR_00108ec0)();
  return;
}




/* std::_Rb_tree<int, std::pair<int const, int>, std::_Select1st<std::pair<int const, int> >,
   std::less<int>, std::allocator<std::pair<int const, int> > >::_M_leftmost() */

_Rb_tree<int,std::pair<int_const,int>,std::_Select1st<std::pair<int_const,int>>,std::less<int>,std::allocator<std::pair<int_const,int>>>
* __thiscall
std::
_Rb_tree<int,std::pair<int_const,int>,std::_Select1st<std::pair<int_const,int>>,std::less<int>,std::allocator<std::pair<int_const,int>>>
::_M_leftmost(_Rb_tree<int,std::pair<int_const,int>,std::_Select1st<std::pair<int_const,int>>,std::less<int>,std::allocator<std::pair<int_const,int>>>
              *this)

{
  return this + 0x18;
}




/* std::_Rb_tree<int, std::pair<int const, int>, std::_Select1st<std::pair<int const, int> >,
   std::less<int>, std::allocator<std::pair<int const, int> > >::_M_root() const */

undefined8 __thiscall
std::
_Rb_tree<int,std::pair<int_const,int>,std::_Select1st<std::pair<int_const,int>>,std::less<int>,std::allocator<std::pair<int_const,int>>>
::_M_root(_Rb_tree<int,std::pair<int_const,int>,std::_Select1st<std::pair<int_const,int>>,std::less<int>,std::allocator<std::pair<int_const,int>>>
          *this)

{
  return *(undefined8 *)(this + 0x10);
}




undefined8 globalReturnsFalse(void)

{
  return 0;
}




/* std::_Rb_tree<int, std::pair<int const, int>, std::_Select1st<std::pair<int const, int> >,
   std::less<int>, std::allocator<std::pair<int const, int> >
   >::_M_lower_bound(std::_Rb_tree_node<std::pair<int const, int> >*, std::_Rb_tree_node_base*, int
   const&) */

undefined8 __thiscall
std::
_Rb_tree<int,std::pair<int_const,int>,std::_Select1st<std::pair<int_const,int>>,std::less<int>,std::allocator<std::pair<int_const,int>>>
::_M_lower_bound(_Rb_tree<int,std::pair<int_const,int>,std::_Select1st<std::pair<int_const,int>>,std::less<int>,std::allocator<std::pair<int_const,int>>>
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
  _Rb_tree_iterator<std::pair<int_const,int>>::_Rb_tree_iterator
            ((_Rb_tree_iterator<std::pair<int_const,int>> *)&local_28,local_40);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_28;
}




/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* std::_Rb_tree_node_base*&
   std::forward<std::_Rb_tree_node_base*&>(std::remove_reference<std::_Rb_tree_node_base*&>::type&)
    */

_Rb_tree_node_base ** std::forward<std::_Rb_tree_node_base*&>(type *param_1)

{
  return (_Rb_tree_node_base **)param_1;
}




/* std::_Rb_tree<int, std::pair<int const, int>, std::_Select1st<std::pair<int const, int> >,
   std::less<int>, std::allocator<std::pair<int const, int> >
   >::_S_minimum(std::_Rb_tree_node_base*) */

void std::
     _Rb_tree<int,std::pair<int_const,int>,std::_Select1st<std::pair<int_const,int>>,std::less<int>,std::allocator<std::pair<int_const,int>>>
     ::_S_minimum(_Rb_tree_node_base *param_1)

{
  _Rb_tree_node_base::_S_minimum(param_1);
  return;
}




/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* std::pair<int const, int> const& std::forward<std::pair<int const, int>
   const&>(std::remove_reference<std::pair<int const, int> const&>::type&) */

pair * std::forward<std::pair<int_const,int>const&>(type *param_1)

{
  return (pair *)param_1;
}




/* __aligned_membuf<std::pair<int const, int> >::_M_addr() const */

__aligned_membuf<std::pair<int_const,int>> * __thiscall
__aligned_membuf<std::pair<int_const,int>>::_M_addr
          (__aligned_membuf<std::pair<int_const,int>> *this)

{
  return this;
}




/* std::_Rb_tree<int, std::pair<int const, int>, std::_Select1st<std::pair<int const, int> >,
   std::less<int>, std::allocator<std::pair<int const, int> > >::_S_left(std::_Rb_tree_node_base*)
    */

undefined8
std::
_Rb_tree<int,std::pair<int_const,int>,std::_Select1st<std::pair<int_const,int>>,std::less<int>,std::allocator<std::pair<int_const,int>>>
::_S_left(_Rb_tree_node_base *param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}




/* std::_Rb_tree<int, std::pair<int const, int>, std::_Select1st<std::pair<int const, int> >,
   std::less<int>, std::allocator<std::pair<int const, int> > >::_M_rightmost() */

_Rb_tree<int,std::pair<int_const,int>,std::_Select1st<std::pair<int_const,int>>,std::less<int>,std::allocator<std::pair<int_const,int>>>
* __thiscall
std::
_Rb_tree<int,std::pair<int_const,int>,std::_Select1st<std::pair<int_const,int>>,std::less<int>,std::allocator<std::pair<int_const,int>>>
::_M_rightmost(_Rb_tree<int,std::pair<int_const,int>,std::_Select1st<std::pair<int_const,int>>,std::less<int>,std::allocator<std::pair<int_const,int>>>
               *this)

{
  return this + 0x20;
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




/* std::_Rb_tree_node<std::pair<int const, int> >::_M_valptr() */

void __thiscall
std::_Rb_tree_node<std::pair<int_const,int>>::_M_valptr
          (_Rb_tree_node<std::pair<int_const,int>> *this)

{
  __aligned_membuf<std::pair<int_const,int>>::_M_ptr
            ((__aligned_membuf<std::pair<int_const,int>> *)(this + 0x20));
  return;
}




/* std::_Rb_tree_node<std::pair<int const, int> >::_M_valptr() const */

void __thiscall
std::_Rb_tree_node<std::pair<int_const,int>>::_M_valptr
          (_Rb_tree_node<std::pair<int_const,int>> *this)

{
  __aligned_membuf<std::pair<int_const,int>>::_M_ptr
            ((__aligned_membuf<std::pair<int_const,int>> *)(this + 0x20));
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




/* void std::_Rb_tree<int, std::pair<int const, int>, std::_Select1st<std::pair<int const, int> >,
   std::less<int>, std::allocator<std::pair<int const, int> > >::_M_construct_node<std::pair<int
   const, int> const&>(std::_Rb_tree_node<std::pair<int const, int> >*, std::pair<int const, int>
   const&) */

void __thiscall
std::
_Rb_tree<int,std::pair<int_const,int>,std::_Select1st<std::pair<int_const,int>>,std::less<int>,std::allocator<std::pair<int_const,int>>>
::_M_construct_node<std::pair<int_const,int>const&>
          (_Rb_tree<int,std::pair<int_const,int>,std::_Select1st<std::pair<int_const,int>>,std::less<int>,std::allocator<std::pair<int_const,int>>>
           *this,_Rb_tree_node *param_1,pair *param_2)

{
  pair *ppVar1;
  pair *ppVar2;
  allocator *paVar3;
  
  operator_new(0x28,param_1);
  ppVar1 = forward<std::pair<int_const,int>const&>((type *)param_2);
  ppVar2 = (pair *)_Rb_tree_node<std::pair<int_const,int>>::_M_valptr
                             ((_Rb_tree_node<std::pair<int_const,int>> *)param_1);
  paVar3 = (allocator *)_M_get_Node_allocator(this);
  allocator_traits<std::allocator<std::_Rb_tree_node<std::pair<int_const,int>>>>::
  construct<std::pair<int_const,int>,std::pair<int_const,int>const&>(paVar3,ppVar2,ppVar1);
  return;
}




void bad7(void)

{
  return;
}




/* std::_Rb_tree<int, std::pair<int const, int>, std::_Select1st<std::pair<int const, int> >,
   std::less<int>, std::allocator<std::pair<int const, int> >
   >::_M_destroy_node(std::_Rb_tree_node<std::pair<int const, int> >*) */

void __thiscall
std::
_Rb_tree<int,std::pair<int_const,int>,std::_Select1st<std::pair<int_const,int>>,std::less<int>,std::allocator<std::pair<int_const,int>>>
::_M_destroy_node(_Rb_tree<int,std::pair<int_const,int>,std::_Select1st<std::pair<int_const,int>>,std::less<int>,std::allocator<std::pair<int_const,int>>>
                  *this,_Rb_tree_node *param_1)

{
  pair *ppVar1;
  allocator *paVar2;
  
  ppVar1 = (pair *)_Rb_tree_node<std::pair<int_const,int>>::_M_valptr
                             ((_Rb_tree_node<std::pair<int_const,int>> *)param_1);
  paVar2 = (allocator *)_M_get_Node_allocator(this);
  allocator_traits<std::allocator<std::_Rb_tree_node<std::pair<int_const,int>>>>::
  destroy<std::pair<int_const,int>>(paVar2,ppVar1);
  return;
}




/* void std::allocator_traits<std::allocator<std::_Rb_tree_node<std::pair<int const, int> > >
   >::construct<std::pair<int const, int>, std::pair<int const, int>
   const&>(std::allocator<std::_Rb_tree_node<std::pair<int const, int> > >&, std::pair<int const,
   int>*, std::pair<int const, int> const&) */

void std::allocator_traits<std::allocator<std::_Rb_tree_node<std::pair<int_const,int>>>>::
     construct<std::pair<int_const,int>,std::pair<int_const,int>const&>
               (allocator *param_1,pair *param_2,pair *param_3)

{
  pair *ppVar1;
  
  ppVar1 = forward<std::pair<int_const,int>const&>((type *)param_3);
  new_allocator<std::_Rb_tree_node<std::pair<int_const,int>>>::
  construct<std::pair<int_const,int>,std::pair<int_const,int>const&>
            ((new_allocator<std::_Rb_tree_node<std::pair<int_const,int>>> *)param_1,param_2,ppVar1);
  return;
}




/* std::_Rb_tree_node<std::pair<int const, int> >* std::_Rb_tree<int, std::pair<int const, int>,
   std::_Select1st<std::pair<int const, int> >, std::less<int>, std::allocator<std::pair<int const,
   int> > >::_M_copy<std::_Rb_tree<int, std::pair<int const, int>, std::_Select1st<std::pair<int
   const, int> >, std::less<int>, std::allocator<std::pair<int const, int> >
   >::_Alloc_node>(std::_Rb_tree<int, std::pair<int const, int>, std::_Select1st<std::pair<int
   const, int> >, std::less<int>, std::allocator<std::pair<int const, int> > > const&,
   std::_Rb_tree<int, std::pair<int const, int>, std::_Select1st<std::pair<int const, int> >,
   std::less<int>, std::allocator<std::pair<int const, int> > >::_Alloc_node&) */

_Rb_tree_node * __thiscall
std::
_Rb_tree<int,std::pair<int_const,int>,std::_Select1st<std::pair<int_const,int>>,std::less<int>,std::allocator<std::pair<int_const,int>>>
::
_M_copy<std::_Rb_tree<int,std::pair<int_const,int>,std::_Select1st<std::pair<int_const,int>>,std::less<int>,std::allocator<std::pair<int_const,int>>>::_Alloc_node>
          (_Rb_tree<int,std::pair<int_const,int>,std::_Select1st<std::pair<int_const,int>>,std::less<int>,std::allocator<std::pair<int_const,int>>>
           *this,_Rb_tree *param_1,_Alloc_node *param_2)

{
  _Rb_tree_node_base *p_Var1;
  _Rb_tree_node *p_Var2;
  undefined8 *puVar3;
  undefined8 uVar4;
  
  p_Var1 = (_Rb_tree_node_base *)_M_end(this);
  p_Var2 = (_Rb_tree_node *)
           _M_begin((_Rb_tree<int,std::pair<int_const,int>,std::_Select1st<std::pair<int_const,int>>,std::less<int>,std::allocator<std::pair<int_const,int>>>
                     *)param_1);
  p_Var2 = _M_copy<std::_Rb_tree<int,std::pair<int_const,int>,std::_Select1st<std::pair<int_const,int>>,std::less<int>,std::allocator<std::pair<int_const,int>>>::_Alloc_node>
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




/* std::_Rb_tree<int, std::pair<int const, int>, std::_Select1st<std::pair<int const, int> >,
   std::less<int>, std::allocator<std::pair<int const, int> > >::end() */

undefined8 __thiscall
std::
_Rb_tree<int,std::pair<int_const,int>,std::_Select1st<std::pair<int_const,int>>,std::less<int>,std::allocator<std::pair<int_const,int>>>
::end(_Rb_tree<int,std::pair<int_const,int>,std::_Select1st<std::pair<int_const,int>>,std::less<int>,std::allocator<std::pair<int_const,int>>>
      *this)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  _Rb_tree_iterator<std::pair<int_const,int>>::_Rb_tree_iterator
            ((_Rb_tree_iterator<std::pair<int_const,int>> *)&local_18,
             (_Rb_tree_node_base *)(this + 8));
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* std::piecewise_construct_t const& std::forward<std::piecewise_construct_t
   const&>(std::remove_reference<std::piecewise_construct_t const&>::type&) */

piecewise_construct_t * std::forward<std::piecewise_construct_t_const&>(type *param_1)

{
  return (piecewise_construct_t *)param_1;
}




/* std::_Rb_tree<int, std::pair<int const, int>, std::_Select1st<std::pair<int const, int> >,
   std::less<int>, std::allocator<std::pair<int const, int> > >::_S_left(std::_Rb_tree_node_base
   const*) */

undefined8
std::
_Rb_tree<int,std::pair<int_const,int>,std::_Select1st<std::pair<int_const,int>>,std::less<int>,std::allocator<std::pair<int_const,int>>>
::_S_left(_Rb_tree_node_base *param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}




void printHexUnsignedCharLine(byte param_1)

{
  printf("%02x\n",(ulong)param_1);
  return;
}




/* std::map<int, int, std::less<int>, std::allocator<std::pair<int const, int> > >::map() */

void __thiscall
std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::map
          (map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>> *this)

{
  _Rb_tree<int,std::pair<int_const,int>,std::_Select1st<std::pair<int_const,int>>,std::less<int>,std::allocator<std::pair<int_const,int>>>
  ::_Rb_tree((_Rb_tree<int,std::pair<int_const,int>,std::_Select1st<std::pair<int_const,int>>,std::less<int>,std::allocator<std::pair<int_const,int>>>
              *)this);
  return;
}




void good9(void)

{
  return;
}




void printLongLine(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




/* std::_Rb_tree<int, std::pair<int const, int>, std::_Select1st<std::pair<int const, int> >,
   std::less<int>, std::allocator<std::pair<int const, int> > >::_Rb_tree() */

void __thiscall
std::
_Rb_tree<int,std::pair<int_const,int>,std::_Select1st<std::pair<int_const,int>>,std::less<int>,std::allocator<std::pair<int_const,int>>>
::_Rb_tree(_Rb_tree<int,std::pair<int_const,int>,std::_Select1st<std::pair<int_const,int>>,std::less<int>,std::allocator<std::pair<int_const,int>>>
           *this)

{
  _Rb_tree_impl<std::less<int>,true>::_Rb_tree_impl((_Rb_tree_impl<std::less<int>,true> *)this);
  return;
}




void printDoubleLine(undefined8 param_1)

{
  printf("%g\n",param_1);
  return;
}




/* std::allocator_traits<std::allocator<std::_Rb_tree_node<std::pair<int const, int> > >
   >::allocate(std::allocator<std::_Rb_tree_node<std::pair<int const, int> > >&, unsigned long) */

void std::allocator_traits<std::allocator<std::_Rb_tree_node<std::pair<int_const,int>>>>::allocate
               (allocator *param_1,ulong param_2)

{
  new_allocator<std::_Rb_tree_node<std::pair<int_const,int>>>::allocate
            ((ulong)param_1,(void *)param_2);
  return;
}




/* operator new(unsigned long, void*) */

void * operator_new(ulong param_1,void *param_2)

{
  return param_2;
}




/* std::_Rb_tree_node<std::pair<int const, int> >* std::_Rb_tree<int, std::pair<int const, int>,
   std::_Select1st<std::pair<int const, int> >, std::less<int>, std::allocator<std::pair<int const,
   int> > >::_Alloc_node::TEMPNAMEPLACEHOLDERVALUE(std::pair<int const, int> const&) const */

_Rb_tree_node * __thiscall
std::
_Rb_tree<int,std::pair<int_const,int>,std::_Select1st<std::pair<int_const,int>>,std::less<int>,std::allocator<std::pair<int_const,int>>>
::_Alloc_node::operator()(_Alloc_node *this,pair *param_1)

{
  _Rb_tree<int,std::pair<int_const,int>,std::_Select1st<std::pair<int_const,int>>,std::less<int>,std::allocator<std::pair<int_const,int>>>
  *this_00;
  pair *ppVar1;
  _Rb_tree_node *p_Var2;
  
  this_00 = *(_Rb_tree<int,std::pair<int_const,int>,std::_Select1st<std::pair<int_const,int>>,std::less<int>,std::allocator<std::pair<int_const,int>>>
              **)this;
  ppVar1 = forward<std::pair<int_const,int>const&>((type *)param_1);
  p_Var2 = _M_create_node<std::pair<int_const,int>const&>(this_00,ppVar1);
  return p_Var2;
}




/* std::map<int, int, std::less<int>, std::allocator<std::pair<int const, int> > >::end() */

void __thiscall
std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::end
          (map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>> *this)

{
  _Rb_tree<int,std::pair<int_const,int>,std::_Select1st<std::pair<int_const,int>>,std::less<int>,std::allocator<std::pair<int_const,int>>>
  ::end((_Rb_tree<int,std::pair<int_const,int>,std::_Select1st<std::pair<int_const,int>>,std::less<int>,std::allocator<std::pair<int_const,int>>>
         *)this);
  return;
}




void stdThreadLockRelease(pthread_mutex_t *param_1)

{
  pthread_mutex_unlock(param_1);
  return;
}




void good1(void)

{
  return;
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




void good7(void)

{
  return;
}




/* std::_Rb_tree_iterator<std::pair<int const, int> > std::_Rb_tree<int, std::pair<int const, int>,
   std::_Select1st<std::pair<int const, int> >, std::less<int>, std::allocator<std::pair<int const,
   int> > >::_M_emplace_hint_unique<std::piecewise_construct_t const&, std::tuple<int&&>,
   std::tuple<> >(std::_Rb_tree_const_iterator<std::pair<int const, int> >,
   std::piecewise_construct_t const&, std::tuple<int&&>&&, std::tuple<>&&) */

undefined8 __thiscall
std::
_Rb_tree<int,std::pair<int_const,int>,std::_Select1st<std::pair<int_const,int>>,std::less<int>,std::allocator<std::pair<int_const,int>>>
::_M_emplace_hint_unique<std::piecewise_construct_t_const&,std::tuple<int&&>,std::tuple<>>
          (_Rb_tree<int,std::pair<int_const,int>,std::_Select1st<std::pair<int_const,int>>,std::less<int>,std::allocator<std::pair<int_const,int>>>
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
                    /* try { // try from 00101a38 to 00101a7b has its CatchHandler @ 00101ab9 */
  piVar4 = (int *)_S_key(local_40);
  local_38 = _M_get_insert_hint_unique_pos(this,param_1,piVar4);
  if (local_38._8_8_ == (_Rb_tree_node_base *)0x0) {
    _M_drop_node(this,local_40);
    _Rb_tree_iterator<std::pair<int_const,int>>::_Rb_tree_iterator
              ((_Rb_tree_iterator<std::pair<int_const,int>> *)&local_48,
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




/* new_allocator<std::_Rb_tree_node<std::pair<int const, int> >
   >::deallocate(std::_Rb_tree_node<std::pair<int const, int> >*, unsigned long) */

void new_allocator<std::_Rb_tree_node<std::pair<int_const,int>>>::deallocate
               (_Rb_tree_node *param_1,ulong param_2)

{
  operator_delete((void *)param_2);
  return;
}




void bad5(void)

{
  return;
}




void bad2(void)

{
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




/* std::_Rb_tree<int, std::pair<int const, int>, std::_Select1st<std::pair<int const, int> >,
   std::less<int>, std::allocator<std::pair<int const, int> > >::_Rb_tree_impl<std::less<int>,
   true>::_Rb_tree_impl() */

void __thiscall
std::
_Rb_tree<int,std::pair<int_const,int>,std::_Select1st<std::pair<int_const,int>>,std::less<int>,std::allocator<std::pair<int_const,int>>>
::_Rb_tree_impl<std::less<int>,true>::_Rb_tree_impl(_Rb_tree_impl<std::less<int>,true> *this)

{
  allocator<std::_Rb_tree_node<std::pair<int_const,int>>>::allocator();
  _Rb_tree_key_compare<std::less<int>>::_Rb_tree_key_compare();
  _Rb_tree_header::_Rb_tree_header((_Rb_tree_header *)(this + 8));
  return;
}




void good8(void)

{
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




/* std::_Rb_tree<int, std::pair<int const, int>, std::_Select1st<std::pair<int const, int> >,
   std::less<int>, std::allocator<std::pair<int const, int> >
   >::_S_key(std::_Rb_tree_node<std::pair<int const, int> > const*) */

void std::
     _Rb_tree<int,std::pair<int_const,int>,std::_Select1st<std::pair<int_const,int>>,std::less<int>,std::allocator<std::pair<int_const,int>>>
     ::_S_key(_Rb_tree_node *param_1)

{
  pair *ppVar1;
  long in_FS_OFFSET;
  _Select1st<std::pair<int_const,int>> local_11;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  ppVar1 = (pair *)_Rb_tree_node<std::pair<int_const,int>>::_M_valptr
                             ((_Rb_tree_node<std::pair<int_const,int>> *)param_1);
  _Select1st<std::pair<int_const,int>>::operator()(&local_11,ppVar1);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




/* std::_Rb_tree<int, std::pair<int const, int>, std::_Select1st<std::pair<int const, int> >,
   std::less<int>, std::allocator<std::pair<int const, int> > >::_S_key(std::_Rb_tree_node_base
   const*) */

void std::
     _Rb_tree<int,std::pair<int_const,int>,std::_Select1st<std::pair<int_const,int>>,std::less<int>,std::allocator<std::pair<int_const,int>>>
     ::_S_key(_Rb_tree_node_base *param_1)

{
  _S_key((_Rb_tree_node *)param_1);
  return;
}




/* CWE680_Integer_Overflow_to_Buffer_Overflow__new_fgets_74::bad() */

void CWE680_Integer_Overflow_to_Buffer_Overflow__new_fgets_74::bad(void)

{
  char *pcVar1;
  int *piVar2;
  long in_FS_OFFSET;
  int local_9c;
  map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>> local_98 [48];
  int local_68 [14];
  char local_2e [14];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::map(local_98);
  local_9c = -1;
  local_2e[0] = '\0';
  local_2e[1] = '\0';
  local_2e[2] = '\0';
  local_2e[3] = '\0';
  local_2e[4] = '\0';
  local_2e[5] = '\0';
  local_2e[6] = '\0';
  local_2e[7] = '\0';
  local_2e[8] = '\0';
  local_2e[9] = '\0';
  local_2e[10] = '\0';
  local_2e[0xb] = '\0';
  local_2e[0xc] = '\0';
  local_2e[0xd] = '\0';
                    /* try { // try from 00102e08 to 00102ebb has its CatchHandler @ 00102f0a */
  pcVar1 = fgets(local_2e,0xe,stdin);
  if (pcVar1 == (char *)0x0) {
    printLine("fgets() failed.");
  }
  else {
    local_9c = atoi(local_2e);
  }
  local_68[0] = 0;
  piVar2 = (int *)std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::
                  operator[](local_98,local_68);
  *piVar2 = local_9c;
  local_68[0] = 1;
  piVar2 = (int *)std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::
                  operator[](local_98,local_68);
  *piVar2 = local_9c;
  local_68[0] = 2;
  piVar2 = (int *)std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::
                  operator[](local_98,local_68);
  *piVar2 = local_9c;
  std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::map
            ((map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>> *)local_68,
             (map *)local_98);
                    /* try { // try from 00102ec3 to 00102ec7 has its CatchHandler @ 00102ef5 */
  badSink((map)local_68);
  std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::~map
            ((map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>> *)local_68);
  std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::~map(local_98);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
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
    __isoc99_swscanf(local_18 * 8 + param_3,&DAT_001050ac,local_1c);
    *(char *)(local_18 + param_1) = local_1c[0];
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




/* std::pair<int const, int>::pair<int&&, 0ul>(std::tuple<int&&>&, std::tuple<>&,
   std::_Index_tuple<0ul>, std::_Index_tuple<>) */

void std::pair<int_const,int>::pair<int&&,0ul>
               (tuple *param_1,tuple *param_2,_Index_tuple param_3,_Index_tuple param_4)

{
  type *ptVar1;
  int *piVar2;
  
  ptVar1 = get<0ul,int&&>(param_2);
  piVar2 = forward<int&&>((type *)ptVar1);
  *(int *)param_1 = *piVar2;
  *(undefined4 *)(param_1 + 4) = 0;
  return;
}




void internal_start(long param_1)

{
  (**(code **)(param_1 + 8))(*(undefined8 *)(param_1 + 0x10));
                    /* WARNING: Subroutine does not return */
  pthread_exit((void *)0x0);
}




/* std::_Rb_tree<int, std::pair<int const, int>, std::_Select1st<std::pair<int const, int> >,
   std::less<int>, std::allocator<std::pair<int const, int> > >::_M_get_Node_allocator() */

_Rb_tree<int,std::pair<int_const,int>,std::_Select1st<std::pair<int_const,int>>,std::less<int>,std::allocator<std::pair<int_const,int>>>
* __thiscall
std::
_Rb_tree<int,std::pair<int_const,int>,std::_Select1st<std::pair<int_const,int>>,std::less<int>,std::allocator<std::pair<int_const,int>>>
::_M_get_Node_allocator
          (_Rb_tree<int,std::pair<int_const,int>,std::_Select1st<std::pair<int_const,int>>,std::less<int>,std::allocator<std::pair<int_const,int>>>
           *this)

{
  return this;
}




undefined8 main(void)

{
  time_t tVar1;
  
  tVar1 = time((time_t *)0x0);
  srand((uint)tVar1);
  printLine("Calling good()...");
  CWE680_Integer_Overflow_to_Buffer_Overflow__new_fgets_74::good();
  printLine("Finished good()");
  printLine("Calling bad()...");
  CWE680_Integer_Overflow_to_Buffer_Overflow__new_fgets_74::bad();
  printLine("Finished bad()");
  return 0;
}




/* std::allocator<std::_Rb_tree_node<std::pair<int const, int> > >::allocator() */

void std::allocator<std::_Rb_tree_node<std::pair<int_const,int>>>::allocator(void)

{
  new_allocator<std::_Rb_tree_node<std::pair<int_const,int>>>::new_allocator();
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




void good4(void)

{
  return;
}




/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* std::TEMPNAMEPLACEHOLDERVALUE(std::_Rb_tree_iterator<std::pair<int const, int> > const&,
   std::_Rb_tree_iterator<std::pair<int const, int> > const&) */

undefined8 std::operator==(_Rb_tree_iterator *param_1,_Rb_tree_iterator *param_2)

{
  return CONCAT71((int7)((ulong)*(long *)param_2 >> 8),*(long *)param_1 == *(long *)param_2);
}




/* operator delete(void*, void*) */

void operator_delete(void *param_1,void *param_2)

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




void stdThreadLockDestroy(pthread_mutex_t *param_1)

{
  pthread_mutex_destroy(param_1);
  free(param_1);
  return;
}




/* std::_Rb_tree<int, std::pair<int const, int>, std::_Select1st<std::pair<int const, int> >,
   std::less<int>, std::allocator<std::pair<int const, int> >
   >::_M_insert_node(std::_Rb_tree_node_base*, std::_Rb_tree_node_base*,
   std::_Rb_tree_node<std::pair<int const, int> >*) */

undefined8 __thiscall
std::
_Rb_tree<int,std::pair<int_const,int>,std::_Select1st<std::pair<int_const,int>>,std::less<int>,std::allocator<std::pair<int_const,int>>>
::_M_insert_node(_Rb_tree<int,std::pair<int_const,int>,std::_Select1st<std::pair<int_const,int>>,std::less<int>,std::allocator<std::pair<int_const,int>>>
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
        goto LAB_00102192;
      }
    }
  }
  bVar2 = true;
LAB_00102192:
  std::_Rb_tree_insert_and_rebalance
            (bVar2,(_Rb_tree_node_base *)param_3,param_2,(_Rb_tree_node_base *)(this + 8));
  *(long *)(this + 0x28) = *(long *)(this + 0x28) + 1;
  _Rb_tree_iterator<std::pair<int_const,int>>::_Rb_tree_iterator
            ((_Rb_tree_iterator<std::pair<int_const,int>> *)&local_28,(_Rb_tree_node_base *)param_3)
  ;
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_28;
}




/* std::_Rb_tree<int, std::pair<int const, int>, std::_Select1st<std::pair<int const, int> >,
   std::less<int>, std::allocator<std::pair<int const, int> > >::_M_begin() */

undefined8 __thiscall
std::
_Rb_tree<int,std::pair<int_const,int>,std::_Select1st<std::pair<int_const,int>>,std::less<int>,std::allocator<std::pair<int_const,int>>>
::_M_begin(_Rb_tree<int,std::pair<int_const,int>,std::_Select1st<std::pair<int_const,int>>,std::less<int>,std::allocator<std::pair<int_const,int>>>
           *this)

{
  return *(undefined8 *)(this + 0x10);
}




/* std::_Rb_tree<int, std::pair<int const, int>, std::_Select1st<std::pair<int const, int> >,
   std::less<int>, std::allocator<std::pair<int const, int> > >::size() const */

undefined8 __thiscall
std::
_Rb_tree<int,std::pair<int_const,int>,std::_Select1st<std::pair<int_const,int>>,std::less<int>,std::allocator<std::pair<int_const,int>>>
::size(_Rb_tree<int,std::pair<int_const,int>,std::_Select1st<std::pair<int_const,int>>,std::less<int>,std::allocator<std::pair<int_const,int>>>
       *this)

{
  return *(undefined8 *)(this + 0x28);
}




/* __aligned_membuf<std::pair<int const, int> >::_M_ptr() const */

void __thiscall
__aligned_membuf<std::pair<int_const,int>>::_M_ptr(__aligned_membuf<std::pair<int_const,int>> *this)

{
  _M_addr(this);
  return;
}




/* void new_allocator<std::_Rb_tree_node<std::pair<int const, int> > >::construct<std::pair<int
   const, int>, std::pair<int const, int> const&>(std::pair<int const, int>*, std::pair<int const,
   int> const&) */

void __thiscall
new_allocator<std::_Rb_tree_node<std::pair<int_const,int>>>::
construct<std::pair<int_const,int>,std::pair<int_const,int>const&>
          (new_allocator<std::_Rb_tree_node<std::pair<int_const,int>>> *this,pair *param_1,
          pair *param_2)

{
  pair *ppVar1;
  undefined8 *puVar2;
  
  ppVar1 = std::forward<std::pair<int_const,int>const&>((type *)param_2);
  puVar2 = (undefined8 *)operator_new(8,param_1);
  *puVar2 = *(undefined8 *)ppVar1;
  return;
}




void bad1(void)

{
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




/* std::_Rb_tree_const_iterator<std::pair<int const, int> >::_M_const_cast() const */

undefined8 __thiscall
std::_Rb_tree_const_iterator<std::pair<int_const,int>>::_M_const_cast
          (_Rb_tree_const_iterator<std::pair<int_const,int>> *this)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  _Rb_tree_iterator<std::pair<int_const,int>>::_Rb_tree_iterator
            ((_Rb_tree_iterator<std::pair<int_const,int>> *)&local_18,*(_Rb_tree_node_base **)this);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




/* CWE680_Integer_Overflow_to_Buffer_Overflow__new_fgets_74::goodG2B() */

void CWE680_Integer_Overflow_to_Buffer_Overflow__new_fgets_74::goodG2B(void)

{
  undefined4 *puVar1;
  long in_FS_OFFSET;
  map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>> local_88 [48];
  int local_58 [14];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::map(local_88);
  local_58[0] = 0;
                    /* try { // try from 00102f8e to 00102ff1 has its CatchHandler @ 0010303d */
  puVar1 = (undefined4 *)
           std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::operator[]
                     (local_88,local_58);
  *puVar1 = 0x14;
  local_58[0] = 1;
  puVar1 = (undefined4 *)
           std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::operator[]
                     (local_88,local_58);
  *puVar1 = 0x14;
  local_58[0] = 2;
  puVar1 = (undefined4 *)
           std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::operator[]
                     (local_88,local_58);
  *puVar1 = 0x14;
  std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::map
            ((map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>> *)local_58,
             (map *)local_88);
                    /* try { // try from 00102ff9 to 00102ffd has its CatchHandler @ 00103028 */
  goodG2BSink((map)local_58);
  std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::~map
            ((map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>> *)local_58);
  std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::~map(local_88);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




undefined8 globalReturnsTrue(void)

{
  return 1;
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




/* std::_Rb_tree<int, std::pair<int const, int>, std::_Select1st<std::pair<int const, int> >,
   std::less<int>, std::allocator<std::pair<int const, int> >
   >::_M_put_node(std::_Rb_tree_node<std::pair<int const, int> >*) */

void __thiscall
std::
_Rb_tree<int,std::pair<int_const,int>,std::_Select1st<std::pair<int_const,int>>,std::less<int>,std::allocator<std::pair<int_const,int>>>
::_M_put_node(_Rb_tree<int,std::pair<int_const,int>,std::_Select1st<std::pair<int_const,int>>,std::less<int>,std::allocator<std::pair<int_const,int>>>
              *this,_Rb_tree_node *param_1)

{
  allocator *paVar1;
  
  paVar1 = (allocator *)_M_get_Node_allocator(this);
  allocator_traits<std::allocator<std::_Rb_tree_node<std::pair<int_const,int>>>>::deallocate
            (paVar1,param_1,1);
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




/* std::_Rb_tree<int, std::pair<int const, int>, std::_Select1st<std::pair<int const, int> >,
   std::less<int>, std::allocator<std::pair<int const, int> > >::_M_root() */

_Rb_tree<int,std::pair<int_const,int>,std::_Select1st<std::pair<int_const,int>>,std::less<int>,std::allocator<std::pair<int_const,int>>>
* __thiscall
std::
_Rb_tree<int,std::pair<int_const,int>,std::_Select1st<std::pair<int_const,int>>,std::less<int>,std::allocator<std::pair<int_const,int>>>
::_M_root(_Rb_tree<int,std::pair<int_const,int>,std::_Select1st<std::pair<int_const,int>>,std::less<int>,std::allocator<std::pair<int_const,int>>>
          *this)

{
  return this + 0x10;
}




/* std::_Rb_tree_key_compare<std::less<int> >::_Rb_tree_key_compare(std::less<int> const&) */

void std::_Rb_tree_key_compare<std::less<int>>::_Rb_tree_key_compare(less *param_1)

{
  return;
}




/* std::_Rb_tree<int, std::pair<int const, int>, std::_Select1st<std::pair<int const, int> >,
   std::less<int>, std::allocator<std::pair<int const, int> > >::~_Rb_tree() */

void __thiscall
std::
_Rb_tree<int,std::pair<int_const,int>,std::_Select1st<std::pair<int_const,int>>,std::less<int>,std::allocator<std::pair<int_const,int>>>
::~_Rb_tree(_Rb_tree<int,std::pair<int_const,int>,std::_Select1st<std::pair<int_const,int>>,std::less<int>,std::allocator<std::pair<int_const,int>>>
            *this)

{
  _Rb_tree_node *p_Var1;
  
  p_Var1 = (_Rb_tree_node *)_M_begin(this);
  _M_erase(this,p_Var1);
  _Rb_tree_impl<std::less<int>,true>::~_Rb_tree_impl((_Rb_tree_impl<std::less<int>,true> *)this);
  return;
}




/* std::_Rb_tree_node<std::pair<int const, int> >* std::_Rb_tree<int, std::pair<int const, int>,
   std::_Select1st<std::pair<int const, int> >, std::less<int>, std::allocator<std::pair<int const,
   int> > >::_M_clone_node<std::_Rb_tree<int, std::pair<int const, int>,
   std::_Select1st<std::pair<int const, int> >, std::less<int>, std::allocator<std::pair<int const,
   int> > >::_Alloc_node>(std::_Rb_tree_node<std::pair<int const, int> > const*, std::_Rb_tree<int,
   std::pair<int const, int>, std::_Select1st<std::pair<int const, int> >, std::less<int>,
   std::allocator<std::pair<int const, int> > >::_Alloc_node&) */

_Rb_tree_node * __thiscall
std::
_Rb_tree<int,std::pair<int_const,int>,std::_Select1st<std::pair<int_const,int>>,std::less<int>,std::allocator<std::pair<int_const,int>>>
::
_M_clone_node<std::_Rb_tree<int,std::pair<int_const,int>,std::_Select1st<std::pair<int_const,int>>,std::less<int>,std::allocator<std::pair<int_const,int>>>::_Alloc_node>
          (_Rb_tree<int,std::pair<int_const,int>,std::_Select1st<std::pair<int_const,int>>,std::less<int>,std::allocator<std::pair<int_const,int>>>
           *this,_Rb_tree_node *param_1,_Alloc_node *param_2)

{
  pair *ppVar1;
  _Rb_tree_node *p_Var2;
  
  ppVar1 = (pair *)_Rb_tree_node<std::pair<int_const,int>>::_M_valptr
                             ((_Rb_tree_node<std::pair<int_const,int>> *)param_1);
  p_Var2 = _Alloc_node::operator()(param_2,ppVar1);
  *(undefined4 *)p_Var2 = *(undefined4 *)param_1;
  *(undefined8 *)(p_Var2 + 0x10) = 0;
  *(undefined8 *)(p_Var2 + 0x18) = 0;
  return p_Var2;
}




/* void std::allocator_traits<std::allocator<std::_Rb_tree_node<std::pair<int const, int> > >
   >::destroy<std::pair<int const, int> >(std::allocator<std::_Rb_tree_node<std::pair<int const,
   int> > >&, std::pair<int const, int>*) */

void std::allocator_traits<std::allocator<std::_Rb_tree_node<std::pair<int_const,int>>>>::
     destroy<std::pair<int_const,int>>(allocator *param_1,pair *param_2)

{
  new_allocator<std::_Rb_tree_node<std::pair<int_const,int>>>::destroy<std::pair<int_const,int>>
            ((pair *)param_1);
  return;
}




/* std::map<int, int, std::less<int>, std::allocator<std::pair<int const, int> > >::~map() */

void __thiscall
std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::~map
          (map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>> *this)

{
  _Rb_tree<int,std::pair<int_const,int>,std::_Select1st<std::pair<int_const,int>>,std::less<int>,std::allocator<std::pair<int_const,int>>>
  ::~_Rb_tree((_Rb_tree<int,std::pair<int_const,int>,std::_Select1st<std::pair<int_const,int>>,std::less<int>,std::allocator<std::pair<int_const,int>>>
               *)this);
  return;
}




/* std::allocator<std::_Rb_tree_node<std::pair<int const, int> > >::~allocator() */

void __thiscall
std::allocator<std::_Rb_tree_node<std::pair<int_const,int>>>::~allocator
          (allocator<std::_Rb_tree_node<std::pair<int_const,int>>> *this)

{
  new_allocator<std::_Rb_tree_node<std::pair<int_const,int>>>::~new_allocator
            ((new_allocator<std::_Rb_tree_node<std::pair<int_const,int>>> *)this);
  return;
}




/* std::_Rb_tree<int, std::pair<int const, int>, std::_Select1st<std::pair<int const, int> >,
   std::less<int>, std::allocator<std::pair<int const, int> > >::_M_end() */

_Rb_tree<int,std::pair<int_const,int>,std::_Select1st<std::pair<int_const,int>>,std::less<int>,std::allocator<std::pair<int_const,int>>>
* __thiscall
std::
_Rb_tree<int,std::pair<int_const,int>,std::_Select1st<std::pair<int_const,int>>,std::less<int>,std::allocator<std::pair<int_const,int>>>
::_M_end(_Rb_tree<int,std::pair<int_const,int>,std::_Select1st<std::pair<int_const,int>>,std::less<int>,std::allocator<std::pair<int_const,int>>>
         *this)

{
  return this + 8;
}




/* std::_Rb_tree<int, std::pair<int const, int>, std::_Select1st<std::pair<int const, int> >,
   std::less<int>, std::allocator<std::pair<int const, int> > >::_Rb_tree_impl<std::less<int>,
   true>::~_Rb_tree_impl() */

void __thiscall
std::
_Rb_tree<int,std::pair<int_const,int>,std::_Select1st<std::pair<int_const,int>>,std::less<int>,std::allocator<std::pair<int_const,int>>>
::_Rb_tree_impl<std::less<int>,true>::~_Rb_tree_impl(_Rb_tree_impl<std::less<int>,true> *this)

{
  allocator<std::_Rb_tree_node<std::pair<int_const,int>>>::~allocator
            ((allocator<std::_Rb_tree_node<std::pair<int_const,int>>> *)this);
  return;
}




/* std::_Rb_tree<int, std::pair<int const, int>, std::_Select1st<std::pair<int const, int> >,
   std::less<int>, std::allocator<std::pair<int const, int> > >::begin() */

undefined8 __thiscall
std::
_Rb_tree<int,std::pair<int_const,int>,std::_Select1st<std::pair<int_const,int>>,std::less<int>,std::allocator<std::pair<int_const,int>>>
::begin(_Rb_tree<int,std::pair<int_const,int>,std::_Select1st<std::pair<int_const,int>>,std::less<int>,std::allocator<std::pair<int_const,int>>>
        *this)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  _Rb_tree_iterator<std::pair<int_const,int>>::_Rb_tree_iterator
            ((_Rb_tree_iterator<std::pair<int_const,int>> *)&local_18,
             *(_Rb_tree_node_base **)(this + 0x18));
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




/* CWE680_Integer_Overflow_to_Buffer_Overflow__new_fgets_74::badSink(std::map<int, int,
   std::less<int>, std::allocator<std::pair<int const, int> > >) */

void CWE680_Integer_Overflow_to_Buffer_Overflow__new_fgets_74::badSink(map param_1)

{
  int *piVar1;
  undefined4 in_register_0000003c;
  long in_FS_OFFSET;
  int local_30;
  int local_2c;
  ulong local_28;
  ulong local_20;
  undefined4 *local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_30 = 2;
  piVar1 = (int *)std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::
                  operator[]((map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>> *
                             )CONCAT44(in_register_0000003c,param_1),&local_30);
  local_2c = *piVar1;
  local_20 = (long)local_2c << 2;
  local_18 = (undefined4 *)operator_new__(local_20);
  for (local_28 = 0; local_28 < (ulong)(long)local_2c; local_28 = local_28 + 1) {
    local_18[local_28] = 0;
  }
  printIntLine(*local_18);
  if (local_18 != (undefined4 *)0x0) {
    operator_delete__(local_18);
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




/* new_allocator<std::_Rb_tree_node<std::pair<int const, int> > >::max_size() const */

undefined8 new_allocator<std::_Rb_tree_node<std::pair<int_const,int>>>::max_size(void)

{
  return 0x333333333333333;
}




/* std::_Rb_tree_key_compare<std::less<int> >::_Rb_tree_key_compare() */

void std::_Rb_tree_key_compare<std::less<int>>::_Rb_tree_key_compare(void)

{
  return;
}




/* std::_Rb_tree<int, std::pair<int const, int>, std::_Select1st<std::pair<int const, int> >,
   std::less<int>, std::allocator<std::pair<int const, int> > >::_S_right(std::_Rb_tree_node_base
   const*) */

undefined8
std::
_Rb_tree<int,std::pair<int_const,int>,std::_Select1st<std::pair<int_const,int>>,std::less<int>,std::allocator<std::pair<int_const,int>>>
::_S_right(_Rb_tree_node_base *param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}




/* void std::_Rb_tree<int, std::pair<int const, int>, std::_Select1st<std::pair<int const, int> >,
   std::less<int>, std::allocator<std::pair<int const, int> >
   >::_M_construct_node<std::piecewise_construct_t const&, std::tuple<int&&>, std::tuple<>
   >(std::_Rb_tree_node<std::pair<int const, int> >*, std::piecewise_construct_t const&,
   std::tuple<int&&>&&, std::tuple<>&&) */

void __thiscall
std::
_Rb_tree<int,std::pair<int_const,int>,std::_Select1st<std::pair<int_const,int>>,std::less<int>,std::allocator<std::pair<int_const,int>>>
::_M_construct_node<std::piecewise_construct_t_const&,std::tuple<int&&>,std::tuple<>>
          (_Rb_tree<int,std::pair<int_const,int>,std::_Select1st<std::pair<int_const,int>>,std::less<int>,std::allocator<std::pair<int_const,int>>>
           *this,_Rb_tree_node *param_1,piecewise_construct_t *param_2,tuple *param_3,tuple *param_4
          )

{
  tuple *ptVar1;
  tuple *ptVar2;
  piecewise_construct_t *ppVar3;
  pair *ppVar4;
  allocator *paVar5;
  
  operator_new(0x28,param_1);
  ptVar1 = forward<std::tuple<>>((type *)param_4);
  ptVar2 = forward<std::tuple<int&&>>((type *)param_3);
  ppVar3 = forward<std::piecewise_construct_t_const&>((type *)param_2);
  ppVar4 = (pair *)_Rb_tree_node<std::pair<int_const,int>>::_M_valptr
                             ((_Rb_tree_node<std::pair<int_const,int>> *)param_1);
  paVar5 = (allocator *)_M_get_Node_allocator(this);
                    /* try { // try from 001024a9 to 001024ad has its CatchHandler @ 001024b0 */
  allocator_traits<std::allocator<std::_Rb_tree_node<std::pair<int_const,int>>>>::
  construct<std::pair<int_const,int>,std::piecewise_construct_t_const&,std::tuple<int&&>,std::tuple<>>
            (paVar5,ppVar4,ppVar3,ptVar2,ptVar1);
  return;
}




void good5(void)

{
  return;
}




/* std::_Head_base<0ul, int&&, false>::_M_head(std::_Head_base<0ul, int&&, false>&) */

undefined8 std::_Head_base<0ul,int&&,false>::_M_head(_Head_base *param_1)

{
  return *(undefined8 *)param_1;
}




/* std::map<int, int, std::less<int>, std::allocator<std::pair<int const, int> >
   >::map(std::map<int, int, std::less<int>, std::allocator<std::pair<int const, int> > > const&) */

void __thiscall
std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::map
          (map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>> *this,map *param_1)

{
  _Rb_tree<int,std::pair<int_const,int>,std::_Select1st<std::pair<int_const,int>>,std::less<int>,std::allocator<std::pair<int_const,int>>>
  ::_Rb_tree((_Rb_tree<int,std::pair<int_const,int>,std::_Select1st<std::pair<int_const,int>>,std::less<int>,std::allocator<std::pair<int_const,int>>>
              *)this,(_Rb_tree *)param_1);
  return;
}




void bad6(void)

{
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




/* std::_Rb_tree<int, std::pair<int const, int>, std::_Select1st<std::pair<int const, int> >,
   std::less<int>, std::allocator<std::pair<int const, int> >
   >::_M_erase(std::_Rb_tree_node<std::pair<int const, int> >*) */

void __thiscall
std::
_Rb_tree<int,std::pair<int_const,int>,std::_Select1st<std::pair<int_const,int>>,std::less<int>,std::allocator<std::pair<int_const,int>>>
::_M_erase(_Rb_tree<int,std::pair<int_const,int>,std::_Select1st<std::pair<int_const,int>>,std::less<int>,std::allocator<std::pair<int_const,int>>>
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




/* CWE680_Integer_Overflow_to_Buffer_Overflow__new_fgets_74::goodG2BSink(std::map<int, int,
   std::less<int>, std::allocator<std::pair<int const, int> > >) */

void CWE680_Integer_Overflow_to_Buffer_Overflow__new_fgets_74::goodG2BSink(map param_1)

{
  int *piVar1;
  undefined4 in_register_0000003c;
  long in_FS_OFFSET;
  int local_30;
  int local_2c;
  ulong local_28;
  ulong local_20;
  undefined4 *local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_30 = 2;
  piVar1 = (int *)std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::
                  operator[]((map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>> *
                             )CONCAT44(in_register_0000003c,param_1),&local_30);
  local_2c = *piVar1;
  local_20 = (long)local_2c << 2;
  local_18 = (undefined4 *)operator_new__(local_20);
  for (local_28 = 0; local_28 < (ulong)(long)local_2c; local_28 = local_28 + 1) {
    local_18[local_28] = 0;
  }
  printIntLine(*local_18);
  if (local_18 != (undefined4 *)0x0) {
    operator_delete__(local_18);
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void bad3(void)

{
  return;
}




/* void std::allocator_traits<std::allocator<std::_Rb_tree_node<std::pair<int const, int> > >
   >::construct<std::pair<int const, int>, std::piecewise_construct_t const&, std::tuple<int&&>,
   std::tuple<> >(std::allocator<std::_Rb_tree_node<std::pair<int const, int> > >&, std::pair<int
   const, int>*, std::piecewise_construct_t const&, std::tuple<int&&>&&, std::tuple<>&&) */

void std::allocator_traits<std::allocator<std::_Rb_tree_node<std::pair<int_const,int>>>>::
     construct<std::pair<int_const,int>,std::piecewise_construct_t_const&,std::tuple<int&&>,std::tuple<>>
               (allocator *param_1,pair *param_2,piecewise_construct_t *param_3,tuple *param_4,
               tuple *param_5)

{
  tuple *ptVar1;
  tuple *ptVar2;
  piecewise_construct_t *ppVar3;
  
  ptVar1 = forward<std::tuple<>>((type *)param_5);
  ptVar2 = forward<std::tuple<int&&>>((type *)param_4);
  ppVar3 = forward<std::piecewise_construct_t_const&>((type *)param_3);
  new_allocator<std::_Rb_tree_node<std::pair<int_const,int>>>::
  construct<std::pair<int_const,int>,std::piecewise_construct_t_const&,std::tuple<int&&>,std::tuple<>>
            ((new_allocator<std::_Rb_tree_node<std::pair<int_const,int>>> *)param_1,param_2,ppVar3,
             ptVar2,ptVar1);
  return;
}




/* void new_allocator<std::_Rb_tree_node<std::pair<int const, int> > >::construct<std::pair<int
   const, int>, std::piecewise_construct_t const&, std::tuple<int&&>, std::tuple<> >(std::pair<int
   const, int>*, std::piecewise_construct_t const&, std::tuple<int&&>&&, std::tuple<>&&) */

void __thiscall
new_allocator<std::_Rb_tree_node<std::pair<int_const,int>>>::
construct<std::pair<int_const,int>,std::piecewise_construct_t_const&,std::tuple<int&&>,std::tuple<>>
          (new_allocator<std::_Rb_tree_node<std::pair<int_const,int>>> *this,pair *param_1,
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
  pvVar2 = operator_new(8,param_1);
                    /* try { // try from 00102c1c to 00102c20 has its CatchHandler @ 00102c23 */
  std::pair<int_const,int>::pair<int&&>(pvVar2,local_38);
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




/* std::_Rb_tree<int, std::pair<int const, int>, std::_Select1st<std::pair<int const, int> >,
   std::less<int>, std::allocator<std::pair<int const, int> >
   >::_S_maximum(std::_Rb_tree_node_base*) */

void std::
     _Rb_tree<int,std::pair<int_const,int>,std::_Select1st<std::pair<int_const,int>>,std::less<int>,std::allocator<std::pair<int_const,int>>>
     ::_S_maximum(_Rb_tree_node_base *param_1)

{
  _Rb_tree_node_base::_S_maximum(param_1);
  return;
}




/* __aligned_membuf<std::pair<int const, int> >::_M_addr() */

__aligned_membuf<std::pair<int_const,int>> * __thiscall
__aligned_membuf<std::pair<int_const,int>>::_M_addr
          (__aligned_membuf<std::pair<int_const,int>> *this)

{
  return this;
}




/* std::map<int, int, std::less<int>, std::allocator<std::pair<int const, int> > >::lower_bound(int
   const&) */

void __thiscall
std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::lower_bound
          (map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>> *this,int *param_1)

{
  _Rb_tree<int,std::pair<int_const,int>,std::_Select1st<std::pair<int_const,int>>,std::less<int>,std::allocator<std::pair<int_const,int>>>
  ::lower_bound((_Rb_tree<int,std::pair<int_const,int>,std::_Select1st<std::pair<int_const,int>>,std::less<int>,std::allocator<std::pair<int_const,int>>>
                 *)this,param_1);
  return;
}




/* std::_Rb_tree<int, std::pair<int const, int>, std::_Select1st<std::pair<int const, int> >,
   std::less<int>, std::allocator<std::pair<int const, int> > >::key_comp() const */

void std::
     _Rb_tree<int,std::pair<int_const,int>,std::_Select1st<std::pair<int_const,int>>,std::less<int>,std::allocator<std::pair<int_const,int>>>
     ::key_comp(void)

{
  return;
}




/* __alloc_traits<std::allocator<std::_Rb_tree_node<std::pair<int const, int> > >,
   std::_Rb_tree_node<std::pair<int const, int> >
   >::_S_select_on_copy(std::allocator<std::_Rb_tree_node<std::pair<int const, int> > > const&) */

allocator *
__alloc_traits<std::allocator<std::_Rb_tree_node<std::pair<int_const,int>>>,std::_Rb_tree_node<std::pair<int_const,int>>>
::_S_select_on_copy(allocator *param_1)

{
  long lVar1;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  std::allocator_traits<std::allocator<std::_Rb_tree_node<std::pair<int_const,int>>>>::
  select_on_container_copy_construction(param_1);
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1;
}




/* std::_Rb_tree_iterator<std::pair<int const, int> >::TEMPNAMEPLACEHOLDERVALUE() const */

void __thiscall
std::_Rb_tree_iterator<std::pair<int_const,int>>::operator*
          (_Rb_tree_iterator<std::pair<int_const,int>> *this)

{
  _Rb_tree_node<std::pair<int_const,int>>::_M_valptr
            (*(_Rb_tree_node<std::pair<int_const,int>> **)this);
  return;
}




/* std::_Rb_tree<int, std::pair<int const, int>, std::_Select1st<std::pair<int const, int> >,
   std::less<int>, std::allocator<std::pair<int const, int> > >::_M_get_node() */

void __thiscall
std::
_Rb_tree<int,std::pair<int_const,int>,std::_Select1st<std::pair<int_const,int>>,std::less<int>,std::allocator<std::pair<int_const,int>>>
::_M_get_node(_Rb_tree<int,std::pair<int_const,int>,std::_Select1st<std::pair<int_const,int>>,std::less<int>,std::allocator<std::pair<int_const,int>>>
              *this)

{
  allocator *paVar1;
  
  paVar1 = (allocator *)_M_get_Node_allocator(this);
  allocator_traits<std::allocator<std::_Rb_tree_node<std::pair<int_const,int>>>>::allocate(paVar1,1)
  ;
  return;
}




/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* std::_Rb_tree_node<std::pair<int const, int> >*& std::forward<std::_Rb_tree_node<std::pair<int
   const, int> >*&>(std::remove_reference<std::_Rb_tree_node<std::pair<int const, int> >*&>::type&)
    */

_Rb_tree_node ** std::forward<std::_Rb_tree_node<std::pair<int_const,int>>*&>(type *param_1)

{
  return (_Rb_tree_node **)param_1;
}




/* __aligned_membuf<std::pair<int const, int> >::_M_ptr() */

void __thiscall
__aligned_membuf<std::pair<int_const,int>>::_M_ptr(__aligned_membuf<std::pair<int_const,int>> *this)

{
  _M_addr(this);
  return;
}




/* std::allocator<std::_Rb_tree_node<std::pair<int const, int> >
   >::allocator(std::allocator<std::_Rb_tree_node<std::pair<int const, int> > > const&) */

void std::allocator<std::_Rb_tree_node<std::pair<int_const,int>>>::allocator(allocator *param_1)

{
  new_allocator<std::_Rb_tree_node<std::pair<int_const,int>>>::new_allocator
            ((new_allocator *)param_1);
  return;
}




/* std::_Select1st<std::pair<int const, int> >::TEMPNAMEPLACEHOLDERVALUE(std::pair<int const, int>
   const&) const */

pair * __thiscall
std::_Select1st<std::pair<int_const,int>>::operator()
          (_Select1st<std::pair<int_const,int>> *this,pair *param_1)

{
  return param_1;
}




/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* int& std::__get_helper<0ul, int&&>(std::_Tuple_impl<0ul, int&&>&) */

int * std::__get_helper<0ul,int&&>(_Tuple_impl *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)_Tuple_impl<0ul,int&&>::_M_head(param_1);
  return piVar1;
}




/* std::_Rb_tree_node<std::pair<int const, int> >* std::_Rb_tree<int, std::pair<int const, int>,
   std::_Select1st<std::pair<int const, int> >, std::less<int>, std::allocator<std::pair<int const,
   int> > >::_M_copy<std::_Rb_tree<int, std::pair<int const, int>, std::_Select1st<std::pair<int
   const, int> >, std::less<int>, std::allocator<std::pair<int const, int> >
   >::_Alloc_node>(std::_Rb_tree_node<std::pair<int const, int> > const*, std::_Rb_tree_node_base*,
   std::_Rb_tree<int, std::pair<int const, int>, std::_Select1st<std::pair<int const, int> >,
   std::less<int>, std::allocator<std::pair<int const, int> > >::_Alloc_node&) */

_Rb_tree_node * __thiscall
std::
_Rb_tree<int,std::pair<int_const,int>,std::_Select1st<std::pair<int_const,int>>,std::less<int>,std::allocator<std::pair<int_const,int>>>
::
_M_copy<std::_Rb_tree<int,std::pair<int_const,int>,std::_Select1st<std::pair<int_const,int>>,std::less<int>,std::allocator<std::pair<int_const,int>>>::_Alloc_node>
          (_Rb_tree<int,std::pair<int_const,int>,std::_Select1st<std::pair<int_const,int>>,std::less<int>,std::allocator<std::pair<int_const,int>>>
           *this,_Rb_tree_node *param_1,_Rb_tree_node_base *param_2,_Alloc_node *param_3)

{
  _Rb_tree_node *p_Var1;
  _Rb_tree_node *p_Var2;
  _Rb_tree_node *p_Var3;
  _Rb_tree_node *local_40;
  _Rb_tree_node_base *local_38;
  
  p_Var1 = _M_clone_node<std::_Rb_tree<int,std::pair<int_const,int>,std::_Select1st<std::pair<int_const,int>>,std::less<int>,std::allocator<std::pair<int_const,int>>>::_Alloc_node>
                     (this,param_1,param_3);
  *(_Rb_tree_node_base **)(p_Var1 + 8) = param_2;
  if (*(long *)(param_1 + 0x18) != 0) {
    p_Var2 = (_Rb_tree_node *)_S_right((_Rb_tree_node_base *)param_1);
                    /* try { // try from 00103749 to 001037db has its CatchHandler @ 00103807 */
    p_Var2 = _M_copy<std::_Rb_tree<int,std::pair<int_const,int>,std::_Select1st<std::pair<int_const,int>>,std::less<int>,std::allocator<std::pair<int_const,int>>>::_Alloc_node>
                       (this,p_Var2,(_Rb_tree_node_base *)p_Var1,param_3);
    *(_Rb_tree_node **)(p_Var1 + 0x18) = p_Var2;
  }
  local_38 = (_Rb_tree_node_base *)_S_left((_Rb_tree_node_base *)param_1);
  local_40 = p_Var1;
  while (local_38 != (_Rb_tree_node_base *)0x0) {
    p_Var2 = _M_clone_node<std::_Rb_tree<int,std::pair<int_const,int>,std::_Select1st<std::pair<int_const,int>>,std::less<int>,std::allocator<std::pair<int_const,int>>>::_Alloc_node>
                       (this,(_Rb_tree_node *)local_38,param_3);
    *(_Rb_tree_node **)(local_40 + 0x10) = p_Var2;
    *(_Rb_tree_node **)(p_Var2 + 8) = local_40;
    if (*(long *)(local_38 + 0x18) != 0) {
      p_Var3 = (_Rb_tree_node *)_S_right(local_38);
      p_Var3 = _M_copy<std::_Rb_tree<int,std::pair<int_const,int>,std::_Select1st<std::pair<int_const,int>>,std::less<int>,std::allocator<std::pair<int_const,int>>>::_Alloc_node>
                         (this,p_Var3,(_Rb_tree_node_base *)p_Var2,param_3);
      *(_Rb_tree_node **)(p_Var2 + 0x18) = p_Var3;
    }
    local_38 = (_Rb_tree_node_base *)_S_left(local_38);
    local_40 = p_Var2;
  }
  return p_Var1;
}




int globalReturnsTrueOrFalse(void)

{
  int iVar1;
  
  iVar1 = rand();
  return iVar1 % 2;
}




/* std::_Rb_tree<int, std::pair<int const, int>, std::_Select1st<std::pair<int const, int> >,
   std::less<int>, std::allocator<std::pair<int const, int> >
   >::_M_drop_node(std::_Rb_tree_node<std::pair<int const, int> >*) */

void __thiscall
std::
_Rb_tree<int,std::pair<int_const,int>,std::_Select1st<std::pair<int_const,int>>,std::less<int>,std::allocator<std::pair<int_const,int>>>
::_M_drop_node(_Rb_tree<int,std::pair<int_const,int>,std::_Select1st<std::pair<int_const,int>>,std::less<int>,std::allocator<std::pair<int_const,int>>>
               *this,_Rb_tree_node *param_1)

{
  _M_destroy_node(this,param_1);
  _M_put_node(this,param_1);
  return;
}




/* std::_Rb_tree<int, std::pair<int const, int>, std::_Select1st<std::pair<int const, int> >,
   std::less<int>, std::allocator<std::pair<int const, int> > >::_Rb_tree_impl<std::less<int>,
   true>::_Rb_tree_impl(std::_Rb_tree<int, std::pair<int const, int>, std::_Select1st<std::pair<int
   const, int> >, std::less<int>, std::allocator<std::pair<int const, int> >
   >::_Rb_tree_impl<std::less<int>, true> const&) */

void std::
     _Rb_tree<int,std::pair<int_const,int>,std::_Select1st<std::pair<int_const,int>>,std::less<int>,std::allocator<std::pair<int_const,int>>>
     ::_Rb_tree_impl<std::less<int>,true>::_Rb_tree_impl(_Rb_tree_impl *param_1)

{
  long lVar1;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  __alloc_traits<std::allocator<std::_Rb_tree_node<std::pair<int_const,int>>>,std::_Rb_tree_node<std::pair<int_const,int>>>
  ::_S_select_on_copy((allocator *)param_1);
  _Rb_tree_key_compare<std::less<int>>::_Rb_tree_key_compare((less *)param_1);
  _Rb_tree_header::_Rb_tree_header((_Rb_tree_header *)(param_1 + 8));
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
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




/* std::_Rb_tree<int, std::pair<int const, int>, std::_Select1st<std::pair<int const, int> >,
   std::less<int>, std::allocator<std::pair<int const, int> >
   >::_Alloc_node::_Alloc_node(std::_Rb_tree<int, std::pair<int const, int>,
   std::_Select1st<std::pair<int const, int> >, std::less<int>, std::allocator<std::pair<int const,
   int> > >&) */

void __thiscall
std::
_Rb_tree<int,std::pair<int_const,int>,std::_Select1st<std::pair<int_const,int>>,std::less<int>,std::allocator<std::pair<int_const,int>>>
::_Alloc_node::_Alloc_node(_Alloc_node *this,_Rb_tree *param_1)

{
  *(_Rb_tree **)this = param_1;
  return;
}




/* CWE680_Integer_Overflow_to_Buffer_Overflow__new_fgets_74::good() */

void CWE680_Integer_Overflow_to_Buffer_Overflow__new_fgets_74::good(void)

{
  goodG2B();
  return;
}




/* std::_Rb_tree_iterator<std::pair<int const, int> >::TEMPNAMEPLACEHOLDERVALUE() */

_Rb_tree_iterator<std::pair<int_const,int>> * __thiscall
std::_Rb_tree_iterator<std::pair<int_const,int>>::operator++
          (_Rb_tree_iterator<std::pair<int_const,int>> *this)

{
  undefined8 uVar1;
  
  uVar1 = std::_Rb_tree_increment(*(_Rb_tree_node_base **)this);
  *(undefined8 *)this = uVar1;
  return this;
}




/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* std::tuple_element<0ul, std::tuple<int&&> >::type& std::get<0ul, int&&>(std::tuple<int&&>&) */

type * std::get<0ul,int&&>(tuple *param_1)

{
  type *ptVar1;
  
  ptVar1 = (type *)__get_helper<0ul,int&&>((_Tuple_impl *)param_1);
  return ptVar1;
}




void printHexCharLine(char param_1)

{
  printf("%02x\n",(ulong)(uint)(int)param_1);
  return;
}




/* new_allocator<std::_Rb_tree_node<std::pair<int const, int> > >::new_allocator() */

void new_allocator<std::_Rb_tree_node<std::pair<int_const,int>>>::new_allocator(void)

{
  return;
}




/* std::pair<int const, int>::pair<int&&>(std::piecewise_construct_t, std::tuple<int&&>,
   std::tuple<>) */

void std::pair<int_const,int>::pair<int&&>(tuple *param_1,tuple *param_2)

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




/* std::_Rb_tree_iterator<std::pair<int const, int> >::TEMPNAMEPLACEHOLDERVALUE() */

_Rb_tree_iterator<std::pair<int_const,int>> * __thiscall
std::_Rb_tree_iterator<std::pair<int_const,int>>::operator--
          (_Rb_tree_iterator<std::pair<int_const,int>> *this)

{
  undefined8 uVar1;
  
  uVar1 = std::_Rb_tree_decrement(*(_Rb_tree_node_base **)this);
  *(undefined8 *)this = uVar1;
  return this;
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




/* std::map<int, int, std::less<int>, std::allocator<std::pair<int const, int> > >::key_comp() const
    */

undefined4 std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::key_comp(void)

{
  undefined4 unaff_EBX;
  
  _Rb_tree<int,std::pair<int_const,int>,std::_Select1st<std::pair<int_const,int>>,std::less<int>,std::allocator<std::pair<int_const,int>>>
  ::key_comp();
  return unaff_EBX;
}




void good6(void)

{
  return;
}




/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* std::tuple<>&& std::forward<std::tuple<> >(std::remove_reference<std::tuple<> >::type&) */

tuple * std::forward<std::tuple<>>(type *param_1)

{
  return (tuple *)param_1;
}



