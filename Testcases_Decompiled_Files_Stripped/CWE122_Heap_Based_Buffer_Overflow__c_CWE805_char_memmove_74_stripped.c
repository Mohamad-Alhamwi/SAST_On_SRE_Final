
void FUN_00103ff1(void)

{
  return;
}




void FUN_00101832(undefined8 param_1)

{
  FUN_00101b12(param_1);
  return;
}




undefined8 FUN_001041b5(undefined8 *param_1)

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




void FUN_0010189c(undefined8 *param_1)

{
  FUN_00101b70(*param_1);
  return;
}




undefined8 FUN_00104192(void *param_1)

{
  free(param_1);
  return 1;
}




void FUN_00102d69(void)

{
  undefined *puVar1;
  undefined8 *puVar2;
  long in_FS_OFFSET;
  undefined local_88 [48];
  undefined4 local_58 [14];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_0010319a(local_88);
  puVar1 = (undefined *)malloc(0x32);
  if (puVar1 == (undefined *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  *puVar1 = 0;
  local_58[0] = 0;
                    /* try { // try from 00102de3 to 00102e4c has its CatchHandler @ 00102e98 */
  puVar2 = (undefined8 *)FUN_001016dc(local_88,local_58);
  *puVar2 = puVar1;
  local_58[0] = 1;
  puVar2 = (undefined8 *)FUN_001016dc(local_88,local_58);
  *puVar2 = puVar1;
  local_58[0] = 2;
  puVar2 = (undefined8 *)FUN_001016dc(local_88,local_58);
  *puVar2 = puVar1;
  FUN_001031da(local_58,local_88);
                    /* try { // try from 00102e54 to 00102e58 has its CatchHandler @ 00102e83 */
  FUN_00101549(local_58);
  FUN_001031ba(local_58);
  FUN_001031ba(local_88);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00103aba(uint param_1)

{
  printf("%d\n",(ulong)param_1);
  return;
}




int FUN_00103f53(void)

{
  int iVar1;
  
  iVar1 = rand();
  return iVar1 % 2;
}




void FUN_001034d4(void)

{
  return;
}




void FUN_00103b8e(undefined8 param_1)

{
  printf("%zu\n",param_1);
  return;
}




undefined8 FUN_00103f35(void)

{
  return 1;
}




ulong FUN_00103e56(long param_1,ulong param_2,long param_3)

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




void FUN_00102942(undefined8 param_1,undefined8 param_2)

{
  FUN_00102b04(param_1,param_2,0);
  return;
}




void FUN_00103c91(undefined8 param_1)

{
  printf("%g\n",param_1);
  return;
}




undefined8 FUN_001029e0(undefined8 param_1)

{
  return param_1;
}




void FUN_001027fc(undefined8 *param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_001029e0(param_2);
  *param_1 = *puVar1;
  param_1[1] = *param_3;
  return;
}




void FUN_00101bdc(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00102354(param_2);
  uVar1 = FUN_00102372(uVar1);
  FUN_00102384(param_1,uVar1);
  return;
}




void FUN_00103204(long param_1)

{
  FUN_0010332a(param_1);
  FUN_0010334a(param_1);
  FUN_001030f0(param_1 + 8);
  return;
}




void FUN_00103f78(void)

{
  return;
}




void FUN_00102874(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_00101b70(param_2);
  uVar2 = FUN_00102930(param_1);
  FUN_00102aa8(uVar2,uVar1);
  return;
}




void FUN_00101b70(long param_1)

{
  FUN_001022fe(param_1 + 0x20);
  return;
}




void FUN_0010329e(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  
  FUN_001033d4(param_1,param_2);
  lVar1 = FUN_00103444(param_2);
  if (lVar1 != 0) {
    puVar2 = (undefined8 *)FUN_0010345a(param_1);
                    /* try { // try from 001032f9 to 001032fd has its CatchHandler @ 00103303 */
    uVar3 = FUN_00103470(param_1,param_2);
    *puVar2 = uVar3;
  }
  return;
}




undefined8 FUN_00101922(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00101b92(param_2);
  FUN_00101ba4(param_1,uVar1);
  return param_1;
}




void FUN_001028b8(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00102930(param_1);
  FUN_00102ad2(uVar1,param_2,1);
  return;
}




void FUN_001021b8(undefined8 param_1,undefined8 param_2)

{
  FUN_00102874(param_1,param_2);
  FUN_001028b8(param_1,param_2);
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




void FUN_00102ec5(void)

{
  undefined *puVar1;
  undefined8 *puVar2;
  long in_FS_OFFSET;
  undefined local_88 [48];
  undefined4 local_58 [14];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_0010319a(local_88);
  puVar1 = (undefined *)malloc(100);
  if (puVar1 == (undefined *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  *puVar1 = 0;
  local_58[0] = 0;
                    /* try { // try from 00102f3f to 00102fa8 has its CatchHandler @ 00102ff4 */
  puVar2 = (undefined8 *)FUN_001016dc(local_88,local_58);
  *puVar2 = puVar1;
  local_58[0] = 1;
  puVar2 = (undefined8 *)FUN_001016dc(local_88,local_58);
  *puVar2 = puVar1;
  local_58[0] = 2;
  puVar2 = (undefined8 *)FUN_001016dc(local_88,local_58);
  *puVar2 = puVar1;
  FUN_001031da(local_58,local_88);
                    /* try { // try from 00102fb0 to 00102fb4 has its CatchHandler @ 00102fdf */
  FUN_001015fe(local_58);
  FUN_001031ba(local_58);
  FUN_001031ba(local_88);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




undefined8 FUN_0010291a(undefined8 *param_1)

{
  return *param_1;
}




void FUN_00102552(undefined8 *param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  
  *param_1 = *param_2;
  puVar1 = (undefined8 *)FUN_001029e0(param_3);
  param_1[1] = *puVar1;
  return;
}




void FUN_001021f6(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = param_2;
  return;
}




void FUN_00102aa8(undefined8 param_1,undefined8 param_2)

{
  FUN_00102c44(param_1,param_2);
  return;
}




undefined8 FUN_00103918(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_001023ae(param_1);
  uVar2 = FUN_00103906(param_2);
  FUN_00103964(param_1,uVar1,uVar2);
  return uVar1;
}




long FUN_001016dc(undefined8 param_1,undefined8 param_2)

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
  local_38 = FUN_00101808(param_1,param_2);
  local_28 = FUN_00101832(param_1);
  cVar2 = FUN_00101850(&local_38,&local_28);
  if (cVar2 == '\0') {
    FUN_00101876(param_1);
    uVar3 = FUN_0010189c(&local_38);
    cVar2 = FUN_001018be(local_30,param_2,uVar3);
    if (cVar2 == '\0') {
      bVar1 = false;
      goto LAB_0010177c;
    }
  }
  bVar1 = true;
LAB_0010177c:
  if (bVar1) {
    uVar3 = FUN_001018e5(param_2);
    FUN_00101922(local_30,uVar3);
    FUN_0010195a(&local_28,&local_38);
    local_38 = FUN_0010197c(param_1,local_28,&DAT_00105004,local_30,&local_39);
  }
  lVar4 = FUN_0010189c(&local_38);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return lVar4 + 8;
}




void FUN_0010422e(pthread_mutex_t *param_1)

{
  pthread_mutex_lock(param_1);
  return;
}




void FUN_00103240(undefined8 param_1)

{
  FUN_0010335a(param_1);
  return;
}




undefined8
FUN_0010197c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  uVar1 = FUN_00101c40(param_5);
  uVar2 = FUN_00101c2e(param_4);
  uVar3 = FUN_00101c1c(param_3);
  local_40 = FUN_00101c52(param_1,uVar3,uVar2,uVar1);
                    /* try { // try from 001019f8 to 00101a3b has its CatchHandler @ 00101a79 */
  uVar1 = FUN_0010207b(local_40);
  local_38 = FUN_00101cd2(param_1,param_2,uVar1);
  if (local_38._8_8_ == 0) {
    FUN_001021b8(param_1,local_40);
    FUN_001021f6(&local_48,local_38._0_8_);
  }
  else {
    local_48 = FUN_001020ce(param_1,local_38._0_8_,local_38._8_8_,local_40);
  }
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_48;
}




void FUN_00103470(undefined8 param_1,undefined8 param_2)

{
  long in_FS_OFFSET;
  undefined local_18 [8];
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00103572(local_18,param_1);
  FUN_00103590(param_1,param_2,local_18);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




undefined8 FUN_001038a0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}




void FUN_001037ff(undefined8 param_1)

{
  FUN_00103096(param_1);
  return;
}




void FUN_001022fe(undefined8 param_1)

{
  FUN_00102908(param_1);
  return;
}




void FUN_00103cf2(long param_1,ulong param_2)

{
  ulong local_10;
  
  for (local_10 = 0; local_10 < param_2; local_10 = local_10 + 1) {
    printf("%02x",(ulong)*(byte *)(local_10 + param_1));
  }
  puts("");
  return;
}




undefined8 FUN_0010367a(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}




undefined8 FUN_00101850(long *param_1,long *param_2)

{
  return CONCAT71((int7)((ulong)*param_2 >> 8),*param_1 == *param_2);
}




void FUN_0010195a(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  return;
}




void FUN_00102c98(undefined8 param_1,undefined8 param_2)

{
  long in_FS_OFFSET;
  undefined local_29;
  undefined8 local_28;
  undefined8 local_20;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_28 = param_2;
  local_20 = param_1;
  FUN_00102cea(param_1,param_2,&local_29);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00103fa4(void)

{
  return;
}




void FUN_00101808(undefined8 param_1,undefined8 param_2)

{
  FUN_00101ac2(param_1,param_2);
  return;
}




void FUN_00104033(long param_1)

{
  (**(code **)(param_1 + 8))(*(undefined8 *)(param_1 + 0x10));
                    /* WARNING: Subroutine does not return */
  pthread_exit((void *)0x0);
}




undefined8 FUN_0010406a(pthread_t param_1,pthread_t param_2,undefined8 *param_3)

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
    iVar1 = pthread_create(&local_20,(pthread_attr_t *)0x0,FUN_00104033,local_18);
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




undefined8 * FUN_001027d0(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = std::_Rb_tree_increment((_Rb_tree_node_base *)*param_1);
  *param_1 = uVar1;
  return param_1;
}




void FUN_00102b04(undefined8 param_1,ulong param_2)

{
  ulong uVar1;
  
  uVar1 = FUN_00102c80(param_1);
  if (uVar1 < param_2) {
    std::__throw_bad_alloc();
  }
  operator_new(param_2 * 0x30);
  return;
}




void FUN_0010426c(pthread_mutex_t *param_1)

{
  pthread_mutex_destroy(param_1);
  free(param_1);
  return;
}




void FUN_00103cbf(uint *param_1)

{
  printf("%d -- %d\n",(ulong)*param_1,(ulong)param_1[1]);
  return;
}




void FUN_00101ac2(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_0010222a(param_1);
  uVar2 = FUN_00102214(param_1);
  FUN_00102240(param_1,uVar2,uVar1,param_2);
  return;
}




ulong FUN_00103d52(long param_1,ulong param_2,long param_3)

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




void FUN_0010336a(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 local_28;
  
  local_28 = param_2;
  while (local_28 != 0) {
    uVar1 = FUN_001027ba(local_28);
    FUN_0010336a(param_1,uVar1);
    lVar2 = FUN_001028f2(local_28);
    FUN_001021b8(param_1,local_28);
    local_28 = lVar2;
  }
  return;
}




void FUN_00103fdb(void)

{
  return;
}




void FUN_001031ba(undefined8 param_1)

{
  FUN_00103260(param_1);
  return;
}




void FUN_001018f8(undefined8 param_1,undefined8 param_2)

{
  FUN_00101bdc(param_1,param_2);
  return;
}




undefined4 * FUN_0010383c(undefined8 param_1,undefined4 *param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined4 *puVar2;
  
  uVar1 = FUN_0010283c(param_2);
  puVar2 = (undefined4 *)FUN_001038cc(param_3,uVar1);
  *puVar2 = *param_2;
  *(undefined8 *)(puVar2 + 4) = 0;
  *(undefined8 *)(puVar2 + 6) = 0;
  return puVar2;
}




long FUN_0010251e(long param_1)

{
  return param_1 + 0x20;
}




void FUN_00103ffc(void)

{
  return;
}




void FUN_00103b38(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




undefined8 FUN_0010285e(undefined8 param_1,undefined8 param_2)

{
  return param_2;
}




void FUN_0010315a(undefined8 param_1)

{
  FUN_00103240(param_1);
  return;
}




void FUN_00103b63(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




void FUN_00102384(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00101b92(param_2);
  *param_1 = uVar1;
  return;
}




void FUN_00102534(undefined8 param_1)

{
  FUN_0010207b(param_1);
  return;
}




undefined4 FUN_001018be(undefined8 param_1,int *param_2,int *param_3)

{
  return CONCAT31((int3)((uint)*param_3 >> 8),*param_2 < *param_3);
}




void FUN_00103964(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  FUN_001016b3(0x30,param_2);
  uVar1 = FUN_00103906(param_3);
  uVar2 = FUN_00101b70(param_2);
  uVar3 = FUN_00102930(param_1);
  FUN_001039d2(uVar3,uVar2,uVar1);
  return;
}




void FUN_00102970(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = FUN_00101c40(param_5);
  uVar2 = FUN_00101c2e(param_4);
  uVar3 = FUN_00101c1c(param_3);
  FUN_00102b54(param_1,param_2,uVar3,uVar2,uVar1);
  return;
}




long FUN_0010222a(long param_1)

{
  return param_1 + 8;
}




void FUN_00103021(void)

{
  FUN_00102ec5();
  return;
}




void FUN_00103bb9(char param_1)

{
  printf("%02x\n",(ulong)(uint)(int)param_1);
  return;
}




undefined8 FUN_00102508(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}




void FUN_00101ba4(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00101b92(param_2);
  FUN_0010231c(param_1,uVar1);
  return;
}




undefined8 FUN_00101c52(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar1 = FUN_001023ae(param_1);
  uVar2 = FUN_00101c40(param_4);
  uVar3 = FUN_00101c2e(param_3);
  uVar4 = FUN_00101c1c(param_2);
  FUN_001023da(param_1,uVar1,uVar4,uVar3,uVar2);
  return uVar1;
}




undefined8 FUN_00102214(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}




void FUN_00103faf(void)

{
  return;
}




void FUN_00102a42(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_00102c1f(param_2);
  *param_1 = *puVar1;
  puVar1 = (undefined8 *)FUN_001029e0(param_3);
  param_1[1] = *puVar1;
  return;
}




void FUN_00103666(void)

{
  return;
}




void FUN_0010381d(undefined8 param_1)

{
  FUN_001030c3(param_1);
  return;
}




undefined8 FUN_00101b92(undefined8 param_1)

{
  return param_1;
}




void FUN_001023ae(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00102930(param_1);
  FUN_00102942(uVar1,1);
  return;
}




void FUN_00101020(void)

{
  (*(code *)PTR_00108ec8)();
  return;
}




void FUN_0010424d(pthread_mutex_t *param_1)

{
  pthread_mutex_unlock(param_1);
  return;
}




long FUN_00103096(long param_1)

{
  undefined8 local_10;
  
  for (local_10 = param_1; *(long *)(local_10 + 0x10) != 0; local_10 = *(long *)(local_10 + 0x10)) {
  }
  return local_10;
}




void FUN_00103ae2(short param_1)

{
  printf("%hd\n",(ulong)(uint)(int)param_1);
  return;
}




void FUN_0010311a(long param_1)

{
  *(undefined8 *)(param_1 + 8) = 0;
  *(long *)(param_1 + 0x10) = param_1;
  *(long *)(param_1 + 0x18) = param_1;
  *(undefined8 *)(param_1 + 0x20) = 0;
  return;
}




undefined8 FUN_00101c2e(undefined8 param_1)

{
  return param_1;
}




undefined8 FUN_00103f44(void)

{
  return 0;
}




void FUN_001039d2(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00103906(param_3);
  FUN_00103a10(param_1,param_2,uVar1);
  return;
}




long FUN_001030c3(long param_1)

{
  undefined8 local_10;
  
  for (local_10 = param_1; *(long *)(local_10 + 0x18) != 0; local_10 = *(long *)(local_10 + 0x18)) {
  }
  return local_10;
}




void FUN_00103f83(void)

{
  return;
}




void FUN_00104310(void)

{
  return;
}




void FUN_00104012(void)

{
  return;
}




void FUN_00103fd0(void)

{
  return;
}




undefined8
FUN_001020ce(long param_1,long param_2,_Rb_tree_node_base *param_3,_Rb_tree_node_base *param_4)

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
    p_Var3 = (_Rb_tree_node_base *)FUN_0010222a(param_1);
    if (param_3 != p_Var3) {
      uVar4 = FUN_00102534(param_3);
      uVar5 = FUN_0010207b(param_4);
      cVar1 = FUN_001018be(param_1,uVar5,uVar4);
      if (cVar1 == '\0') {
        bVar2 = false;
        goto LAB_00102152;
      }
    }
  }
  bVar2 = true;
LAB_00102152:
  std::_Rb_tree_insert_and_rebalance(bVar2,param_4,param_3,(_Rb_tree_node_base *)(param_1 + 8));
  *(long *)(param_1 + 0x28) = *(long *)(param_1 + 0x28) + 1;
  FUN_001021f6(&local_28,param_4);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_28;
}




void FUN_0010334a(void)

{
  return;
}




void FUN_00102ad2(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00102c58(param_1,param_2,param_3);
  return;
}




undefined8 FUN_001029f2(long param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_001021f6(&local_18,*(undefined8 *)(param_1 + 0x18));
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




undefined8 FUN_001024b8(undefined8 *param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_001021f6(&local_18,*param_1);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




long FUN_00103690(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 local_40;
  undefined8 local_38;
  
  lVar1 = FUN_0010383c(param_1,param_2,param_4);
  *(undefined8 *)(lVar1 + 8) = param_3;
  if (*(long *)(param_2 + 0x18) != 0) {
    uVar2 = FUN_001038a0(param_2);
                    /* try { // try from 001036ff to 00103791 has its CatchHandler @ 001037bd */
    uVar2 = FUN_00103690(param_1,uVar2,lVar1,param_4);
    *(undefined8 *)(lVar1 + 0x18) = uVar2;
  }
  local_38 = FUN_001038b6(param_2);
  local_40 = lVar1;
  while (local_38 != 0) {
    lVar3 = FUN_0010383c(param_1,local_38,param_4);
    *(long *)(local_40 + 0x10) = lVar3;
    *(long *)(lVar3 + 8) = local_40;
    if (*(long *)(local_38 + 0x18) != 0) {
      uVar2 = FUN_001038a0(local_38);
      uVar2 = FUN_00103690(param_1,uVar2,lVar3,param_4);
      *(undefined8 *)(lVar3 + 0x18) = uVar2;
    }
    local_38 = FUN_001038b6(local_38);
    local_40 = lVar3;
  }
  return lVar1;
}




void FUN_00103c3e(uint param_1)

{
  printf("%u\n",(ulong)param_1);
  return;
}




undefined8 FUN_00102372(undefined8 param_1)

{
  return param_1;
}




undefined8 FUN_00103031(void)

{
  time_t tVar1;
  
  tVar1 = time((time_t *)0x0);
  srand((uint)tVar1);
  FUN_00103a62("Calling good()...");
  FUN_00103021();
  FUN_00103a62("Finished good()");
  FUN_00103a62("Calling bad()...");
  FUN_00102d69();
  FUN_00103a62("Finished bad()");
  return 0;
}




void FUN_001031da(undefined8 param_1,undefined8 param_2)

{
  FUN_0010329e(param_1,param_2);
  return;
}




undefined8 * FUN_0010278e(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = std::_Rb_tree_decrement((_Rb_tree_node_base *)*param_1);
  *param_1 = uVar1;
  return param_1;
}




void FUN_00103a88(long param_1)

{
  if (param_1 != 0) {
    wprintf(L"%ls\n",param_1);
  }
  return;
}




undefined8 FUN_00103638(undefined8 param_1,undefined8 param_2)

{
  FUN_00103534(param_1,param_2);
  return param_1;
}




void FUN_00104028(void)

{
  return;
}




/* WARNING: Type propagation algorithm not settling */

long FUN_00101cd2(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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
  lVar3 = FUN_001024b8(&local_68);
  local_50 = lVar3;
  lVar4 = FUN_0010222a(local_60);
  uVar7 = local_60;
  if (lVar3 != lVar4) {
    uVar6 = FUN_00102534(local_50);
    cVar2 = FUN_001018be(uVar7,param_3,uVar6);
    lVar3 = local_50;
    uVar7 = local_60;
    if (cVar2 == '\0') {
      uVar6 = FUN_00102534(local_50);
      cVar2 = FUN_001018be(uVar7,uVar6,param_3);
      lVar3 = local_50;
      if (cVar2 == '\0') {
        local_48[1] = 0;
        FUN_001027fc(local_48 + 2,&local_50,local_48 + 1);
      }
      else {
        local_48[0] = local_50;
        plVar8 = (long *)FUN_0010251e(local_60);
        uVar7 = local_60;
        if (lVar3 == *plVar8) {
          uVar7 = FUN_0010251e(local_60);
          local_48[1] = 0;
          FUN_00102552(local_48 + 2,local_48 + 1,uVar7);
        }
        else {
          puVar5 = (undefined8 *)FUN_001027d0(local_48);
          uVar6 = FUN_00102534(*puVar5);
          cVar2 = FUN_001018be(uVar7,param_3,uVar6);
          if (cVar2 == '\0') {
            local_48[2] = FUN_00102592(local_60,param_3);
          }
          else {
            lVar3 = FUN_001027ba(local_50);
            if (lVar3 == 0) {
              local_48[1] = 0;
              FUN_00102552(local_48 + 2,local_48 + 1,&local_50);
            }
            else {
              FUN_00102746(local_48 + 2,local_48,local_48);
            }
          }
        }
      }
    }
    else {
      local_48[0] = local_50;
      plVar8 = (long *)FUN_00102730(local_60);
      uVar7 = local_60;
      if (lVar3 == *plVar8) {
        uVar7 = FUN_00102730(local_60);
        uVar6 = FUN_00102730(local_60);
        FUN_00102746(local_48 + 2,uVar6,uVar7);
      }
      else {
        puVar5 = (undefined8 *)FUN_0010278e(local_48);
        uVar6 = FUN_00102534(*puVar5);
        cVar2 = FUN_001018be(uVar7,uVar6,param_3);
        if (cVar2 == '\0') {
          local_48[2] = FUN_00102592(local_60,param_3);
        }
        else {
          lVar3 = FUN_001027ba(local_48[0]);
          if (lVar3 == 0) {
            local_48[1] = 0;
            FUN_00102552(local_48 + 2,local_48 + 1,local_48);
          }
          else {
            FUN_00102746(local_48 + 2,&local_50,&local_50);
          }
        }
      }
    }
    goto LAB_00102060;
  }
  lVar3 = FUN_00102508(local_60);
  uVar7 = local_60;
  if (lVar3 == 0) {
LAB_00101d74:
    bVar1 = false;
  }
  else {
    puVar5 = (undefined8 *)FUN_0010251e(local_60);
    uVar6 = FUN_00102534(*puVar5);
    cVar2 = FUN_001018be(uVar7,uVar6,param_3);
    if (cVar2 == '\0') goto LAB_00101d74;
    bVar1 = true;
  }
  if (bVar1) {
    uVar7 = FUN_0010251e(local_60);
    local_48[1] = 0;
    FUN_00102552(local_48 + 2,local_48 + 1,uVar7);
  }
  else {
    local_48[2] = FUN_00102592(local_60,param_3);
  }
LAB_00102060:
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_48[2];
}




long FUN_0010345a(long param_1)

{
  return param_1 + 0x10;
}




void FUN_00101b62(void)

{
  return;
}




undefined8 FUN_00101c1c(undefined8 param_1)

{
  return param_1;
}




undefined8 FUN_00102c80(void)

{
  return 0x2aaaaaaaaaaaaaa;
}




undefined8 FUN_00103590(long param_1,long param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  uVar1 = FUN_0010222a(param_1);
  uVar2 = FUN_0010367a(param_2);
  uVar1 = FUN_00103690(param_1,uVar2,uVar1,param_3);
  puVar3 = (undefined8 *)FUN_00102730(param_1);
  uVar2 = FUN_001037ff(uVar1);
  *puVar3 = uVar2;
  puVar3 = (undefined8 *)FUN_0010251e(param_1);
  uVar2 = FUN_0010381d(uVar1);
  *puVar3 = uVar2;
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  return uVar1;
}




undefined8 FUN_00102908(undefined8 param_1)

{
  return param_1;
}




void FUN_001033d4(long param_1,undefined8 param_2)

{
  long lVar1;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_001034e3(param_1,param_2);
  FUN_0010355e(param_1,param_2);
  FUN_001030f0(param_1 + 8);
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




undefined8 FUN_00102c1f(undefined8 param_1)

{
  return param_1;
}




void FUN_00103fba(void)

{
  return;
}




void FUN_00102354(undefined8 param_1)

{
  FUN_0010291a(param_1);
  return;
}




undefined8 FUN_001038b6(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}




void FUN_00103be4(undefined4 param_1)

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




bool FUN_00104137(pthread_t *param_1)

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




void FUN_001015fe(undefined8 param_1)

{
  undefined8 *puVar1;
  long in_FS_OFFSET;
  undefined4 local_84;
  void *local_80;
  undefined local_78 [99];
  undefined local_15;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_84 = 2;
  puVar1 = (undefined8 *)FUN_001016dc(param_1,&local_84);
  local_80 = (void *)*puVar1;
  memset(local_78,0x43,99);
  local_15 = 0;
  memmove(local_80,local_78,100);
  *(undefined *)((long)local_80 + 99) = 0;
  FUN_00103a62(local_80);
  free(local_80);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




undefined8 FUN_00102c32(undefined8 param_1)

{
  return param_1;
}




void FUN_00102cea(undefined4 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined4 *puVar2;
  
  uVar1 = FUN_00102d2d(param_2);
  puVar2 = (undefined4 *)FUN_00102372(uVar1);
  *param_1 = *puVar2;
  *(undefined8 *)(param_1 + 2) = 0;
  return;
}




void FUN_0010335a(void)

{
  return;
}




void FUN_00102b54(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  undefined8 uVar1;
  long in_FS_OFFSET;
  undefined local_38 [8];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00101c1c(param_3);
  uVar1 = FUN_00101c2e(param_4);
  FUN_001018f8(local_38,uVar1);
  FUN_00101c40(param_5);
  uVar1 = FUN_001016b3(0x10,param_2);
                    /* try { // try from 00102bdc to 00102be0 has its CatchHandler @ 00102be3 */
  FUN_00102c98(uVar1,local_38);
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




undefined8 FUN_00101c40(undefined8 param_1)

{
  return param_1;
}




void FUN_00102a8a(undefined8 param_1)

{
  FUN_00102c32(param_1);
  return;
}




undefined8 FUN_00102240(undefined8 param_1,long param_2,long param_3,undefined8 param_4)

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
    uVar2 = FUN_0010207b(local_38);
    cVar1 = FUN_001018be(param_1,uVar2,param_4);
    if (cVar1 == '\x01') {
      local_38 = FUN_001027ba(local_38);
    }
    else {
      local_40 = local_38;
      local_38 = FUN_001028f2(local_38);
    }
  }
  FUN_001021f6(&local_28,local_40);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_28;
}




undefined8 FUN_00102930(undefined8 param_1)

{
  return param_1;
}




void FUN_00103f6d(void)

{
  return;
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




undefined4 FUN_00101876(undefined8 param_1)

{
  undefined4 unaff_EBX;
  
  FUN_00101b62(param_1);
  return unaff_EBX;
}




void FUN_001038cc(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *param_1;
  uVar2 = FUN_00103906(param_2);
  FUN_00103918(uVar1,uVar2);
  return;
}




long FUN_00102730(long param_1)

{
  return param_1 + 0x18;
}




void FUN_0010207b(undefined8 param_1)

{
  undefined8 uVar1;
  long in_FS_OFFSET;
  undefined local_11;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  uVar1 = FUN_0010283c(param_1);
  FUN_0010285e(&local_11,uVar1);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00103260(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00102214(param_1);
  FUN_0010336a(param_1,uVar1);
  FUN_0010315a(param_1);
  return;
}




void FUN_00103fc5(void)

{
  return;
}




undefined8 FUN_001018e5(undefined8 param_1)

{
  return param_1;
}




undefined8 FUN_001028f2(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}




void FUN_0010283c(long param_1)

{
  FUN_00102a8a(param_1 + 0x20);
  return;
}




void FUN_00102d2d(undefined8 param_1)

{
  FUN_00102d4b(param_1);
  return;
}




void FUN_00102d4b(undefined8 param_1)

{
  FUN_00102354(param_1);
  return;
}




undefined8 FUN_00103444(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}




void FUN_00102746(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_001029e0(param_2);
  *param_1 = *puVar1;
  puVar1 = (undefined8 *)FUN_001029e0(param_3);
  param_1[1] = *puVar1;
  return;
}




undefined8 FUN_00103906(undefined8 param_1)

{
  return param_1;
}




void FUN_00103c66(byte param_1)

{
  printf("%02x\n",(ulong)param_1);
  return;
}




/* WARNING: Removing unreachable block (ram,0x001014e4) */
/* WARNING: Removing unreachable block (ram,0x001014f0) */

void FUN_001014c0(void)

{
  return;
}




void FUN_00103f99(void)

{
  return;
}




void FUN_00103fe6(void)

{
  return;
}




void FUN_0010319a(undefined8 param_1)

{
  FUN_0010317a(param_1);
  return;
}




void FUN_001023da(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  FUN_001016b3(0x30,param_2);
  uVar1 = FUN_00101c40(param_5);
  uVar2 = FUN_00101c2e(param_4);
  uVar3 = FUN_00101c1c(param_3);
  uVar4 = FUN_00101b70(param_2);
  uVar5 = FUN_00102930(param_1);
                    /* try { // try from 00102469 to 0010246d has its CatchHandler @ 00102470 */
  FUN_00102970(uVar5,uVar4,uVar3,uVar2,uVar1);
  return;
}




void FUN_0010401d(void)

{
  return;
}




void FUN_00103a10(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  puVar2 = (undefined8 *)FUN_00103906(param_3);
  puVar3 = (undefined8 *)FUN_001016b3(0x10,param_2);
  uVar1 = puVar2[1];
  *puVar3 = *puVar2;
  puVar3[1] = uVar1;
  return;
}




undefined8 FUN_001016b3(undefined8 param_1,undefined8 param_2)

{
  return param_2;
}




undefined8 FUN_001027ba(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}




void FUN_0010355e(void)

{
  return;
}




undefined8 FUN_00101b12(long param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_001021f6(&local_18,param_1 + 8);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00104007(void)

{
  return;
}




void FUN_001030f0(undefined4 *param_1)

{
  *param_1 = 0;
  FUN_0010311a(param_1);
  return;
}




void FUN_0010332a(undefined8 param_1)

{
  FUN_001034d4(param_1);
  return;
}




void FUN_0010317a(undefined8 param_1)

{
  FUN_00103204(param_1);
  return;
}




void FUN_00103534(undefined8 param_1,undefined8 param_2)

{
  FUN_00103666(param_1,param_2);
  return;
}




void FUN_00102c44(void)

{
  return;
}




void FUN_001016c9(void)

{
  return;
}




undefined8 FUN_00102592(undefined8 param_1,undefined8 param_2)

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
  local_58 = FUN_00102214(param_1);
  local_50 = FUN_0010222a(param_1);
  local_59 = '\x01';
  while (local_58 != 0) {
    local_50 = local_58;
    uVar2 = FUN_0010207b(local_58);
    local_59 = FUN_001018be(param_1,param_2,uVar2);
    if (local_59 == '\0') {
      local_58 = FUN_001027ba(local_58);
    }
    else {
      local_58 = FUN_001028f2(local_58);
    }
  }
  FUN_001021f6(&local_48,local_50);
  if (local_59 != '\0') {
    local_38[0] = FUN_001029f2(param_1);
    cVar1 = FUN_00101850(&local_48,local_38);
    if (cVar1 != '\0') {
      FUN_00102a42(local_38,&local_58,&local_50);
      goto LAB_00102714;
    }
    FUN_0010278e(&local_48);
  }
  uVar2 = FUN_00102534(local_48);
  cVar1 = FUN_001018be(param_1,uVar2,param_2);
  if (cVar1 == '\0') {
    local_40 = 0;
    FUN_001027fc(local_38,&local_48,&local_40);
  }
  else {
    FUN_00102a42(local_38,&local_58,&local_50);
  }
LAB_00102714:
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return local_38[0];
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00102c58(undefined8 param_1,void *param_2)

{
  operator_delete(param_2);
  return;
}




void FUN_00103f8e(void)

{
  return;
}




void FUN_0010231c(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00101b92(param_2);
  FUN_00102384(param_1,uVar1);
  return;
}




void FUN_00103572(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = param_2;
  return;
}




undefined8 FUN_001034e3(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00103638(param_1,param_2);
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1;
}




void FUN_00103a62(char *param_1)

{
  if (param_1 != (char *)0x0) {
    puts(param_1);
  }
  return;
}




/* WARNING: Removing unreachable block (ram,0x001014a3) */
/* WARNING: Removing unreachable block (ram,0x001014af) */

void FUN_00101490(void)

{
  return;
}




void FUN_00101549(undefined8 param_1)

{
  undefined8 *puVar1;
  long in_FS_OFFSET;
  undefined4 local_84;
  void *local_80;
  undefined local_78 [99];
  undefined local_15;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_84 = 2;
  puVar1 = (undefined8 *)FUN_001016dc(param_1,&local_84);
  local_80 = (void *)*puVar1;
  memset(local_78,0x43,99);
  local_15 = 0;
  memmove(local_80,local_78,100);
  *(undefined *)((long)local_80 + 99) = 0;
  FUN_00103a62(local_80);
  free(local_80);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00103b0e(float param_1)

{
  printf("%f\n",(double)param_1);
  return;
}



