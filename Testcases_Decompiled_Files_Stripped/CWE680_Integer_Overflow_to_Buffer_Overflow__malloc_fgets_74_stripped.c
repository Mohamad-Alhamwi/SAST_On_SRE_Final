
undefined8 FUN_00103078(undefined8 param_1,undefined8 param_2)

{
  FUN_001028c2(param_1,param_2);
  return param_1;
}




undefined8 FUN_001032ea(undefined8 param_1)

{
  return param_1;
}




void FUN_00101c6a(undefined8 param_1)

{
  FUN_001020e4(param_1);
  return;
}




long FUN_00102a44(long param_1)

{
  return param_1 + 8;
}




undefined8 FUN_00102d22(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}




void FUN_0010351c(undefined8 param_1,void *param_2)

{
  operator_delete(param_2);
  return;
}




undefined4 * FUN_00103478(undefined8 param_1,undefined4 *param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined4 *puVar2;
  
  uVar1 = FUN_00103040(param_2);
  puVar2 = (undefined4 *)FUN_00103684(param_3,uVar1);
  *puVar2 = *param_2;
  *(undefined8 *)(puVar2 + 4) = 0;
  *(undefined8 *)(puVar2 + 6) = 0;
  return puVar2;
}




long FUN_001018a9(long param_1)

{
  undefined8 local_10;
  
  for (local_10 = param_1; *(long *)(local_10 + 0x10) != 0; local_10 = *(long *)(local_10 + 0x10)) {
  }
  return local_10;
}




undefined8 FUN_0010373a(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_00102bc8(param_1);
  uVar2 = FUN_00103727(param_2);
  FUN_001037c8(param_1,uVar1,uVar2);
  return uVar1;
}




void FUN_00102d6c(undefined8 *param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  
  *param_1 = *param_2;
  puVar1 = (undefined8 *)FUN_001033af(param_3);
  param_1[1] = *puVar1;
  return;
}




void FUN_00103544(undefined8 param_1,ulong param_2)

{
  ulong uVar1;
  
  uVar1 = FUN_001036be(param_1);
  if (uVar1 < param_2) {
    std::__throw_bad_alloc();
  }
  operator_new(param_2 * 0x28);
  return;
}




void FUN_00102b9e(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_0010222e(param_2);
  *param_1 = uVar1;
  return;
}




void FUN_00102d4e(undefined8 param_1)

{
  FUN_00102717(param_1);
  return;
}




undefined8 * FUN_00102fd4(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = std::_Rb_tree_increment((_Rb_tree_node_base *)*param_1);
  *param_1 = uVar1;
  return param_1;
}




undefined8 FUN_001034dc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}




void FUN_0010220c(long param_1)

{
  FUN_00102b18(param_1 + 0x20);
  return;
}




void FUN_00104251(pthread_mutex_t *param_1)

{
  pthread_mutex_lock(param_1);
  return;
}




void FUN_00103684(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *param_1;
  uVar2 = FUN_00103727(param_2);
  FUN_0010373a(uVar1,uVar2);
  return;
}




undefined8 FUN_00102054(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}




void FUN_001030a6(void)

{
  return;
}




void FUN_00103bdc(char param_1)

{
  printf("%02x\n",(ulong)(uint)(int)param_1);
  return;
}




void FUN_00103a85(char *param_1)

{
  if (param_1 != (char *)0x0) {
    puts(param_1);
  }
  return;
}




void FUN_00104035(void)

{
  return;
}




void FUN_00103508(void)

{
  return;
}




void FUN_0010333f(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = FUN_001022dc(param_5);
  uVar2 = FUN_001022ca(param_4);
  uVar3 = FUN_001022b8(param_3);
  FUN_00103594(param_1,param_2,uVar3,uVar2,uVar1);
  return;
}




void FUN_00102b6e(undefined8 param_1)

{
  FUN_001032fc(param_1);
  return;
}




long FUN_00102d38(long param_1)

{
  return param_1 + 0x20;
}




void FUN_00102854(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = param_2;
  return;
}




void FUN_0010404b(void)

{
  return;
}




void FUN_001016db(void)

{
  undefined4 *puVar1;
  long in_FS_OFFSET;
  undefined local_88 [48];
  undefined4 local_58 [14];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_001019ae(local_88);
  local_58[0] = 0;
                    /* try { // try from 0010172f to 00101792 has its CatchHandler @ 001017de */
  puVar1 = (undefined4 *)FUN_00101ab2(local_88,local_58);
  *puVar1 = 0x14;
  local_58[0] = 1;
  puVar1 = (undefined4 *)FUN_00101ab2(local_88,local_58);
  *puVar1 = 0x14;
  local_58[0] = 2;
  puVar1 = (undefined4 *)FUN_00101ab2(local_88,local_58);
  *puVar1 = 0x14;
  FUN_001019ee(local_58,local_88);
                    /* try { // try from 0010179a to 0010179e has its CatchHandler @ 001017c9 */
  FUN_001039be(local_58);
  FUN_001019ce(local_58);
  FUN_001019ce(local_88);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




undefined8 FUN_0010222e(undefined8 param_1)

{
  return param_1;
}




void FUN_001019ce(undefined8 param_1)

{
  FUN_00101a74(param_1);
  return;
}




undefined8 FUN_0010291e(long param_1,long param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  uVar1 = FUN_00102a44(param_1);
  uVar2 = FUN_001030ba(param_2);
  uVar1 = FUN_001030d0(param_1,uVar2,uVar1,param_3);
  puVar3 = (undefined8 *)FUN_00102f4a(param_1);
  uVar2 = FUN_0010323f(uVar1);
  *puVar3 = uVar2;
  puVar3 = (undefined8 *)FUN_00102d38(param_1);
  uVar2 = FUN_0010325d(uVar1);
  *puVar3 = uVar2;
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  return uVar1;
}




void FUN_00101c9a(void)

{
  return;
}




void FUN_00103c89(byte param_1)

{
  printf("%02x\n",(ulong)param_1);
  return;
}




undefined8 FUN_001030ba(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}




/* WARNING: Removing unreachable block (ram,0x001014a3) */
/* WARNING: Removing unreachable block (ram,0x001014af) */

void FUN_00101490(void)

{
  return;
}




void FUN_001028ec(void)

{
  return;
}




void FUN_0010325d(undefined8 param_1)

{
  FUN_001018d6(param_1);
  return;
}




void FUN_00101caa(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 local_28;
  
  local_28 = param_2;
  while (local_28 != 0) {
    uVar1 = FUN_001020f3(local_28);
    FUN_00101caa(param_1,uVar1);
    lVar2 = FUN_00102109(local_28);
    FUN_00102120(param_1,local_28);
    local_28 = lVar2;
  }
  return;
}




void FUN_0010192e(long param_1)

{
  *(undefined8 *)(param_1 + 8) = 0;
  *(long *)(param_1 + 0x10) = param_1;
  *(long *)(param_1 + 0x18) = param_1;
  *(undefined8 *)(param_1 + 0x20) = 0;
  return;
}




void FUN_0010323f(undefined8 param_1)

{
  FUN_001018a9(param_1);
  return;
}




void FUN_00103fa6(void)

{
  return;
}




undefined8 FUN_00102109(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}




undefined8 FUN_001041d8(undefined8 *param_1)

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




ulong FUN_00103e79(long param_1,ulong param_2,long param_3)

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




void FUN_00101896(void)

{
  return;
}




undefined8 FUN_0010365f(undefined8 param_1)

{
  return param_1;
}




void FUN_00101fe4(long param_1,undefined8 param_2)

{
  long lVar1;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00102872(param_1,param_2);
  FUN_001028ec(param_1,param_2);
  FUN_00101904(param_1 + 8);
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




undefined8 FUN_00103062(undefined8 param_1,undefined8 param_2)

{
  return param_2;
}




void FUN_00102bc8(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_0010327c(param_1);
  FUN_00103311(uVar1,1);
  return;
}




long FUN_001030d0(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 local_40;
  undefined8 local_38;
  
  lVar1 = FUN_00103478(param_1,param_2,param_4);
  *(undefined8 *)(lVar1 + 8) = param_3;
  if (*(long *)(param_2 + 0x18) != 0) {
    uVar2 = FUN_001034dc(param_2);
                    /* try { // try from 0010313f to 001031d1 has its CatchHandler @ 001031fd */
    uVar2 = FUN_001030d0(param_1,uVar2,lVar1,param_4);
    *(undefined8 *)(lVar1 + 0x18) = uVar2;
  }
  local_38 = FUN_001034f2(param_2);
  local_40 = lVar1;
  while (local_38 != 0) {
    lVar3 = FUN_00103478(param_1,local_38,param_4);
    *(long *)(local_40 + 0x10) = lVar3;
    *(long *)(lVar3 + 8) = local_40;
    if (*(long *)(local_38 + 0x18) != 0) {
      uVar2 = FUN_001034dc(local_38);
      uVar2 = FUN_001030d0(param_1,uVar2,lVar3,param_4);
      *(undefined8 *)(lVar3 + 0x18) = uVar2;
    }
    local_38 = FUN_001034f2(local_38);
    local_40 = lVar3;
  }
  return lVar1;
}




ulong FUN_00103d75(long param_1,ulong param_2,long param_3)

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




undefined4 FUN_00101de0(undefined8 param_1,int *param_2,int *param_3)

{
  return CONCAT31((int3)((uint)*param_3 >> 8),*param_2 < *param_3);
}




long FUN_00101ab2(undefined8 param_1,undefined8 param_2)

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
  local_38 = FUN_00101d2a(param_1,param_2);
  local_28 = FUN_00101d54(param_1);
  cVar2 = FUN_00101d72(&local_38,&local_28);
  if (cVar2 == '\0') {
    FUN_00101d98(param_1);
    uVar3 = FUN_00101dbe(&local_38);
    cVar2 = FUN_00101de0(local_30,param_2,uVar3);
    if (cVar2 == '\0') {
      bVar1 = false;
      goto LAB_00101b52;
    }
  }
  bVar1 = true;
LAB_00101b52:
  if (bVar1) {
    uVar3 = FUN_00101e07(param_2);
    FUN_00101e44(local_30,uVar3);
    FUN_00101e7c(&local_28,&local_38);
    local_38 = FUN_00101e9e(param_1,local_28,&DAT_00105004,local_30,&local_39);
  }
  lVar4 = FUN_00101dbe(&local_38);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return lVar4 + 4;
}




void FUN_0010401f(void)

{
  return;
}




void FUN_00103aab(long param_1)

{
  if (param_1 != 0) {
    wprintf(L"%ls\n",param_1);
  }
  return;
}




void FUN_001037c8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  FUN_00101880(0x28,param_2);
  uVar1 = FUN_00103727(param_3);
  uVar2 = FUN_0010220c(param_2);
  uVar3 = FUN_0010327c(param_1);
  FUN_00103854(uVar3,uVar2,uVar1);
  return;
}




void FUN_00104056(long param_1)

{
  (**(code **)(param_1 + 8))(*(undefined8 *)(param_1 + 0x10));
                    /* WARNING: Subroutine does not return */
  pthread_exit((void *)0x0);
}




undefined8 FUN_00103f58(void)

{
  return 1;
}




void FUN_00103fe8(void)

{
  return;
}




undefined8 FUN_001036be(void)

{
  return 0x333333333333333;
}




void FUN_00102900(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = param_2;
  return;
}




void FUN_00103f9b(void)

{
  return;
}




undefined8 FUN_00103727(undefined8 param_1)

{
  return param_1;
}




undefined8 FUN_0010408d(pthread_t param_1,pthread_t param_2,undefined8 *param_3)

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
    iVar1 = pthread_create(&local_20,(pthread_attr_t *)0x0,FUN_00104056,local_18);
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




undefined4 FUN_00101d98(undefined8 param_1)

{
  undefined4 unaff_EBX;
  
  FUN_001021fe(param_1);
  return unaff_EBX;
}




void FUN_001029c6(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_0010220c(param_2);
  uVar2 = FUN_0010327c(param_1);
  FUN_0010328e(uVar2,uVar1);
  return;
}




undefined8 FUN_001034f2(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}




void FUN_00103311(undefined8 param_1,undefined8 param_2)

{
  FUN_00103544(param_1,param_2,0);
  return;
}




undefined8 * FUN_00102fa8(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = std::_Rb_tree_decrement((_Rb_tree_node_base *)*param_1);
  *param_1 = uVar1;
  return param_1;
}




void FUN_001028c2(undefined8 param_1,undefined8 param_2)

{
  FUN_001030a6(param_1,param_2);
  return;
}




void FUN_001038f7(undefined8 param_1)

{
  int *piVar1;
  long in_FS_OFFSET;
  undefined4 local_28;
  int local_24;
  ulong local_20;
  undefined4 *local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_28 = 2;
  piVar1 = (int *)FUN_00101ab2(param_1,&local_28);
  local_24 = *piVar1;
  local_18 = (undefined4 *)malloc((long)local_24 << 2);
  if (local_18 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  for (local_20 = 0; local_20 < (ulong)(long)local_24; local_20 = local_20 + 1) {
    local_18[local_20] = 0;
  }
  FUN_00103add(*local_18);
  free(local_18);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_001039be(undefined8 param_1)

{
  int *piVar1;
  long in_FS_OFFSET;
  undefined4 local_28;
  int local_24;
  ulong local_20;
  undefined4 *local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_28 = 2;
  piVar1 = (int *)FUN_00101ab2(param_1,&local_28);
  local_24 = *piVar1;
  local_18 = (undefined4 *)malloc((long)local_24 << 2);
  if (local_18 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  for (local_20 = 0; local_20 < (ulong)(long)local_24; local_20 = local_20 + 1) {
    local_18[local_20] = 0;
  }
  FUN_00103add(*local_18);
  free(local_18);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00104014(void)

{
  return;
}




void FUN_00102120(undefined8 param_1,undefined8 param_2)

{
  FUN_001029c6(param_1,param_2);
  FUN_00102a0a(param_1,param_2);
  return;
}




void FUN_001019ee(undefined8 param_1,undefined8 param_2)

{
  FUN_00101bde(param_1,param_2);
  return;
}




undefined8 FUN_001022ca(undefined8 param_1)

{
  return param_1;
}




void FUN_00103c61(uint param_1)

{
  printf("%u\n",(ulong)param_1);
  return;
}




bool FUN_0010415a(pthread_t *param_1)

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




void FUN_00103bb1(undefined8 param_1)

{
  printf("%zu\n",param_1);
  return;
}




undefined8 FUN_00101d14(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}




void FUN_00103040(long param_1)

{
  FUN_0010345a(param_1 + 0x20);
  return;
}




void FUN_001038b0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  puVar1 = (undefined8 *)FUN_00103727(param_3);
  puVar2 = (undefined8 *)FUN_00101880(8,param_2);
  *puVar2 = *puVar1;
  return;
}




void FUN_001019ae(undefined8 param_1)

{
  FUN_0010198e(param_1);
  return;
}




void FUN_00103b86(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




undefined8 FUN_00102b8c(undefined8 param_1)

{
  return param_1;
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




undefined8 FUN_00103672(undefined8 param_1)

{
  return param_1;
}




void _FINI_0(void)

{
  if (DAT_00109028 == '\0') {
    if (PTR___cxa_finalize_00108fd8 != (undefined *)0x0) {
      __cxa_finalize(PTR_LOOP_00109008);
    }
    FUN_00101490();
    DAT_00109028 = 1;
    return;
  }
  return;
}




long FUN_00102f4a(long param_1)

{
  return param_1 + 0x18;
}




void FUN_00103ce2(uint *param_1)

{
  printf("%d -- %d\n",(ulong)*param_1,(ulong)param_1[1]);
  return;
}




void FUN_00104330(void)

{
  return;
}




void FUN_001036d6(undefined8 param_1,undefined8 param_2)

{
  long in_FS_OFFSET;
  undefined local_29;
  undefined8 local_28;
  undefined8 local_20;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_28 = param_2;
  local_20 = param_1;
  FUN_00103786(param_1,param_2,&local_29);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00101a18(long param_1)

{
  FUN_00101c6a(param_1);
  FUN_00101c8a(param_1);
  FUN_00101904(param_1 + 8);
  return;
}




undefined8 FUN_001022b8(undefined8 param_1)

{
  return param_1;
}




void FUN_00102f60(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_001033af(param_2);
  *param_1 = *puVar1;
  puVar1 = (undefined8 *)FUN_001033af(param_3);
  param_1[1] = *puVar1;
  return;
}




void FUN_0010345a(undefined8 param_1)

{
  FUN_00103672(param_1);
  return;
}




undefined8 FUN_00101d72(long *param_1,long *param_2)

{
  return CONCAT71((int7)((ulong)*param_2 >> 8),*param_1 == *param_2);
}




undefined8 FUN_0010181b(void)

{
  time_t tVar1;
  
  tVar1 = time((time_t *)0x0);
  srand((uint)tVar1);
  FUN_00103a85("Calling good()...");
  FUN_0010180b();
  FUN_00103a85("Finished good()");
  FUN_00103a85("Calling bad()...");
  FUN_00101549();
  FUN_00103a85("Finished bad()");
  return 0;
}




void FUN_00101e7c(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  return;
}




void FUN_00103fc7(void)

{
  return;
}




void FUN_00101d2a(undefined8 param_1,undefined8 param_2)

{
  FUN_0010215e(param_1,param_2);
  return;
}




int FUN_00103f76(void)

{
  int iVar1;
  
  iVar1 = rand();
  return iVar1 % 2;
}




void FUN_00103f90(void)

{
  return;
}




void FUN_0010215e(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_00102a44(param_1);
  uVar2 = FUN_00101d14(param_1);
  FUN_00102a5a(param_1,uVar2,uVar1,param_2);
  return;
}




undefined8 FUN_001020f3(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}




void FUN_00104009(void)

{
  return;
}




void FUN_00101a54(undefined8 param_1)

{
  FUN_00101c9a(param_1);
  return;
}




void FUN_00102bf4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  FUN_00101880(0x28,param_2);
  uVar1 = FUN_001022dc(param_5);
  uVar2 = FUN_001022ca(param_4);
  uVar3 = FUN_001022b8(param_3);
  uVar4 = FUN_0010220c(param_2);
  uVar5 = FUN_0010327c(param_1);
                    /* try { // try from 00102c83 to 00102c87 has its CatchHandler @ 00102c8a */
  FUN_0010333f(uVar5,uVar4,uVar3,uVar2,uVar1);
  return;
}




void FUN_00101bde(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  
  FUN_00101fe4(param_1,param_2);
  lVar1 = FUN_00102054(param_2);
  if (lVar1 != 0) {
    puVar2 = (undefined8 *)FUN_0010206a(param_1);
                    /* try { // try from 00101c39 to 00101c3d has its CatchHandler @ 00101c43 */
    uVar3 = FUN_00102080(param_1,param_2);
    *puVar2 = uVar3;
  }
  return;
}




void FUN_00103000(undefined8 *param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_001033af(param_2);
  *param_1 = *puVar1;
  param_1[1] = *param_3;
  return;
}




undefined8 FUN_001033af(undefined8 param_1)

{
  return param_1;
}




void FUN_00103ff3(void)

{
  return;
}




void FUN_00101d54(undefined8 param_1)

{
  FUN_001021ae(param_1);
  return;
}




void FUN_00102b18(undefined8 param_1)

{
  FUN_001032ea(param_1);
  return;
}




void FUN_00102717(undefined8 param_1)

{
  undefined8 uVar1;
  long in_FS_OFFSET;
  undefined local_11;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  uVar1 = FUN_00103040(param_1);
  FUN_00103062(&local_11,uVar1);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00103d15(long param_1,ulong param_2)

{
  ulong local_10;
  
  for (local_10 = 0; local_10 < param_2; local_10 = local_10 + 1) {
    printf("%02x",(ulong)*(byte *)(local_10 + param_1));
  }
  puts("");
  return;
}




void FUN_0010196e(undefined8 param_1)

{
  FUN_00101a54(param_1);
  return;
}




undefined8 FUN_00102872(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00103078(param_1,param_2);
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1;
}




void FUN_00103854(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00103727(param_3);
  FUN_001038b0(param_1,param_2,uVar1);
  return;
}




undefined8 FUN_00101e07(undefined8 param_1)

{
  return param_1;
}




void FUN_00102240(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_0010222e(param_2);
  FUN_00102b36(param_1,uVar1);
  return;
}




void FUN_0010180b(void)

{
  FUN_001016db();
  return;
}




void FUN_00103fb1(void)

{
  return;
}




void FUN_00103fbc(void)

{
  return;
}




void FUN_00102a0a(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_0010327c(param_1);
  FUN_001032b8(uVar1,param_2,1);
  return;
}




void FUN_001020e4(void)

{
  return;
}




void FUN_00103fdd(void)

{
  return;
}




undefined8 FUN_001022ee(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar1 = FUN_00102bc8(param_1);
  uVar2 = FUN_001022dc(param_4);
  uVar3 = FUN_001022ca(param_3);
  uVar4 = FUN_001022b8(param_2);
  FUN_00102bf4(param_1,uVar1,uVar4,uVar3,uVar2);
  return uVar1;
}




void FUN_00101904(undefined4 *param_1)

{
  *param_1 = 0;
  FUN_0010192e(param_1);
  return;
}




undefined8 FUN_00102a5a(undefined8 param_1,long param_2,long param_3,undefined8 param_4)

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
    uVar2 = FUN_00102717(local_38);
    cVar1 = FUN_00101de0(param_1,uVar2,param_4);
    if (cVar1 == '\x01') {
      local_38 = FUN_001020f3(local_38);
    }
    else {
      local_40 = local_38;
      local_38 = FUN_00102109(local_38);
    }
  }
  FUN_00102854(&local_28,local_40);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_28;
}




void FUN_00103b05(short param_1)

{
  printf("%hd\n",(ulong)(uint)(int)param_1);
  return;
}




void FUN_0010198e(undefined8 param_1)

{
  FUN_00101a18(param_1);
  return;
}




undefined8 FUN_00101880(undefined8 param_1,undefined8 param_2)

{
  return param_2;
}




undefined8 FUN_00102dac(undefined8 param_1,undefined8 param_2)

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
  local_58 = FUN_00101d14(param_1);
  local_50 = FUN_00102a44(param_1);
  local_59 = '\x01';
  while (local_58 != 0) {
    local_50 = local_58;
    uVar2 = FUN_00102717(local_58);
    local_59 = FUN_00101de0(param_1,param_2,uVar2);
    if (local_59 == '\0') {
      local_58 = FUN_001020f3(local_58);
    }
    else {
      local_58 = FUN_00102109(local_58);
    }
  }
  FUN_00102854(&local_48,local_50);
  if (local_59 != '\0') {
    local_38[0] = FUN_001033c2(param_1);
    cVar1 = FUN_00101d72(&local_48,local_38);
    if (cVar1 != '\0') {
      FUN_00103412(local_38,&local_58,&local_50);
      goto LAB_00102f2e;
    }
    FUN_00102fa8(&local_48);
  }
  uVar2 = FUN_00102d4e(local_48);
  cVar1 = FUN_00101de0(param_1,uVar2,param_2);
  if (cVar1 == '\0') {
    local_40 = 0;
    FUN_00103000(local_38,&local_48,&local_40);
  }
  else {
    FUN_00103412(local_38,&local_58,&local_50);
  }
LAB_00102f2e:
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return local_38[0];
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00103891(undefined8 param_1)

{
  FUN_00102b6e(param_1);
  return;
}




undefined8 FUN_001021ae(long param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00102854(&local_18,param_1 + 8);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00103b5b(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




undefined8 FUN_0010327c(undefined8 param_1)

{
  return param_1;
}




undefined8 FUN_001022dc(undefined8 param_1)

{
  return param_1;
}




void FUN_00103412(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_0010365f(param_2);
  *param_1 = *puVar1;
  puVar1 = (undefined8 *)FUN_001033af(param_3);
  param_1[1] = *puVar1;
  return;
}




undefined8
FUN_0010276a(long param_1,long param_2,_Rb_tree_node_base *param_3,_Rb_tree_node_base *param_4)

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
    p_Var3 = (_Rb_tree_node_base *)FUN_00102a44(param_1);
    if (param_3 != p_Var3) {
      uVar4 = FUN_00102d4e(param_3);
      uVar5 = FUN_00102717(param_4);
      cVar1 = FUN_00101de0(param_1,uVar5,uVar4);
      if (cVar1 == '\0') {
        bVar2 = false;
        goto LAB_001027ee;
      }
    }
  }
  bVar2 = true;
LAB_001027ee:
  std::_Rb_tree_insert_and_rebalance(bVar2,param_4,param_3,(_Rb_tree_node_base *)(param_1 + 8));
  *(long *)(param_1 + 0x28) = *(long *)(param_1 + 0x28) + 1;
  FUN_00102854(&local_28,param_4);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_28;
}




void FUN_00102b36(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_0010222e(param_2);
  FUN_00102b9e(param_1,uVar1);
  return;
}




void FUN_00103c07(undefined4 param_1)

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




void FUN_00101549(void)

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
  FUN_001019ae(local_98);
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
                    /* try { // try from 001015a9 to 0010165c has its CatchHandler @ 001016ab */
  pcVar1 = fgets(local_2e,0xe,stdin);
  if (pcVar1 == (char *)0x0) {
    FUN_00103a85("fgets() failed.");
  }
  else {
    local_9c = atoi(local_2e);
  }
  local_68[0] = 0;
  piVar2 = (int *)FUN_00101ab2(local_98,local_68);
  *piVar2 = local_9c;
  local_68[0] = 1;
  piVar2 = (int *)FUN_00101ab2(local_98,local_68);
  *piVar2 = local_9c;
  local_68[0] = 2;
  piVar2 = (int *)FUN_00101ab2(local_98,local_68);
  *piVar2 = local_9c;
  FUN_001019ee(local_68,local_98);
                    /* try { // try from 00101664 to 00101668 has its CatchHandler @ 00101696 */
  FUN_001038f7(local_68);
  FUN_001019ce(local_68);
  FUN_001019ce(local_98);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00103836(undefined8 param_1)

{
  FUN_00103891(param_1);
  return;
}




undefined8 FUN_001032fc(undefined8 *param_1)

{
  return *param_1;
}




void FUN_001021fe(void)

{
  return;
}




void FUN_0010428f(pthread_mutex_t *param_1)

{
  pthread_mutex_destroy(param_1);
  free(param_1);
  return;
}




undefined8
FUN_00101e9e(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  uVar1 = FUN_001022dc(param_5);
  uVar2 = FUN_001022ca(param_4);
  uVar3 = FUN_001022b8(param_3);
  local_40 = FUN_001022ee(param_1,uVar3,uVar2,uVar1);
                    /* try { // try from 00101f1a to 00101f5d has its CatchHandler @ 00101f9b */
  uVar1 = FUN_00102717(local_40);
  local_38 = FUN_0010236e(param_1,param_2,uVar1);
  if (local_38._8_8_ == 0) {
    FUN_00102120(param_1,local_40);
    FUN_00102854(&local_48,local_38._0_8_);
  }
  else {
    local_48 = FUN_0010276a(param_1,local_38._0_8_,local_38._8_8_,local_40);
  }
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_48;
}




void FUN_00101dbe(undefined8 *param_1)

{
  FUN_0010220c(*param_1);
  return;
}




void FUN_00103add(uint param_1)

{
  printf("%d\n",(ulong)param_1);
  return;
}




undefined8 FUN_00102cd2(undefined8 *param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00102854(&local_18,*param_1);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




/* WARNING: Removing unreachable block (ram,0x001014e4) */
/* WARNING: Removing unreachable block (ram,0x001014f0) */

void FUN_001014c0(void)

{
  return;
}




undefined8 FUN_00101e44(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_0010222e(param_2);
  FUN_00102240(param_1,uVar1);
  return param_1;
}




long FUN_001018d6(long param_1)

{
  undefined8 local_10;
  
  for (local_10 = param_1; *(long *)(local_10 + 0x18) != 0; local_10 = *(long *)(local_10 + 0x18)) {
  }
  return local_10;
}




undefined8 FUN_001041b5(void *param_1)

{
  free(param_1);
  return 1;
}




void FUN_00103786(undefined4 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined4 *puVar2;
  
  uVar1 = FUN_00103836(param_2);
  puVar2 = (undefined4 *)FUN_00102b8c(uVar1);
  *param_1 = *puVar2;
  param_1[1] = 0;
  return;
}




void FUN_00103fd2(void)

{
  return;
}




void FUN_00104270(pthread_mutex_t *param_1)

{
  pthread_mutex_unlock(param_1);
  return;
}




void FUN_0010402a(void)

{
  return;
}




void FUN_00101020(void)

{
  (*(code *)PTR_00108ec8)();
  return;
}




undefined8 FUN_001033c2(long param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00102854(&local_18,*(undefined8 *)(param_1 + 0x18));
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00103594(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  undefined8 uVar1;
  long in_FS_OFFSET;
  undefined local_38 [8];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_001022b8(param_3);
  uVar1 = FUN_001022ca(param_4);
  FUN_00101e1a(local_38,uVar1);
  FUN_001022dc(param_5);
  uVar1 = FUN_00101880(8,param_2);
                    /* try { // try from 0010361c to 00103620 has its CatchHandler @ 00103623 */
  FUN_001036d6(uVar1,local_38);
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00101c8a(void)

{
  return;
}




void FUN_00102278(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00102b6e(param_2);
  uVar1 = FUN_00102b8c(uVar1);
  FUN_00102b9e(param_1,uVar1);
  return;
}




void FUN_00101e1a(undefined8 param_1,undefined8 param_2)

{
  FUN_00102278(param_1,param_2);
  return;
}




void FUN_00102080(undefined8 param_1,undefined8 param_2)

{
  long in_FS_OFFSET;
  undefined local_18 [8];
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00102900(local_18,param_1);
  FUN_0010291e(param_1,param_2,local_18);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00103cb4(undefined8 param_1)

{
  printf("%g\n",param_1);
  return;
}




void FUN_00103b31(float param_1)

{
  printf("%f\n",(double)param_1);
  return;
}




void FUN_001032b8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_0010351c(param_1,param_2,param_3);
  return;
}




/* WARNING: Type propagation algorithm not settling */

long FUN_0010236e(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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
  lVar3 = FUN_00102cd2(&local_68);
  local_50 = lVar3;
  lVar4 = FUN_00102a44(local_60);
  uVar7 = local_60;
  if (lVar3 != lVar4) {
    uVar6 = FUN_00102d4e(local_50);
    cVar2 = FUN_00101de0(uVar7,param_3,uVar6);
    lVar3 = local_50;
    uVar7 = local_60;
    if (cVar2 == '\0') {
      uVar6 = FUN_00102d4e(local_50);
      cVar2 = FUN_00101de0(uVar7,uVar6,param_3);
      lVar3 = local_50;
      if (cVar2 == '\0') {
        local_48[1] = 0;
        FUN_00103000(local_48 + 2,&local_50,local_48 + 1);
      }
      else {
        local_48[0] = local_50;
        plVar8 = (long *)FUN_00102d38(local_60);
        uVar7 = local_60;
        if (lVar3 == *plVar8) {
          uVar7 = FUN_00102d38(local_60);
          local_48[1] = 0;
          FUN_00102d6c(local_48 + 2,local_48 + 1,uVar7);
        }
        else {
          puVar5 = (undefined8 *)FUN_00102fd4(local_48);
          uVar6 = FUN_00102d4e(*puVar5);
          cVar2 = FUN_00101de0(uVar7,param_3,uVar6);
          if (cVar2 == '\0') {
            local_48[2] = FUN_00102dac(local_60,param_3);
          }
          else {
            lVar3 = FUN_001020f3(local_50);
            if (lVar3 == 0) {
              local_48[1] = 0;
              FUN_00102d6c(local_48 + 2,local_48 + 1,&local_50);
            }
            else {
              FUN_00102f60(local_48 + 2,local_48,local_48);
            }
          }
        }
      }
    }
    else {
      local_48[0] = local_50;
      plVar8 = (long *)FUN_00102f4a(local_60);
      uVar7 = local_60;
      if (lVar3 == *plVar8) {
        uVar7 = FUN_00102f4a(local_60);
        uVar6 = FUN_00102f4a(local_60);
        FUN_00102f60(local_48 + 2,uVar6,uVar7);
      }
      else {
        puVar5 = (undefined8 *)FUN_00102fa8(local_48);
        uVar6 = FUN_00102d4e(*puVar5);
        cVar2 = FUN_00101de0(uVar7,uVar6,param_3);
        if (cVar2 == '\0') {
          local_48[2] = FUN_00102dac(local_60,param_3);
        }
        else {
          lVar3 = FUN_001020f3(local_48[0]);
          if (lVar3 == 0) {
            local_48[1] = 0;
            FUN_00102d6c(local_48 + 2,local_48 + 1,local_48);
          }
          else {
            FUN_00102f60(local_48 + 2,&local_50,&local_50);
          }
        }
      }
    }
    goto LAB_001026fc;
  }
  lVar3 = FUN_00102d22(local_60);
  uVar7 = local_60;
  if (lVar3 == 0) {
LAB_00102410:
    bVar1 = false;
  }
  else {
    puVar5 = (undefined8 *)FUN_00102d38(local_60);
    uVar6 = FUN_00102d4e(*puVar5);
    cVar2 = FUN_00101de0(uVar7,uVar6,param_3);
    if (cVar2 == '\0') goto LAB_00102410;
    bVar1 = true;
  }
  if (bVar1) {
    uVar7 = FUN_00102d38(local_60);
    local_48[1] = 0;
    FUN_00102d6c(local_48 + 2,local_48 + 1,uVar7);
  }
  else {
    local_48[2] = FUN_00102dac(local_60,param_3);
  }
LAB_001026fc:
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_48[2];
}




long FUN_0010206a(long param_1)

{
  return param_1 + 0x10;
}




undefined8 FUN_00103f67(void)

{
  return 0;
}




void FUN_00103ffe(void)

{
  return;
}




void FUN_00101a74(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00101d14(param_1);
  FUN_00101caa(param_1,uVar1);
  FUN_0010196e(param_1);
  return;
}




void FUN_00104040(void)

{
  return;
}




void FUN_0010328e(undefined8 param_1,undefined8 param_2)

{
  FUN_00103508(param_1,param_2);
  return;
}



