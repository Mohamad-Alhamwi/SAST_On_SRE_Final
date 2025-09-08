
void FUN_00102382(undefined8 param_1)

{
  FUN_00102948(param_1);
  return;
}




void FUN_00103fd6(void)

{
  return;
}




undefined8 FUN_001025c0(undefined8 param_1,undefined8 param_2)

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
  local_58 = FUN_00102242(param_1);
  local_50 = FUN_00102258(param_1);
  local_59 = '\x01';
  while (local_58 != 0) {
    local_50 = local_58;
    uVar2 = FUN_001020a9(local_58);
    local_59 = FUN_001018ec(param_1,param_2,uVar2);
    if (local_59 == '\0') {
      local_58 = FUN_001027e8(local_58);
    }
    else {
      local_58 = FUN_00102920(local_58);
    }
  }
  FUN_00102224(&local_48,local_50);
  if (local_59 != '\0') {
    local_38[0] = FUN_00102a20(param_1);
    cVar1 = FUN_0010187e(&local_48,local_38);
    if (cVar1 != '\0') {
      FUN_00102a70(local_38,&local_58,&local_50);
      goto LAB_00102742;
    }
    FUN_001027bc(&local_48);
  }
  uVar2 = FUN_00102562(local_48);
  cVar1 = FUN_001018ec(param_1,uVar2,param_2);
  if (cVar1 == '\0') {
    local_40 = 0;
    FUN_0010282a(local_38,&local_48,&local_40);
  }
  else {
    FUN_00102a70(local_38,&local_58,&local_50);
  }
LAB_00102742:
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return local_38[0];
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00103120(long param_1)

{
  *(undefined8 *)(param_1 + 8) = 0;
  *(long *)(param_1 + 0x10) = param_1;
  *(long *)(param_1 + 0x18) = param_1;
  *(undefined8 *)(param_1 + 0x20) = 0;
  return;
}




void FUN_00103b94(undefined8 param_1)

{
  printf("%zu\n",param_1);
  return;
}




void FUN_001028a2(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_00101b9e(param_2);
  uVar2 = FUN_0010295e(param_1);
  FUN_00102ad6(uVar2,uVar1);
  return;
}




void FUN_00102580(undefined8 *param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  
  *param_1 = *param_2;
  puVar1 = (undefined8 *)FUN_00102a0e(param_3);
  param_1[1] = *puVar1;
  return;
}




undefined8 FUN_0010187e(long *param_1,long *param_2)

{
  return CONCAT71((int7)((ulong)*param_2 >> 8),*param_1 == *param_2);
}




undefined8 FUN_00101c5c(undefined8 param_1)

{
  return param_1;
}




undefined8 FUN_00103f3b(void)

{
  return 1;
}




void FUN_00101926(undefined8 param_1,undefined8 param_2)

{
  FUN_00101c0a(param_1,param_2);
  return;
}




void FUN_00102c72(void)

{
  return;
}




undefined8 FUN_001041bb(undefined8 *param_1)

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




void FUN_00101c0a(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00102382(param_2);
  uVar1 = FUN_001023a0(uVar1);
  FUN_001023b2(param_1,uVar1);
  return;
}




void FUN_00101bd2(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00101bc0(param_2);
  FUN_0010234a(param_1,uVar1);
  return;
}




void FUN_00103f73(void)

{
  return;
}




void FUN_00103cc5(uint *param_1)

{
  printf("%d -- %d\n",(ulong)*param_1,(ulong)param_1[1]);
  return;
}




int FUN_00103f59(void)

{
  int iVar1;
  
  iVar1 = rand();
  return iVar1 % 2;
}




void FUN_00103faa(void)

{
  return;
}




long FUN_00103696(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 local_40;
  undefined8 local_38;
  
  lVar1 = FUN_00103842(param_1,param_2,param_4);
  *(undefined8 *)(lVar1 + 8) = param_3;
  if (*(long *)(param_2 + 0x18) != 0) {
    uVar2 = FUN_001038a6(param_2);
                    /* try { // try from 00103705 to 00103797 has its CatchHandler @ 001037c3 */
    uVar2 = FUN_00103696(param_1,uVar2,lVar1,param_4);
    *(undefined8 *)(lVar1 + 0x18) = uVar2;
  }
  local_38 = FUN_001038bc(param_2);
  local_40 = lVar1;
  while (local_38 != 0) {
    lVar3 = FUN_00103842(param_1,local_38,param_4);
    *(long *)(local_40 + 0x10) = lVar3;
    *(long *)(lVar3 + 8) = local_40;
    if (*(long *)(local_38 + 0x18) != 0) {
      uVar2 = FUN_001038a6(local_38);
      uVar2 = FUN_00103696(param_1,uVar2,lVar3,param_4);
      *(undefined8 *)(lVar3 + 0x18) = uVar2;
    }
    local_38 = FUN_001038bc(local_38);
    local_40 = lVar3;
  }
  return lVar1;
}




undefined8 FUN_00101b40(long param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00102224(&local_18,param_1 + 8);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00103476(undefined8 param_1,undefined8 param_2)

{
  long in_FS_OFFSET;
  undefined local_18 [8];
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00103578(local_18,param_1);
  FUN_00103596(param_1,param_2,local_18);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00103fe1(void)

{
  return;
}




undefined8 FUN_00101c80(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar1 = FUN_001023dc(param_1);
  uVar2 = FUN_00101c6e(param_4);
  uVar3 = FUN_00101c5c(param_3);
  uVar4 = FUN_00101c4a(param_2);
  FUN_00102408(param_1,uVar1,uVar4,uVar3,uVar2);
  return uVar1;
}




void FUN_00104002(void)

{
  return;
}




undefined8 FUN_00104198(void *param_1)

{
  free(param_1);
  return 1;
}




void FUN_00103c6c(byte param_1)

{
  printf("%02x\n",(ulong)param_1);
  return;
}




undefined8 FUN_001027e8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}




undefined8 FUN_00103f4a(void)

{
  return 0;
}




undefined8 FUN_0010295e(undefined8 param_1)

{
  return param_1;
}




void FUN_00101625(undefined8 param_1)

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
  puVar1 = (undefined8 *)FUN_0010170a(param_1,&local_84);
  local_80 = (char *)*puVar1;
  memset(local_78,0x43,99);
  local_15 = 0;
  strncpy(local_80,local_78,99);
  local_80[99] = '\0';
  FUN_00103a68(local_80);
  if (local_80 != (char *)0x0) {
    operator_delete__(local_80);
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




long FUN_0010275e(long param_1)

{
  return param_1 + 0x18;
}




/* WARNING: Removing unreachable block (ram,0x001014c3) */
/* WARNING: Removing unreachable block (ram,0x001014cf) */

void FUN_001014b0(void)

{
  return;
}




void FUN_00103a16(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  puVar2 = (undefined8 *)FUN_0010390c(param_3);
  puVar3 = (undefined8 *)FUN_001016e1(0x10,param_2);
  uVar1 = puVar2[1];
  *puVar3 = *puVar2;
  puVar3[1] = uVar1;
  return;
}




void FUN_00102b00(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00102c86(param_1,param_2,param_3);
  return;
}




void FUN_00103805(undefined8 param_1)

{
  FUN_0010309c(param_1);
  return;
}




void FUN_00101b9e(long param_1)

{
  FUN_0010232c(param_1 + 0x20);
  return;
}




void FUN_00102d97(void)

{
  undefined *puVar1;
  undefined8 *puVar2;
  long in_FS_OFFSET;
  undefined local_88 [48];
  undefined4 local_58 [14];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_001031a0(local_88);
                    /* try { // try from 00102dd2 to 00102e66 has its CatchHandler @ 00102eb2 */
  puVar1 = (undefined *)operator_new__(0x32);
  *puVar1 = 0;
  local_58[0] = 0;
  puVar2 = (undefined8 *)FUN_0010170a(local_88,local_58);
  *puVar2 = puVar1;
  local_58[0] = 1;
  puVar2 = (undefined8 *)FUN_0010170a(local_88,local_58);
  *puVar2 = puVar1;
  local_58[0] = 2;
  puVar2 = (undefined8 *)FUN_0010170a(local_88,local_58);
  *puVar2 = puVar1;
  FUN_001031e0(local_58,local_88);
                    /* try { // try from 00102e6e to 00102e72 has its CatchHandler @ 00102e9d */
  FUN_00101569(local_58);
  FUN_001031c0(local_58);
  FUN_001031c0(local_88);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00103b14(float param_1)

{
  printf("%f\n",(double)param_1);
  return;
}




void FUN_00103180(undefined8 param_1)

{
  FUN_0010320a(param_1);
  return;
}




void FUN_00103fec(void)

{
  return;
}




undefined8 FUN_00102a20(long param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00102224(&local_18,*(undefined8 *)(param_1 + 0x18));
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00103ac0(uint param_1)

{
  printf("%d\n",(ulong)param_1);
  return;
}




void FUN_001028e6(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_0010295e(param_1);
  FUN_00102b00(uVar1,param_2,1);
  return;
}




void FUN_001021e6(undefined8 param_1,undefined8 param_2)

{
  FUN_001028a2(param_1,param_2);
  FUN_001028e6(param_1,param_2);
  return;
}




undefined8 FUN_00102536(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}




void FUN_001031a0(undefined8 param_1)

{
  FUN_00103180(param_1);
  return;
}




long FUN_0010254c(long param_1)

{
  return param_1 + 0x20;
}




void FUN_00102cc6(undefined8 param_1,undefined8 param_2)

{
  long in_FS_OFFSET;
  undefined local_29;
  undefined8 local_28;
  undefined8 local_20;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_28 = param_2;
  local_20 = param_1;
  FUN_00102d18(param_1,param_2,&local_29);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




undefined8 * FUN_001027bc(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = std::_Rb_tree_decrement((_Rb_tree_node_base *)*param_1);
  *param_1 = uVar1;
  return param_1;
}




void FUN_00101b90(void)

{
  return;
}




undefined8 FUN_00101bc0(undefined8 param_1)

{
  return param_1;
}




void FUN_0010232c(undefined8 param_1)

{
  FUN_00102936(param_1);
  return;
}




void FUN_00103578(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = param_2;
  return;
}




void FUN_00101020(void)

{
  (*(code *)PTR_00108ec0)();
  return;
}




undefined8 FUN_001023a0(undefined8 param_1)

{
  return param_1;
}




undefined8 FUN_00102c60(undefined8 param_1)

{
  return param_1;
}




undefined4 FUN_001018ec(undefined8 param_1,int *param_2,int *param_3)

{
  return CONCAT31((int3)((uint)*param_3 >> 8),*param_2 < *param_3);
}




long FUN_00103460(long param_1)

{
  return param_1 + 0x10;
}




void FUN_00103fcb(void)

{
  return;
}




void FUN_00103cf8(long param_1,ulong param_2)

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




undefined8 FUN_00101913(undefined8 param_1)

{
  return param_1;
}




undefined8 FUN_001016e1(undefined8 param_1,undefined8 param_2)

{
  return param_2;
}




void FUN_00103330(undefined8 param_1)

{
  FUN_001034da(param_1);
  return;
}




void FUN_00104253(pthread_mutex_t *param_1)

{
  pthread_mutex_unlock(param_1);
  return;
}




undefined8 FUN_00101950(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00101bc0(param_2);
  FUN_00101bd2(param_1,uVar1);
  return param_1;
}




long FUN_001030c9(long param_1)

{
  undefined8 local_10;
  
  for (local_10 = param_1; *(long *)(local_10 + 0x18) != 0; local_10 = *(long *)(local_10 + 0x18)) {
  }
  return local_10;
}




undefined8 FUN_0010288c(undefined8 param_1,undefined8 param_2)

{
  return param_2;
}




undefined8 FUN_00102920(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}




void FUN_00103ae8(short param_1)

{
  printf("%hd\n",(ulong)(uint)(int)param_1);
  return;
}




void FUN_00102224(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = param_2;
  return;
}




void FUN_00103266(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00102242(param_1);
  FUN_00103370(param_1,uVar1);
  FUN_00103160(param_1);
  return;
}




void FUN_00103b3e(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




void FUN_00104023(void)

{
  return;
}




void FUN_001042a0(undefined4 param_1,undefined8 param_2,undefined8 param_3)

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




void FUN_00102774(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_00102a0e(param_2);
  *param_1 = *puVar1;
  puVar1 = (undefined8 *)FUN_00102a0e(param_3);
  param_1[1] = *puVar1;
  return;
}




void FUN_00103f9f(void)

{
  return;
}




void FUN_00103a8e(long param_1)

{
  if (param_1 != 0) {
    wprintf(L"%ls\n",param_1);
  }
  return;
}




undefined4 FUN_001018a4(undefined8 param_1)

{
  undefined4 unaff_EBX;
  
  FUN_00101b90(param_1);
  return unaff_EBX;
}




undefined8 FUN_00103596(long param_1,long param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  uVar1 = FUN_00102258(param_1);
  uVar2 = FUN_00103680(param_2);
  uVar1 = FUN_00103696(param_1,uVar2,uVar1,param_3);
  puVar3 = (undefined8 *)FUN_0010275e(param_1);
  uVar2 = FUN_00103805(uVar1);
  *puVar3 = uVar2;
  puVar3 = (undefined8 *)FUN_0010254c(param_1);
  uVar2 = FUN_00103823(uVar1);
  *puVar3 = uVar2;
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  return uVar1;
}




void FUN_00102edf(void)

{
  undefined *puVar1;
  undefined8 *puVar2;
  long in_FS_OFFSET;
  undefined local_88 [48];
  undefined4 local_58 [14];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_001031a0(local_88);
                    /* try { // try from 00102f1a to 00102fae has its CatchHandler @ 00102ffa */
  puVar1 = (undefined *)operator_new__(100);
  *puVar1 = 0;
  local_58[0] = 0;
  puVar2 = (undefined8 *)FUN_0010170a(local_88,local_58);
  *puVar2 = puVar1;
  local_58[0] = 1;
  puVar2 = (undefined8 *)FUN_0010170a(local_88,local_58);
  *puVar2 = puVar1;
  local_58[0] = 2;
  puVar2 = (undefined8 *)FUN_0010170a(local_88,local_58);
  *puVar2 = puVar1;
  FUN_001031e0(local_58,local_88);
                    /* try { // try from 00102fb6 to 00102fba has its CatchHandler @ 00102fe5 */
  FUN_00101625(local_58);
  FUN_001031c0(local_58);
  FUN_001031c0(local_88);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




undefined8 FUN_001038bc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}




void FUN_0010402e(void)

{
  return;
}




undefined8 FUN_00101c4a(undefined8 param_1)

{
  return param_1;
}




void FUN_001016f7(void)

{
  return;
}




void FUN_001031c0(undefined8 param_1)

{
  FUN_00103266(param_1);
  return;
}




/* WARNING: Type propagation algorithm not settling */

long FUN_00101d00(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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
  lVar3 = FUN_001024e6(&local_68);
  local_50 = lVar3;
  lVar4 = FUN_00102258(local_60);
  uVar7 = local_60;
  if (lVar3 != lVar4) {
    uVar6 = FUN_00102562(local_50);
    cVar2 = FUN_001018ec(uVar7,param_3,uVar6);
    lVar3 = local_50;
    uVar7 = local_60;
    if (cVar2 == '\0') {
      uVar6 = FUN_00102562(local_50);
      cVar2 = FUN_001018ec(uVar7,uVar6,param_3);
      lVar3 = local_50;
      if (cVar2 == '\0') {
        local_48[1] = 0;
        FUN_0010282a(local_48 + 2,&local_50,local_48 + 1);
      }
      else {
        local_48[0] = local_50;
        plVar8 = (long *)FUN_0010254c(local_60);
        uVar7 = local_60;
        if (lVar3 == *plVar8) {
          uVar7 = FUN_0010254c(local_60);
          local_48[1] = 0;
          FUN_00102580(local_48 + 2,local_48 + 1,uVar7);
        }
        else {
          puVar5 = (undefined8 *)FUN_001027fe(local_48);
          uVar6 = FUN_00102562(*puVar5);
          cVar2 = FUN_001018ec(uVar7,param_3,uVar6);
          if (cVar2 == '\0') {
            local_48[2] = FUN_001025c0(local_60,param_3);
          }
          else {
            lVar3 = FUN_001027e8(local_50);
            if (lVar3 == 0) {
              local_48[1] = 0;
              FUN_00102580(local_48 + 2,local_48 + 1,&local_50);
            }
            else {
              FUN_00102774(local_48 + 2,local_48,local_48);
            }
          }
        }
      }
    }
    else {
      local_48[0] = local_50;
      plVar8 = (long *)FUN_0010275e(local_60);
      uVar7 = local_60;
      if (lVar3 == *plVar8) {
        uVar7 = FUN_0010275e(local_60);
        uVar6 = FUN_0010275e(local_60);
        FUN_00102774(local_48 + 2,uVar6,uVar7);
      }
      else {
        puVar5 = (undefined8 *)FUN_001027bc(local_48);
        uVar6 = FUN_00102562(*puVar5);
        cVar2 = FUN_001018ec(uVar7,uVar6,param_3);
        if (cVar2 == '\0') {
          local_48[2] = FUN_001025c0(local_60,param_3);
        }
        else {
          lVar3 = FUN_001027e8(local_48[0]);
          if (lVar3 == 0) {
            local_48[1] = 0;
            FUN_00102580(local_48 + 2,local_48 + 1,local_48);
          }
          else {
            FUN_00102774(local_48 + 2,&local_50,&local_50);
          }
        }
      }
    }
    goto LAB_0010208e;
  }
  lVar3 = FUN_00102536(local_60);
  uVar7 = local_60;
  if (lVar3 == 0) {
LAB_00101da2:
    bVar1 = false;
  }
  else {
    puVar5 = (undefined8 *)FUN_0010254c(local_60);
    uVar6 = FUN_00102562(*puVar5);
    cVar2 = FUN_001018ec(uVar7,uVar6,param_3);
    if (cVar2 == '\0') goto LAB_00101da2;
    bVar1 = true;
  }
  if (bVar1) {
    uVar7 = FUN_0010254c(local_60);
    local_48[1] = 0;
    FUN_00102580(local_48 + 2,local_48 + 1,uVar7);
  }
  else {
    local_48[2] = FUN_001025c0(local_60,param_3);
  }
LAB_0010208e:
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_48[2];
}




void FUN_00103fc0(void)

{
  return;
}




undefined8 * FUN_001027fe(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = std::_Rb_tree_increment((_Rb_tree_node_base *)*param_1);
  *param_1 = uVar1;
  return param_1;
}




void FUN_001023dc(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_0010295e(param_1);
  FUN_00102970(uVar1,1);
  return;
}




undefined8 FUN_0010226e(undefined8 param_1,long param_2,long param_3,undefined8 param_4)

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
    uVar2 = FUN_001020a9(local_38);
    cVar1 = FUN_001018ec(param_1,uVar2,param_4);
    if (cVar1 == '\x01') {
      local_38 = FUN_001027e8(local_38);
    }
    else {
      local_40 = local_38;
      local_38 = FUN_00102920(local_38);
    }
  }
  FUN_00102224(&local_28,local_40);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_28;
}




void FUN_00102d79(undefined8 param_1)

{
  FUN_00102382(param_1);
  return;
}




void FUN_00103c97(undefined8 param_1)

{
  printf("%g\n",param_1);
  return;
}




void FUN_00102ab8(undefined8 param_1)

{
  FUN_00102c60(param_1);
  return;
}




void FUN_00103f89(void)

{
  return;
}




undefined8
FUN_001019aa(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  uVar1 = FUN_00101c6e(param_5);
  uVar2 = FUN_00101c5c(param_4);
  uVar3 = FUN_00101c4a(param_3);
  local_40 = FUN_00101c80(param_1,uVar3,uVar2,uVar1);
                    /* try { // try from 00101a26 to 00101a69 has its CatchHandler @ 00101aa7 */
  uVar1 = FUN_001020a9(local_40);
  local_38 = FUN_00101d00(param_1,param_2,uVar1);
  if (local_38._8_8_ == 0) {
    FUN_001021e6(param_1,local_40);
    FUN_00102224(&local_48,local_38._0_8_);
  }
  else {
    local_48 = FUN_001020fc(param_1,local_38._0_8_,local_38._8_8_,local_40);
  }
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_48;
}




void FUN_00101860(undefined8 param_1)

{
  FUN_00101b40(param_1);
  return;
}




void FUN_00103027(void)

{
  FUN_00102edf();
  return;
}




undefined8 FUN_001024e6(undefined8 *param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00102224(&local_18,*param_1);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




undefined8 FUN_001038a6(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}




void FUN_00103f94(void)

{
  return;
}




void FUN_00103246(undefined8 param_1)

{
  FUN_00103360(param_1);
  return;
}




void FUN_00102b82(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  undefined8 uVar1;
  long in_FS_OFFSET;
  undefined local_38 [8];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00101c4a(param_3);
  uVar1 = FUN_00101c5c(param_4);
  FUN_00101926(local_38,uVar1);
  FUN_00101c6e(param_5);
  uVar1 = FUN_001016e1(0x10,param_2);
                    /* try { // try from 00102c0a to 00102c0e has its CatchHandler @ 00102c11 */
  FUN_00102cc6(uVar1,local_38);
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_001033da(long param_1,undefined8 param_2)

{
  long lVar1;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_001034e9(param_1,param_2);
  FUN_00103564(param_1,param_2);
  FUN_001030f6(param_1 + 8);
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




undefined8 FUN_00102936(undefined8 param_1)

{
  return param_1;
}




void FUN_001031e0(undefined8 param_1,undefined8 param_2)

{
  FUN_001032a4(param_1,param_2);
  return;
}




void FUN_00104272(pthread_mutex_t *param_1)

{
  pthread_mutex_destroy(param_1);
  free(param_1);
  return;
}




undefined8 FUN_00102242(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}




/* WARNING: Removing unreachable block (ram,0x00101504) */
/* WARNING: Removing unreachable block (ram,0x00101510) */

void FUN_001014e0(void)

{
  return;
}




void FUN_00101988(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  return;
}




void FUN_00102562(undefined8 param_1)

{
  FUN_001020a9(param_1);
  return;
}




void FUN_00104018(void)

{
  return;
}




undefined8 FUN_0010363e(undefined8 param_1,undefined8 param_2)

{
  FUN_0010353a(param_1,param_2);
  return param_1;
}




void FUN_00103564(void)

{
  return;
}




undefined8 FUN_00103037(void)

{
  time_t tVar1;
  
  tVar1 = time((time_t *)0x0);
  srand((uint)tVar1);
  FUN_00103a68("Calling good()...");
  FUN_00103027();
  FUN_00103a68("Finished good()");
  FUN_00103a68("Calling bad()...");
  FUN_00102d97();
  FUN_00103a68("Finished bad()");
  return 0;
}




ulong FUN_00103d58(long param_1,ulong param_2,long param_3)

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




void FUN_001030f6(undefined4 *param_1)

{
  *param_1 = 0;
  FUN_00103120(param_1);
  return;
}




void FUN_00103fb5(void)

{
  return;
}




void FUN_0010320a(long param_1)

{
  FUN_00103330(param_1);
  FUN_00103350(param_1);
  FUN_001030f6(param_1 + 8);
  return;
}




void FUN_00103bea(undefined4 param_1)

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




void FUN_0010396a(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  FUN_001016e1(0x30,param_2);
  uVar1 = FUN_0010390c(param_3);
  uVar2 = FUN_00101b9e(param_2);
  uVar3 = FUN_0010295e(param_1);
  FUN_001039d8(uVar3,uVar2,uVar1);
  return;
}




void FUN_00102d18(undefined4 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined4 *puVar2;
  
  uVar1 = FUN_00102d5b(param_2);
  puVar2 = (undefined4 *)FUN_001023a0(uVar1);
  *param_1 = *puVar2;
  *(undefined8 *)(param_1 + 2) = 0;
  return;
}




undefined8 FUN_00101c6e(undefined8 param_1)

{
  return param_1;
}




void FUN_00103a68(char *param_1)

{
  if (param_1 != (char *)0x0) {
    puts(param_1);
  }
  return;
}




undefined8 FUN_00102a0e(undefined8 param_1)

{
  return param_1;
}




void FUN_00103350(void)

{
  return;
}




void FUN_00103823(undefined8 param_1)

{
  FUN_001030c9(param_1);
  return;
}




void FUN_00102b32(undefined8 param_1,ulong param_2)

{
  ulong uVar1;
  
  uVar1 = FUN_00102cae(param_1);
  if (uVar1 < param_2) {
    std::__throw_bad_alloc();
  }
  operator_new(param_2 * 0x30);
  return;
}




void _FINI_0(void)

{
  if (DAT_00109020 == '\0') {
    if (PTR___cxa_finalize_00108fd8 != (undefined *)0x0) {
      __cxa_finalize(PTR_LOOP_00109008);
    }
    FUN_001014b0();
    DAT_00109020 = 1;
    return;
  }
  return;
}




void FUN_00103b69(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




void FUN_0010353a(undefined8 param_1,undefined8 param_2)

{
  FUN_0010366c(param_1,param_2);
  return;
}




undefined8 FUN_0010390c(undefined8 param_1)

{
  return param_1;
}




void FUN_0010282a(undefined8 *param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_00102a0e(param_2);
  *param_1 = *puVar1;
  param_1[1] = *param_3;
  return;
}




long FUN_00102258(long param_1)

{
  return param_1 + 8;
}




undefined8 FUN_00102cae(void)

{
  return 0x2aaaaaaaaaaaaaa;
}




void FUN_00103bbf(char param_1)

{
  printf("%02x\n",(ulong)(uint)(int)param_1);
  return;
}




undefined8 FUN_00104070(pthread_t param_1,pthread_t param_2,undefined8 *param_3)

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
    iVar1 = pthread_create(&local_20,(pthread_attr_t *)0x0,FUN_00104039,local_18);
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




void FUN_00102d5b(undefined8 param_1)

{
  FUN_00102d79(param_1);
  return;
}




undefined8 FUN_00102948(undefined8 *param_1)

{
  return *param_1;
}




undefined8 FUN_00102c4d(undefined8 param_1)

{
  return param_1;
}




void FUN_00101569(undefined8 param_1)

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
  puVar1 = (undefined8 *)FUN_0010170a(param_1,&local_84);
  local_80 = (char *)*puVar1;
  memset(local_78,0x43,99);
  local_15 = 0;
  strncpy(local_80,local_78,99);
  local_80[99] = '\0';
  FUN_00103a68(local_80);
  if (local_80 != (char *)0x0) {
    operator_delete__(local_80);
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00101af0(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_00102258(param_1);
  uVar2 = FUN_00102242(param_1);
  FUN_0010226e(param_1,uVar2,uVar1,param_2);
  return;
}




void FUN_00103f7e(void)

{
  return;
}




undefined8
FUN_001020fc(long param_1,long param_2,_Rb_tree_node_base *param_3,_Rb_tree_node_base *param_4)

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
    p_Var3 = (_Rb_tree_node_base *)FUN_00102258(param_1);
    if (param_3 != p_Var3) {
      uVar4 = FUN_00102562(param_3);
      uVar5 = FUN_001020a9(param_4);
      cVar1 = FUN_001018ec(param_1,uVar5,uVar4);
      if (cVar1 == '\0') {
        bVar2 = false;
        goto LAB_00102180;
      }
    }
  }
  bVar2 = true;
LAB_00102180:
  std::_Rb_tree_insert_and_rebalance(bVar2,param_4,param_3,(_Rb_tree_node_base *)(param_1 + 8));
  *(long *)(param_1 + 0x28) = *(long *)(param_1 + 0x28) + 1;
  FUN_00102224(&local_28,param_4);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_28;
}




void FUN_0010366c(void)

{
  return;
}




void FUN_001038d2(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *param_1;
  uVar2 = FUN_0010390c(param_2);
  FUN_0010391e(uVar1,uVar2);
  return;
}




void FUN_0010234a(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00101bc0(param_2);
  FUN_001023b2(param_1,uVar1);
  return;
}




void FUN_001039d8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = FUN_0010390c(param_3);
  FUN_00103a16(param_1,param_2,uVar1);
  return;
}




void FUN_00103c44(uint param_1)

{
  printf("%u\n",(ulong)param_1);
  return;
}




void FUN_00102408(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  FUN_001016e1(0x30,param_2);
  uVar1 = FUN_00101c6e(param_5);
  uVar2 = FUN_00101c5c(param_4);
  uVar3 = FUN_00101c4a(param_3);
  uVar4 = FUN_00101b9e(param_2);
  uVar5 = FUN_0010295e(param_1);
                    /* try { // try from 00102497 to 0010249b has its CatchHandler @ 0010249e */
  FUN_0010299e(uVar5,uVar4,uVar3,uVar2,uVar1);
  return;
}




void FUN_00104039(long param_1)

{
  (**(code **)(param_1 + 8))(*(undefined8 *)(param_1 + 0x10));
                    /* WARNING: Subroutine does not return */
  pthread_exit((void *)0x0);
}




long FUN_0010170a(undefined8 param_1,undefined8 param_2)

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
  local_38 = FUN_00101836(param_1,param_2);
  local_28 = FUN_00101860(param_1);
  cVar2 = FUN_0010187e(&local_38,&local_28);
  if (cVar2 == '\0') {
    FUN_001018a4(param_1);
    uVar3 = FUN_001018ca(&local_38);
    cVar2 = FUN_001018ec(local_30,param_2,uVar3);
    if (cVar2 == '\0') {
      bVar1 = false;
      goto LAB_001017aa;
    }
  }
  bVar1 = true;
LAB_001017aa:
  if (bVar1) {
    uVar3 = FUN_00101913(param_2);
    FUN_00101950(local_30,uVar3);
    FUN_00101988(&local_28,&local_38);
    local_38 = FUN_001019aa(param_1,local_28,&DAT_00105004,local_30,&local_39);
  }
  lVar4 = FUN_001018ca(&local_38);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return lVar4 + 8;
}




void FUN_00102ad6(undefined8 param_1,undefined8 param_2)

{
  FUN_00102c72(param_1,param_2);
  return;
}




undefined8 FUN_00103680(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}




undefined8 FUN_0010344a(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}




void FUN_001032a4(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  
  FUN_001033da(param_1,param_2);
  lVar1 = FUN_0010344a(param_2);
  if (lVar1 != 0) {
    puVar2 = (undefined8 *)FUN_00103460(param_1);
                    /* try { // try from 001032ff to 00103303 has its CatchHandler @ 00103309 */
    uVar3 = FUN_00103476(param_1,param_2);
    *puVar2 = uVar3;
  }
  return;
}




bool FUN_0010413d(pthread_t *param_1)

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




ulong FUN_00103e5c(long param_1,ulong param_2,long param_3)

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




void FUN_00102a70(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_00102c4d(param_2);
  *param_1 = *puVar1;
  puVar1 = (undefined8 *)FUN_00102a0e(param_3);
  param_1[1] = *puVar1;
  return;
}




void FUN_00103370(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 local_28;
  
  local_28 = param_2;
  while (local_28 != 0) {
    uVar1 = FUN_001027e8(local_28);
    FUN_00103370(param_1,uVar1);
    lVar2 = FUN_00102920(local_28);
    FUN_001021e6(param_1,local_28);
    local_28 = lVar2;
  }
  return;
}




void FUN_00102c86(undefined8 param_1,void *param_2)

{
  operator_delete(param_2);
  return;
}




void FUN_0010299e(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = FUN_00101c6e(param_5);
  uVar2 = FUN_00101c5c(param_4);
  uVar3 = FUN_00101c4a(param_3);
  FUN_00102b82(param_1,param_2,uVar3,uVar2,uVar1);
  return;
}




void FUN_001023b2(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00101bc0(param_2);
  *param_1 = uVar1;
  return;
}




void FUN_0010400d(void)

{
  return;
}




void FUN_00103160(undefined8 param_1)

{
  FUN_00103246(param_1);
  return;
}




undefined4 * FUN_00103842(undefined8 param_1,undefined4 *param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined4 *puVar2;
  
  uVar1 = FUN_0010286a(param_2);
  puVar2 = (undefined4 *)FUN_001038d2(param_3,uVar1);
  *puVar2 = *param_2;
  *(undefined8 *)(puVar2 + 4) = 0;
  *(undefined8 *)(puVar2 + 6) = 0;
  return puVar2;
}




void FUN_00104310(void)

{
  return;
}




void FUN_00104234(pthread_mutex_t *param_1)

{
  pthread_mutex_lock(param_1);
  return;
}




void FUN_00103360(void)

{
  return;
}




undefined8 FUN_001034e9(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_0010363e(param_1,param_2);
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1;
}




void FUN_001020a9(undefined8 param_1)

{
  undefined8 uVar1;
  long in_FS_OFFSET;
  undefined local_11;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  uVar1 = FUN_0010286a(param_1);
  FUN_0010288c(&local_11,uVar1);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




undefined8 FUN_0010391e(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_001023dc(param_1);
  uVar2 = FUN_0010390c(param_2);
  FUN_0010396a(param_1,uVar1,uVar2);
  return uVar1;
}




void FUN_001034da(void)

{
  return;
}




void FUN_0010286a(long param_1)

{
  FUN_00102ab8(param_1 + 0x20);
  return;
}




void FUN_00101836(undefined8 param_1,undefined8 param_2)

{
  FUN_00101af0(param_1,param_2);
  return;
}




void FUN_00102970(undefined8 param_1,undefined8 param_2)

{
  FUN_00102b32(param_1,param_2,0);
  return;
}




long FUN_0010309c(long param_1)

{
  undefined8 local_10;
  
  for (local_10 = param_1; *(long *)(local_10 + 0x10) != 0; local_10 = *(long *)(local_10 + 0x10)) {
  }
  return local_10;
}




void FUN_001018ca(undefined8 *param_1)

{
  FUN_00101b9e(*param_1);
  return;
}



