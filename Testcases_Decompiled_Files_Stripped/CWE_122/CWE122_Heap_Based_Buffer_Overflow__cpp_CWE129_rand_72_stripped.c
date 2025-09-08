
void FUN_00103805(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  
  local_30 = param_3;
  local_28 = param_2;
  local_20 = param_1;
  uVar1 = FUN_0010315e(param_3);
  uVar2 = FUN_0010315e(local_28);
  uVar3 = FUN_0010315e(local_20);
  uVar1 = FUN_001038eb(uVar3,uVar2,uVar1);
  FUN_001033d2(&local_30,uVar1);
  return;
}




void FUN_00103a59(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




void FUN_001041c0(undefined4 param_1,undefined8 param_2,undefined8 param_3)

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




void FUN_00103c13(long param_1,ulong param_2)

{
  ulong local_10;
  
  for (local_10 = 0; local_10 < param_2; local_10 = local_10 + 1) {
    printf("%02x",(ulong)*(byte *)(local_10 + param_1));
  }
  puts("");
  return;
}




void FUN_00103a2f(float param_1)

{
  printf("%f\n",(double)param_1);
  return;
}




void FUN_001031aa(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_001033e8(param_1,param_2,param_3);
  return;
}




/* WARNING: Removing unreachable block (ram,0x00101463) */
/* WARNING: Removing unreachable block (ram,0x0010146f) */

void FUN_00101450(void)

{
  return;
}




void FUN_00103518(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_001036f2(param_1,param_2,param_3);
  return;
}




void FUN_001032b0(void)

{
  return;
}




void FUN_00103f12(void)

{
  return;
}




/* WARNING: Removing unreachable block (ram,0x001014a4) */
/* WARNING: Removing unreachable block (ram,0x001014b0) */

void FUN_00101480(void)

{
  return;
}




long FUN_0010285e(long *param_1)

{
  return param_1[1] - *param_1 >> 2;
}




void FUN_001028e8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00102ece(param_1,param_3);
                    /* try { // try from 00102922 to 00102926 has its CatchHandler @ 00102929 */
  FUN_00102f04(param_1,param_2);
  return;
}




void FUN_00103482(undefined8 param_1,ulong param_2)

{
  ulong uVar1;
  
  uVar1 = FUN_0010365a(param_1);
  if (uVar1 < param_2) {
    std::__throw_bad_alloc();
  }
  operator_new(param_2 << 2);
  return;
}




long FUN_00102247(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long *plVar2;
  
  plVar2 = (long *)FUN_00102ac2(param_1);
  lVar1 = *plVar2;
  plVar2 = (long *)FUN_00102ac2(param_2);
  return lVar1 - *plVar2 >> 2;
}




void FUN_00102aa0(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  return;
}




undefined8 FUN_00103419(undefined8 param_1)

{
  undefined8 *puVar1;
  long in_FS_OFFSET;
  undefined8 local_20;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_20 = 0x1fffffffffffffff;
  local_18 = FUN_0010360d(param_1);
  puVar1 = (undefined8 *)FUN_0010362b(&local_20,&local_18);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return *puVar1;
}




void FUN_00103368(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00103518(param_1,param_2,param_3);
  return;
}




void FUN_00101020(void)

{
  (*(code *)PTR_00107ed8)();
  return;
}




void FUN_001035bf(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 local_10;
  
  local_10 = param_1;
  uVar1 = FUN_0010315e(param_1);
  uVar1 = FUN_00103742(uVar1,param_2,param_3);
  FUN_001033d2(&local_10,uVar1);
  return;
}




void FUN_001017b0(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  long in_FS_OFFSET;
  uint local_64;
  undefined8 local_60;
  undefined local_58 [32];
  undefined8 local_38 [3];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00101d76(local_58);
  local_64 = 0xffffffff;
  uVar1 = rand();
  if ((uVar1 & 1) == 0) {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    local_64 = ~(uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf);
  }
  else {
    iVar2 = rand();
    iVar3 = rand();
    local_64 = rand();
    local_64 = local_64 ^ iVar2 << 0x1e ^ iVar3 << 0xf;
  }
  local_60 = FUN_00101e7c(local_58);
  FUN_00101ecc(local_38,&local_60);
                    /* try { // try from 00101862 to 001018f7 has its CatchHandler @ 00101943 */
  FUN_00101efa(local_58,local_38[0],1,&local_64);
  local_60 = FUN_00101e7c(local_58);
  FUN_00101ecc(local_38,&local_60);
  FUN_00101efa(local_58,local_38[0],1,&local_64);
  local_60 = FUN_00101e7c(local_58);
  FUN_00101ecc(local_38,&local_60);
  FUN_00101efa(local_58,local_38[0],1,&local_64);
  FUN_00101fc0(local_38,local_58);
                    /* try { // try from 001018ff to 00101903 has its CatchHandler @ 0010192e */
  FUN_00101509(local_38);
  FUN_00101e34(local_38);
  FUN_00101e34(local_58);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00103b05(undefined4 param_1)

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




int FUN_00103e74(void)

{
  int iVar1;
  
  iVar1 = rand();
  return iVar1 % 2;
}




undefined8 FUN_0010305d(undefined8 param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_0010334a(&local_18,param_1);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00102b34(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00102fce(param_1);
  FUN_00103033(*param_1,uVar1);
  return;
}




void FUN_00103a84(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




void FUN_00102100(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  return;
}




long FUN_00102fce(long param_1)

{
  return param_1 + 8;
}




void FUN_00102f5e(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_001032c3(param_1,param_2,param_3);
  return;
}




void FUN_00102a43(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00102f94(param_1,param_2,param_3);
  return;
}




void FUN_00103edb(void)

{
  return;
}




undefined8 FUN_001033d2(undefined8 param_1,undefined8 param_2)

{
  return param_2;
}




undefined8 FUN_00103f8b(pthread_t param_1,pthread_t param_2,undefined8 *param_3)

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
    iVar1 = pthread_create(&local_20,(pthread_attr_t *)0x0,FUN_00103f54,local_18);
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




void FUN_00101509(undefined8 param_1)

{
  int iVar1;
  int *piVar2;
  void *pvVar3;
  int local_18;
  
  piVar2 = (int *)FUN_0010178c(param_1,2);
  iVar1 = *piVar2;
  pvVar3 = operator_new__(0x28);
  for (local_18 = 0; local_18 < 10; local_18 = local_18 + 1) {
    *(undefined4 *)((long)pvVar3 + (long)local_18 * 4) = 0;
  }
  if (iVar1 < 0) {
    FUN_00103983("ERROR: Array index is negative.");
  }
  else {
    *(undefined4 *)((long)pvVar3 + (long)iVar1 * 4) = 1;
    for (local_18 = 0; local_18 < 10; local_18 = local_18 + 1) {
      FUN_001039db(*(undefined4 *)((long)pvVar3 + (long)local_18 * 4));
    }
  }
  if (pvVar3 != (void *)0x0) {
    operator_delete__(pvVar3);
  }
  return;
}




long FUN_00102b86(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long *plVar2;
  
  plVar2 = (long *)FUN_001021de(param_1);
  lVar1 = *plVar2;
  plVar2 = (long *)FUN_001021de(param_2);
  return lVar1 - *plVar2 >> 2;
}




void FUN_00103eaf(void)

{
  return;
}




ulong FUN_00103c73(long param_1,ulong param_2,long param_3)

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
    __isoc99_sscanf(local_18 * 2 + param_3,&DAT_001050f8,local_1c);
    *(char *)(local_18 + param_1) = local_1c[0];
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




undefined8 FUN_00103672(undefined8 param_1)

{
  return param_1;
}




void FUN_001039a9(long param_1)

{
  if (param_1 != 0) {
    wprintf(L"%ls\n",param_1);
  }
  return;
}




void FUN_001039db(uint param_1)

{
  printf("%d\n",(ulong)param_1);
  return;
}




void FUN_00103f33(void)

{
  return;
}




void FUN_00103ada(char param_1)

{
  printf("%02x\n",(ulong)(uint)(int)param_1);
  return;
}




void FUN_0010339d(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00103549(param_1,param_2,param_3);
  return;
}




void FUN_001033e8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_001035bf(param_1,param_2,param_3);
  return;
}




void FUN_001029fe(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00102f5e(param_1,param_2,param_3);
  return;
}




void FUN_001037aa(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00103873(param_1,param_2,param_3);
  return;
}




void FUN_00101dc2(undefined8 param_1)

{
  FUN_00102132(param_1);
  return;
}




void FUN_00102fbb(void)

{
  return;
}




void FUN_0010218e(undefined8 param_1,undefined8 param_2)

{
  FUN_00102a75(param_1,param_2);
  return;
}




void * FUN_00103873(void *param_1,long param_2,void *param_3)

{
  long lVar1;
  
  lVar1 = param_2 - (long)param_1 >> 2;
  if (lVar1 != 0) {
    memmove(param_3,param_1,lVar1 * 4);
  }
  return (void *)((long)param_3 + lVar1 * 4);
}




void FUN_00103f07(void)

{
  return;
}




void FUN_00103235(undefined8 param_1,undefined8 param_2)

{
  FUN_00103482(param_1,param_2,0);
  return;
}




undefined8 FUN_00103263(undefined8 param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_0010334a(&local_18,param_1);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_001030a9(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00103368(param_1,param_2,param_3);
  return;
}




void FUN_001032c3(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_001034c8(param_1,param_2,param_3);
  return;
}




void FUN_0010416e(pthread_mutex_t *param_1)

{
  pthread_mutex_unlock(param_1);
  return;
}




void FUN_00101d76(undefined8 param_1)

{
  FUN_00101d56(param_1);
  return;
}




void FUN_00103be0(uint *param_1)

{
  printf("%d -- %d\n",(ulong)*param_1,(ulong)param_1[1]);
  return;
}




void FUN_00102132(void)

{
  return;
}




ulong FUN_00103d77(long param_1,ulong param_2,long param_3)

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
    __isoc99_swscanf(local_18 * 8 + param_3,&DAT_00105100,local_1c);
    *(char *)(local_18 + param_1) = local_1c[0];
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




undefined8 FUN_00102e77(undefined8 param_1,undefined8 param_2)

{
  FUN_00102ea4(param_1,param_2);
  return param_1;
}




void FUN_00103684(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  
  local_30 = param_3;
  local_28 = param_2;
  local_20 = param_1;
  uVar1 = FUN_0010315e(param_3);
  uVar2 = FUN_00103789(local_28);
  uVar3 = FUN_00103789(local_20);
  uVar1 = FUN_001037aa(uVar3,uVar2,uVar1);
  FUN_001033d2(&local_30,uVar1);
  return;
}




void FUN_00102f94(undefined8 param_1,void *param_2)

{
  operator_delete(param_2);
  return;
}




undefined8 FUN_00101d1f(undefined8 param_1,undefined8 param_2)

{
  return param_2;
}




void FUN_00103aaf(undefined8 param_1)

{
  printf("%zu\n",param_1);
  return;
}




void FUN_001031e0(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_001028d6(param_1);
  FUN_00103419(uVar1);
  return;
}




bool FUN_00104058(pthread_t *param_1)

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




void FUN_001015dc(undefined8 param_1)

{
  int iVar1;
  int *piVar2;
  void *pvVar3;
  int local_18;
  
  piVar2 = (int *)FUN_0010178c(param_1,2);
  iVar1 = *piVar2;
  pvVar3 = operator_new__(0x28);
  for (local_18 = 0; local_18 < 10; local_18 = local_18 + 1) {
    *(undefined4 *)((long)pvVar3 + (long)local_18 * 4) = 0;
  }
  if (iVar1 < 0) {
    FUN_00103983("ERROR: Array index is negative.");
  }
  else {
    *(undefined4 *)((long)pvVar3 + (long)iVar1 * 4) = 1;
    for (local_18 = 0; local_18 < 10; local_18 = local_18 + 1) {
      FUN_001039db(*(undefined4 *)((long)pvVar3 + (long)local_18 * 4));
    }
  }
  if (pvVar3 != (void *)0x0) {
    operator_delete__(pvVar3);
  }
  return;
}




void FUN_001034c8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_00103672(param_2);
  uVar2 = FUN_00103672(param_1);
  FUN_00103684(uVar2,uVar1,param_3);
  return;
}




undefined8 FUN_001030de(undefined8 param_1)

{
  return param_1;
}




void FUN_00101de2(long *param_1)

{
  FUN_00102142(param_1,*param_1,param_1[2] - *param_1 >> 2);
  FUN_00101d36(param_1);
  return;
}




undefined8 FUN_001021f0(undefined8 *param_1)

{
  long in_FS_OFFSET;
  undefined8 local_20;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_20 = *param_1;
  FUN_00102aa0(&local_18,&local_20);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_0010360d(undefined8 param_1)

{
  FUN_0010365a(param_1);
  return;
}




void FUN_00103b5f(uint param_1)

{
  printf("%u\n",(ulong)param_1);
  return;
}




void FUN_001038eb(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00103920(param_1,param_2,param_3);
  return;
}




undefined8 FUN_00103789(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined8 local_10;
  
  local_10 = param_1;
  puVar1 = (undefined8 *)FUN_00102ac2(&local_10);
  return *puVar1;
}




void FUN_00103f54(long param_1)

{
  (**(code **)(param_1 + 8))(*(undefined8 *)(param_1 + 0x10));
                    /* WARNING: Subroutine does not return */
  pthread_exit((void *)0x0);
}




void FUN_00101d96(undefined8 param_1)

{
  FUN_001020e0(param_1);
  FUN_00102100(param_1);
  return;
}




void FUN_00101fc0(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long in_FS_OFFSET;
  undefined local_31;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  uVar1 = FUN_001028d6(param_2);
  FUN_00102885(&local_31,uVar1);
  uVar1 = FUN_0010285e(param_2);
                    /* try { // try from 00102026 to 0010202a has its CatchHandler @ 00102093 */
  FUN_001028e8(param_1,uVar1,&local_31);
  FUN_00101dc2(&local_31);
  uVar2 = FUN_0010217c(param_1);
  uVar1 = *param_1;
  uVar3 = FUN_001029a6(param_2);
  uVar4 = FUN_0010294e(param_2);
                    /* try { // try from 00102074 to 00102078 has its CatchHandler @ 001020b1 */
  uVar1 = FUN_001029fe(uVar4,uVar3,uVar1,uVar2);
  param_1[1] = uVar1;
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void _FINI_0(void)

{
  if (DAT_00108020 == '\0') {
    if (PTR___cxa_finalize_00107fd8 != (undefined *)0x0) {
      __cxa_finalize(PTR_LOOP_00108008);
    }
    FUN_00101450();
    DAT_00108020 = 1;
    return;
  }
  return;
}




void FUN_00103ec5(void)

{
  return;
}




undefined8 FUN_001021de(undefined8 param_1)

{
  return param_1;
}




void FUN_00103336(void)

{
  return;
}




void FUN_00102ad4(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  *param_1 = param_2;
  uVar1 = FUN_00102fe4(param_3);
  uVar2 = FUN_00102fce(param_1);
  FUN_00102ff6(*param_1,uVar2,uVar1);
  return;
}




undefined8 FUN_00101cba(void)

{
  time_t tVar1;
  
  tVar1 = time((time_t *)0x0);
  srand((uint)tVar1);
  FUN_00103983("Calling good()...");
  FUN_00101ca5();
  FUN_00103983("Finished good()");
  FUN_00103983("Calling bad()...");
  FUN_001017b0();
  FUN_00103983("Finished bad()");
  return 0;
}




void FUN_00103170(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  undefined4 *local_20;
  
  uVar1 = *param_3;
  for (local_20 = param_1; local_20 != param_2; local_20 = local_20 + 1) {
    *local_20 = uVar1;
  }
  return;
}




undefined8 FUN_001040b3(void *param_1)

{
  free(param_1);
  return 1;
}




void FUN_00103983(char *param_1)

{
  if (param_1 != (char *)0x0) {
    puts(param_1);
  }
  return;
}




void FUN_00101efa(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  long in_FS_OFFSET;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_20;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_38 = param_2;
  local_30 = param_1;
  local_20 = FUN_001021f0(param_1);
  local_18 = FUN_00102247(&local_38,&local_20);
  local_20 = FUN_001027ac(local_30);
  uVar1 = FUN_001027f8(&local_20,local_18);
  FUN_0010228c(local_30,uVar1,param_3,param_4);
  local_20 = FUN_001027ac(local_30);
  FUN_001027f8(&local_20,local_18);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_0010228c(long *param_1,undefined8 param_2,ulong param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  long *plVar3;
  long lVar4;
  long in_FS_OFFSET;
  undefined8 local_88;
  long *local_80;
  undefined8 local_78;
  long local_70;
  long local_68;
  long local_60;
  long local_58;
  undefined8 local_50;
  ulong local_48;
  long local_40;
  undefined local_38 [24];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  local_88 = param_2;
  local_80 = param_1;
  if (param_3 != 0) {
    if ((ulong)(param_1[2] - param_1[1] >> 2) < param_3) {
      local_68 = FUN_00102cf8(param_1,param_3,"vector::_M_fill_insert");
      local_78 = FUN_001027ac(local_80);
      local_60 = FUN_00102b86(&local_88,&local_78);
      local_70 = FUN_00102de8(local_80,local_68);
      local_58 = local_70;
      uVar1 = FUN_0010217c(local_80);
                    /* try { // try from 00102596 to 00102621 has its CatchHandler @ 001026d9 */
      FUN_00102cc3(local_60 * 4 + local_58,param_3,param_4,uVar1);
      local_70 = 0;
      uVar1 = FUN_0010217c(local_80);
      puVar2 = (undefined8 *)FUN_001021de(&local_88);
      local_70 = FUN_00102e1f(*local_80,*puVar2,local_58,uVar1);
      local_70 = local_70 + param_3 * 4;
      uVar1 = FUN_0010217c(local_80);
      lVar4 = local_80[1];
      puVar2 = (undefined8 *)FUN_001021de(&local_88);
      local_70 = FUN_00102e1f(*puVar2,lVar4,local_70,uVar1);
      uVar1 = FUN_0010217c(local_80);
      FUN_0010218e(*local_80,local_80[1],uVar1);
      FUN_00102142(local_80,*local_80,local_80[2] - *local_80 >> 2);
      *local_80 = local_58;
      local_80[1] = local_70;
      local_80[2] = local_68 * 4 + local_58;
    }
    else {
      FUN_00102ad4(local_38,param_1,param_4);
                    /* try { // try from 00102316 to 001024e9 has its CatchHandler @ 001026bb */
      local_50 = FUN_00102b68(local_38);
      local_78 = FUN_00101e7c(local_80);
      local_48 = FUN_00102b86(&local_78,&local_88);
      local_40 = local_80[1];
      if (param_3 < local_48) {
        uVar1 = FUN_0010217c(local_80);
        FUN_00102bca(param_3 * -4 + local_80[1],local_80[1],local_80[1],uVar1);
        local_80[1] = param_3 * 4 + local_80[1];
        lVar4 = param_3 * -4 + local_40;
        puVar2 = (undefined8 *)FUN_001021de(&local_88);
        FUN_00102c22(*puVar2,lVar4,local_40);
        plVar3 = (long *)FUN_001021de(&local_88);
        lVar4 = *plVar3;
        puVar2 = (undefined8 *)FUN_001021de(&local_88);
        FUN_00102c72(*puVar2,lVar4 + param_3 * 4,local_50);
      }
      else {
        uVar1 = FUN_0010217c(local_80);
        lVar4 = FUN_00102cc3(local_80[1],param_3 - local_48,local_50,uVar1);
        local_80[1] = lVar4;
        uVar1 = FUN_0010217c(local_80);
        lVar4 = local_80[1];
        puVar2 = (undefined8 *)FUN_001021de(&local_88);
        FUN_00102bca(*puVar2,local_40,lVar4,uVar1);
        local_80[1] = local_48 * 4 + local_80[1];
        puVar2 = (undefined8 *)FUN_001021de(&local_88);
        FUN_00102c72(*puVar2,local_40,local_50);
      }
      FUN_00102b34(local_38);
    }
  }
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00103ef1(void)

{
  return;
}




undefined8 FUN_00103e56(void)

{
  return 1;
}




void FUN_001036f2(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_001037df(param_2);
  uVar2 = FUN_001037df(param_1);
  FUN_00103805(uVar2,uVar1,param_3);
  return;
}




undefined8 FUN_00102fe4(undefined8 param_1)

{
  return param_1;
}




void FUN_001032f4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  
  puVar2 = (undefined4 *)FUN_00102fe4(param_3);
  uVar1 = *puVar2;
  puVar2 = (undefined4 *)FUN_00101d1f(4,param_2);
  *puVar2 = uVar1;
  return;
}




void FUN_00103a03(short param_1)

{
  printf("%hd\n",(ulong)(uint)(int)param_1);
  return;
}




undefined8 FUN_0010217c(undefined8 param_1)

{
  return param_1;
}




void FUN_00102c22(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_001030de(param_2);
  uVar2 = FUN_001030de(param_1);
  FUN_001030f0(uVar2,uVar1,param_3);
  return;
}




undefined8 FUN_001040d6(undefined8 *param_1)

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




void FUN_0010418d(pthread_mutex_t *param_1)

{
  pthread_mutex_destroy(param_1);
  free(param_1);
  return;
}




void FUN_00102bca(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_0010305d(param_2);
  uVar2 = FUN_0010305d(param_1);
  FUN_001030a9(uVar2,uVar1,param_3,param_4);
  return;
}




void FUN_00101ca5(void)

{
  FUN_0010196d();
  FUN_00101ae8();
  return;
}




void FUN_00103f3e(void)

{
  return;
}




void FUN_00101e34(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_0010217c(param_1);
  FUN_0010218e(*param_1,param_1[1],uVar1);
  FUN_00101de2(param_1);
  return;
}




long FUN_00103549(void *param_1,long param_2,long param_3)

{
  long lVar1;
  
  lVar1 = param_2 - (long)param_1 >> 2;
  if (lVar1 != 0) {
    memmove((void *)(lVar1 * -4 + param_3),param_1,lVar1 * 4);
  }
  return param_3 + lVar1 * -4;
}




void FUN_00102f04(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = FUN_00102de8(param_1,param_2);
  *param_1 = lVar1;
  param_1[1] = *param_1;
  param_1[2] = param_2 * 4 + *param_1;
  return;
}




void FUN_00103ea4(void)

{
  return;
}




void FUN_00103ee6(void)

{
  return;
}




ulong FUN_00102cf8(undefined8 param_1,ulong param_2,char *param_3)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  ulong uVar4;
  ulong uVar5;
  long in_FS_OFFSET;
  ulong local_48;
  undefined8 local_40;
  undefined8 local_30;
  ulong local_28;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  local_48 = param_2;
  local_40 = param_1;
  lVar1 = FUN_001031e0(param_1);
  lVar2 = FUN_0010285e(local_40);
  if ((ulong)(lVar1 - lVar2) < local_48) {
    std::__throw_length_error(param_3);
  }
  lVar1 = FUN_0010285e(local_40);
  local_30 = FUN_0010285e(local_40);
  plVar3 = (long *)FUN_00103206(&local_30,&local_48);
  local_28 = *plVar3 + lVar1;
  uVar4 = FUN_0010285e(local_40);
  if ((local_28 < uVar4) || (uVar5 = FUN_001031e0(local_40), uVar4 = local_28, uVar5 < local_28)) {
    uVar4 = FUN_001031e0(local_40);
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00102ff6(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00102fe4(param_3);
  FUN_001032f4(param_1,param_2,uVar1);
  return;
}




void FUN_00103b87(byte param_1)

{
  printf("%02x\n",(ulong)param_1);
  return;
}




undefined4 * FUN_00103742(undefined4 *param_1,long param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  undefined4 *local_20;
  long local_10;
  
  uVar1 = *param_3;
  local_20 = param_1;
  for (local_10 = param_2; local_10 != 0; local_10 = local_10 + -1) {
    *local_20 = uVar1;
    local_20 = local_20 + 1;
  }
  return local_20;
}




void FUN_00103f28(void)

{
  return;
}




undefined8 FUN_00102de8(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  
  if (param_2 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = FUN_00103235(param_1,param_2);
  }
  return uVar1;
}




void FUN_00103f49(void)

{
  return;
}




undefined8 FUN_00103e65(void)

{
  return 0;
}




void FUN_00101ae8(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  long in_FS_OFFSET;
  uint local_64;
  undefined8 local_60;
  undefined local_58 [32];
  undefined8 local_38 [3];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00101d76(local_58);
  local_64 = 0xffffffff;
  uVar1 = rand();
  if ((uVar1 & 1) == 0) {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    local_64 = ~(uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf);
  }
  else {
    iVar2 = rand();
    iVar3 = rand();
    local_64 = rand();
    local_64 = local_64 ^ iVar2 << 0x1e ^ iVar3 << 0xf;
  }
  local_60 = FUN_00101e7c(local_58);
  FUN_00101ecc(local_38,&local_60);
                    /* try { // try from 00101b9a to 00101c2f has its CatchHandler @ 00101c7b */
  FUN_00101efa(local_58,local_38[0],1,&local_64);
  local_60 = FUN_00101e7c(local_58);
  FUN_00101ecc(local_38,&local_60);
  FUN_00101efa(local_58,local_38[0],1,&local_64);
  local_60 = FUN_00101e7c(local_58);
  FUN_00101ecc(local_38,&local_60);
  FUN_00101efa(local_58,local_38[0],1,&local_64);
  FUN_00101fc0(local_38,local_58);
                    /* try { // try from 00101c37 to 00101c3b has its CatchHandler @ 00101c66 */
  FUN_001016af(local_38);
  FUN_00101e34(local_38);
  FUN_00101e34(local_58);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00103033(undefined8 param_1,undefined8 param_2)

{
  FUN_00103336(param_1,param_2);
  return;
}




void FUN_0010334a(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = param_2;
  return;
}




void FUN_00103efc(void)

{
  return;
}




void FUN_0010196d(void)

{
  long in_FS_OFFSET;
  undefined4 local_64;
  undefined8 local_60;
  undefined local_58 [32];
  undefined8 local_38 [3];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00101d76(local_58);
  local_64 = 7;
  local_60 = FUN_00101e7c(local_58);
  FUN_00101ecc(local_38,&local_60);
                    /* try { // try from 001019dd to 00101a72 has its CatchHandler @ 00101abe */
  FUN_00101efa(local_58,local_38[0],1,&local_64);
  local_60 = FUN_00101e7c(local_58);
  FUN_00101ecc(local_38,&local_60);
  FUN_00101efa(local_58,local_38[0],1,&local_64);
  local_60 = FUN_00101e7c(local_58);
  FUN_00101ecc(local_38,&local_60);
  FUN_00101efa(local_58,local_38[0],1,&local_64);
  FUN_00101fc0(local_38,local_58);
                    /* try { // try from 00101a7a to 00101a7e has its CatchHandler @ 00101aa9 */
  FUN_001015dc(local_38);
  FUN_00101e34(local_38);
  FUN_00101e34(local_58);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00102ece(undefined8 param_1,undefined8 param_2)

{
  FUN_00102ea4(param_1,param_2);
  FUN_00102100(param_1);
  return;
}




undefined8 FUN_0010365a(void)

{
  return 0x1fffffffffffffff;
}




long FUN_0010178c(long *param_1,long param_2)

{
  return *param_1 + param_2 * 4;
}




void FUN_001037df(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 local_10;
  
  local_10 = param_1;
  uVar1 = FUN_001038d6(&local_10);
  FUN_001030de(uVar1);
  return;
}




void FUN_00102e1f(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_00103263(param_2);
  uVar2 = FUN_00103263(param_1);
  FUN_001030a9(uVar2,uVar1,param_3,param_4);
  return;
}




void * FUN_00103920(void *param_1,long param_2,void *param_3)

{
  long lVar1;
  
  lVar1 = param_2 - (long)param_1 >> 2;
  if (lVar1 != 0) {
    memmove(param_3,param_1,lVar1 * 4);
  }
  return (void *)((long)param_3 + lVar1 * 4);
}




void FUN_001020e0(undefined8 param_1)

{
  FUN_00102a34(param_1);
  return;
}




void FUN_001016af(undefined8 param_1)

{
  int iVar1;
  int *piVar2;
  void *pvVar3;
  int local_18;
  
  piVar2 = (int *)FUN_0010178c(param_1,2);
  iVar1 = *piVar2;
  pvVar3 = operator_new__(0x28);
  for (local_18 = 0; local_18 < 10; local_18 = local_18 + 1) {
    *(undefined4 *)((long)pvVar3 + (long)local_18 * 4) = 0;
  }
  if ((iVar1 < 0) || (9 < iVar1)) {
    FUN_00103983("ERROR: Array index is out-of-bounds");
  }
  else {
    *(undefined4 *)((long)pvVar3 + (long)iVar1 * 4) = 1;
    for (local_18 = 0; local_18 < 10; local_18 = local_18 + 1) {
      FUN_001039db(*(undefined4 *)((long)pvVar3 + (long)local_18 * 4));
    }
  }
  if (pvVar3 != (void *)0x0) {
    operator_delete__(pvVar3);
  }
  return;
}




void FUN_00101d56(undefined8 param_1)

{
  FUN_00101d96(param_1);
  return;
}




void FUN_001030f0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  
  local_30 = param_3;
  local_28 = param_2;
  local_20 = param_1;
  uVar1 = FUN_0010315e(param_3);
  uVar2 = FUN_0010315e(local_28);
  uVar3 = FUN_0010315e(local_20);
  uVar1 = FUN_0010339d(uVar3,uVar2,uVar1);
  FUN_001033d2(&local_30,uVar1);
  return;
}




void FUN_001021bc(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  return;
}




void FUN_00103ed0(void)

{
  return;
}




undefined8 FUN_00101e7c(long param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_001021bc(&local_18,param_1 + 8);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00102cc3(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_001031aa(param_1,param_2,param_3);
  return;
}




void FUN_00102142(undefined8 param_1,long param_2,undefined8 param_3)

{
  if (param_2 != 0) {
    FUN_00102a43(param_1,param_2,param_3);
  }
  return;
}




void FUN_00103eba(void)

{
  return;
}




void FUN_00103f1d(void)

{
  return;
}




undefined8 FUN_00102ac2(undefined8 param_1)

{
  return param_1;
}




void FUN_00102b68(undefined8 param_1)

{
  FUN_00102fce(param_1);
  return;
}




void FUN_00102c72(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_0010315e(param_2);
  uVar2 = FUN_0010315e(param_1);
  FUN_00103170(uVar2,uVar1,param_3);
  return;
}




void FUN_00101ecc(undefined8 *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_001021de(param_2);
  *param_1 = *puVar1;
  return;
}




void FUN_00103e99(void)

{
  return;
}




undefined8 FUN_001038d6(undefined8 *param_1)

{
  return *param_1;
}




undefined8 FUN_00102885(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00102e77(param_1,param_2);
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1;
}




void FUN_00104230(void)

{
  return;
}




undefined8 FUN_001027f8(long *param_1,long param_2)

{
  long in_FS_OFFSET;
  long local_20;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_20 = *param_1 + param_2 * 4;
  FUN_001021bc(&local_18,&local_20);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00102a34(void)

{
  return;
}




ulong * FUN_0010362b(ulong *param_1,ulong *param_2)

{
  if (*param_2 < *param_1) {
    param_1 = param_2;
  }
  return param_1;
}




undefined8 FUN_001029a6(long param_1)

{
  long in_FS_OFFSET;
  undefined8 local_20;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_20 = *(undefined8 *)(param_1 + 8);
  FUN_00102aa0(&local_18,&local_20);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




undefined8 FUN_001027ac(undefined8 param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_001021bc(&local_18,param_1);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00101d36(undefined8 param_1)

{
  FUN_00101dc2(param_1);
  return;
}




void FUN_00103bb2(undefined8 param_1)

{
  printf("%g\n",param_1);
  return;
}




undefined8 FUN_0010294e(undefined8 *param_1)

{
  long in_FS_OFFSET;
  undefined8 local_20;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_20 = *param_1;
  FUN_00102aa0(&local_18,&local_20);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




undefined8 FUN_0010315e(undefined8 param_1)

{
  return param_1;
}




void FUN_00102ea4(undefined8 param_1,undefined8 param_2)

{
  FUN_001032b0(param_1,param_2);
  return;
}




undefined8 FUN_001028d6(undefined8 param_1)

{
  return param_1;
}




void FUN_00103e8e(void)

{
  return;
}




void FUN_0010414f(pthread_mutex_t *param_1)

{
  pthread_mutex_lock(param_1);
  return;
}




void FUN_00102a75(undefined8 param_1,undefined8 param_2)

{
  FUN_00102fbb(param_1,param_2);
  return;
}




ulong * FUN_00103206(ulong *param_1,ulong *param_2)

{
  if (*param_1 < *param_2) {
    param_1 = param_2;
  }
  return param_1;
}



