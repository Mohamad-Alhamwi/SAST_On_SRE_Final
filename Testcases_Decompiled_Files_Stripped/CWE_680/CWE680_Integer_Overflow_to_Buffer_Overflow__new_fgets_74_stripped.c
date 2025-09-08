
undefined8 FUN_001035da(long param_1,long param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  uVar1 = FUN_0010226a(param_1);
  uVar2 = FUN_001036c4(param_2);
  uVar1 = FUN_001036da(param_1,uVar2,uVar1,param_3);
  puVar3 = (undefined8 *)FUN_00102770(param_1);
  uVar2 = FUN_00103849(uVar1);
  *puVar3 = uVar2;
  puVar3 = (undefined8 *)FUN_0010255e(param_1);
  uVar2 = FUN_00103867(uVar1);
  *puVar3 = uVar2;
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  return uVar1;
}




undefined8 FUN_00103900(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}




undefined8 FUN_001016f3(undefined8 param_1,undefined8 param_2)

{
  return param_2;
}




undefined8 FUN_00102548(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}




void FUN_001031a4(undefined8 param_1)

{
  FUN_0010328a(param_1);
  return;
}




undefined8 FUN_00101925(undefined8 param_1)

{
  return param_1;
}




void FUN_0010162e(undefined8 param_1)

{
  int *piVar1;
  long in_FS_OFFSET;
  undefined4 local_30;
  int local_2c;
  ulong local_28;
  ulong local_20;
  undefined4 *local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_30 = 2;
  piVar1 = (int *)FUN_0010171c(param_1,&local_30);
  local_2c = *piVar1;
  local_20 = (long)local_2c << 2;
  local_18 = (undefined4 *)operator_new__(local_20);
  for (local_28 = 0; local_28 < (ulong)(long)local_2c; local_28 = local_28 + 1) {
    local_18[local_28] = 0;
  }
  FUN_00103af9(*local_18);
  if (local_18 != (undefined4 *)0x0) {
    operator_delete__(local_18);
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00103394(void)

{
  return;
}




void FUN_00103b77(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




void FUN_00103ac7(long param_1)

{
  if (param_1 != 0) {
    wprintf(L"%ls\n",param_1);
  }
  return;
}




undefined8
FUN_0010210e(long param_1,long param_2,_Rb_tree_node_base *param_3,_Rb_tree_node_base *param_4)

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
    p_Var3 = (_Rb_tree_node_base *)FUN_0010226a(param_1);
    if (param_3 != p_Var3) {
      uVar4 = FUN_00102574(param_3);
      uVar5 = FUN_001020bb(param_4);
      cVar1 = FUN_001018fe(param_1,uVar5,uVar4);
      if (cVar1 == '\0') {
        bVar2 = false;
        goto LAB_00102192;
      }
    }
  }
  bVar2 = true;
LAB_00102192:
  std::_Rb_tree_insert_and_rebalance(bVar2,param_4,param_3,(_Rb_tree_node_base *)(param_1 + 8));
  *(long *)(param_1 + 0x28) = *(long *)(param_1 + 0x28) + 1;
  FUN_00102236(&local_28,param_4);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_28;
}




void FUN_00103d31(long param_1,ulong param_2)

{
  ulong local_10;
  
  for (local_10 = 0; local_10 < param_2; local_10 = local_10 + 1) {
    printf("%02x",(ulong)*(byte *)(local_10 + param_1));
  }
  puts("");
  return;
}




void FUN_0010341e(long param_1,undefined8 param_2)

{
  long lVar1;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_0010352d(param_1,param_2);
  FUN_001035a8(param_1,param_2);
  FUN_0010313a(param_1 + 8);
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00103ba2(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




void FUN_0010328a(undefined8 param_1)

{
  FUN_001033a4(param_1);
  return;
}




void FUN_001033b4(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 local_28;
  
  local_28 = param_2;
  while (local_28 != 0) {
    uVar1 = FUN_001027fa(local_28);
    FUN_001033b4(param_1,uVar1);
    lVar2 = FUN_00102932(local_28);
    FUN_001021f8(param_1,local_28);
    local_28 = lVar2;
  }
  return;
}




undefined8 FUN_0010352d(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00103682(param_1,param_2);
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1;
}




void FUN_00103af9(uint param_1)

{
  printf("%d\n",(ulong)param_1);
  return;
}




void FUN_00102b44(undefined8 param_1,ulong param_2)

{
  ulong uVar1;
  
  uVar1 = FUN_00102cc0(param_1);
  if (uVar1 < param_2) {
    std::__throw_bad_alloc();
  }
  operator_new(param_2 * 0x28);
  return;
}




void FUN_00103c7d(uint param_1)

{
  printf("%u\n",(ulong)param_1);
  return;
}




undefined8 FUN_0010295a(undefined8 *param_1)

{
  return *param_1;
}




undefined8 FUN_00103682(undefined8 param_1,undefined8 param_2)

{
  FUN_0010357e(param_1,param_2);
  return param_1;
}




void FUN_00104025(void)

{
  return;
}




void FUN_00103fcd(void)

{
  return;
}




void FUN_00103b4d(float param_1)

{
  printf("%f\n",(double)param_1);
  return;
}




undefined8 FUN_00103962(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_001023ee(param_1);
  uVar2 = FUN_00103950(param_2);
  FUN_001039ae(param_1,uVar1,uVar2);
  return uVar1;
}




void FUN_00103224(undefined8 param_1,undefined8 param_2)

{
  FUN_001032e8(param_1,param_2);
  return;
}




void FUN_00101872(undefined8 param_1)

{
  FUN_00101b52(param_1);
  return;
}




void FUN_001033a4(void)

{
  return;
}




void FUN_00101b02(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_0010226a(param_1);
  uVar2 = FUN_00102254(param_1);
  FUN_00102280(param_1,uVar2,uVar1,param_2);
  return;
}




void FUN_00101709(void)

{
  return;
}




void FUN_00102da8(void)

{
  char *pcVar1;
  int *piVar2;
  long in_FS_OFFSET;
  int local_9c;
  undefined local_98 [48];
  undefined4 local_68 [14];
  char local_2e [14];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_001031e4(local_98);
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
    FUN_00103aa1("fgets() failed.");
  }
  else {
    local_9c = atoi(local_2e);
  }
  local_68[0] = 0;
  piVar2 = (int *)FUN_0010171c(local_98,local_68);
  *piVar2 = local_9c;
  local_68[0] = 1;
  piVar2 = (int *)FUN_0010171c(local_98,local_68);
  *piVar2 = local_9c;
  local_68[0] = 2;
  piVar2 = (int *)FUN_0010171c(local_98,local_68);
  *piVar2 = local_9c;
  FUN_00103224(local_68,local_98);
                    /* try { // try from 00102ec3 to 00102ec7 has its CatchHandler @ 00102ef5 */
  FUN_00101569(local_68);
  FUN_00103204(local_68);
  FUN_00103204(local_98);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




undefined8 FUN_00101c6e(undefined8 param_1)

{
  return param_1;
}




void FUN_00102b94(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  undefined8 uVar1;
  long in_FS_OFFSET;
  undefined local_38 [8];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00101c5c(param_3);
  uVar1 = FUN_00101c6e(param_4);
  FUN_00101938(local_38,uVar1);
  FUN_00101c80(param_5);
  uVar1 = FUN_001016f3(8,param_2);
                    /* try { // try from 00102c1c to 00102c20 has its CatchHandler @ 00102c23 */
  FUN_00102cd8(uVar1,local_38);
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_0010235c(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00101bd2(param_2);
  FUN_001023c4(param_1,uVar1);
  return;
}




long FUN_0010310c(long param_1)

{
  undefined8 local_10;
  
  for (local_10 = param_1; *(long *)(local_10 + 0x18) != 0; local_10 = *(long *)(local_10 + 0x18)) {
  }
  return local_10;
}




void FUN_00102574(undefined8 param_1)

{
  FUN_001020bb(param_1);
  return;
}




void FUN_00104046(void)

{
  return;
}




void FUN_001036b0(void)

{
  return;
}




undefined8 FUN_00101bd2(undefined8 param_1)

{
  return param_1;
}




undefined8 FUN_0010307a(void)

{
  time_t tVar1;
  
  tVar1 = time((time_t *)0x0);
  srand((uint)tVar1);
  FUN_00103aa1("Calling good()...");
  FUN_0010306a();
  FUN_00103aa1("Finished good()");
  FUN_00103aa1("Calling bad()...");
  FUN_00102da8();
  FUN_00103aa1("Finished bad()");
  return 0;
}




void FUN_00101938(undefined8 param_1,undefined8 param_2)

{
  FUN_00101c1c(param_1,param_2);
  return;
}




void FUN_00103849(undefined8 param_1)

{
  FUN_001030df(param_1);
  return;
}




/* WARNING: Removing unreachable block (ram,0x00101504) */
/* WARNING: Removing unreachable block (ram,0x00101510) */

void FUN_001014e0(void)

{
  return;
}




void FUN_00102592(undefined8 *param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  
  *param_1 = *param_2;
  puVar1 = (undefined8 *)FUN_00102a20(param_3);
  param_1[1] = *puVar1;
  return;
}




void _FINI_0(void)

{
  if (DAT_00109028 == '\0') {
    if (PTR___cxa_finalize_00108fd8 != (undefined *)0x0) {
      __cxa_finalize(PTR_LOOP_00109008);
    }
    FUN_001014b0();
    DAT_00109028 = 1;
    return;
  }
  return;
}




undefined8 FUN_00102254(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}




void FUN_00101848(undefined8 param_1,undefined8 param_2)

{
  FUN_00101b02(param_1,param_2);
  return;
}




long FUN_001036da(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 local_40;
  undefined8 local_38;
  
  lVar1 = FUN_00103886(param_1,param_2,param_4);
  *(undefined8 *)(lVar1 + 8) = param_3;
  if (*(long *)(param_2 + 0x18) != 0) {
    uVar2 = FUN_001038ea(param_2);
                    /* try { // try from 00103749 to 001037db has its CatchHandler @ 00103807 */
    uVar2 = FUN_001036da(param_1,uVar2,lVar1,param_4);
    *(undefined8 *)(lVar1 + 0x18) = uVar2;
  }
  local_38 = FUN_00103900(param_2);
  local_40 = lVar1;
  while (local_38 != 0) {
    lVar3 = FUN_00103886(param_1,local_38,param_4);
    *(long *)(local_40 + 0x10) = lVar3;
    *(long *)(lVar3 + 8) = local_40;
    if (*(long *)(local_38 + 0x18) != 0) {
      uVar2 = FUN_001038ea(local_38);
      uVar2 = FUN_001036da(param_1,uVar2,lVar3,param_4);
      *(undefined8 *)(lVar3 + 0x18) = uVar2;
    }
    local_38 = FUN_00103900(local_38);
    local_40 = lVar3;
  }
  return lVar1;
}




void FUN_001042ab(pthread_mutex_t *param_1)

{
  pthread_mutex_destroy(param_1);
  free(param_1);
  return;
}




undefined8 FUN_00102a32(long param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00102236(&local_18,*(undefined8 *)(param_1 + 0x18));
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




undefined8 FUN_001040a9(pthread_t param_1,pthread_t param_2,undefined8 *param_3)

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
    iVar1 = pthread_create(&local_20,(pthread_attr_t *)0x0,FUN_00104072,local_18);
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




void FUN_001020bb(undefined8 param_1)

{
  undefined8 uVar1;
  long in_FS_OFFSET;
  undefined local_11;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  uVar1 = FUN_0010287c(param_1);
  FUN_0010289e(&local_11,uVar1);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00103bf8(char param_1)

{
  printf("%02x\n",(ulong)(uint)(int)param_1);
  return;
}




undefined8 FUN_00102948(undefined8 param_1)

{
  return param_1;
}




void FUN_001035bc(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = param_2;
  return;
}




void FUN_001032aa(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00102254(param_1);
  FUN_001033b4(param_1,uVar1);
  FUN_001031a4(param_1);
  return;
}




undefined8 FUN_001036c4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}




void FUN_00104072(long param_1)

{
  (**(code **)(param_1 + 8))(*(undefined8 *)(param_1 + 0x10));
                    /* WARNING: Subroutine does not return */
  pthread_exit((void *)0x0);
}




void FUN_0010283c(undefined8 *param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_00102a20(param_2);
  *param_1 = *puVar1;
  param_1[1] = *param_3;
  return;
}




void FUN_0010241a(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  FUN_001016f3(0x28,param_2);
  uVar1 = FUN_00101c80(param_5);
  uVar2 = FUN_00101c6e(param_4);
  uVar3 = FUN_00101c5c(param_3);
  uVar4 = FUN_00101bb0(param_2);
  uVar5 = FUN_00102970(param_1);
                    /* try { // try from 001024a9 to 001024ad has its CatchHandler @ 001024b0 */
  FUN_001029b0(uVar5,uVar4,uVar3,uVar2,uVar1);
  return;
}




void FUN_00103fd8(void)

{
  return;
}




undefined4 FUN_001018fe(undefined8 param_1,int *param_2,int *param_3)

{
  return CONCAT31((int3)((uint)*param_3 >> 8),*param_2 < *param_3);
}




ulong FUN_00103e95(long param_1,ulong param_2,long param_3)

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




bool FUN_00104176(pthread_t *param_1)

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




undefined8 FUN_00101962(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00101bd2(param_2);
  FUN_00101be4(param_1,uVar1);
  return param_1;
}




void FUN_00103ca5(byte param_1)

{
  printf("%02x\n",(ulong)param_1);
  return;
}




long FUN_001030df(long param_1)

{
  undefined8 local_10;
  
  for (local_10 = param_1; *(long *)(local_10 + 0x10) != 0; local_10 = *(long *)(local_10 + 0x10)) {
  }
  return local_10;
}




void FUN_0010428c(pthread_mutex_t *param_1)

{
  pthread_mutex_unlock(param_1);
  return;
}




void FUN_00103cfe(uint *param_1)

{
  printf("%d -- %d\n",(ulong)*param_1,(ulong)param_1[1]);
  return;
}




undefined8 FUN_001027fa(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}




void FUN_0010313a(undefined4 *param_1)

{
  *param_1 = 0;
  FUN_00103164(param_1);
  return;
}




void FUN_00103b21(short param_1)

{
  printf("%hd\n",(ulong)(uint)(int)param_1);
  return;
}




undefined8 FUN_00103950(undefined8 param_1)

{
  return param_1;
}




long FUN_0010171c(undefined8 param_1,undefined8 param_2)

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
  local_38 = FUN_00101848(param_1,param_2);
  local_28 = FUN_00101872(param_1);
  cVar2 = FUN_00101890(&local_38,&local_28);
  if (cVar2 == '\0') {
    FUN_001018b6(param_1);
    uVar3 = FUN_001018dc(&local_38);
    cVar2 = FUN_001018fe(local_30,param_2,uVar3);
    if (cVar2 == '\0') {
      bVar1 = false;
      goto LAB_001017bc;
    }
  }
  bVar1 = true;
LAB_001017bc:
  if (bVar1) {
    uVar3 = FUN_00101925(param_2);
    FUN_00101962(local_30,uVar3);
    FUN_0010199a(&local_28,&local_38);
    local_38 = FUN_001019bc(param_1,local_28,&DAT_00105004,local_30,&local_39);
  }
  lVar4 = FUN_001018dc(&local_38);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return lVar4 + 4;
}




void FUN_0010351e(void)

{
  return;
}




void FUN_0010306a(void)

{
  FUN_00102f3a();
  return;
}




void FUN_00103fb7(void)

{
  return;
}




void FUN_00103fc2(void)

{
  return;
}




void FUN_00102a82(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_00102c5f(param_2);
  *param_1 = *puVar1;
  puVar1 = (undefined8 *)FUN_00102a20(param_3);
  param_1[1] = *puVar1;
  return;
}




void FUN_00102394(undefined8 param_1)

{
  FUN_0010295a(param_1);
  return;
}




void FUN_00102c98(undefined8 param_1,void *param_2)

{
  operator_delete(param_2);
  return;
}




void FUN_0010403b(void)

{
  return;
}




void FUN_0010401a(void)

{
  return;
}




undefined8 FUN_001025d2(undefined8 param_1,undefined8 param_2)

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
  local_58 = FUN_00102254(param_1);
  local_50 = FUN_0010226a(param_1);
  local_59 = '\x01';
  while (local_58 != 0) {
    local_50 = local_58;
    uVar2 = FUN_001020bb(local_58);
    local_59 = FUN_001018fe(param_1,param_2,uVar2);
    if (local_59 == '\0') {
      local_58 = FUN_001027fa(local_58);
    }
    else {
      local_58 = FUN_00102932(local_58);
    }
  }
  FUN_00102236(&local_48,local_50);
  if (local_59 != '\0') {
    local_38[0] = FUN_00102a32(param_1);
    cVar1 = FUN_00101890(&local_48,local_38);
    if (cVar1 != '\0') {
      FUN_00102a82(local_38,&local_58,&local_50);
      goto LAB_00102754;
    }
    FUN_001027ce(&local_48);
  }
  uVar2 = FUN_00102574(local_48);
  cVar1 = FUN_001018fe(param_1,uVar2,param_2);
  if (cVar1 == '\0') {
    local_40 = 0;
    FUN_0010283c(local_38,&local_48,&local_40);
  }
  else {
    FUN_00102a82(local_38,&local_58,&local_50);
  }
LAB_00102754:
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return local_38[0];
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_001035a8(void)

{
  return;
}




undefined8 FUN_00101890(long *param_1,long *param_2)

{
  return CONCAT71((int7)((ulong)*param_2 >> 8),*param_1 == *param_2);
}




void FUN_00101020(void)

{
  (*(code *)PTR_00108ec0)();
  return;
}




void FUN_00103fac(void)

{
  return;
}




void FUN_0010233e(undefined8 param_1)

{
  FUN_00102948(param_1);
  return;
}




void FUN_0010400f(void)

{
  return;
}




void FUN_0010324e(long param_1)

{
  FUN_00103374(param_1);
  FUN_00103394(param_1);
  FUN_0010313a(param_1 + 8);
  return;
}




void FUN_00103c23(undefined4 param_1)

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




void FUN_00101c1c(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00102394(param_2);
  uVar1 = FUN_001023b2(uVar1);
  FUN_001023c4(param_1,uVar1);
  return;
}




long FUN_001034a4(long param_1)

{
  return param_1 + 0x10;
}




void FUN_0010405c(void)

{
  return;
}




void FUN_00103cd0(undefined8 param_1)

{
  printf("%g\n",param_1);
  return;
}




undefined8 FUN_001023b2(undefined8 param_1)

{
  return param_1;
}




/* WARNING: Removing unreachable block (ram,0x001014c3) */
/* WARNING: Removing unreachable block (ram,0x001014cf) */

void FUN_001014b0(void)

{
  return;
}




void FUN_00102c84(void)

{
  return;
}




void FUN_001034ba(undefined8 param_1,undefined8 param_2)

{
  long in_FS_OFFSET;
  undefined local_18 [8];
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_001035bc(local_18,param_1);
  FUN_001035da(param_1,param_2,local_18);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00103aa1(char *param_1)

{
  if (param_1 != (char *)0x0) {
    puts(param_1);
  }
  return;
}




undefined8 * FUN_001027ce(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = std::_Rb_tree_decrement((_Rb_tree_node_base *)*param_1);
  *param_1 = uVar1;
  return param_1;
}




undefined8 FUN_00101c92(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar1 = FUN_001023ee(param_1);
  uVar2 = FUN_00101c80(param_4);
  uVar3 = FUN_00101c6e(param_3);
  uVar4 = FUN_00101c5c(param_2);
  FUN_0010241a(param_1,uVar1,uVar4,uVar3,uVar2);
  return uVar1;
}




void FUN_001028f8(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00102970(param_1);
  FUN_00102b12(uVar1,param_2,1);
  return;
}




void FUN_0010199a(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  return;
}




long FUN_00102770(long param_1)

{
  return param_1 + 0x18;
}




undefined8 FUN_001041f4(undefined8 *param_1)

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




void FUN_00101569(undefined8 param_1)

{
  int *piVar1;
  long in_FS_OFFSET;
  undefined4 local_30;
  int local_2c;
  ulong local_28;
  ulong local_20;
  undefined4 *local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_30 = 2;
  piVar1 = (int *)FUN_0010171c(param_1,&local_30);
  local_2c = *piVar1;
  local_20 = (long)local_2c << 2;
  local_18 = (undefined4 *)operator_new__(local_20);
  for (local_28 = 0; local_28 < (ulong)(long)local_2c; local_28 = local_28 + 1) {
    local_18[local_28] = 0;
  }
  FUN_00103af9(*local_18);
  if (local_18 != (undefined4 *)0x0) {
    operator_delete__(local_18);
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_0010426d(pthread_mutex_t *param_1)

{
  pthread_mutex_lock(param_1);
  return;
}




void FUN_00102aca(undefined8 param_1)

{
  FUN_00102c72(param_1);
  return;
}




undefined8 FUN_00102a20(undefined8 param_1)

{
  return param_1;
}




void FUN_001023c4(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00101bd2(param_2);
  *param_1 = uVar1;
  return;
}




void FUN_001032e8(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  
  FUN_0010341e(param_1,param_2);
  lVar1 = FUN_0010348e(param_2);
  if (lVar1 != 0) {
    puVar2 = (undefined8 *)FUN_001034a4(param_1);
                    /* try { // try from 00103343 to 00103347 has its CatchHandler @ 0010334d */
    uVar3 = FUN_001034ba(param_1,param_2);
    *puVar2 = uVar3;
  }
  return;
}




undefined8 FUN_001024f8(undefined8 *param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00102236(&local_18,*param_1);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_0010357e(undefined8 param_1,undefined8 param_2)

{
  FUN_001036b0(param_1,param_2);
  return;
}




void FUN_001039ae(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  FUN_001016f3(0x28,param_2);
  uVar1 = FUN_00103950(param_3);
  uVar2 = FUN_00101bb0(param_2);
  uVar3 = FUN_00102970(param_1);
  FUN_00103a1c(uVar3,uVar2,uVar1);
  return;
}




void FUN_00102786(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_00102a20(param_2);
  *param_1 = *puVar1;
  puVar1 = (undefined8 *)FUN_00102a20(param_3);
  param_1[1] = *puVar1;
  return;
}




void FUN_001031e4(undefined8 param_1)

{
  FUN_001031c4(param_1);
  return;
}




void FUN_00102d6c(undefined8 param_1)

{
  FUN_00102d8a(param_1);
  return;
}




void FUN_00104067(void)

{
  return;
}




long FUN_0010226a(long param_1)

{
  return param_1 + 8;
}




void FUN_00102f3a(void)

{
  undefined4 *puVar1;
  long in_FS_OFFSET;
  undefined local_88 [48];
  undefined4 local_58 [14];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_001031e4(local_88);
  local_58[0] = 0;
                    /* try { // try from 00102f8e to 00102ff1 has its CatchHandler @ 0010303d */
  puVar1 = (undefined4 *)FUN_0010171c(local_88,local_58);
  *puVar1 = 0x14;
  local_58[0] = 1;
  puVar1 = (undefined4 *)FUN_0010171c(local_88,local_58);
  *puVar1 = 0x14;
  local_58[0] = 2;
  puVar1 = (undefined4 *)FUN_0010171c(local_88,local_58);
  *puVar1 = 0x14;
  FUN_00103224(local_58,local_88);
                    /* try { // try from 00102ff9 to 00102ffd has its CatchHandler @ 00103028 */
  FUN_0010162e(local_58);
  FUN_00103204(local_58);
  FUN_00103204(local_88);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00101bb0(long param_1)

{
  FUN_0010233e(param_1 + 0x20);
  return;
}




undefined8 FUN_00103f83(void)

{
  return 0;
}




void FUN_0010287c(long param_1)

{
  FUN_00102aca(param_1 + 0x20);
  return;
}




undefined8 FUN_00102c5f(undefined8 param_1)

{
  return param_1;
}




undefined8 FUN_00101c80(undefined8 param_1)

{
  return param_1;
}




void FUN_001042e0(undefined4 param_1,undefined8 param_2,undefined8 param_3)

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




void FUN_00104350(void)

{
  return;
}




void FUN_00103164(long param_1)

{
  *(undefined8 *)(param_1 + 8) = 0;
  *(long *)(param_1 + 0x10) = param_1;
  *(long *)(param_1 + 0x18) = param_1;
  *(undefined8 *)(param_1 + 0x20) = 0;
  return;
}




void FUN_001029b0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = FUN_00101c80(param_5);
  uVar2 = FUN_00101c6e(param_4);
  uVar3 = FUN_00101c5c(param_3);
  FUN_00102b94(param_1,param_2,uVar3,uVar2,uVar1);
  return;
}




void FUN_00102cd8(undefined8 param_1,undefined8 param_2)

{
  long in_FS_OFFSET;
  undefined local_29;
  undefined8 local_28;
  undefined8 local_20;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_28 = param_2;
  local_20 = param_1;
  FUN_00102d2a(param_1,param_2,&local_29);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




undefined4 FUN_001018b6(undefined8 param_1)

{
  undefined4 unaff_EBX;
  
  FUN_00101ba2(param_1);
  return unaff_EBX;
}




void FUN_00102236(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = param_2;
  return;
}




void FUN_001031c4(undefined8 param_1)

{
  FUN_0010324e(param_1);
  return;
}




void FUN_00103fee(void)

{
  return;
}




undefined8 FUN_00102280(undefined8 param_1,long param_2,long param_3,undefined8 param_4)

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
    uVar2 = FUN_001020bb(local_38);
    cVar1 = FUN_001018fe(param_1,uVar2,param_4);
    if (cVar1 == '\x01') {
      local_38 = FUN_001027fa(local_38);
    }
    else {
      local_40 = local_38;
      local_38 = FUN_00102932(local_38);
    }
  }
  FUN_00102236(&local_28,local_40);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_28;
}




undefined8
FUN_001019bc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  uVar1 = FUN_00101c80(param_5);
  uVar2 = FUN_00101c6e(param_4);
  uVar3 = FUN_00101c5c(param_3);
  local_40 = FUN_00101c92(param_1,uVar3,uVar2,uVar1);
                    /* try { // try from 00101a38 to 00101a7b has its CatchHandler @ 00101ab9 */
  uVar1 = FUN_001020bb(local_40);
  local_38 = FUN_00101d12(param_1,param_2,uVar1);
  if (local_38._8_8_ == 0) {
    FUN_001021f8(param_1,local_40);
    FUN_00102236(&local_48,local_38._0_8_);
  }
  else {
    local_48 = FUN_0010210e(param_1,local_38._0_8_,local_38._8_8_,local_40);
  }
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_48;
}




/* WARNING: Type propagation algorithm not settling */

long FUN_00101d12(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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
  lVar3 = FUN_001024f8(&local_68);
  local_50 = lVar3;
  lVar4 = FUN_0010226a(local_60);
  uVar7 = local_60;
  if (lVar3 != lVar4) {
    uVar6 = FUN_00102574(local_50);
    cVar2 = FUN_001018fe(uVar7,param_3,uVar6);
    lVar3 = local_50;
    uVar7 = local_60;
    if (cVar2 == '\0') {
      uVar6 = FUN_00102574(local_50);
      cVar2 = FUN_001018fe(uVar7,uVar6,param_3);
      lVar3 = local_50;
      if (cVar2 == '\0') {
        local_48[1] = 0;
        FUN_0010283c(local_48 + 2,&local_50,local_48 + 1);
      }
      else {
        local_48[0] = local_50;
        plVar8 = (long *)FUN_0010255e(local_60);
        uVar7 = local_60;
        if (lVar3 == *plVar8) {
          uVar7 = FUN_0010255e(local_60);
          local_48[1] = 0;
          FUN_00102592(local_48 + 2,local_48 + 1,uVar7);
        }
        else {
          puVar5 = (undefined8 *)FUN_00102810(local_48);
          uVar6 = FUN_00102574(*puVar5);
          cVar2 = FUN_001018fe(uVar7,param_3,uVar6);
          if (cVar2 == '\0') {
            local_48[2] = FUN_001025d2(local_60,param_3);
          }
          else {
            lVar3 = FUN_001027fa(local_50);
            if (lVar3 == 0) {
              local_48[1] = 0;
              FUN_00102592(local_48 + 2,local_48 + 1,&local_50);
            }
            else {
              FUN_00102786(local_48 + 2,local_48,local_48);
            }
          }
        }
      }
    }
    else {
      local_48[0] = local_50;
      plVar8 = (long *)FUN_00102770(local_60);
      uVar7 = local_60;
      if (lVar3 == *plVar8) {
        uVar7 = FUN_00102770(local_60);
        uVar6 = FUN_00102770(local_60);
        FUN_00102786(local_48 + 2,uVar6,uVar7);
      }
      else {
        puVar5 = (undefined8 *)FUN_001027ce(local_48);
        uVar6 = FUN_00102574(*puVar5);
        cVar2 = FUN_001018fe(uVar7,uVar6,param_3);
        if (cVar2 == '\0') {
          local_48[2] = FUN_001025d2(local_60,param_3);
        }
        else {
          lVar3 = FUN_001027fa(local_48[0]);
          if (lVar3 == 0) {
            local_48[1] = 0;
            FUN_00102592(local_48 + 2,local_48 + 1,local_48);
          }
          else {
            FUN_00102786(local_48 + 2,&local_50,&local_50);
          }
        }
      }
    }
    goto LAB_001020a0;
  }
  lVar3 = FUN_00102548(local_60);
  uVar7 = local_60;
  if (lVar3 == 0) {
LAB_00101db4:
    bVar1 = false;
  }
  else {
    puVar5 = (undefined8 *)FUN_0010255e(local_60);
    uVar6 = FUN_00102574(*puVar5);
    cVar2 = FUN_001018fe(uVar7,uVar6,param_3);
    if (cVar2 == '\0') goto LAB_00101db4;
    bVar1 = true;
  }
  if (bVar1) {
    uVar7 = FUN_0010255e(local_60);
    local_48[1] = 0;
    FUN_00102592(local_48 + 2,local_48 + 1,uVar7);
  }
  else {
    local_48[2] = FUN_001025d2(local_60,param_3);
  }
LAB_001020a0:
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_48[2];
}




undefined8 FUN_0010348e(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}




int FUN_00103f92(void)

{
  int iVar1;
  
  iVar1 = rand();
  return iVar1 % 2;
}




void FUN_00102ae8(undefined8 param_1,undefined8 param_2)

{
  FUN_00102c84(param_1,param_2);
  return;
}




void FUN_00104004(void)

{
  return;
}




void FUN_00103867(undefined8 param_1)

{
  FUN_0010310c(param_1);
  return;
}




undefined8 FUN_00102cc0(void)

{
  return 0x333333333333333;
}




void FUN_00103a5a(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  puVar1 = (undefined8 *)FUN_00103950(param_3);
  puVar2 = (undefined8 *)FUN_001016f3(8,param_2);
  *puVar2 = *puVar1;
  return;
}




void FUN_00102d8a(undefined8 param_1)

{
  FUN_00102394(param_1);
  return;
}




void FUN_00103204(undefined8 param_1)

{
  FUN_001032aa(param_1);
  return;
}




void FUN_00104030(void)

{
  return;
}




undefined8 FUN_00101c5c(undefined8 param_1)

{
  return param_1;
}




undefined8 FUN_00103f74(void)

{
  return 1;
}




void FUN_00103916(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *param_1;
  uVar2 = FUN_00103950(param_2);
  FUN_00103962(uVar1,uVar2);
  return;
}




void FUN_00102b12(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00102c98(param_1,param_2,param_3);
  return;
}




undefined8 FUN_00102932(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}




undefined8 * FUN_00102810(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = std::_Rb_tree_increment((_Rb_tree_node_base *)*param_1);
  *param_1 = uVar1;
  return param_1;
}




void FUN_00103fe3(void)

{
  return;
}




void FUN_00103374(undefined8 param_1)

{
  FUN_0010351e(param_1);
  return;
}




void FUN_00101be4(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00101bd2(param_2);
  FUN_0010235c(param_1,uVar1);
  return;
}




void FUN_001028b4(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_00101bb0(param_2);
  uVar2 = FUN_00102970(param_1);
  FUN_00102ae8(uVar2,uVar1);
  return;
}




void FUN_001021f8(undefined8 param_1,undefined8 param_2)

{
  FUN_001028b4(param_1,param_2);
  FUN_001028f8(param_1,param_2);
  return;
}




ulong FUN_00103d91(long param_1,ulong param_2,long param_3)

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




void FUN_00101ba2(void)

{
  return;
}




void FUN_00103a1c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00103950(param_3);
  FUN_00103a5a(param_1,param_2,uVar1);
  return;
}




void FUN_00103bcd(undefined8 param_1)

{
  printf("%zu\n",param_1);
  return;
}




long FUN_0010255e(long param_1)

{
  return param_1 + 0x20;
}




undefined8 FUN_00102c72(undefined8 param_1)

{
  return param_1;
}




undefined8 FUN_0010289e(undefined8 param_1,undefined8 param_2)

{
  return param_2;
}




void FUN_00102982(undefined8 param_1,undefined8 param_2)

{
  FUN_00102b44(param_1,param_2,0);
  return;
}




void FUN_00104051(void)

{
  return;
}




void FUN_00103ff9(void)

{
  return;
}




undefined8 FUN_001038ea(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}




void FUN_00102d2a(undefined4 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined4 *puVar2;
  
  uVar1 = FUN_00102d6c(param_2);
  puVar2 = (undefined4 *)FUN_001023b2(uVar1);
  *param_1 = *puVar2;
  param_1[1] = 0;
  return;
}




undefined8 FUN_00102970(undefined8 param_1)

{
  return param_1;
}




undefined8 FUN_001041d1(void *param_1)

{
  free(param_1);
  return 1;
}




void FUN_001018dc(undefined8 *param_1)

{
  FUN_00101bb0(*param_1);
  return;
}




undefined8 FUN_00101b52(long param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00102236(&local_18,param_1 + 8);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_001023ee(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00102970(param_1);
  FUN_00102982(uVar1,1);
  return;
}




undefined4 * FUN_00103886(undefined8 param_1,undefined4 *param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined4 *puVar2;
  
  uVar1 = FUN_0010287c(param_2);
  puVar2 = (undefined4 *)FUN_00103916(param_3,uVar1);
  *puVar2 = *param_2;
  *(undefined8 *)(puVar2 + 4) = 0;
  *(undefined8 *)(puVar2 + 6) = 0;
  return puVar2;
}



