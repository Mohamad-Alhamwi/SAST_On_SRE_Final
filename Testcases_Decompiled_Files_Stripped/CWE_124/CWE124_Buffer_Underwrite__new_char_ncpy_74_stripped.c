
void FUN_00101d52(undefined8 param_1,undefined8 param_2)

{
  FUN_00102186(param_1,param_2);
  return;
}




undefined8 FUN_00103f51(void)

{
  return 1;
}




void FUN_00103fcb(void)

{
  return;
}




undefined8
FUN_00101ec6(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
            undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long in_FS_OFFSET;
  undefined8 local_48;
  undefined8 local_40;
  undefined local_38 [16];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  uVar1 = FUN_00102304(param_5);
  uVar2 = FUN_001022f2(param_4);
  uVar3 = FUN_001022e0(param_3);
  local_40 = FUN_00102316(param_1,uVar3,uVar2,uVar1);
                    /* try { // try from 00101f42 to 00101f85 has its CatchHandler @ 00101fc3 */
  uVar1 = FUN_0010273f(local_40);
  local_38 = FUN_00102396(param_1,param_2,uVar1);
  if (local_38._8_8_ == 0) {
    FUN_00102148(param_1,local_40);
    FUN_0010287c(&local_48,local_38._0_8_);
  }
  else {
    local_48 = FUN_00102792(param_1,local_38._0_8_,local_38._8_8_,local_40);
  }
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_48;
}




undefined8 FUN_00102d4a(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}




void FUN_0010387e(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = FUN_0010374f(param_3);
  FUN_001038da(param_1,param_2,uVar1);
  return;
}




void FUN_00102186(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_00102a6c(param_1);
  uVar2 = FUN_00101d3c(param_1);
  FUN_00102a82(param_1,uVar2,uVar1,param_2);
  return;
}




void FUN_00101ea4(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  return;
}




void FUN_00101020(void)

{
  (*(code *)PTR_00108ec8)();
  return;
}




void FUN_001019d6(undefined8 param_1)

{
  FUN_001019b6(param_1);
  return;
}




void FUN_00103b54(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




void FUN_00104023(void)

{
  return;
}




void FUN_0010404f(long param_1)

{
  (**(code **)(param_1 + 8))(*(undefined8 *)(param_1 + 0x10));
                    /* WARNING: Subroutine does not return */
  pthread_exit((void *)0x0);
}




void FUN_00101549(void)

{
  void *__s;
  long lVar1;
  long *plVar2;
  long in_FS_OFFSET;
  undefined local_88 [48];
  undefined4 local_58 [14];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_001019d6(local_88);
                    /* try { // try from 00101584 to 00101647 has its CatchHandler @ 00101693 */
  __s = operator_new__(100);
  memset(__s,0x41,99);
  *(undefined *)((long)__s + 99) = 0;
  lVar1 = (long)__s + -8;
  local_58[0] = 0;
  plVar2 = (long *)FUN_00101ada(local_88,local_58);
  *plVar2 = lVar1;
  local_58[0] = 1;
  plVar2 = (long *)FUN_00101ada(local_88,local_58);
  *plVar2 = lVar1;
  local_58[0] = 2;
  plVar2 = (long *)FUN_00101ada(local_88,local_58);
  *plVar2 = lVar1;
  FUN_00101a16(local_58,local_88);
                    /* try { // try from 0010164f to 00101653 has its CatchHandler @ 0010167e */
  FUN_0010392c(local_58);
  FUN_001019f6(local_58);
  FUN_001019f6(local_88);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00102928(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = param_2;
  return;
}




void FUN_00104330(void)

{
  return;
}




void FUN_00101996(undefined8 param_1)

{
  FUN_00101a7c(param_1);
  return;
}




void FUN_00101956(long param_1)

{
  *(undefined8 *)(param_1 + 8) = 0;
  *(long *)(param_1 + 0x10) = param_1;
  *(long *)(param_1 + 0x18) = param_1;
  *(undefined8 *)(param_1 + 0x20) = 0;
  return;
}




void FUN_00103bd5(char param_1)

{
  printf("%02x\n",(ulong)(uint)(int)param_1);
  return;
}




void FUN_00103aa4(long param_1)

{
  if (param_1 != 0) {
    wprintf(L"%ls\n",param_1);
  }
  return;
}




void FUN_00103baa(undefined8 param_1)

{
  printf("%zu\n",param_1);
  return;
}




void FUN_00103cdb(uint *param_1)

{
  printf("%d -- %d\n",(ulong)*param_1,(ulong)param_1[1]);
  return;
}




void FUN_0010402e(void)

{
  return;
}




void FUN_0010343a(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_00103687(param_2);
  *param_1 = *puVar1;
  puVar1 = (undefined8 *)FUN_001033d7(param_3);
  param_1[1] = *puVar1;
  return;
}




undefined8 FUN_00104086(pthread_t param_1,pthread_t param_2,undefined8 *param_3)

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
    iVar1 = pthread_create(&local_20,(pthread_attr_t *)0x0,FUN_0010404f,local_18);
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




void FUN_0010424a(pthread_mutex_t *param_1)

{
  pthread_mutex_lock(param_1);
  return;
}




void FUN_001018be(void)

{
  return;
}




void FUN_00103285(undefined8 param_1)

{
  FUN_001018fe(param_1);
  return;
}




undefined8 FUN_00103f60(void)

{
  return 0;
}




void FUN_00101a16(undefined8 param_1,undefined8 param_2)

{
  FUN_00101c06(param_1,param_2);
  return;
}




void FUN_00104044(void)

{
  return;
}




void FUN_00103fec(void)

{
  return;
}




void FUN_001039d5(undefined8 param_1)

{
  undefined8 *puVar1;
  long in_FS_OFFSET;
  undefined4 local_84;
  char *local_80;
  char local_78 [99];
  undefined local_15;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_84 = 2;
  puVar1 = (undefined8 *)FUN_00101ada(param_1,&local_84);
  local_80 = (char *)*puVar1;
  memset(local_78,0x43,99);
  local_15 = 0;
  strncpy(local_80,local_78,99);
  local_80[99] = '\0';
  FUN_00103a7e(local_80);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_001020a8(undefined8 param_1,undefined8 param_2)

{
  long in_FS_OFFSET;
  undefined local_18 [8];
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00102928(local_18,param_1);
  FUN_00102946(param_1,param_2,local_18);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00103b7f(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




void FUN_00102268(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00102256(param_2);
  FUN_00102b5e(param_1,uVar1);
  return;
}




void FUN_0010200c(long param_1,undefined8 param_2)

{
  long lVar1;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_0010289a(param_1,param_2);
  FUN_00102914(param_1,param_2);
  FUN_0010192c(param_1 + 8);
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_001036ac(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *param_1;
  uVar2 = FUN_0010374f(param_2);
  FUN_00103762(uVar1,uVar2);
  return;
}




undefined8
FUN_00102792(long param_1,long param_2,_Rb_tree_node_base *param_3,_Rb_tree_node_base *param_4)

{
  char cVar1;
  bool bVar2;
  _Rb_tree_node_base *p_Var3;
  undefined8 uVar4;
  undefined8 uVar5;
  long in_FS_OFFSET;
  undefined8 local_28;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_2 == 0) {
    p_Var3 = (_Rb_tree_node_base *)FUN_00102a6c(param_1);
    if (param_3 != p_Var3) {
      uVar4 = FUN_00102d76(param_3);
      uVar5 = FUN_0010273f(param_4);
      cVar1 = FUN_00101e08(param_1,uVar5,uVar4);
      if (cVar1 == '\0') {
        bVar2 = false;
        goto LAB_00102816;
      }
    }
  }
  bVar2 = true;
LAB_00102816:
  std::_Rb_tree_insert_and_rebalance(bVar2,param_4,param_3,(_Rb_tree_node_base *)(param_1 + 8));
  *(long *)(param_1 + 0x28) = *(long *)(param_1 + 0x28) + 1;
  FUN_0010287c(&local_28,param_4);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_28;
}




void FUN_00103482(undefined8 param_1)

{
  FUN_0010369a(param_1);
  return;
}




long FUN_001018fe(long param_1)

{
  undefined8 local_10;
  
  for (local_10 = param_1; *(long *)(local_10 + 0x18) != 0; local_10 = *(long *)(local_10 + 0x18)) {
  }
  return local_10;
}




void FUN_00102b5e(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00102256(param_2);
  FUN_00102bc6(param_1,uVar1);
  return;
}




void FUN_001037ae(undefined4 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined4 *puVar2;
  
  uVar1 = FUN_00103860(param_2);
  puVar2 = (undefined4 *)FUN_00102bb4(uVar1);
  *param_1 = *puVar2;
  *(undefined8 *)(param_1 + 2) = 0;
  return;
}




void FUN_00102d76(undefined8 param_1)

{
  FUN_0010273f(param_1);
  return;
}




int FUN_00103f6f(void)

{
  int iVar1;
  
  iVar1 = rand();
  return iVar1 % 2;
}




undefined8 FUN_00102304(undefined8 param_1)

{
  return param_1;
}




undefined8 FUN_0010374f(undefined8 param_1)

{
  return param_1;
}




undefined8 FUN_001021d6(long param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_0010287c(&local_18,param_1 + 8);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




long FUN_00101ada(undefined8 param_1,undefined8 param_2)

{
  bool bVar1;
  char cVar2;
  undefined8 uVar3;
  long lVar4;
  long in_FS_OFFSET;
  undefined local_39;
  undefined8 local_38;
  undefined local_30 [8];
  undefined8 local_28;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  local_38 = FUN_00101d52(param_1,param_2);
  local_28 = FUN_00101d7c(param_1);
  cVar2 = FUN_00101d9a(&local_38,&local_28);
  if (cVar2 == '\0') {
    FUN_00101dc0(param_1);
    uVar3 = FUN_00101de6(&local_38);
    cVar2 = FUN_00101e08(local_30,param_2,uVar3);
    if (cVar2 == '\0') {
      bVar1 = false;
      goto LAB_00101b7a;
    }
  }
  bVar1 = true;
LAB_00101b7a:
  if (bVar1) {
    uVar3 = FUN_00101e2f(param_2);
    FUN_00101e6c(local_30,uVar3);
    FUN_00101ea4(&local_28,&local_38);
    local_38 = FUN_00101ec6(param_1,local_28,&DAT_00105004,local_30,&local_39);
  }
  lVar4 = FUN_00101de6(&local_38);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return lVar4 + 8;
}




void FUN_00103f9f(void)

{
  return;
}




undefined8 FUN_00101e2f(undefined8 param_1)

{
  return param_1;
}




void FUN_00102d94(undefined8 *param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  
  *param_1 = *param_2;
  puVar1 = (undefined8 *)FUN_001033d7(param_3);
  param_1[1] = *puVar1;
  return;
}




void FUN_00101e42(undefined8 param_1,undefined8 param_2)

{
  FUN_001022a0(param_1,param_2);
  return;
}




void FUN_00102a32(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_001032a4(param_1);
  FUN_001032e0(uVar1,param_2,1);
  return;
}




long FUN_00102092(long param_1)

{
  return param_1 + 0x10;
}




void FUN_00103f94(void)

{
  return;
}




long FUN_001018d1(long param_1)

{
  undefined8 local_10;
  
  for (local_10 = param_1; *(long *)(local_10 + 0x10) != 0; local_10 = *(long *)(local_10 + 0x10)) {
  }
  return local_10;
}




void FUN_0010192c(undefined4 *param_1)

{
  *param_1 = 0;
  FUN_00101956(param_1);
  return;
}




void FUN_00101cd2(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 local_28;
  
  local_28 = param_2;
  while (local_28 != 0) {
    uVar1 = FUN_0010211b(local_28);
    FUN_00101cd2(param_1,uVar1);
    lVar2 = FUN_00102131(local_28);
    FUN_00102148(param_1,local_28);
    local_28 = lVar2;
  }
  return;
}




undefined8 FUN_00103324(undefined8 *param_1)

{
  return *param_1;
}




void FUN_00101d7c(undefined8 param_1)

{
  FUN_001021d6(param_1);
  return;
}




void FUN_00102914(void)

{
  return;
}




/* WARNING: Removing unreachable block (ram,0x001014e4) */
/* WARNING: Removing unreachable block (ram,0x001014f0) */

void FUN_001014c0(void)

{
  return;
}




void FUN_00103267(undefined8 param_1)

{
  FUN_001018d1(param_1);
  return;
}




ulong FUN_00103e72(long param_1,ulong param_2,long param_3)

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




void FUN_00103ad6(uint param_1)

{
  printf("%d\n",(ulong)param_1);
  return;
}




void FUN_00103f89(void)

{
  return;
}




undefined8 FUN_001041ae(void *param_1)

{
  free(param_1);
  return 1;
}




void _FINI_0(void)

{
  if (DAT_00109020 == '\0') {
    if (PTR___cxa_finalize_00108fd8 != (undefined *)0x0) {
      __cxa_finalize(PTR_LOOP_00109008);
    }
    FUN_00101490();
    DAT_00109020 = 1;
    return;
  }
  return;
}




void FUN_00103068(long param_1)

{
  FUN_00103482(param_1 + 0x20);
  return;
}




void FUN_001016c0(void)

{
  void *__s;
  undefined8 *puVar1;
  long in_FS_OFFSET;
  undefined local_88 [48];
  undefined4 local_58 [14];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_001019d6(local_88);
                    /* try { // try from 001016fb to 001017ba has its CatchHandler @ 00101806 */
  __s = operator_new__(100);
  memset(__s,0x41,99);
  *(undefined *)((long)__s + 99) = 0;
  local_58[0] = 0;
  puVar1 = (undefined8 *)FUN_00101ada(local_88,local_58);
  *puVar1 = __s;
  local_58[0] = 1;
  puVar1 = (undefined8 *)FUN_00101ada(local_88,local_58);
  *puVar1 = __s;
  local_58[0] = 2;
  puVar1 = (undefined8 *)FUN_00101ada(local_88,local_58);
  *puVar1 = __s;
  FUN_00101a16(local_58,local_88);
                    /* try { // try from 001017c2 to 001017c6 has its CatchHandler @ 001017f1 */
  FUN_001039d5(local_58);
  FUN_001019f6(local_58);
  FUN_001019f6(local_88);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00102c1c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  FUN_001018a8(0x30,param_2);
  uVar1 = FUN_00102304(param_5);
  uVar2 = FUN_001022f2(param_4);
  uVar3 = FUN_001022e0(param_3);
  uVar4 = FUN_00102234(param_2);
  uVar5 = FUN_001032a4(param_1);
                    /* try { // try from 00102cab to 00102caf has its CatchHandler @ 00102cb2 */
  FUN_00103367(uVar5,uVar4,uVar3,uVar2,uVar1);
  return;
}




void FUN_00102148(undefined8 param_1,undefined8 param_2)

{
  FUN_001029ee(param_1,param_2);
  FUN_00102a32(param_1,param_2);
  return;
}




void FUN_00102226(void)

{
  return;
}




void FUN_00104269(pthread_mutex_t *param_1)

{
  pthread_mutex_unlock(param_1);
  return;
}




undefined8 FUN_00103762(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_00102bf0(param_1);
  uVar2 = FUN_0010374f(param_2);
  FUN_001037f2(param_1,uVar1,uVar2);
  return uVar1;
}




void FUN_00101c06(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  
  FUN_0010200c(param_1,param_2);
  lVar1 = FUN_0010207c(param_2);
  if (lVar1 != 0) {
    puVar2 = (undefined8 *)FUN_00102092(param_1);
                    /* try { // try from 00101c61 to 00101c65 has its CatchHandler @ 00101c6b */
    uVar3 = FUN_001020a8(param_1,param_2);
    *puVar2 = uVar3;
  }
  return;
}




void FUN_001042c0(undefined4 param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  
  _DT_INIT();
  lVar1 = 0;
  do {
    (*(code *)(&__DT_INIT_ARRAY)[lVar1])(param_1,param_2,param_3);
    lVar1 = lVar1 + 1;
  } while (lVar1 != 1);
  return;
}




undefined8 * FUN_00102ffc(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = std::_Rb_tree_increment((_Rb_tree_node_base *)*param_1);
  *param_1 = uVar1;
  return param_1;
}




void FUN_001037f2(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  FUN_001018a8(0x30,param_2);
  uVar1 = FUN_0010374f(param_3);
  uVar2 = FUN_00102234(param_2);
  uVar3 = FUN_001032a4(param_1);
  FUN_0010387e(uVar3,uVar2,uVar1);
  return;
}




void FUN_00104039(void)

{
  return;
}




void FUN_00103fe1(void)

{
  return;
}




undefined8 FUN_0010207c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}




void FUN_00103cad(undefined8 param_1)

{
  printf("%g\n",param_1);
  return;
}




void FUN_001036fe(undefined8 param_1,undefined8 param_2)

{
  long in_FS_OFFSET;
  undefined local_29;
  undefined8 local_28;
  undefined8 local_20;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_28 = param_2;
  local_20 = param_1;
  FUN_001037ae(param_1,param_2,&local_29);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00103339(undefined8 param_1,undefined8 param_2)

{
  FUN_0010356c(param_1,param_2,0);
  return;
}




void FUN_00102b96(undefined8 param_1)

{
  FUN_00103324(param_1);
  return;
}




void FUN_00103530(void)

{
  return;
}




void FUN_001019b6(undefined8 param_1)

{
  FUN_00101a40(param_1);
  return;
}




undefined8 FUN_00102dd4(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  undefined8 uVar2;
  long in_FS_OFFSET;
  char local_59;
  long local_58;
  long local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38 [3];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  local_58 = FUN_00101d3c(param_1);
  local_50 = FUN_00102a6c(param_1);
  local_59 = '\x01';
  while (local_58 != 0) {
    local_50 = local_58;
    uVar2 = FUN_0010273f(local_58);
    local_59 = FUN_00101e08(param_1,param_2,uVar2);
    if (local_59 == '\0') {
      local_58 = FUN_0010211b(local_58);
    }
    else {
      local_58 = FUN_00102131(local_58);
    }
  }
  FUN_0010287c(&local_48,local_50);
  if (local_59 != '\0') {
    local_38[0] = FUN_001033ea(param_1);
    cVar1 = FUN_00101d9a(&local_48,local_38);
    if (cVar1 != '\0') {
      FUN_0010343a(local_38,&local_58,&local_50);
      goto LAB_00102f56;
    }
    FUN_00102fd0(&local_48);
  }
  uVar2 = FUN_00102d76(local_48);
  cVar1 = FUN_00101e08(param_1,uVar2,param_2);
  if (cVar1 == '\0') {
    local_40 = 0;
    FUN_00103028(local_38,&local_48,&local_40);
  }
  else {
    FUN_0010343a(local_38,&local_58,&local_50);
  }
LAB_00102f56:
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return local_38[0];
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00101a40(long param_1)

{
  FUN_00101c92(param_1);
  FUN_00101cb2(param_1);
  FUN_0010192c(param_1 + 8);
  return;
}




ulong FUN_00103d6e(long param_1,ulong param_2,long param_3)

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




void FUN_0010210c(void)

{
  return;
}




undefined4 FUN_00101dc0(undefined8 param_1)

{
  undefined4 unaff_EBX;
  
  FUN_00102226(param_1);
  return unaff_EBX;
}




void FUN_00101cc2(void)

{
  return;
}




void FUN_00102b40(undefined8 param_1)

{
  FUN_00103312(param_1);
  return;
}




void FUN_00103a7e(char *param_1)

{
  if (param_1 != (char *)0x0) {
    puts(param_1);
  }
  return;
}




undefined8 FUN_001041d1(undefined8 *param_1)

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




/* WARNING: Type propagation algorithm not settling */

long FUN_00102396(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  bool bVar1;
  char cVar2;
  long lVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long *plVar8;
  long in_FS_OFFSET;
  undefined8 local_68;
  undefined8 local_60;
  long local_50;
  long local_48 [5];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  local_68 = param_2;
  local_60 = param_1;
  lVar3 = FUN_00102cfa(&local_68);
  local_50 = lVar3;
  lVar4 = FUN_00102a6c(local_60);
  uVar7 = local_60;
  if (lVar3 != lVar4) {
    uVar6 = FUN_00102d76(local_50);
    cVar2 = FUN_00101e08(uVar7,param_3,uVar6);
    lVar3 = local_50;
    uVar7 = local_60;
    if (cVar2 == '\0') {
      uVar6 = FUN_00102d76(local_50);
      cVar2 = FUN_00101e08(uVar7,uVar6,param_3);
      lVar3 = local_50;
      if (cVar2 == '\0') {
        local_48[1] = 0;
        FUN_00103028(local_48 + 2,&local_50,local_48 + 1);
      }
      else {
        local_48[0] = local_50;
        plVar8 = (long *)FUN_00102d60(local_60);
        uVar7 = local_60;
        if (lVar3 == *plVar8) {
          uVar7 = FUN_00102d60(local_60);
          local_48[1] = 0;
          FUN_00102d94(local_48 + 2,local_48 + 1,uVar7);
        }
        else {
          puVar5 = (undefined8 *)FUN_00102ffc(local_48);
          uVar6 = FUN_00102d76(*puVar5);
          cVar2 = FUN_00101e08(uVar7,param_3,uVar6);
          if (cVar2 == '\0') {
            local_48[2] = FUN_00102dd4(local_60,param_3);
          }
          else {
            lVar3 = FUN_0010211b(local_50);
            if (lVar3 == 0) {
              local_48[1] = 0;
              FUN_00102d94(local_48 + 2,local_48 + 1,&local_50);
            }
            else {
              FUN_00102f88(local_48 + 2,local_48,local_48);
            }
          }
        }
      }
    }
    else {
      local_48[0] = local_50;
      plVar8 = (long *)FUN_00102f72(local_60);
      uVar7 = local_60;
      if (lVar3 == *plVar8) {
        uVar7 = FUN_00102f72(local_60);
        uVar6 = FUN_00102f72(local_60);
        FUN_00102f88(local_48 + 2,uVar6,uVar7);
      }
      else {
        puVar5 = (undefined8 *)FUN_00102fd0(local_48);
        uVar6 = FUN_00102d76(*puVar5);
        cVar2 = FUN_00101e08(uVar7,uVar6,param_3);
        if (cVar2 == '\0') {
          local_48[2] = FUN_00102dd4(local_60,param_3);
        }
        else {
          lVar3 = FUN_0010211b(local_48[0]);
          if (lVar3 == 0) {
            local_48[1] = 0;
            FUN_00102d94(local_48 + 2,local_48 + 1,local_48);
          }
          else {
            FUN_00102f88(local_48 + 2,&local_50,&local_50);
          }
        }
      }
    }
    goto LAB_00102724;
  }
  lVar3 = FUN_00102d4a(local_60);
  uVar7 = local_60;
  if (lVar3 == 0) {
LAB_00102438:
    bVar1 = false;
  }
  else {
    puVar5 = (undefined8 *)FUN_00102d60(local_60);
    uVar6 = FUN_00102d76(*puVar5);
    cVar2 = FUN_00101e08(uVar7,uVar6,param_3);
    if (cVar2 == '\0') goto LAB_00102438;
    bVar1 = true;
  }
  if (bVar1) {
    uVar7 = FUN_00102d60(local_60);
    local_48[1] = 0;
    FUN_00102d94(local_48 + 2,local_48 + 1,uVar7);
  }
  else {
    local_48[2] = FUN_00102dd4(local_60,param_3);
  }
LAB_00102724:
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_48[2];
}




void FUN_00103c5a(uint param_1)

{
  printf("%u\n",(ulong)param_1);
  return;
}




undefined8 FUN_00101843(void)

{
  time_t tVar1;
  
  tVar1 = time((time_t *)0x0);
  srand((uint)tVar1);
  FUN_00103a7e("Calling good()...");
  FUN_00101833();
  FUN_00103a7e("Finished good()");
  FUN_00103a7e("Calling bad()...");
  FUN_00101549();
  FUN_00103a7e("Finished bad()");
  return 0;
}




void FUN_00104288(pthread_mutex_t *param_1)

{
  pthread_mutex_destroy(param_1);
  free(param_1);
  return;
}




undefined8 FUN_00102bb4(undefined8 param_1)

{
  return param_1;
}




undefined4 FUN_00101e08(undefined8 param_1,int *param_2,int *param_3)

{
  return CONCAT31((int3)((uint)*param_3 >> 8),*param_2 < *param_3);
}




undefined8 FUN_0010351a(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}




void FUN_00103c82(byte param_1)

{
  printf("%02x\n",(ulong)param_1);
  return;
}




void FUN_00104018(void)

{
  return;
}




undefined8 * FUN_00102fd0(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = std::_Rb_tree_decrement((_Rb_tree_node_base *)*param_1);
  *param_1 = uVar1;
  return param_1;
}




undefined8 FUN_0010289a(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_001030a0(param_1,param_2);
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1;
}




undefined8 FUN_001030e2(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}




void FUN_00102234(long param_1)

{
  FUN_00102b40(param_1 + 0x20);
  return;
}




long FUN_00102f72(long param_1)

{
  return param_1 + 0x18;
}




void FUN_00101c92(undefined8 param_1)

{
  FUN_0010210c(param_1);
  return;
}




void FUN_00101833(void)

{
  FUN_001016c0();
  return;
}




undefined8 FUN_00101e6c(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00102256(param_2);
  FUN_00102268(param_1,uVar1);
  return param_1;
}




void FUN_00103367(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = FUN_00102304(param_5);
  uVar2 = FUN_001022f2(param_4);
  uVar3 = FUN_001022e0(param_3);
  FUN_001035bc(param_1,param_2,uVar3,uVar2,uVar1);
  return;
}




undefined8 FUN_00103312(undefined8 param_1)

{
  return param_1;
}




void FUN_00102bc6(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00102256(param_2);
  *param_1 = uVar1;
  return;
}




void FUN_00103afe(short param_1)

{
  printf("%hd\n",(ulong)(uint)(int)param_1);
  return;
}




undefined8 FUN_00102cfa(undefined8 *param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_0010287c(&local_18,*param_1);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00103d0e(long param_1,ulong param_2)

{
  ulong local_10;
  
  for (local_10 = 0; local_10 < param_2; local_10 = local_10 + 1) {
    printf("%02x",(ulong)*(byte *)(local_10 + param_1));
  }
  puts("");
  return;
}




void FUN_00103ff7(void)

{
  return;
}




void FUN_00102f88(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_001033d7(param_2);
  *param_1 = *puVar1;
  puVar1 = (undefined8 *)FUN_001033d7(param_3);
  param_1[1] = *puVar1;
  return;
}




void FUN_001038da(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  puVar2 = (undefined8 *)FUN_0010374f(param_3);
  puVar3 = (undefined8 *)FUN_001018a8(0x10,param_2);
  uVar1 = puVar2[1];
  *puVar3 = *puVar2;
  puVar3[1] = uVar1;
  return;
}




undefined8 FUN_00103687(undefined8 param_1)

{
  return param_1;
}




long FUN_00102a6c(long param_1)

{
  return param_1 + 8;
}




void FUN_001019f6(undefined8 param_1)

{
  FUN_00101a9c(param_1);
  return;
}




undefined8 FUN_001036e6(void)

{
  return 0x2aaaaaaaaaaaaaa;
}




undefined8 FUN_001022f2(undefined8 param_1)

{
  return param_1;
}




undefined8 FUN_0010308a(undefined8 param_1,undefined8 param_2)

{
  return param_2;
}




undefined4 * FUN_001034a0(undefined8 param_1,undefined4 *param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined4 *puVar2;
  
  uVar1 = FUN_00103068(param_2);
  puVar2 = (undefined4 *)FUN_001036ac(param_3,uVar1);
  *puVar2 = *param_2;
  *(undefined8 *)(puVar2 + 4) = 0;
  *(undefined8 *)(puVar2 + 6) = 0;
  return puVar2;
}




void FUN_0010287c(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = param_2;
  return;
}




void FUN_00103860(undefined8 param_1)

{
  FUN_001038bb(param_1);
  return;
}




void FUN_001032e0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00103544(param_1,param_2,param_3);
  return;
}




void FUN_0010356c(undefined8 param_1,ulong param_2)

{
  ulong uVar1;
  
  uVar1 = FUN_001036e6(param_1);
  if (uVar1 < param_2) {
    std::__throw_bad_alloc();
  }
  operator_new(param_2 * 0x30);
  return;
}




undefined8 FUN_0010211b(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}




void FUN_00101cb2(void)

{
  return;
}




void FUN_001029ee(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_00102234(param_2);
  uVar2 = FUN_001032a4(param_1);
  FUN_001032b6(uVar2,uVar1);
  return;
}




void FUN_001038bb(undefined8 param_1)

{
  FUN_00102b96(param_1);
  return;
}




undefined8 FUN_00102a82(undefined8 param_1,long param_2,long param_3,undefined8 param_4)

{
  char cVar1;
  undefined8 uVar2;
  long in_FS_OFFSET;
  long local_40;
  long local_38;
  undefined8 local_28;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  local_40 = param_3;
  local_38 = param_2;
  while (local_38 != 0) {
    uVar2 = FUN_0010273f(local_38);
    cVar1 = FUN_00101e08(param_1,uVar2,param_4);
    if (cVar1 == '\x01') {
      local_38 = FUN_0010211b(local_38);
    }
    else {
      local_40 = local_38;
      local_38 = FUN_00102131(local_38);
    }
  }
  FUN_0010287c(&local_28,local_40);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_28;
}




undefined8 FUN_00102256(undefined8 param_1)

{
  return param_1;
}




void FUN_001028ea(undefined8 param_1,undefined8 param_2)

{
  FUN_001030ce(param_1,param_2);
  return;
}




void FUN_00103c00(undefined4 param_1)

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




undefined8 FUN_001018a8(undefined8 param_1,undefined8 param_2)

{
  return param_2;
}




void FUN_00101a9c(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00101d3c(param_1);
  FUN_00101cd2(param_1,uVar1);
  FUN_00101996(param_1);
  return;
}




undefined8 FUN_001033d7(undefined8 param_1)

{
  return param_1;
}




void FUN_00103faa(void)

{
  return;
}




void FUN_00103544(undefined8 param_1,void *param_2)

{
  operator_delete(param_2);
  return;
}




undefined8 FUN_00101d3c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}




void FUN_0010400d(void)

{
  return;
}




undefined8 FUN_0010369a(undefined8 param_1)

{
  return param_1;
}




void FUN_0010392c(undefined8 param_1)

{
  undefined8 *puVar1;
  long in_FS_OFFSET;
  undefined4 local_84;
  char *local_80;
  char local_78 [99];
  undefined local_15;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_84 = 2;
  puVar1 = (undefined8 *)FUN_00101ada(param_1,&local_84);
  local_80 = (char *)*puVar1;
  memset(local_78,0x43,99);
  local_15 = 0;
  strncpy(local_80,local_78,99);
  local_80[99] = '\0';
  FUN_00103a7e(local_80);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00101de6(undefined8 *param_1)

{
  FUN_00102234(*param_1);
  return;
}




void FUN_0010273f(undefined8 param_1)

{
  undefined8 uVar1;
  long in_FS_OFFSET;
  undefined local_11;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  uVar1 = FUN_00103068(param_1);
  FUN_0010308a(&local_11,uVar1);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00103fd6(void)

{
  return;
}




undefined8 FUN_001033ea(long param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_0010287c(&local_18,*(undefined8 *)(param_1 + 0x18));
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




long FUN_001030f8(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 local_40;
  undefined8 local_38;
  
  lVar1 = FUN_001034a0(param_1,param_2,param_4);
  *(undefined8 *)(lVar1 + 8) = param_3;
  if (*(long *)(param_2 + 0x18) != 0) {
    uVar2 = FUN_00103504(param_2);
                    /* try { // try from 00103167 to 001031f9 has its CatchHandler @ 00103225 */
    uVar2 = FUN_001030f8(param_1,uVar2,lVar1,param_4);
    *(undefined8 *)(lVar1 + 0x18) = uVar2;
  }
  local_38 = FUN_0010351a(param_2);
  local_40 = lVar1;
  while (local_38 != 0) {
    lVar3 = FUN_001034a0(param_1,local_38,param_4);
    *(long *)(local_40 + 0x10) = lVar3;
    *(long *)(lVar3 + 8) = local_40;
    if (*(long *)(local_38 + 0x18) != 0) {
      uVar2 = FUN_00103504(local_38);
      uVar2 = FUN_001030f8(param_1,uVar2,lVar3,param_4);
      *(undefined8 *)(lVar3 + 0x18) = uVar2;
    }
    local_38 = FUN_0010351a(local_38);
    local_40 = lVar3;
  }
  return lVar1;
}




void FUN_00103028(undefined8 *param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_001033d7(param_2);
  *param_1 = *puVar1;
  param_1[1] = *param_3;
  return;
}




void FUN_00103b2a(float param_1)

{
  printf("%f\n",(double)param_1);
  return;
}




undefined8 FUN_00102316(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar1 = FUN_00102bf0(param_1);
  uVar2 = FUN_00102304(param_4);
  uVar3 = FUN_001022f2(param_3);
  uVar4 = FUN_001022e0(param_2);
  FUN_00102c1c(param_1,uVar1,uVar4,uVar3,uVar2);
  return uVar1;
}




void FUN_001030ce(void)

{
  return;
}




undefined8 FUN_00102946(long param_1,long param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  uVar1 = FUN_00102a6c(param_1);
  uVar2 = FUN_001030e2(param_2);
  uVar1 = FUN_001030f8(param_1,uVar2,uVar1,param_3);
  puVar3 = (undefined8 *)FUN_00102f72(param_1);
  uVar2 = FUN_00103267(uVar1);
  *puVar3 = uVar2;
  puVar3 = (undefined8 *)FUN_00102d60(param_1);
  uVar2 = FUN_00103285(uVar1);
  *puVar3 = uVar2;
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  return uVar1;
}




undefined8 FUN_001022e0(undefined8 param_1)

{
  return param_1;
}




undefined8 FUN_00101d9a(long *param_1,long *param_2)

{
  return CONCAT71((int7)((ulong)*param_2 >> 8),*param_1 == *param_2);
}




void FUN_00104002(void)

{
  return;
}




bool FUN_00104153(pthread_t *param_1)

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




long FUN_00102d60(long param_1)

{
  return param_1 + 0x20;
}




undefined8 FUN_00103504(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}




undefined8 FUN_001030a0(undefined8 param_1,undefined8 param_2)

{
  FUN_001028ea(param_1,param_2);
  return param_1;
}




void FUN_001032b6(undefined8 param_1,undefined8 param_2)

{
  FUN_00103530(param_1,param_2);
  return;
}




void FUN_00101a7c(undefined8 param_1)

{
  FUN_00101cc2(param_1);
  return;
}




void FUN_00103fc0(void)

{
  return;
}




void FUN_001035bc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  undefined8 uVar1;
  long in_FS_OFFSET;
  undefined local_38 [8];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_001022e0(param_3);
  uVar1 = FUN_001022f2(param_4);
  FUN_00101e42(local_38,uVar1);
  FUN_00102304(param_5);
  uVar1 = FUN_001018a8(0x10,param_2);
                    /* try { // try from 00103644 to 00103648 has its CatchHandler @ 0010364b */
  FUN_001036fe(uVar1,local_38);
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




undefined8 FUN_001032a4(undefined8 param_1)

{
  return param_1;
}




undefined8 FUN_00102131(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}




void FUN_001022a0(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00102b96(param_2);
  uVar1 = FUN_00102bb4(uVar1);
  FUN_00102bc6(param_1,uVar1);
  return;
}




void FUN_00102bf0(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_001032a4(param_1);
  FUN_00103339(uVar1,1);
  return;
}




void FUN_00103fb5(void)

{
  return;
}




/* WARNING: Removing unreachable block (ram,0x001014a3) */
/* WARNING: Removing unreachable block (ram,0x001014af) */

void FUN_00101490(void)

{
  return;
}



