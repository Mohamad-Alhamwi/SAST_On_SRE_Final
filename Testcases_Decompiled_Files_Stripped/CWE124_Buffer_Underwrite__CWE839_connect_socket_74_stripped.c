
undefined8 FUN_00104d7c(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_0010352a(param_1);
  uVar2 = FUN_00104d6a(param_2);
  FUN_00104dc8(param_1,uVar1,uVar2);
  return uVar1;
}




void FUN_00104f91(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




/* WARNING: Removing unreachable block (ram,0x00102543) */
/* WARNING: Removing unreachable block (ram,0x0010254f) */

void FUN_00102530(void)

{
  return;
}




void FUN_001039f0(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_00102cec(param_2);
  uVar2 = FUN_00103aac(param_1);
  FUN_00103c24(uVar2,uVar1);
  return;
}




void FUN_001047ce(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 local_28;
  
  local_28 = param_2;
  while (local_28 != 0) {
    uVar1 = FUN_00103936(local_28);
    FUN_001047ce(param_1,uVar1);
    lVar2 = FUN_00103a6e(local_28);
    FUN_00103334(param_1,local_28);
    local_28 = lVar2;
  }
  return;
}




undefined8 FUN_00102daa(undefined8 param_1)

{
  return param_1;
}




undefined8 FUN_001049f4(long param_1,long param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  uVar1 = FUN_001033a6(param_1);
  uVar2 = FUN_00104ade(param_2);
  uVar1 = FUN_00104af4(param_1,uVar2,uVar1,param_3);
  puVar3 = (undefined8 *)FUN_001038ac(param_1);
  uVar2 = FUN_00104c63(uVar1);
  *puVar3 = uVar2;
  puVar3 = (undefined8 *)FUN_0010369a(param_1);
  uVar2 = FUN_00104c81(uVar1);
  *puVar3 = uVar2;
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  return uVar1;
}




undefined8 FUN_0010538e(void)

{
  return 1;
}




void FUN_00105118(uint *param_1)

{
  printf("%d -- %d\n",(ulong)*param_1,(ulong)param_1[1]);
  return;
}




undefined8 FUN_00103634(undefined8 *param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00103372(&local_18,*param_1);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00105408(void)

{
  return;
}




undefined8 FUN_00104ade(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}




undefined8 FUN_0010539d(void)

{
  return 0;
}




undefined8 FUN_00104947(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00104a9c(param_1,param_2);
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1;
}




void FUN_00104aca(void)

{
  return;
}




undefined8 FUN_00104d04(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}




void FUN_0010514b(long param_1,ulong param_2)

{
  ulong local_10;
  
  for (local_10 = 0; local_10 < param_2; local_10 = local_10 + 1) {
    printf("%02x",(ulong)*(byte *)(local_10 + param_1));
  }
  puts("");
  return;
}




void FUN_0010424a(void)

{
  int __fd;
  int iVar1;
  ssize_t sVar2;
  int *piVar3;
  long in_FS_OFFSET;
  int local_b4;
  undefined local_a8 [48];
  undefined4 local_78 [12];
  sockaddr local_48;
  char local_2e [14];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_001045fe(local_a8);
  local_b4 = -1;
  __fd = socket(2,1,6);
  if (__fd != -1) {
    memset(&local_48,0,0x10);
    local_48.sa_family = 2;
    local_48.sa_data._2_4_ = inet_addr("127.0.0.1");
    local_48.sa_data._0_2_ = htons(0x6987);
                    /* try { // try from 00104300 to 00104401 has its CatchHandler @ 00104450 */
    iVar1 = connect(__fd,&local_48,0x10);
    if (iVar1 != -1) {
      sVar2 = recv(__fd,local_2e,0xd,0);
      iVar1 = (int)sVar2;
      if ((iVar1 != -1) && (iVar1 != 0)) {
        local_2e[iVar1] = '\0';
        local_b4 = atoi(local_2e);
      }
    }
  }
  if (__fd != -1) {
    close(__fd);
  }
  local_78[0] = 0;
  piVar3 = (int *)FUN_00102858(local_a8,local_78);
  *piVar3 = local_b4;
  local_78[0] = 1;
  piVar3 = (int *)FUN_00102858(local_a8,local_78);
  *piVar3 = local_b4;
  local_78[0] = 2;
  piVar3 = (int *)FUN_00102858(local_a8,local_78);
  *piVar3 = local_b4;
  FUN_0010463e(local_78,local_a8);
                    /* try { // try from 00104409 to 0010440d has its CatchHandler @ 0010443b */
  FUN_00102767(local_78);
  FUN_0010461e(local_78);
  FUN_0010461e(local_a8);
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_001053dc(void)

{
  return;
}




undefined8 FUN_00103dae(undefined8 param_1)

{
  return param_1;
}




undefined4 FUN_00102a3a(undefined8 param_1,int *param_2,int *param_3)

{
  return CONCAT31((int3)((uint)*param_3 >> 8),*param_2 < *param_3);
}




void FUN_00104dc8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  FUN_0010282f(0x28,param_2);
  uVar1 = FUN_00104d6a(param_3);
  uVar2 = FUN_00102cec(param_2);
  uVar3 = FUN_00103aac(param_1);
  FUN_00104e36(uVar3,uVar2,uVar1);
  return;
}




void FUN_00105687(pthread_mutex_t *param_1)

{
  pthread_mutex_lock(param_1);
  return;
}




void FUN_0010546b(void)

{
  return;
}




ulong FUN_001052af(long param_1,ulong param_2,long param_3)

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
    __isoc99_swscanf(local_18 * 8 + param_3,&DAT_001060f4,local_1c);
    *(char *)(local_18 + param_1) = local_1c[0];
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




undefined8 FUN_001029cc(long *param_1,long *param_2)

{
  return CONCAT71((int7)((ulong)*param_2 >> 8),*param_1 == *param_2);
}




void FUN_00102767(undefined8 param_1)

{
  int *piVar1;
  long in_FS_OFFSET;
  undefined4 local_44;
  int local_40;
  int local_3c;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_44 = 2;
  piVar1 = (int *)FUN_00102858(param_1,&local_44);
  local_3c = *piVar1;
  local_38 = 0;
  local_30 = 0;
  local_28 = 0;
  local_20 = 0;
  local_18 = 0;
  if ((local_3c < 0) || (9 < local_3c)) {
    FUN_00104ebb("ERROR: Array index is out-of-bounds");
  }
  else {
    *(undefined4 *)((long)&local_38 + (long)local_3c * 4) = 1;
    for (local_40 = 0; local_40 < 10; local_40 = local_40 + 1) {
      FUN_00104f13(*(undefined4 *)((long)&local_38 + (long)local_40 * 4));
    }
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00105012(char param_1)

{
  printf("%02x\n",(ulong)(uint)(int)param_1);
  return;
}




void FUN_001048d4(undefined8 param_1,undefined8 param_2)

{
  long in_FS_OFFSET;
  undefined local_18 [8];
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_001049d6(local_18,param_1);
  FUN_001049f4(param_1,param_2,local_18);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00102cec(long param_1)

{
  FUN_0010347a(param_1 + 0x20);
  return;
}




undefined8 FUN_00104a9c(undefined8 param_1,undefined8 param_2)

{
  FUN_00104998(param_1,param_2);
  return param_1;
}




undefined8
FUN_0010324a(long param_1,long param_2,_Rb_tree_node_base *param_3,_Rb_tree_node_base *param_4)

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
    p_Var3 = (_Rb_tree_node_base *)FUN_001033a6(param_1);
    if (param_3 != p_Var3) {
      uVar4 = FUN_001036b0(param_3);
      uVar5 = FUN_001031f7(param_4);
      cVar1 = FUN_00102a3a(param_1,uVar5,uVar4);
      if (cVar1 == '\0') {
        bVar2 = false;
        goto LAB_001032ce;
      }
    }
  }
  bVar2 = true;
LAB_001032ce:
  std::_Rb_tree_insert_and_rebalance(bVar2,param_4,param_3,(_Rb_tree_node_base *)(param_1 + 8));
  *(long *)(param_1 + 0x28) = *(long *)(param_1 + 0x28) + 1;
  FUN_00103372(&local_28,param_4);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_28;
}




/* WARNING: Removing unreachable block (ram,0x00102584) */
/* WARNING: Removing unreachable block (ram,0x00102590) */

void FUN_00102560(void)

{
  return;
}




void FUN_00102845(void)

{
  return;
}




void FUN_0010463e(undefined8 param_1,undefined8 param_2)

{
  FUN_00104702(param_1,param_2);
  return;
}




void FUN_001034d0(undefined8 param_1)

{
  FUN_00103a96(param_1);
  return;
}




void FUN_00104480(void)

{
  FUN_0010411a();
  FUN_0010424a();
  return;
}




void FUN_001038c2(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_00103b5c(param_2);
  *param_1 = *puVar1;
  puVar1 = (undefined8 *)FUN_00103b5c(param_3);
  param_1[1] = *puVar1;
  return;
}




void FUN_0010478e(undefined8 param_1)

{
  FUN_00104938(param_1);
  return;
}




undefined8 FUN_00103a6e(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}




void FUN_001056f0(undefined4 param_1,undefined8 param_2,undefined8 param_3)

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




undefined8 FUN_0010282f(undefined8 param_1,undefined8 param_2)

{
  return param_2;
}




void FUN_00104e36(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00104d6a(param_3);
  FUN_00104e74(param_1,param_2,uVar1);
  return;
}




long FUN_001033a6(long param_1)

{
  return param_1 + 8;
}




void FUN_001046c4(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00103390(param_1);
  FUN_001047ce(param_1,uVar1);
  FUN_001045be(param_1);
  return;
}




undefined8 FUN_00102dbc(undefined8 param_1)

{
  return param_1;
}




void FUN_00104ee1(long param_1)

{
  if (param_1 != 0) {
    wprintf(L"%ls\n",param_1);
  }
  return;
}




undefined8 FUN_00103a84(undefined8 param_1)

{
  return param_1;
}




void FUN_001036b0(undefined8 param_1)

{
  FUN_001031f7(param_1);
  return;
}




void FUN_00102cde(void)

{
  return;
}




void FUN_00104ebb(char *param_1)

{
  if (param_1 != (char *)0x0) {
    puts(param_1);
  }
  return;
}




long FUN_00102858(undefined8 param_1,undefined8 param_2)

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
  local_38 = FUN_00102984(param_1,param_2);
  local_28 = FUN_001029ae(param_1);
  cVar2 = FUN_001029cc(&local_38,&local_28);
  if (cVar2 == '\0') {
    FUN_001029f2(param_1);
    uVar3 = FUN_00102a18(&local_38);
    cVar2 = FUN_00102a3a(local_30,param_2,uVar3);
    if (cVar2 == '\0') {
      bVar1 = false;
      goto LAB_001028f8;
    }
  }
  bVar1 = true;
LAB_001028f8:
  if (bVar1) {
    uVar3 = FUN_00102a61(param_2);
    FUN_00102a9e(local_30,uVar3);
    FUN_00102ad6(&local_28,&local_38);
    local_38 = FUN_00102af8(param_1,local_28,&DAT_00106008,local_30,&local_39);
  }
  lVar4 = FUN_00102a18(&local_38);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return lVar4 + 4;
}




void FUN_00103e66(undefined4 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined4 *puVar2;
  
  uVar1 = FUN_00103ea8(param_2);
  puVar2 = (undefined4 *)FUN_001034ee(uVar1);
  *param_1 = *puVar2;
  param_1[1] = 0;
  return;
}




void FUN_001026a8(undefined8 param_1)

{
  int *piVar1;
  long in_FS_OFFSET;
  undefined4 local_44;
  int local_40;
  int local_3c;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_44 = 2;
  piVar1 = (int *)FUN_00102858(param_1,&local_44);
  local_3c = *piVar1;
  local_38 = 0;
  local_30 = 0;
  local_28 = 0;
  local_20 = 0;
  local_18 = 0;
  if (local_3c < 10) {
    *(undefined4 *)((long)&local_38 + (long)local_3c * 4) = 1;
    for (local_40 = 0; local_40 < 10; local_40 = local_40 + 1) {
      FUN_00104f13(*(undefined4 *)((long)&local_38 + (long)local_40 * 4));
    }
  }
  else {
    FUN_00104ebb("ERROR: Array index is negative.");
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00103556(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  FUN_0010282f(0x28,param_2);
  uVar1 = FUN_00102dbc(param_5);
  uVar2 = FUN_00102daa(param_4);
  uVar3 = FUN_00102d98(param_3);
  uVar4 = FUN_00102cec(param_2);
  uVar5 = FUN_00103aac(param_1);
                    /* try { // try from 001035e5 to 001035e9 has its CatchHandler @ 001035ec */
  FUN_00103aec(uVar5,uVar4,uVar3,uVar2,uVar1);
  return;
}




void FUN_001053c6(void)

{
  return;
}




undefined8 FUN_00103d9b(undefined8 param_1)

{
  return param_1;
}




undefined8 FUN_00104d6a(undefined8 param_1)

{
  return param_1;
}




void FUN_00104998(undefined8 param_1,undefined8 param_2)

{
  FUN_00104aca(param_1,param_2);
  return;
}




void FUN_00104e74(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  puVar1 = (undefined8 *)FUN_00104d6a(param_3);
  puVar2 = (undefined8 *)FUN_0010282f(8,param_2);
  *puVar2 = *puVar1;
  return;
}




void FUN_00103bbe(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_00103d9b(param_2);
  *param_1 = *puVar1;
  puVar1 = (undefined8 *)FUN_00103b5c(param_3);
  param_1[1] = *puVar1;
  return;
}




void FUN_001039b8(long param_1)

{
  FUN_00103c06(param_1 + 0x20);
  return;
}




void FUN_00105476(void)

{
  return;
}




undefined8 FUN_00102d98(undefined8 param_1)

{
  return param_1;
}




void FUN_0010541e(void)

{
  return;
}




void FUN_00102a18(undefined8 *param_1)

{
  FUN_00102cec(*param_1);
  return;
}




void FUN_00102ad6(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  return;
}




undefined8 FUN_00102dce(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar1 = FUN_0010352a(param_1);
  uVar2 = FUN_00102dbc(param_4);
  uVar3 = FUN_00102daa(param_3);
  uVar4 = FUN_00102d98(param_2);
  FUN_00103556(param_1,uVar1,uVar4,uVar3,uVar2);
  return uVar1;
}




void FUN_001053e7(void)

{
  return;
}




void FUN_00104702(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  
  FUN_00104838(param_1,param_2);
  lVar1 = FUN_001048a8(param_2);
  if (lVar1 != 0) {
    puVar2 = (undefined8 *)FUN_001048be(param_1);
                    /* try { // try from 0010475d to 00104761 has its CatchHandler @ 00104767 */
    uVar3 = FUN_001048d4(param_1,param_2);
    *puVar2 = uVar3;
  }
  return;
}




void FUN_001053fd(void)

{
  return;
}




undefined8 FUN_00103b5c(undefined8 param_1)

{
  return param_1;
}




void FUN_001047ae(void)

{
  return;
}




ulong FUN_001051ab(long param_1,ulong param_2,long param_3)

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
    __isoc99_sscanf(local_18 * 2 + param_3,&DAT_001060ec,local_1c);
    *(char *)(local_18 + param_1) = local_1c[0];
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




undefined4 FUN_001029f2(undefined8 param_1)

{
  undefined4 unaff_EBX;
  
  FUN_00102cde(param_1);
  return unaff_EBX;
}




void FUN_00104fe7(undefined8 param_1)

{
  printf("%zu\n",param_1);
  return;
}




void _FINI_0(void)

{
  if (DAT_0010a020 == '\0') {
    if (PTR___cxa_finalize_00109fd8 != (undefined *)0x0) {
      __cxa_finalize(PTR_LOOP_0010a008);
    }
    FUN_00102530();
    DAT_0010a020 = 1;
    return;
  }
  return;
}




undefined4 * FUN_00104ca0(undefined8 param_1,undefined4 *param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined4 *puVar2;
  
  uVar1 = FUN_001039b8(param_2);
  puVar2 = (undefined4 *)FUN_00104d30(param_3,uVar1);
  *puVar2 = *param_2;
  *(undefined8 *)(puVar2 + 4) = 0;
  *(undefined8 *)(puVar2 + 6) = 0;
  return puVar2;
}




void FUN_001046a4(undefined8 param_1)

{
  FUN_001047be(param_1);
  return;
}




void FUN_00105455(void)

{
  return;
}




void FUN_00105460(void)

{
  return;
}




void FUN_00103ea8(undefined8 param_1)

{
  FUN_00103ec6(param_1);
  return;
}




undefined8 * FUN_0010390a(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = std::_Rb_tree_decrement((_Rb_tree_node_base *)*param_1);
  *param_1 = uVar1;
  return param_1;
}




void FUN_00104554(undefined4 *param_1)

{
  *param_1 = 0;
  FUN_0010457e(param_1);
  return;
}




void FUN_001056c5(pthread_mutex_t *param_1)

{
  pthread_mutex_destroy(param_1);
  free(param_1);
  return;
}




void FUN_00102a74(undefined8 param_1,undefined8 param_2)

{
  FUN_00102d58(param_1,param_2);
  return;
}




undefined8 FUN_0010560e(undefined8 *param_1)

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




undefined8 FUN_00103a96(undefined8 *param_1)

{
  return *param_1;
}




void FUN_00104d30(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *param_1;
  uVar2 = FUN_00104d6a(param_2);
  FUN_00104d7c(uVar1,uVar2);
  return;
}




undefined8 FUN_00102d0e(undefined8 param_1)

{
  return param_1;
}




void FUN_0010544a(void)

{
  return;
}




long FUN_001038ac(long param_1)

{
  return param_1 + 0x18;
}




undefined8 FUN_00102c8e(long param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00103372(&local_18,param_1 + 8);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




undefined8 FUN_001055eb(void *param_1)

{
  free(param_1);
  return 1;
}




void FUN_00104938(void)

{
  return;
}




void FUN_001053d1(void)

{
  return;
}




void FUN_0010347a(undefined8 param_1)

{
  FUN_00103a84(param_1);
  return;
}




void FUN_00104c63(undefined8 param_1)

{
  FUN_001044fa(param_1);
  return;
}




void FUN_001053f2(void)

{
  return;
}




undefined8 FUN_00103936(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}




long FUN_00104527(long param_1)

{
  undefined8 local_10;
  
  for (local_10 = param_1; *(long *)(local_10 + 0x18) != 0; local_10 = *(long *)(local_10 + 0x18)) {
  }
  return local_10;
}




undefined8
FUN_00102af8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  uVar1 = FUN_00102dbc(param_5);
  uVar2 = FUN_00102daa(param_4);
  uVar3 = FUN_00102d98(param_3);
  local_40 = FUN_00102dce(param_1,uVar3,uVar2,uVar1);
                    /* try { // try from 00102b74 to 00102bb7 has its CatchHandler @ 00102bf5 */
  uVar1 = FUN_001031f7(local_40);
  local_38 = FUN_00102e4e(param_1,param_2,uVar1);
  if (local_38._8_8_ == 0) {
    FUN_00103334(param_1,local_40);
    FUN_00103372(&local_48,local_38._0_8_);
  }
  else {
    local_48 = FUN_0010324a(param_1,local_38._0_8_,local_38._8_8_,local_40);
  }
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_48;
}




void FUN_00104c81(undefined8 param_1)

{
  FUN_00104527(param_1);
  return;
}




void FUN_001050ea(undefined8 param_1)

{
  printf("%g\n",param_1);
  return;
}




void FUN_001029ae(undefined8 param_1)

{
  FUN_00102c8e(param_1);
  return;
}




void FUN_00103aec(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = FUN_00102dbc(param_5);
  uVar2 = FUN_00102daa(param_4);
  uVar3 = FUN_00102d98(param_3);
  FUN_00103cd0(param_1,param_2,uVar3,uVar2,uVar1);
  return;
}




undefined8 FUN_00102a61(undefined8 param_1)

{
  return param_1;
}




void FUN_00103500(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00102d0e(param_2);
  *param_1 = uVar1;
  return;
}




void FUN_00103c80(undefined8 param_1,ulong param_2)

{
  ulong uVar1;
  
  uVar1 = FUN_00103dfc(param_1);
  if (uVar1 < param_2) {
    std::__throw_bad_alloc();
  }
  operator_new(param_2 * 0x28);
  return;
}




/* WARNING: Type propagation algorithm not settling */

long FUN_00102e4e(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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
  lVar3 = FUN_00103634(&local_68);
  local_50 = lVar3;
  lVar4 = FUN_001033a6(local_60);
  uVar7 = local_60;
  if (lVar3 != lVar4) {
    uVar6 = FUN_001036b0(local_50);
    cVar2 = FUN_00102a3a(uVar7,param_3,uVar6);
    lVar3 = local_50;
    uVar7 = local_60;
    if (cVar2 == '\0') {
      uVar6 = FUN_001036b0(local_50);
      cVar2 = FUN_00102a3a(uVar7,uVar6,param_3);
      lVar3 = local_50;
      if (cVar2 == '\0') {
        local_48[1] = 0;
        FUN_00103978(local_48 + 2,&local_50,local_48 + 1);
      }
      else {
        local_48[0] = local_50;
        plVar8 = (long *)FUN_0010369a(local_60);
        uVar7 = local_60;
        if (lVar3 == *plVar8) {
          uVar7 = FUN_0010369a(local_60);
          local_48[1] = 0;
          FUN_001036ce(local_48 + 2,local_48 + 1,uVar7);
        }
        else {
          puVar5 = (undefined8 *)FUN_0010394c(local_48);
          uVar6 = FUN_001036b0(*puVar5);
          cVar2 = FUN_00102a3a(uVar7,param_3,uVar6);
          if (cVar2 == '\0') {
            local_48[2] = FUN_0010370e(local_60,param_3);
          }
          else {
            lVar3 = FUN_00103936(local_50);
            if (lVar3 == 0) {
              local_48[1] = 0;
              FUN_001036ce(local_48 + 2,local_48 + 1,&local_50);
            }
            else {
              FUN_001038c2(local_48 + 2,local_48,local_48);
            }
          }
        }
      }
    }
    else {
      local_48[0] = local_50;
      plVar8 = (long *)FUN_001038ac(local_60);
      uVar7 = local_60;
      if (lVar3 == *plVar8) {
        uVar7 = FUN_001038ac(local_60);
        uVar6 = FUN_001038ac(local_60);
        FUN_001038c2(local_48 + 2,uVar6,uVar7);
      }
      else {
        puVar5 = (undefined8 *)FUN_0010390a(local_48);
        uVar6 = FUN_001036b0(*puVar5);
        cVar2 = FUN_00102a3a(uVar7,uVar6,param_3);
        if (cVar2 == '\0') {
          local_48[2] = FUN_0010370e(local_60,param_3);
        }
        else {
          lVar3 = FUN_00103936(local_48[0]);
          if (lVar3 == 0) {
            local_48[1] = 0;
            FUN_001036ce(local_48 + 2,local_48 + 1,local_48);
          }
          else {
            FUN_001038c2(local_48 + 2,&local_50,&local_50);
          }
        }
      }
    }
    goto LAB_001031dc;
  }
  lVar3 = FUN_00103684(local_60);
  uVar7 = local_60;
  if (lVar3 == 0) {
LAB_00102ef0:
    bVar1 = false;
  }
  else {
    puVar5 = (undefined8 *)FUN_0010369a(local_60);
    uVar6 = FUN_001036b0(*puVar5);
    cVar2 = FUN_00102a3a(uVar7,uVar6,param_3);
    if (cVar2 == '\0') goto LAB_00102ef0;
    bVar1 = true;
  }
  if (bVar1) {
    uVar7 = FUN_0010369a(local_60);
    local_48[1] = 0;
    FUN_001036ce(local_48 + 2,local_48 + 1,uVar7);
  }
  else {
    local_48[2] = FUN_0010370e(local_60,param_3);
  }
LAB_001031dc:
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_48[2];
}




undefined8 FUN_00103aac(undefined8 param_1)

{
  return param_1;
}




void FUN_00102020(void)

{
  (*(code *)PTR_00109ea0)();
  return;
}




void FUN_00103ec6(undefined8 param_1)

{
  FUN_001034d0(param_1);
  return;
}




void FUN_00103e14(undefined8 param_1,undefined8 param_2)

{
  long in_FS_OFFSET;
  undefined local_29;
  undefined8 local_28;
  undefined8 local_20;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_28 = param_2;
  local_20 = param_1;
  FUN_00103e66(param_1,param_2,&local_29);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




undefined8 * FUN_0010394c(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = std::_Rb_tree_increment((_Rb_tree_node_base *)*param_1);
  *param_1 = uVar1;
  return param_1;
}




void FUN_001049c2(void)

{
  return;
}




undefined8 FUN_001039da(undefined8 param_1,undefined8 param_2)

{
  return param_2;
}




undefined8 FUN_00104d1a(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}




void FUN_0010503d(undefined4 param_1)

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




void FUN_00103abe(undefined8 param_1,undefined8 param_2)

{
  FUN_00103c80(param_1,param_2,0);
  return;
}




undefined8 FUN_001048a8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}




void FUN_001045fe(undefined8 param_1)

{
  FUN_001045de(param_1);
  return;
}




undefined8 FUN_00102a9e(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00102d0e(param_2);
  FUN_00102d20(param_1,uVar1);
  return param_1;
}




void FUN_001036ce(undefined8 *param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  
  *param_1 = *param_2;
  puVar1 = (undefined8 *)FUN_00103b5c(param_3);
  param_1[1] = *puVar1;
  return;
}




void FUN_00104668(long param_1)

{
  FUN_0010478e(param_1);
  FUN_001047ae(param_1);
  FUN_00104554(param_1 + 8);
  return;
}




undefined8 FUN_00103390(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}




void FUN_00105434(void)

{
  return;
}




void FUN_00103c06(undefined8 param_1)

{
  FUN_00103dae(param_1);
  return;
}




undefined8 FUN_00104495(void)

{
  time_t tVar1;
  
  tVar1 = time((time_t *)0x0);
  srand((uint)tVar1);
  FUN_00104ebb("Calling good()...");
  FUN_00104480();
  FUN_00104ebb("Finished good()");
  FUN_00104ebb("Calling bad()...");
  FUN_00103ee4();
  FUN_00104ebb("Finished bad()");
  return 0;
}




undefined8 FUN_001034ee(undefined8 param_1)

{
  return param_1;
}




void FUN_001047be(void)

{
  return;
}




undefined8 FUN_00103dfc(void)

{
  return 0x333333333333333;
}




void FUN_00102c3e(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_001033a6(param_1);
  uVar2 = FUN_00103390(param_1);
  FUN_001033bc(param_1,uVar2,uVar1,param_2);
  return;
}




void FUN_001045be(undefined8 param_1)

{
  FUN_001046a4(param_1);
  return;
}




void FUN_00102d20(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00102d0e(param_2);
  FUN_00103498(param_1,uVar1);
  return;
}




void FUN_001025e9(undefined8 param_1)

{
  int *piVar1;
  long in_FS_OFFSET;
  undefined4 local_44;
  int local_40;
  int local_3c;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_44 = 2;
  piVar1 = (int *)FUN_00102858(param_1,&local_44);
  local_3c = *piVar1;
  local_38 = 0;
  local_30 = 0;
  local_28 = 0;
  local_20 = 0;
  local_18 = 0;
  if (local_3c < 10) {
    *(undefined4 *)((long)&local_38 + (long)local_3c * 4) = 1;
    for (local_40 = 0; local_40 < 10; local_40 = local_40 + 1) {
      FUN_00104f13(*(undefined4 *)((long)&local_38 + (long)local_40 * 4));
    }
  }
  else {
    FUN_00104ebb("ERROR: Array index is negative.");
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




long FUN_0010369a(long param_1)

{
  return param_1 + 0x20;
}




void FUN_00104838(long param_1,undefined8 param_2)

{
  long lVar1;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00104947(param_1,param_2);
  FUN_001049c2(param_1,param_2);
  FUN_00104554(param_1 + 8);
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_0010548c(long param_1)

{
  (**(code **)(param_1 + 8))(*(undefined8 *)(param_1 + 0x10));
                    /* WARNING: Subroutine does not return */
  pthread_exit((void *)0x0);
}




undefined8 FUN_0010370e(undefined8 param_1,undefined8 param_2)

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
  local_58 = FUN_00103390(param_1);
  local_50 = FUN_001033a6(param_1);
  local_59 = '\x01';
  while (local_58 != 0) {
    local_50 = local_58;
    uVar2 = FUN_001031f7(local_58);
    local_59 = FUN_00102a3a(param_1,param_2,uVar2);
    if (local_59 == '\0') {
      local_58 = FUN_00103936(local_58);
    }
    else {
      local_58 = FUN_00103a6e(local_58);
    }
  }
  FUN_00103372(&local_48,local_50);
  if (local_59 != '\0') {
    local_38[0] = FUN_00103b6e(param_1);
    cVar1 = FUN_001029cc(&local_48,local_38);
    if (cVar1 != '\0') {
      FUN_00103bbe(local_38,&local_58,&local_50);
      goto LAB_00103890;
    }
    FUN_0010390a(&local_48);
  }
  uVar2 = FUN_001036b0(local_48);
  cVar1 = FUN_00102a3a(param_1,uVar2,param_2);
  if (cVar1 == '\0') {
    local_40 = 0;
    FUN_00103978(local_38,&local_48,&local_40);
  }
  else {
    FUN_00103bbe(local_38,&local_58,&local_50);
  }
LAB_00103890:
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return local_38[0];
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_001031f7(undefined8 param_1)

{
  undefined8 uVar1;
  long in_FS_OFFSET;
  undefined local_11;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  uVar1 = FUN_001039b8(param_1);
  FUN_001039da(&local_11,uVar1);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_0010352a(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00103aac(param_1);
  FUN_00103abe(uVar1,1);
  return;
}




long FUN_00104af4(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 local_40;
  undefined8 local_38;
  
  lVar1 = FUN_00104ca0(param_1,param_2,param_4);
  *(undefined8 *)(lVar1 + 8) = param_3;
  if (*(long *)(param_2 + 0x18) != 0) {
    uVar2 = FUN_00104d04(param_2);
                    /* try { // try from 00104b63 to 00104bf5 has its CatchHandler @ 00104c21 */
    uVar2 = FUN_00104af4(param_1,uVar2,lVar1,param_4);
    *(undefined8 *)(lVar1 + 0x18) = uVar2;
  }
  local_38 = FUN_00104d1a(param_2);
  local_40 = lVar1;
  while (local_38 != 0) {
    lVar3 = FUN_00104ca0(param_1,local_38,param_4);
    *(long *)(local_40 + 0x10) = lVar3;
    *(long *)(lVar3 + 8) = local_40;
    if (*(long *)(local_38 + 0x18) != 0) {
      uVar2 = FUN_00104d04(local_38);
      uVar2 = FUN_00104af4(param_1,uVar2,lVar3,param_4);
      *(undefined8 *)(lVar3 + 0x18) = uVar2;
    }
    local_38 = FUN_00104d1a(local_38);
    local_40 = lVar3;
  }
  return lVar1;
}




void FUN_0010543f(void)

{
  return;
}




void FUN_00103ee4(void)

{
  int __fd;
  int iVar1;
  ssize_t sVar2;
  int *piVar3;
  long in_FS_OFFSET;
  int local_b4;
  undefined local_a8 [48];
  undefined4 local_78 [12];
  sockaddr local_48;
  char local_2e [14];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_001045fe(local_a8);
  local_b4 = -1;
  __fd = socket(2,1,6);
  if (__fd != -1) {
    memset(&local_48,0,0x10);
    local_48.sa_family = 2;
    local_48.sa_data._2_4_ = inet_addr("127.0.0.1");
    local_48.sa_data._0_2_ = htons(0x6987);
                    /* try { // try from 00103f9a to 0010409b has its CatchHandler @ 001040ea */
    iVar1 = connect(__fd,&local_48,0x10);
    if (iVar1 != -1) {
      sVar2 = recv(__fd,local_2e,0xd,0);
      iVar1 = (int)sVar2;
      if ((iVar1 != -1) && (iVar1 != 0)) {
        local_2e[iVar1] = '\0';
        local_b4 = atoi(local_2e);
      }
    }
  }
  if (__fd != -1) {
    close(__fd);
  }
  local_78[0] = 0;
  piVar3 = (int *)FUN_00102858(local_a8,local_78);
  *piVar3 = local_b4;
  local_78[0] = 1;
  piVar3 = (int *)FUN_00102858(local_a8,local_78);
  *piVar3 = local_b4;
  local_78[0] = 2;
  piVar3 = (int *)FUN_00102858(local_a8,local_78);
  *piVar3 = local_b4;
  FUN_0010463e(local_78,local_a8);
                    /* try { // try from 001040a3 to 001040a7 has its CatchHandler @ 001040d5 */
  FUN_001025e9(local_78);
  FUN_0010461e(local_78);
  FUN_0010461e(local_a8);
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




bool FUN_00105590(pthread_t *param_1)

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




void FUN_00104f13(uint param_1)

{
  printf("%d\n",(ulong)param_1);
  return;
}




void FUN_0010457e(long param_1)

{
  *(undefined8 *)(param_1 + 8) = 0;
  *(long *)(param_1 + 0x10) = param_1;
  *(long *)(param_1 + 0x18) = param_1;
  *(undefined8 *)(param_1 + 0x20) = 0;
  return;
}




void FUN_001050bf(byte param_1)

{
  printf("%02x\n",(ulong)param_1);
  return;
}




void FUN_0010461e(undefined8 param_1)

{
  FUN_001046c4(param_1);
  return;
}




long FUN_001048be(long param_1)

{
  return param_1 + 0x10;
}




void FUN_001056a6(pthread_mutex_t *param_1)

{
  pthread_mutex_unlock(param_1);
  return;
}




void FUN_00103498(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00102d0e(param_2);
  FUN_00103500(param_1,uVar1);
  return;
}




void FUN_00105429(void)

{
  return;
}




void FUN_00104fbc(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




void FUN_0010411a(void)

{
  undefined4 *puVar1;
  long in_FS_OFFSET;
  undefined local_88 [48];
  undefined4 local_58 [14];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_001045fe(local_88);
  local_58[0] = 0;
                    /* try { // try from 0010416e to 001041d1 has its CatchHandler @ 0010421d */
  puVar1 = (undefined4 *)FUN_00102858(local_88,local_58);
  *puVar1 = 7;
  local_58[0] = 1;
  puVar1 = (undefined4 *)FUN_00102858(local_88,local_58);
  *puVar1 = 7;
  local_58[0] = 2;
  puVar1 = (undefined4 *)FUN_00102858(local_88,local_58);
  *puVar1 = 7;
  FUN_0010463e(local_58,local_88);
                    /* try { // try from 001041d9 to 001041dd has its CatchHandler @ 00104208 */
  FUN_001026a8(local_58);
  FUN_0010461e(local_58);
  FUN_0010461e(local_88);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00103cd0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  undefined8 uVar1;
  long in_FS_OFFSET;
  undefined local_38 [8];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00102d98(param_3);
  uVar1 = FUN_00102daa(param_4);
  FUN_00102a74(local_38,uVar1);
  FUN_00102dbc(param_5);
  uVar1 = FUN_0010282f(8,param_2);
                    /* try { // try from 00103d58 to 00103d5c has its CatchHandler @ 00103d5f */
  FUN_00103e14(uVar1,local_38);
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




undefined8 FUN_00103b6e(long param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00103372(&local_18,*(undefined8 *)(param_1 + 0x18));
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00105481(void)

{
  return;
}




void FUN_001049d6(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = param_2;
  return;
}




undefined8 FUN_001033bc(undefined8 param_1,long param_2,long param_3,undefined8 param_4)

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
    uVar2 = FUN_001031f7(local_38);
    cVar1 = FUN_00102a3a(param_1,uVar2,param_4);
    if (cVar1 == '\x01') {
      local_38 = FUN_00103936(local_38);
    }
    else {
      local_40 = local_38;
      local_38 = FUN_00103a6e(local_38);
    }
  }
  FUN_00103372(&local_28,local_40);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_28;
}




void FUN_00103c4e(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00103dd4(param_1,param_2,param_3);
  return;
}




undefined8 FUN_00103684(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}




void FUN_00105413(void)

{
  return;
}




void FUN_00103372(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = param_2;
  return;
}




void FUN_00102984(undefined8 param_1,undefined8 param_2)

{
  FUN_00102c3e(param_1,param_2);
  return;
}




void FUN_00105097(uint param_1)

{
  printf("%u\n",(ulong)param_1);
  return;
}




int FUN_001053ac(void)

{
  int iVar1;
  
  iVar1 = rand();
  return iVar1 % 2;
}




void FUN_00103a34(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00103aac(param_1);
  FUN_00103c4e(uVar1,param_2,1);
  return;
}




long FUN_001044fa(long param_1)

{
  undefined8 local_10;
  
  for (local_10 = param_1; *(long *)(local_10 + 0x10) != 0; local_10 = *(long *)(local_10 + 0x10)) {
  }
  return local_10;
}




void FUN_00103c24(undefined8 param_1,undefined8 param_2)

{
  FUN_00103dc0(param_1,param_2);
  return;
}




void FUN_00103dd4(undefined8 param_1,void *param_2)

{
  operator_delete(param_2);
  return;
}




void FUN_00105760(void)

{
  return;
}




undefined8 FUN_001054c3(pthread_t param_1,pthread_t param_2,undefined8 *param_3)

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
    iVar1 = pthread_create(&local_20,(pthread_attr_t *)0x0,FUN_0010548c,local_18);
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




void FUN_00104f67(float param_1)

{
  printf("%f\n",(double)param_1);
  return;
}




void FUN_001045de(undefined8 param_1)

{
  FUN_00104668(param_1);
  return;
}




void FUN_00103dc0(void)

{
  return;
}




void FUN_00102d58(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_001034d0(param_2);
  uVar1 = FUN_001034ee(uVar1);
  FUN_00103500(param_1,uVar1);
  return;
}




void FUN_00103334(undefined8 param_1,undefined8 param_2)

{
  FUN_001039f0(param_1,param_2);
  FUN_00103a34(param_1,param_2);
  return;
}




void FUN_00103978(undefined8 *param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_00103b5c(param_2);
  *param_1 = *puVar1;
  param_1[1] = *param_3;
  return;
}




void FUN_00104f3b(short param_1)

{
  printf("%hd\n",(ulong)(uint)(int)param_1);
  return;
}



