
undefined8 FUN_00101e84(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}




ulong FUN_00103f27(long param_1,ulong param_2,long param_3)

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




void FUN_0010416e(void)

{
  return;
}




void FUN_00101fec(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  return;
}




undefined8 FUN_00102e42(undefined8 *param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_001029c4(&local_18,*param_1);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_001039a8(undefined8 param_1)

{
  FUN_00103a03(param_1);
  return;
}




void FUN_00102290(undefined8 param_1,undefined8 param_2)

{
  FUN_00102b36(param_1,param_2);
  FUN_00102b7a(param_1,param_2);
  return;
}




undefined8 FUN_00101fb4(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_0010239e(param_2);
  FUN_001023b0(param_1,uVar1);
  return param_1;
}




void FUN_00101020(void)

{
  (*(code *)PTR_00108ed8)();
  return;
}




void FUN_00101afe(undefined8 param_1)

{
  FUN_00101b88(param_1);
  return;
}




void FUN_00103cb7(short param_1)

{
  printf("%hd\n",(ulong)(uint)(int)param_1);
  return;
}




void FUN_001041c6(void)

{
  return;
}




void FUN_001041f2(void)

{
  return;
}




void FUN_00101509(void)

{
  void *pvVar1;
  void *pvVar2;
  undefined8 *puVar3;
  long in_FS_OFFSET;
  undefined local_88 [48];
  undefined4 local_58 [14];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00101b1e(local_88);
  pvVar1 = malloc(4);
  if (pvVar1 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  pvVar2 = malloc(8);
  if (pvVar2 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  local_58[0] = 0;
                    /* try { // try from 001015a1 to 0010160a has its CatchHandler @ 00101656 */
  puVar3 = (undefined8 *)FUN_00101c22(local_88,local_58);
  *puVar3 = pvVar1;
  local_58[0] = 1;
  puVar3 = (undefined8 *)FUN_00101c22(local_88,local_58);
  *puVar3 = pvVar1;
  local_58[0] = 2;
  puVar3 = (undefined8 *)FUN_00101c22(local_88,local_58);
  *puVar3 = pvVar1;
  FUN_00101b5e(local_58,local_88);
                    /* try { // try from 00101612 to 00101616 has its CatchHandler @ 00101641 */
  FUN_00103a74(local_58);
  FUN_00101b3e(local_58);
  FUN_00101b3e(local_88);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00102a5c(void)

{
  return;
}




void FUN_00104441(pthread_mutex_t *param_1)

{
  pthread_mutex_destroy(param_1);
  free(param_1);
  return;
}




void FUN_00101a9e(long param_1)

{
  *(undefined8 *)(param_1 + 8) = 0;
  *(long *)(param_1 + 0x10) = param_1;
  *(long *)(param_1 + 0x18) = param_1;
  *(undefined8 *)(param_1 + 0x20) = 0;
  return;
}




void FUN_00101a74(undefined4 *param_1)

{
  *param_1 = 0;
  FUN_00101a9e(param_1);
  return;
}




void FUN_00103d38(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




void FUN_00103ba8(undefined8 param_1)

{
  undefined8 *puVar1;
  long in_FS_OFFSET;
  undefined4 local_24;
  void *local_20;
  undefined4 *local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_24 = 2;
  puVar1 = (undefined8 *)FUN_00101c22(param_1,&local_24);
  local_20 = (void *)*puVar1;
  local_18 = (undefined4 *)FUN_001019f1(4,local_20);
  *local_18 = 5;
  FUN_00103c8f(*local_18);
  free(local_20);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00103d0d(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




void FUN_00103e3b(byte param_1)

{
  printf("%02x\n",(ulong)param_1);
  return;
}




void FUN_001041d1(void)

{
  return;
}




undefined8 FUN_00103532(long param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_001029c4(&local_18,*(undefined8 *)(param_1 + 0x18));
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_001041fd(void)

{
  return;
}




undefined8 FUN_00104367(void *param_1)

{
  free(param_1);
  return 1;
}




undefined8 FUN_001019f1(undefined8 param_1,undefined8 param_2)

{
  return param_2;
}




void FUN_001033af(undefined8 param_1)

{
  FUN_00101a1a(param_1);
  return;
}




ulong FUN_0010402b(long param_1,ulong param_2,long param_3)

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




void FUN_00101b3e(undefined8 param_1)

{
  FUN_00101be4(param_1);
  return;
}




void FUN_001041e7(void)

{
  return;
}




void FUN_0010418f(void)

{
  return;
}




void FUN_00103a74(undefined8 param_1)

{
  undefined8 *puVar1;
  long in_FS_OFFSET;
  undefined4 local_24;
  void *local_20;
  undefined4 *local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_24 = 2;
  puVar1 = (undefined8 *)FUN_00101c22(param_1,&local_24);
  local_20 = (void *)*puVar1;
  local_18 = (undefined4 *)FUN_001019f1(8,local_20);
  *local_18 = 5;
  local_18[1] = 10;
  FUN_00103c8f(*local_18);
  free(local_20);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




long FUN_001021da(long param_1)

{
  return param_1 + 0x10;
}




void FUN_00103ce3(float param_1)

{
  printf("%f\n",(double)param_1);
  return;
}




undefined8 FUN_0010239e(undefined8 param_1)

{
  return param_1;
}




undefined8
FUN_0010200e(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  uVar1 = FUN_0010244c(param_5);
  uVar2 = FUN_0010243a(param_4);
  uVar3 = FUN_00102428(param_3);
  local_40 = FUN_0010245e(param_1,uVar3,uVar2,uVar1);
                    /* try { // try from 0010208a to 001020cd has its CatchHandler @ 0010210b */
  uVar1 = FUN_00102887(local_40);
  local_38 = FUN_001024de(param_1,param_2,uVar1);
  if (local_38._8_8_ == 0) {
    FUN_00102290(param_1,local_40);
    FUN_001029c4(&local_48,local_38._0_8_);
  }
  else {
    local_48 = FUN_001028da(param_1,local_38._0_8_,local_38._8_8_,local_40);
  }
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_48;
}




undefined8 FUN_001037e2(undefined8 param_1)

{
  return param_1;
}




void FUN_00102887(undefined8 param_1)

{
  undefined8 uVar1;
  long in_FS_OFFSET;
  undefined local_11;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  uVar1 = FUN_001031b0(param_1);
  FUN_001031d2(&local_11,uVar1);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00103582(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_001037cf(param_2);
  *param_1 = *puVar1;
  puVar1 = (undefined8 *)FUN_0010351f(param_3);
  param_1[1] = *puVar1;
  return;
}




long FUN_00101a1a(long param_1)

{
  undefined8 local_10;
  
  for (local_10 = param_1; *(long *)(local_10 + 0x10) != 0; local_10 = *(long *)(local_10 + 0x10)) {
  }
  return local_10;
}




void FUN_00102c88(undefined8 param_1)

{
  FUN_0010345a(param_1);
  return;
}




undefined8 FUN_001038aa(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_00102d38(param_1);
  uVar2 = FUN_00103897(param_2);
  FUN_0010393a(param_1,uVar1,uVar2);
  return uVar1;
}




long FUN_00102ea8(long param_1)

{
  return param_1 + 0x20;
}




undefined8 FUN_0010410a(void)

{
  return 1;
}




undefined8 FUN_0010243a(undefined8 param_1)

{
  return param_1;
}




void FUN_00103846(undefined8 param_1,undefined8 param_2)

{
  long in_FS_OFFSET;
  undefined local_29;
  undefined8 local_28;
  undefined8 local_20;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_28 = param_2;
  local_20 = param_1;
  FUN_001038f6(param_1,param_2,&local_29);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_001022ce(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_00102bb4(param_1);
  uVar2 = FUN_00101e84(param_1);
  FUN_00102bca(param_1,uVar2,uVar1,param_2);
  return;
}




void FUN_00101be4(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00101e84(param_1);
  FUN_00101e1a(param_1,uVar1);
  FUN_00101ade(param_1);
  return;
}




void FUN_00104142(void)

{
  return;
}




undefined4 FUN_00101f50(undefined8 param_1,int *param_2,int *param_3)

{
  return CONCAT31((int3)((uint)*param_3 >> 8),*param_2 < *param_3);
}




void FUN_00102ebe(undefined8 param_1)

{
  FUN_00102887(param_1);
  return;
}




undefined8 FUN_00101f77(undefined8 param_1)

{
  return param_1;
}




void FUN_00102b36(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_0010237c(param_2);
  uVar2 = FUN_001033ec(param_1);
  FUN_001033fe(uVar2,uVar1);
  return;
}




undefined8 FUN_001021c4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}




int FUN_00104128(void)

{
  int iVar1;
  
  iVar1 = rand();
  return iVar1 % 2;
}




void FUN_00101a07(void)

{
  return;
}




long FUN_00101a47(long param_1)

{
  undefined8 local_10;
  
  for (local_10 = param_1; *(long *)(local_10 + 0x18) != 0; local_10 = *(long *)(local_10 + 0x18)) {
  }
  return local_10;
}




void FUN_00101e0a(void)

{
  return;
}




undefined8 FUN_0010345a(undefined8 param_1)

{
  return param_1;
}




void FUN_00101e9a(undefined8 param_1,undefined8 param_2)

{
  FUN_001022ce(param_1,param_2);
  return;
}




void FUN_00102a32(undefined8 param_1,undefined8 param_2)

{
  FUN_00103216(param_1,param_2);
  return;
}




/* WARNING: Removing unreachable block (ram,0x001014a4) */
/* WARNING: Removing unreachable block (ram,0x001014b0) */

void FUN_00101480(void)

{
  return;
}




long FUN_00103240(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 local_40;
  undefined8 local_38;
  
  lVar1 = FUN_001035e8(param_1,param_2,param_4);
  *(undefined8 *)(lVar1 + 8) = param_3;
  if (*(long *)(param_2 + 0x18) != 0) {
    uVar2 = FUN_0010364c(param_2);
                    /* try { // try from 001032af to 00103341 has its CatchHandler @ 0010336d */
    uVar2 = FUN_00103240(param_1,uVar2,lVar1,param_4);
    *(undefined8 *)(lVar1 + 0x18) = uVar2;
  }
  local_38 = FUN_00103662(param_2);
  local_40 = lVar1;
  while (local_38 != 0) {
    lVar3 = FUN_001035e8(param_1,local_38,param_4);
    *(long *)(local_40 + 0x10) = lVar3;
    *(long *)(lVar3 + 8) = local_40;
    if (*(long *)(local_38 + 0x18) != 0) {
      uVar2 = FUN_0010364c(local_38);
      uVar2 = FUN_00103240(param_1,uVar2,lVar3,param_4);
      *(undefined8 *)(lVar3 + 0x18) = uVar2;
    }
    local_38 = FUN_00103662(local_38);
    local_40 = lVar3;
  }
  return lVar1;
}




void FUN_00103ec7(long param_1,ulong param_2)

{
  ulong local_10;
  
  for (local_10 = 0; local_10 < param_2; local_10 = local_10 + 1) {
    printf("%02x",(ulong)*(byte *)(local_10 + param_1));
  }
  puts("");
  return;
}




void FUN_00103c37(char *param_1)

{
  if (param_1 != (char *)0x0) {
    puts(param_1);
  }
  return;
}




undefined8 FUN_00104119(void)

{
  return 0;
}




undefined8 FUN_0010423f(pthread_t param_1,pthread_t param_2,undefined8 *param_3)

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
    iVar1 = pthread_create(&local_20,(pthread_attr_t *)0x0,FUN_00104208,local_18);
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




void _FINI_0(void)

{
  if (DAT_00109020 == '\0') {
    if (PTR___cxa_finalize_00108fd8 != (undefined *)0x0) {
      __cxa_finalize(PTR_LOOP_00109008);
    }
    FUN_00101450();
    DAT_00109020 = 1;
    return;
  }
  return;
}




void FUN_00103170(undefined8 *param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_0010351f(param_2);
  *param_1 = *puVar1;
  param_1[1] = *param_3;
  return;
}




void FUN_00101683(void)

{
  void *pvVar1;
  undefined8 *puVar2;
  long in_FS_OFFSET;
  undefined local_88 [48];
  undefined4 local_58 [14];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00101b1e(local_88);
  pvVar1 = malloc(4);
  if (pvVar1 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  pvVar1 = malloc(8);
  if (pvVar1 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  local_58[0] = 0;
                    /* try { // try from 0010171b to 00101784 has its CatchHandler @ 001017d0 */
  puVar2 = (undefined8 *)FUN_00101c22(local_88,local_58);
  *puVar2 = pvVar1;
  local_58[0] = 1;
  puVar2 = (undefined8 *)FUN_00101c22(local_88,local_58);
  *puVar2 = pvVar1;
  local_58[0] = 2;
  puVar2 = (undefined8 *)FUN_00101c22(local_88,local_58);
  *puVar2 = pvVar1;
  FUN_00101b5e(local_58,local_88);
                    /* try { // try from 0010178c to 00101790 has its CatchHandler @ 001017bb */
  FUN_00103b0e(local_58);
  FUN_00101b3e(local_58);
  FUN_00101b3e(local_88);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00102d38(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_001033ec(param_1);
  FUN_00103481(uVar1,1);
  return;
}




undefined8 FUN_00102279(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}




void FUN_001044e0(void)

{
  return;
}




undefined8 FUN_0010231e(long param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_001029c4(&local_18,param_1 + 8);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




undefined8 FUN_0010438a(undefined8 *param_1)

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




undefined8 FUN_00103897(undefined8 param_1)

{
  return param_1;
}




long FUN_00101c22(undefined8 param_1,undefined8 param_2)

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
  local_38 = FUN_00101e9a(param_1,param_2);
  local_28 = FUN_00101ec4(param_1);
  cVar2 = FUN_00101ee2(&local_38,&local_28);
  if (cVar2 == '\0') {
    FUN_00101f08(param_1);
    uVar3 = FUN_00101f2e(&local_38);
    cVar2 = FUN_00101f50(local_30,param_2,uVar3);
    if (cVar2 == '\0') {
      bVar1 = false;
      goto LAB_00101cc2;
    }
  }
  bVar1 = true;
LAB_00101cc2:
  if (bVar1) {
    uVar3 = FUN_00101f77(param_2);
    FUN_00101fb4(local_30,uVar3);
    FUN_00101fec(&local_28,&local_38);
    local_38 = FUN_0010200e(param_1,local_28,&DAT_00105004,local_30,&local_39);
  }
  lVar4 = FUN_00101f2e(&local_38);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return lVar4 + 8;
}




void FUN_00104422(pthread_mutex_t *param_1)

{
  pthread_mutex_unlock(param_1);
  return;
}




undefined8 * FUN_00103118(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = std::_Rb_tree_decrement((_Rb_tree_node_base *)*param_1);
  *param_1 = uVar1;
  return param_1;
}




void FUN_001038f6(undefined4 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined4 *puVar2;
  
  uVar1 = FUN_001039a8(param_2);
  puVar2 = (undefined4 *)FUN_00102cfc(uVar1);
  *param_1 = *puVar2;
  *(undefined8 *)(param_1 + 2) = 0;
  return;
}




void FUN_001041dc(void)

{
  return;
}




void FUN_00104184(void)

{
  return;
}




void FUN_00102154(long param_1,undefined8 param_2)

{
  long lVar1;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_001029e2(param_1,param_2);
  FUN_00102a5c(param_1,param_2);
  FUN_00101a74(param_1 + 8);
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00103e13(uint param_1)

{
  printf("%u\n",(ulong)param_1);
  return;
}




undefined8 FUN_0010382e(void)

{
  return 0x2aaaaaaaaaaaaaa;
}




undefined8 FUN_0010346c(undefined8 *param_1)

{
  return *param_1;
}




void FUN_00102ca6(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_0010239e(param_2);
  FUN_00102d0e(param_1,uVar1);
  return;
}




undefined8 FUN_00103662(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}




void FUN_00101ade(undefined8 param_1)

{
  FUN_00101bc4(param_1);
  return;
}




void FUN_00102edc(undefined8 *param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  
  *param_1 = *param_2;
  puVar1 = (undefined8 *)FUN_0010351f(param_3);
  param_1[1] = *puVar1;
  return;
}




void FUN_00101b5e(undefined8 param_1,undefined8 param_2)

{
  FUN_00101d4e(param_1,param_2);
  return;
}




void FUN_00103e94(uint *param_1)

{
  printf("%d -- %d\n",(ulong)*param_1,(ulong)param_1[1]);
  return;
}




void FUN_001021f0(undefined8 param_1,undefined8 param_2)

{
  long in_FS_OFFSET;
  undefined local_18 [8];
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00102a70(local_18,param_1);
  FUN_00102a8e(param_1,param_2,local_18);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




undefined8 FUN_00101ee2(long *param_1,long *param_2)

{
  return CONCAT71((int7)((ulong)*param_2 >> 8),*param_1 == *param_2);
}




void FUN_00101dfa(void)

{
  return;
}




undefined8 FUN_00102bca(undefined8 param_1,long param_2,long param_3,undefined8 param_4)

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
    uVar2 = FUN_00102887(local_38);
    cVar1 = FUN_00101f50(param_1,uVar2,param_4);
    if (cVar1 == '\x01') {
      local_38 = FUN_00102263(local_38);
    }
    else {
      local_40 = local_38;
      local_38 = FUN_00102279(local_38);
    }
  }
  FUN_001029c4(&local_28,local_40);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_28;
}




void FUN_00103b0e(undefined8 param_1)

{
  undefined8 *puVar1;
  long in_FS_OFFSET;
  undefined4 local_24;
  void *local_20;
  undefined4 *local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_24 = 2;
  puVar1 = (undefined8 *)FUN_00101c22(param_1,&local_24);
  local_20 = (void *)*puVar1;
  local_18 = (undefined4 *)FUN_001019f1(8,local_20);
  *local_18 = 5;
  local_18[1] = 10;
  FUN_00103c8f(*local_18);
  free(local_20);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




bool FUN_0010430c(pthread_t *param_1)

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




undefined8 FUN_0010245e(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar1 = FUN_00102d38(param_1);
  uVar2 = FUN_0010244c(param_4);
  uVar3 = FUN_0010243a(param_3);
  uVar4 = FUN_00102428(param_2);
  FUN_00102d64(param_1,uVar1,uVar4,uVar3,uVar2);
  return uVar1;
}




void FUN_00103d8e(char param_1)

{
  printf("%02x\n",(ulong)(uint)(int)param_1);
  return;
}




void FUN_00101977(void)

{
  FUN_00101683();
  FUN_001017fd();
  return;
}




void FUN_00104403(pthread_mutex_t *param_1)

{
  pthread_mutex_lock(param_1);
  return;
}




void FUN_00102cde(undefined8 param_1)

{
  FUN_0010346c(param_1);
  return;
}




void FUN_00101f2e(undefined8 *param_1)

{
  FUN_0010237c(*param_1);
  return;
}




undefined8 FUN_0010364c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}




void FUN_00103db9(undefined4 param_1)

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




void FUN_001041bb(void)

{
  return;
}




void FUN_001030d0(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_0010351f(param_2);
  *param_1 = *puVar1;
  puVar1 = (undefined8 *)FUN_0010351f(param_3);
  param_1[1] = *puVar1;
  return;
}




void FUN_001029c4(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = param_2;
  return;
}




void FUN_00103216(void)

{
  return;
}




void FUN_0010236e(void)

{
  return;
}




undefined8 FUN_00102f1c(undefined8 param_1,undefined8 param_2)

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
  local_58 = FUN_00101e84(param_1);
  local_50 = FUN_00102bb4(param_1);
  local_59 = '\x01';
  while (local_58 != 0) {
    local_50 = local_58;
    uVar2 = FUN_00102887(local_58);
    local_59 = FUN_00101f50(param_1,param_2,uVar2);
    if (local_59 == '\0') {
      local_58 = FUN_00102263(local_58);
    }
    else {
      local_58 = FUN_00102279(local_58);
    }
  }
  FUN_001029c4(&local_48,local_50);
  if (local_59 != '\0') {
    local_38[0] = FUN_00103532(param_1);
    cVar1 = FUN_00101ee2(&local_48,local_38);
    if (cVar1 != '\0') {
      FUN_00103582(local_38,&local_58,&local_50);
      goto LAB_0010309e;
    }
    FUN_00103118(&local_48);
  }
  uVar2 = FUN_00102ebe(local_48);
  cVar1 = FUN_00101f50(param_1,uVar2,param_2);
  if (cVar1 == '\0') {
    local_40 = 0;
    FUN_00103170(local_38,&local_48,&local_40);
  }
  else {
    FUN_00103582(local_38,&local_58,&local_50);
  }
LAB_0010309e:
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return local_38[0];
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00101d4e(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  
  FUN_00102154(param_1,param_2);
  lVar1 = FUN_001021c4(param_2);
  if (lVar1 != 0) {
    puVar2 = (undefined8 *)FUN_001021da(param_1);
                    /* try { // try from 00101da9 to 00101dad has its CatchHandler @ 00101db3 */
    uVar3 = FUN_001021f0(param_1,param_2);
    *puVar2 = uVar3;
  }
  return;
}




void FUN_001017fd(void)

{
  void *pvVar1;
  void *pvVar2;
  undefined8 *puVar3;
  long in_FS_OFFSET;
  undefined local_88 [48];
  undefined4 local_58 [14];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00101b1e(local_88);
  pvVar1 = malloc(4);
  if (pvVar1 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  pvVar2 = malloc(8);
  if (pvVar2 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  local_58[0] = 0;
                    /* try { // try from 00101895 to 001018fe has its CatchHandler @ 0010194a */
  puVar3 = (undefined8 *)FUN_00101c22(local_88,local_58);
  *puVar3 = pvVar1;
  local_58[0] = 1;
  puVar3 = (undefined8 *)FUN_00101c22(local_88,local_58);
  *puVar3 = pvVar1;
  local_58[0] = 2;
  puVar3 = (undefined8 *)FUN_00101c22(local_88,local_58);
  *puVar3 = pvVar1;
  FUN_00101b5e(local_58,local_88);
                    /* try { // try from 00101906 to 0010190a has its CatchHandler @ 00101935 */
  FUN_00103ba8(local_58);
  FUN_00101b3e(local_58);
  FUN_00101b3e(local_88);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00101f8a(undefined8 param_1,undefined8 param_2)

{
  FUN_001023e8(param_1,param_2);
  return;
}




void FUN_00103481(undefined8 param_1,undefined8 param_2)

{
  FUN_001036b4(param_1,param_2,0);
  return;
}




void FUN_00103428(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_0010368c(param_1,param_2,param_3);
  return;
}




undefined8 FUN_00102cfc(undefined8 param_1)

{
  return param_1;
}




void FUN_00103c5d(long param_1)

{
  if (param_1 != 0) {
    wprintf(L"%ls\n",param_1);
  }
  return;
}




void FUN_00102d64(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  FUN_001019f1(0x30,param_2);
  uVar1 = FUN_0010244c(param_5);
  uVar2 = FUN_0010243a(param_4);
  uVar3 = FUN_00102428(param_3);
  uVar4 = FUN_0010237c(param_2);
  uVar5 = FUN_001033ec(param_1);
                    /* try { // try from 00102df3 to 00102df7 has its CatchHandler @ 00102dfa */
  FUN_001034af(uVar5,uVar4,uVar3,uVar2,uVar1);
  return;
}




void FUN_00103e66(undefined8 param_1)

{
  printf("%g\n",param_1);
  return;
}




void FUN_0010419a(void)

{
  return;
}




long FUN_001030ba(long param_1)

{
  return param_1 + 0x18;
}




void FUN_00103a03(undefined8 param_1)

{
  FUN_00102cde(param_1);
  return;
}




void FUN_00103704(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  undefined8 uVar1;
  long in_FS_OFFSET;
  undefined local_38 [8];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00102428(param_3);
  uVar1 = FUN_0010243a(param_4);
  FUN_00101f8a(local_38,uVar1);
  FUN_0010244c(param_5);
  uVar1 = FUN_001019f1(0x10,param_2);
                    /* try { // try from 0010378c to 00103790 has its CatchHandler @ 00103793 */
  FUN_00103846(uVar1,local_38);
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00102b7a(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_001033ec(param_1);
  FUN_00103428(uVar1,param_2,1);
  return;
}




void FUN_00101b1e(undefined8 param_1)

{
  FUN_00101afe(param_1);
  return;
}




void FUN_001037f4(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *param_1;
  uVar2 = FUN_00103897(param_2);
  FUN_001038aa(uVar1,uVar2);
  return;
}




undefined8 FUN_00102428(undefined8 param_1)

{
  return param_1;
}




void FUN_001031b0(long param_1)

{
  FUN_001035ca(param_1 + 0x20);
  return;
}




void FUN_001035ca(undefined8 param_1)

{
  FUN_001037e2(param_1);
  return;
}




undefined8
FUN_001028da(long param_1,long param_2,_Rb_tree_node_base *param_3,_Rb_tree_node_base *param_4)

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
    p_Var3 = (_Rb_tree_node_base *)FUN_00102bb4(param_1);
    if (param_3 != p_Var3) {
      uVar4 = FUN_00102ebe(param_3);
      uVar5 = FUN_00102887(param_4);
      cVar1 = FUN_00101f50(param_1,uVar5,uVar4);
      if (cVar1 == '\0') {
        bVar2 = false;
        goto LAB_0010295e;
      }
    }
  }
  bVar2 = true;
LAB_0010295e:
  std::_Rb_tree_insert_and_rebalance(bVar2,param_4,param_3,(_Rb_tree_node_base *)(param_1 + 8));
  *(long *)(param_1 + 0x28) = *(long *)(param_1 + 0x28) + 1;
  FUN_001029c4(&local_28,param_4);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_28;
}




void FUN_0010393a(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  FUN_001019f1(0x30,param_2);
  uVar1 = FUN_00103897(param_3);
  uVar2 = FUN_0010237c(param_2);
  uVar3 = FUN_001033ec(param_1);
  FUN_001039c6(uVar3,uVar2,uVar1);
  return;
}




void FUN_001033fe(undefined8 param_1,undefined8 param_2)

{
  FUN_00103678(param_1,param_2);
  return;
}




void FUN_0010368c(undefined8 param_1,void *param_2)

{
  operator_delete(param_2);
  return;
}




void FUN_00102254(void)

{
  return;
}




void FUN_00101dda(undefined8 param_1)

{
  FUN_00102254(param_1);
  return;
}




undefined8 FUN_00102a8e(long param_1,long param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  uVar1 = FUN_00102bb4(param_1);
  uVar2 = FUN_0010322a(param_2);
  uVar1 = FUN_00103240(param_1,uVar2,uVar1,param_3);
  puVar3 = (undefined8 *)FUN_001030ba(param_1);
  uVar2 = FUN_001033af(uVar1);
  *puVar3 = uVar2;
  puVar3 = (undefined8 *)FUN_00102ea8(param_1);
  uVar2 = FUN_001033cd(uVar1);
  *puVar3 = uVar2;
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  return uVar1;
}




void FUN_001039c6(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00103897(param_3);
  FUN_00103a22(param_1,param_2,uVar1);
  return;
}




long FUN_00102bb4(long param_1)

{
  return param_1 + 8;
}




void FUN_0010237c(long param_1)

{
  FUN_00102c88(param_1 + 0x20);
  return;
}




undefined8 FUN_001029e2(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_001031e8(param_1,param_2);
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1;
}




void FUN_00103d63(undefined8 param_1)

{
  printf("%zu\n",param_1);
  return;
}




undefined8 FUN_0010198c(void)

{
  time_t tVar1;
  
  tVar1 = time((time_t *)0x0);
  srand((uint)tVar1);
  FUN_00103c37("Calling good()...");
  FUN_00101977();
  FUN_00103c37("Finished good()");
  FUN_00103c37("Calling bad()...");
  FUN_00101509();
  FUN_00103c37("Finished bad()");
  return 0;
}




void FUN_00101bc4(undefined8 param_1)

{
  FUN_00101e0a(param_1);
  return;
}




void FUN_001034af(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = FUN_0010244c(param_5);
  uVar2 = FUN_0010243a(param_4);
  uVar3 = FUN_00102428(param_3);
  FUN_00103704(param_1,param_2,uVar3,uVar2,uVar1);
  return;
}




void FUN_0010414d(void)

{
  return;
}




void FUN_00103678(void)

{
  return;
}




void FUN_00101e1a(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 local_28;
  
  local_28 = param_2;
  while (local_28 != 0) {
    uVar1 = FUN_00102263(local_28);
    FUN_00101e1a(param_1,uVar1);
    lVar2 = FUN_00102279(local_28);
    FUN_00102290(param_1,local_28);
    local_28 = lVar2;
  }
  return;
}




void FUN_001041b0(void)

{
  return;
}




undefined8 FUN_001037cf(undefined8 param_1)

{
  return param_1;
}




void FUN_00103a22(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  puVar2 = (undefined8 *)FUN_00103897(param_3);
  puVar3 = (undefined8 *)FUN_001019f1(0x10,param_2);
  uVar1 = puVar2[1];
  *puVar3 = *puVar2;
  puVar3[1] = uVar1;
  return;
}




undefined4 FUN_00101f08(undefined8 param_1)

{
  undefined4 unaff_EBX;
  
  FUN_0010236e(param_1);
  return unaff_EBX;
}




/* WARNING: Type propagation algorithm not settling */

long FUN_001024de(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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
  lVar3 = FUN_00102e42(&local_68);
  local_50 = lVar3;
  lVar4 = FUN_00102bb4(local_60);
  uVar7 = local_60;
  if (lVar3 != lVar4) {
    uVar6 = FUN_00102ebe(local_50);
    cVar2 = FUN_00101f50(uVar7,param_3,uVar6);
    lVar3 = local_50;
    uVar7 = local_60;
    if (cVar2 == '\0') {
      uVar6 = FUN_00102ebe(local_50);
      cVar2 = FUN_00101f50(uVar7,uVar6,param_3);
      lVar3 = local_50;
      if (cVar2 == '\0') {
        local_48[1] = 0;
        FUN_00103170(local_48 + 2,&local_50,local_48 + 1);
      }
      else {
        local_48[0] = local_50;
        plVar8 = (long *)FUN_00102ea8(local_60);
        uVar7 = local_60;
        if (lVar3 == *plVar8) {
          uVar7 = FUN_00102ea8(local_60);
          local_48[1] = 0;
          FUN_00102edc(local_48 + 2,local_48 + 1,uVar7);
        }
        else {
          puVar5 = (undefined8 *)FUN_00103144(local_48);
          uVar6 = FUN_00102ebe(*puVar5);
          cVar2 = FUN_00101f50(uVar7,param_3,uVar6);
          if (cVar2 == '\0') {
            local_48[2] = FUN_00102f1c(local_60,param_3);
          }
          else {
            lVar3 = FUN_00102263(local_50);
            if (lVar3 == 0) {
              local_48[1] = 0;
              FUN_00102edc(local_48 + 2,local_48 + 1,&local_50);
            }
            else {
              FUN_001030d0(local_48 + 2,local_48,local_48);
            }
          }
        }
      }
    }
    else {
      local_48[0] = local_50;
      plVar8 = (long *)FUN_001030ba(local_60);
      uVar7 = local_60;
      if (lVar3 == *plVar8) {
        uVar7 = FUN_001030ba(local_60);
        uVar6 = FUN_001030ba(local_60);
        FUN_001030d0(local_48 + 2,uVar6,uVar7);
      }
      else {
        puVar5 = (undefined8 *)FUN_00103118(local_48);
        uVar6 = FUN_00102ebe(*puVar5);
        cVar2 = FUN_00101f50(uVar7,uVar6,param_3);
        if (cVar2 == '\0') {
          local_48[2] = FUN_00102f1c(local_60,param_3);
        }
        else {
          lVar3 = FUN_00102263(local_48[0]);
          if (lVar3 == 0) {
            local_48[1] = 0;
            FUN_00102edc(local_48 + 2,local_48 + 1,local_48);
          }
          else {
            FUN_001030d0(local_48 + 2,&local_50,&local_50);
          }
        }
      }
    }
    goto LAB_0010286c;
  }
  lVar3 = FUN_00102e92(local_60);
  uVar7 = local_60;
  if (lVar3 == 0) {
LAB_00102580:
    bVar1 = false;
  }
  else {
    puVar5 = (undefined8 *)FUN_00102ea8(local_60);
    uVar6 = FUN_00102ebe(*puVar5);
    cVar2 = FUN_00101f50(uVar7,uVar6,param_3);
    if (cVar2 == '\0') goto LAB_00102580;
    bVar1 = true;
  }
  if (bVar1) {
    uVar7 = FUN_00102ea8(local_60);
    local_48[1] = 0;
    FUN_00102edc(local_48 + 2,local_48 + 1,uVar7);
  }
  else {
    local_48[2] = FUN_00102f1c(local_60,param_3);
  }
LAB_0010286c:
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_48[2];
}




void FUN_00104179(void)

{
  return;
}




undefined8 FUN_0010351f(undefined8 param_1)

{
  return param_1;
}




undefined8 FUN_0010322a(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}




undefined8 * FUN_00103144(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = std::_Rb_tree_increment((_Rb_tree_node_base *)*param_1);
  *param_1 = uVar1;
  return param_1;
}




void FUN_00103c8f(uint param_1)

{
  printf("%d\n",(ulong)param_1);
  return;
}




undefined8 FUN_0010244c(undefined8 param_1)

{
  return param_1;
}




undefined8 FUN_001031e8(undefined8 param_1,undefined8 param_2)

{
  FUN_00102a32(param_1,param_2);
  return param_1;
}




void FUN_00102a70(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = param_2;
  return;
}




void FUN_00104470(undefined4 param_1,undefined8 param_2,undefined8 param_3)

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




void FUN_001023e8(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00102cde(param_2);
  uVar1 = FUN_00102cfc(uVar1);
  FUN_00102d0e(param_1,uVar1);
  return;
}




void FUN_00101ec4(undefined8 param_1)

{
  FUN_0010231e(param_1);
  return;
}




void FUN_001041a5(void)

{
  return;
}




void FUN_00104208(long param_1)

{
  (**(code **)(param_1 + 8))(*(undefined8 *)(param_1 + 0x10));
                    /* WARNING: Subroutine does not return */
  pthread_exit((void *)0x0);
}




undefined8 FUN_00102e92(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}




undefined4 * FUN_001035e8(undefined8 param_1,undefined4 *param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined4 *puVar2;
  
  uVar1 = FUN_001031b0(param_2);
  puVar2 = (undefined4 *)FUN_001037f4(param_3,uVar1);
  *puVar2 = *param_2;
  *(undefined8 *)(puVar2 + 4) = 0;
  *(undefined8 *)(puVar2 + 6) = 0;
  return puVar2;
}




undefined8 FUN_001031d2(undefined8 param_1,undefined8 param_2)

{
  return param_2;
}




undefined8 FUN_001033ec(undefined8 param_1)

{
  return param_1;
}




void FUN_00101b88(long param_1)

{
  FUN_00101dda(param_1);
  FUN_00101dfa(param_1);
  FUN_00101a74(param_1 + 8);
  return;
}




void FUN_00104163(void)

{
  return;
}




void FUN_001036b4(undefined8 param_1,ulong param_2)

{
  ulong uVar1;
  
  uVar1 = FUN_0010382e(param_1);
  if (uVar1 < param_2) {
    std::__throw_bad_alloc();
  }
  operator_new(param_2 * 0x30);
  return;
}




void FUN_001033cd(undefined8 param_1)

{
  FUN_00101a47(param_1);
  return;
}




undefined8 FUN_00102263(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}




void FUN_001023b0(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_0010239e(param_2);
  FUN_00102ca6(param_1,uVar1);
  return;
}




void FUN_00102d0e(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_0010239e(param_2);
  *param_1 = uVar1;
  return;
}




void FUN_00104158(void)

{
  return;
}




/* WARNING: Removing unreachable block (ram,0x00101463) */
/* WARNING: Removing unreachable block (ram,0x0010146f) */

void FUN_00101450(void)

{
  return;
}



