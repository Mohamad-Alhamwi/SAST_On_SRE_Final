
void FUN_00101d5a(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 local_20;
  
  local_20 = (undefined8 *)*param_1;
  while (local_20 != param_1) {
    puVar1 = (undefined8 *)*local_20;
    uVar2 = FUN_001017ec(local_20);
    uVar3 = FUN_00101fde(param_1);
    FUN_00101ff0(uVar3,uVar2);
    FUN_0010201a(param_1,local_20);
    local_20 = puVar1;
  }
  return;
}




void FUN_00101020(void)

{
  (*(code *)PTR_00105ef0)();
  return;
}




undefined8 FUN_00101abf(undefined8 param_1,undefined8 param_2)

{
  return param_2;
}




undefined8 * FUN_00102240(undefined8 *param_1)

{
  *param_1 = *(undefined8 *)*param_1;
  return param_1;
}




void FUN_00101b2c(undefined8 param_1)

{
  FUN_00101bd8(param_1);
  return;
}




void FUN_00102794(byte param_1)

{
  printf("%02x\n",(ulong)param_1);
  return;
}




undefined8 FUN_00101f24(undefined8 param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_001021fc(&local_18,param_1);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00102ac7(void)

{
  return;
}




void FUN_00102b40(void)

{
  return;
}




void FUN_00101ff0(undefined8 param_1,undefined8 param_2)

{
  FUN_001022d4(param_1,param_2);
  return;
}




void FUN_00102ae8(void)

{
  return;
}




void _FINI_0(void)

{
  if (DAT_00106020 == '\0') {
    if (PTR___cxa_finalize_00105fd8 != (undefined *)0x0) {
      __cxa_finalize(PTR_LOOP_00106008);
    }
    FUN_001013f0();
    DAT_00106020 = 1;
    return;
  }
  return;
}




void FUN_0010263c(float param_1)

{
  printf("%f\n",(double)param_1);
  return;
}




void FUN_00102286(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_00102049(param_2);
  uVar2 = FUN_0010173c(param_1);
  FUN_00101dd8(param_1,uVar2,uVar1);
  return;
}




void FUN_0010217e(undefined8 param_1,undefined8 param_2)

{
  FUN_00102416(param_1,param_2);
  return;
}




void FUN_00102264(undefined8 *param_1)

{
  FUN_0010242a(*param_1);
  return;
}




void FUN_001017ac(undefined8 *param_1)

{
  FUN_001017ec(*param_1);
  return;
}




void FUN_00102aa6(void)

{
  return;
}




undefined8 FUN_00102a63(void)

{
  return 1;
}




void FUN_001021ba(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_001021a8(param_2);
  FUN_0010217e(param_1,uVar1);
  FUN_00101ad6(param_1);
  return;
}




long FUN_001023f4(long param_1)

{
  *(undefined8 *)(param_1 + 8) = 0;
  return param_1;
}




void FUN_00102b1f(void)

{
  return;
}




undefined8 FUN_00101e39(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00102150(param_1,param_2);
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1;
}




void FUN_00102a9b(void)

{
  return;
}




void FUN_00101c24(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_0010173c(param_1);
  FUN_00101dd8(param_1,uVar1,param_2);
  return;
}




void FUN_00102712(undefined4 param_1)

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




undefined8 FUN_00102b98(pthread_t param_1,pthread_t param_2,undefined8 *param_3)

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
    iVar1 = pthread_create(&local_20,(pthread_attr_t *)0x0,FUN_00102b61,local_18);
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




void FUN_00102610(short param_1)

{
  printf("%hd\n",(ulong)(uint)(int)param_1);
  return;
}




void FUN_001017ce(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = param_2;
  return;
}




void FUN_00102666(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




undefined8 FUN_00102cc0(void *param_1)

{
  free(param_1);
  return 1;
}




void FUN_001024b4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)FUN_00102049(param_3);
  uVar1 = *puVar2;
  puVar2 = (undefined8 *)FUN_00101abf(8,param_2);
  *puVar2 = uVar1;
  return;
}




/* WARNING: Removing unreachable block (ram,0x00101444) */
/* WARNING: Removing unreachable block (ram,0x00101450) */

void FUN_00101420(void)

{
  return;
}




void FUN_00102516(undefined8 param_1,ulong param_2)

{
  ulong uVar1;
  
  uVar1 = FUN_00102578(param_1);
  if (uVar1 < param_2) {
    std::__throw_bad_alloc();
  }
  operator_new(param_2 * 0x18);
  return;
}




void FUN_001026bc(undefined8 param_1)

{
  printf("%zu\n",param_1);
  return;
}




void FUN_00101c5e(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long in_FS_OFFSET;
  undefined local_21;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  uVar1 = FUN_00101e8a(param_2);
  FUN_00101e39(&local_21,uVar1);
  FUN_00101e9c(param_1,&local_21);
  FUN_00101bd8(&local_21);
  uVar1 = FUN_00101f24(param_2);
  uVar2 = FUN_00101ed4(param_2);
                    /* try { // try from 00101cea to 00101cee has its CatchHandler @ 00101cf1 */
  FUN_00101f70(param_1,uVar2,uVar1);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




undefined8 FUN_00102ce3(undefined8 *param_1)

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




void FUN_0010180e(undefined8 param_1)

{
  FUN_0010182c(param_1);
  return;
}




void FUN_0010242a(long param_1)

{
  FUN_001024f8(param_1 + 0x10);
  return;
}




void FUN_00102ab1(void)

{
  return;
}




void FUN_001021fc(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = param_2;
  return;
}




void FUN_001017ec(long param_1)

{
  FUN_0010180e(param_1 + 0x10);
  return;
}




void FUN_00101bf8(undefined8 param_1)

{
  FUN_00101d5a(param_1);
  FUN_00101b2c(param_1);
  return;
}




void FUN_00102e40(void)

{
  return;
}




void FUN_00102af3(void)

{
  return;
}




void FUN_00102dd0(undefined4 param_1,undefined8 param_2,undefined8 param_3)

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




void FUN_00101b4c(undefined8 param_1)

{
  FUN_00101bac(param_1);
  return;
}




void FUN_001022d4(void)

{
  return;
}




undefined8 FUN_00101a5a(void)

{
  time_t tVar1;
  
  tVar1 = time((time_t *)0x0);
  srand((uint)tVar1);
  FUN_00102590("Calling good()...");
  FUN_00101a4a();
  FUN_00102590("Finished good()");
  FUN_00102590("Calling bad()...");
  FUN_0010183e();
  FUN_00102590("Finished bad()");
  return 0;
}




void FUN_001026e7(char param_1)

{
  printf("%02x\n",(ulong)(uint)(int)param_1);
  return;
}




void FUN_00101a4a(void)

{
  FUN_00101944();
  return;
}




void FUN_00101944(void)

{
  long in_FS_OFFSET;
  undefined *local_60;
  undefined local_58 [32];
  undefined local_38 [24];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00101b6c(local_58);
  local_60 = (undefined *)0x0;
                    /* try { // try from 00101979 to 001019d4 has its CatchHandler @ 00101a20 */
  local_60 = (undefined *)operator_new__(100);
  *local_60 = 0;
  FUN_00101c24(local_58,&local_60);
  FUN_00101c24(local_58,&local_60);
  FUN_00101c24(local_58,&local_60);
  FUN_00101c5e(local_38,local_58);
                    /* try { // try from 001019dc to 001019e0 has its CatchHandler @ 00101a0b */
  FUN_001015c3(local_38);
  FUN_00101b8c(local_38);
  FUN_00101b8c(local_58);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00101af6(undefined8 *param_1)

{
  param_1[1] = param_1;
  *param_1 = param_1[1];
  param_1[2] = 0;
  return;
}




void FUN_001015c3(undefined8 param_1)

{
  undefined8 *puVar1;
  long in_FS_OFFSET;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  uint local_28;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  puVar1 = (undefined8 *)FUN_001016de(param_1);
  puVar1 = (undefined8 *)*puVar1;
  memset(&local_88,0x43,99);
  local_28 = local_28 & 0xffffff;
  *puVar1 = local_88;
  puVar1[1] = local_80;
  puVar1[2] = local_78;
  puVar1[3] = local_70;
  puVar1[4] = local_68;
  puVar1[5] = local_60;
  puVar1[6] = local_58;
  puVar1[7] = local_50;
  puVar1[8] = local_48;
  puVar1[9] = local_40;
  puVar1[10] = local_38;
  puVar1[0xb] = local_30;
  *(uint *)(puVar1 + 0xc) = local_28;
  *(undefined *)((long)puVar1 + 99) = 0;
  FUN_00102590(puVar1);
  if (puVar1 != (undefined8 *)0x0) {
    operator_delete__(puVar1);
  }
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00102b09(void)

{
  return;
}




void FUN_00102473(undefined8 param_1,undefined8 param_2)

{
  FUN_00102516(param_1,param_2,0);
  return;
}




void FUN_001027bf(undefined8 param_1)

{
  printf("%g\n",param_1);
  return;
}




undefined8 FUN_0010221a(long *param_1,long *param_2)

{
  return CONCAT71((int7)((ulong)*param_2 >> 8),*param_1 != *param_2);
}




void FUN_001025b6(long param_1)

{
  if (param_1 != 0) {
    wprintf(L"%ls\n",param_1);
  }
  return;
}




void FUN_001014a9(undefined8 param_1)

{
  undefined8 *puVar1;
  long in_FS_OFFSET;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  uint local_28;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  puVar1 = (undefined8 *)FUN_001016de(param_1);
  puVar1 = (undefined8 *)*puVar1;
  memset(&local_88,0x43,99);
  local_28 = local_28 & 0xffffff;
  *puVar1 = local_88;
  puVar1[1] = local_80;
  puVar1[2] = local_78;
  puVar1[3] = local_70;
  puVar1[4] = local_68;
  puVar1[5] = local_60;
  puVar1[6] = local_58;
  puVar1[7] = local_50;
  puVar1[8] = local_48;
  puVar1[9] = local_40;
  puVar1[10] = local_38;
  puVar1[0xb] = local_30;
  *(uint *)(puVar1 + 0xc) = local_28;
  *(undefined *)((long)puVar1 + 99) = 0;
  FUN_00102590(puVar1);
  if (puVar1 != (undefined8 *)0x0) {
    operator_delete__(puVar1);
  }
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00101b8c(undefined8 param_1)

{
  FUN_00101bf8(param_1);
  return;
}




void FUN_00101bac(undefined8 param_1)

{
  FUN_00101d2a(param_1);
  FUN_00101ad6(param_1);
  return;
}




undefined8 FUN_0010182c(undefined8 param_1)

{
  return param_1;
}




void FUN_00101d4a(void)

{
  return;
}




void FUN_00102afe(void)

{
  return;
}




ulong FUN_00102880(long param_1,ulong param_2,long param_3)

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
    __isoc99_sscanf(local_18 * 2 + param_3,&DAT_00103090,local_1c);
    *(char *)(local_18 + param_1) = local_1c[0];
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00102b14(void)

{
  return;
}




undefined8 FUN_00101e8a(undefined8 param_1)

{
  return param_1;
}




void FUN_00102691(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




bool FUN_00102c65(pthread_t *param_1)

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




void FUN_00101d2a(undefined8 param_1)

{
  FUN_00101fce(param_1);
  return;
}




undefined8 FUN_0010205c(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long in_FS_OFFSET;
  undefined local_38 [24];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  uVar1 = FUN_0010231a(param_1);
  uVar2 = FUN_00101fde(param_1);
  FUN_0010233e(local_38,uVar2,uVar1);
  uVar3 = FUN_00102049(param_2);
  uVar4 = FUN_001017ec(uVar1);
  FUN_001023b7(uVar2,uVar4,uVar3);
  FUN_001023f4(local_38,0);
  FUN_00102378(local_38);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar1;
}




undefined8 FUN_00102150(undefined8 param_1,undefined8 param_2)

{
  FUN_0010217e(param_1,param_2);
  return param_1;
}




undefined8 FUN_00101fde(undefined8 param_1)

{
  return param_1;
}




void FUN_00102add(void)

{
  return;
}




void FUN_0010233e(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = FUN_001024a1(param_2);
  *param_1 = uVar1;
  param_1[1] = param_3;
  return;
}




void FUN_00102b56(void)

{
  return;
}




undefined8 FUN_00102049(undefined8 param_1)

{
  return param_1;
}




undefined8 FUN_001024a1(undefined8 param_1)

{
  return param_1;
}




ulong FUN_00102984(long param_1,ulong param_2,long param_3)

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
    __isoc99_swscanf(local_18 * 8 + param_3,&DAT_00103098,local_1c);
    *(char *)(local_18 + param_1) = local_1c[0];
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_001016de(undefined8 param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_18 = FUN_0010173c(param_1);
  FUN_00101788(&local_18);
  FUN_001017ac(&local_18);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




undefined8 FUN_00101ed4(undefined8 *param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_001021fc(&local_18,*param_1);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00101fce(void)

{
  return;
}




void FUN_001023b7(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00102049(param_3);
  FUN_001024b4(param_1,param_2,uVar1);
  return;
}




void FUN_001025e8(uint param_1)

{
  printf("%d\n",(ulong)param_1);
  return;
}




void FUN_00102b35(void)

{
  return;
}




void FUN_00102d5c(pthread_mutex_t *param_1)

{
  pthread_mutex_lock(param_1);
  return;
}




void FUN_00102d9a(pthread_mutex_t *param_1)

{
  pthread_mutex_destroy(param_1);
  free(param_1);
  return;
}




void FUN_00102b2a(void)

{
  return;
}




void FUN_00102b4b(void)

{
  return;
}




undefined8 FUN_00102578(void)

{
  return 0x555555555555555;
}




void FUN_0010276c(uint param_1)

{
  printf("%u\n",(ulong)param_1);
  return;
}




/* WARNING: Removing unreachable block (ram,0x00101403) */
/* WARNING: Removing unreachable block (ram,0x0010140f) */

void FUN_001013f0(void)

{
  return;
}




void FUN_00102378(undefined8 *param_1)

{
  if (param_1[1] != 0) {
    FUN_001022e7(*param_1,param_1[1],1);
  }
  return;
}




void FUN_0010231a(undefined8 param_1)

{
  FUN_00102473(param_1,1);
  return;
}




void FUN_00101b6c(undefined8 param_1)

{
  FUN_00101b4c(param_1);
  return;
}




void FUN_00101bd8(undefined8 param_1)

{
  FUN_00101d4a(param_1);
  return;
}




void FUN_001027ed(uint *param_1)

{
  printf("%d -- %d\n",(ulong)*param_1,(ulong)param_1[1]);
  return;
}




undefined8 FUN_00102566(undefined8 param_1)

{
  return param_1;
}




undefined8 FUN_0010173c(undefined8 param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_001017ce(&local_18,param_1);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00102d7b(pthread_mutex_t *param_1)

{
  pthread_mutex_unlock(param_1);
  return;
}




void FUN_00101ad6(undefined8 param_1)

{
  FUN_00101af6(param_1);
  return;
}




undefined8 FUN_001021a8(undefined8 param_1)

{
  return param_1;
}




void FUN_001022e7(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_0010244c(param_1,param_2,param_3);
  return;
}




void FUN_0010201a(undefined8 param_1,undefined8 param_2)

{
  FUN_001022e7(param_1,param_2,1);
  return;
}




void FUN_0010244c(undefined8 param_1,void *param_2)

{
  operator_delete(param_2);
  return;
}




void FUN_00102ad2(void)

{
  return;
}




long * FUN_00101788(long *param_1)

{
  *param_1 = *(long *)(*param_1 + 8);
  return param_1;
}




void FUN_00102416(void)

{
  return;
}




void FUN_001024f8(undefined8 param_1)

{
  FUN_00102566(param_1);
  return;
}




void FUN_00102820(long param_1,ulong param_2)

{
  ulong local_10;
  
  for (local_10 = 0; local_10 < param_2; local_10 = local_10 + 1) {
    printf("%02x",(ulong)*(byte *)(local_10 + param_1));
  }
  puts("");
  return;
}




void FUN_00102abc(void)

{
  return;
}




void FUN_00102590(char *param_1)

{
  if (param_1 != (char *)0x0) {
    puts(param_1);
  }
  return;
}




void FUN_0010183e(void)

{
  long in_FS_OFFSET;
  undefined *local_60;
  undefined local_58 [32];
  undefined local_38 [24];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00101b6c(local_58);
  local_60 = (undefined *)0x0;
                    /* try { // try from 00101873 to 001018ce has its CatchHandler @ 0010191a */
  local_60 = (undefined *)operator_new__(0x32);
  *local_60 = 0;
  FUN_00101c24(local_58,&local_60);
  FUN_00101c24(local_58,&local_60);
  FUN_00101c24(local_58,&local_60);
  FUN_00101c5e(local_38,local_58);
                    /* try { // try from 001018d6 to 001018da has its CatchHandler @ 00101905 */
  FUN_001014a9(local_38);
  FUN_00101b8c(local_38);
  FUN_00101b8c(local_58);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00102126(long param_1,long param_2)

{
  *(long *)(param_1 + 0x10) = *(long *)(param_1 + 0x10) + param_2;
  return;
}




void FUN_00101dd8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  _List_node_base *p_Var2;
  
  uVar1 = FUN_00102049(param_3);
  p_Var2 = (_List_node_base *)FUN_0010205c(param_1,uVar1);
  std::__detail::_List_node_base::_M_hook(p_Var2);
  FUN_00102126(param_1,1);
  return;
}




void FUN_00101e9c(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_001021a8(param_2);
  FUN_001021ba(param_1,uVar1);
  return;
}




void FUN_00101f70(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  char cVar1;
  undefined8 uVar2;
  undefined8 local_20;
  undefined8 local_18;
  undefined8 local_10;
  
  local_20 = param_3;
  local_18 = param_2;
  local_10 = param_1;
  while( true ) {
    cVar1 = FUN_0010221a(&local_18,&local_20);
    if (cVar1 == '\0') break;
    uVar2 = FUN_00102264(&local_18);
    FUN_00102286(local_10,uVar2);
    FUN_00102240(&local_18);
  }
  return;
}




int FUN_00102a81(void)

{
  int iVar1;
  
  iVar1 = rand();
  return iVar1 % 2;
}




undefined8 FUN_00102a72(void)

{
  return 0;
}




void FUN_00102b61(long param_1)

{
  (**(code **)(param_1 + 8))(*(undefined8 *)(param_1 + 0x10));
                    /* WARNING: Subroutine does not return */
  pthread_exit((void *)0x0);
}



