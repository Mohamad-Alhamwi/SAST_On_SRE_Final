
void FUN_001017b6(short param_1)

{
  printf("%hd\n",(ulong)(uint)(int)param_1);
  return;
}




void FUN_00101c6d(void)

{
  return;
}




void FUN_0010188d(char param_1)

{
  printf("%02x\n",(ulong)(uint)(int)param_1);
  return;
}




void FUN_001018b8(undefined4 param_1)

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




ulong FUN_00101b2a(long param_1,ulong param_2,long param_3)

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
    __isoc99_swscanf(local_18 * 8 + param_3,&DAT_001020e0,local_1c);
    *(char *)(local_18 + param_1) = local_1c[0];
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00101c57(void)

{
  return;
}




void FUN_00101c83(void)

{
  return;
}




void FUN_0010180c(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




void FUN_00101cfc(void)

{
  return;
}




/* WARNING: Removing unreachable block (ram,0x00101364) */
/* WARNING: Removing unreachable block (ram,0x00101370) */

void FUN_00101340(void)

{
  return;
}




void FUN_00101862(undefined8 param_1)

{
  printf("%zu\n",param_1);
  return;
}




void FUN_001017e2(float param_1)

{
  printf("%f\n",(double)param_1);
  return;
}




undefined8 FUN_00101c09(void)

{
  return 1;
}




void FUN_001016bc(void)

{
  FUN_001014da();
  FUN_001015a3();
  return;
}




void FUN_00101caf(void)

{
  return;
}




void FUN_00101f02(pthread_mutex_t *param_1)

{
  pthread_mutex_lock(param_1);
  return;
}




void FUN_001015a3(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  long in_FS_OFFSET;
  uint local_5c;
  int local_58;
  uint local_54;
  uint *local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  local_50 = &local_5c;
  local_5c = 0xffffffff;
  uVar1 = rand();
  if ((uVar1 & 1) == 0) {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    local_5c = ~(uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf);
  }
  else {
    iVar2 = rand();
    iVar3 = rand();
    local_5c = rand();
    local_5c = local_5c ^ iVar2 << 0x1e ^ iVar3 << 0xf;
  }
  local_54 = *local_50;
  local_48 = 0;
  local_40 = 0;
  local_38 = 0;
  local_30 = 0;
  local_28 = 0;
  if (((int)local_54 < 0) || (9 < (int)local_54)) {
    FUN_00101736("ERROR: Array index is out-of-bounds");
  }
  else {
    *(undefined4 *)((long)&local_48 + (long)(int)local_54 * 4) = 1;
    for (local_58 = 0; local_58 < 10; local_58 = local_58 + 1) {
                    /* try { // try from 00101679 to 0010168f has its CatchHandler @ 00101695 */
      FUN_0010178e(*(undefined4 *)((long)&local_48 + (long)local_58 * 4));
    }
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00101c99(void)

{
  return;
}




void FUN_00101cba(void)

{
  return;
}




void FUN_00101965(undefined8 param_1)

{
  printf("%g\n",param_1);
  return;
}




int FUN_00101c27(void)

{
  int iVar1;
  
  iVar1 = rand();
  return iVar1 % 2;
}




void FUN_00101837(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




void FUN_00101c78(void)

{
  return;
}




void FUN_00101f21(pthread_mutex_t *param_1)

{
  pthread_mutex_unlock(param_1);
  return;
}




void FUN_00101f70(undefined4 param_1,undefined8 param_2,undefined8 param_3)

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




/* WARNING: Removing unreachable block (ram,0x00101323) */
/* WARNING: Removing unreachable block (ram,0x0010132f) */

void FUN_00101310(void)

{
  return;
}




void FUN_00101912(uint param_1)

{
  printf("%u\n",(ulong)param_1);
  return;
}




ulong FUN_00101a26(long param_1,ulong param_2,long param_3)

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
    __isoc99_sscanf(local_18 * 2 + param_3,&DAT_001020d8,local_1c);
    *(char *)(local_18 + param_1) = local_1c[0];
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00101cd0(void)

{
  return;
}




undefined8 FUN_00101c18(void)

{
  return 0;
}




void FUN_00101d07(long param_1)

{
  (**(code **)(param_1 + 8))(*(undefined8 *)(param_1 + 0x10));
                    /* WARNING: Subroutine does not return */
  pthread_exit((void *)0x0);
}




void FUN_00101c41(void)

{
  return;
}




void FUN_00101ca4(void)

{
  return;
}




undefined8 FUN_00101e66(void *param_1)

{
  free(param_1);
  return 1;
}




void FUN_001019c6(long param_1,ulong param_2)

{
  ulong local_10;
  
  for (local_10 = 0; local_10 < param_2; local_10 = local_10 + 1) {
    printf("%02x",(ulong)*(byte *)(local_10 + param_1));
  }
  puts("");
  return;
}




void FUN_00101c8e(void)

{
  return;
}




void FUN_00101fe0(void)

{
  return;
}




void FUN_00101cf1(void)

{
  return;
}




void FUN_00101993(uint *param_1)

{
  printf("%d -- %d\n",(ulong)*param_1,(ulong)param_1[1]);
  return;
}




undefined8 FUN_00101d3e(pthread_t param_1,pthread_t param_2,undefined8 *param_3)

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
    iVar1 = pthread_create(&local_20,(pthread_attr_t *)0x0,FUN_00101d07,local_18);
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




void FUN_0010178e(uint param_1)

{
  printf("%d\n",(ulong)param_1);
  return;
}




void FUN_0010175c(long param_1)

{
  if (param_1 != 0) {
    wprintf(L"%ls\n",param_1);
  }
  return;
}




undefined8 FUN_001016d1(void)

{
  time_t tVar1;
  
  tVar1 = time((time_t *)0x0);
  srand((uint)tVar1);
  FUN_00101736("Calling good()...");
  FUN_001016bc();
  FUN_00101736("Finished good()");
  FUN_00101736("Calling bad()...");
  FUN_001013c9();
  FUN_00101736("Finished bad()");
  return 0;
}




/* WARNING: Removing unreachable block (ram,0x00101572) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_001014da(void)

{
  long in_FS_OFFSET;
  undefined4 local_4c;
  int local_48;
  undefined4 local_44;
  undefined4 *local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_40 = &local_4c;
  local_4c = 7;
  local_44 = 7;
  local_38 = 0;
  local_30 = 0;
  local_28 = 0;
  local_20 = 0;
  local_18 = 0;
                    /* WARNING: Ignoring partial resolution of indirect */
  local_20._4_4_ = 1;
  for (local_48 = 0; local_48 < 10; local_48 = local_48 + 1) {
                    /* try { // try from 00101567 to 0010157d has its CatchHandler @ 00101580 */
    FUN_0010178e(*(undefined4 *)((long)&local_38 + (long)local_48 * 4));
  }
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




undefined8 FUN_00101e89(undefined8 *param_1)

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




void FUN_00101c62(void)

{
  return;
}




void FUN_00101f40(pthread_mutex_t *param_1)

{
  pthread_mutex_destroy(param_1);
  free(param_1);
  return;
}




void _FINI_0(void)

{
  if (DAT_00104020 == '\0') {
    if (PTR___cxa_finalize_00103fd8 != (undefined *)0x0) {
      __cxa_finalize(PTR_LOOP_00104008);
    }
    FUN_00101310();
    DAT_00104020 = 1;
    return;
  }
  return;
}




void FUN_0010193a(byte param_1)

{
  printf("%02x\n",(ulong)param_1);
  return;
}




void FUN_00101ce6(void)

{
  return;
}




void FUN_00101c4c(void)

{
  return;
}




void FUN_00101736(char *param_1)

{
  if (param_1 != (char *)0x0) {
    puts(param_1);
  }
  return;
}




void FUN_00101020(void)

{
  (*(code *)PTR_00103f28)();
  return;
}




void FUN_001013c9(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  long in_FS_OFFSET;
  uint local_5c;
  int local_58;
  uint local_54;
  uint *local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  local_50 = &local_5c;
  local_5c = 0xffffffff;
  uVar1 = rand();
  if ((uVar1 & 1) == 0) {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    local_5c = ~(uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf);
  }
  else {
    iVar2 = rand();
    iVar3 = rand();
    local_5c = rand();
    local_5c = local_5c ^ iVar2 << 0x1e ^ iVar3 << 0xf;
  }
  local_54 = *local_50;
  local_48 = 0;
  local_40 = 0;
  local_38 = 0;
  local_30 = 0;
  local_28 = 0;
  if ((int)local_54 < 10) {
    *(undefined4 *)((long)&local_48 + (long)(int)local_54 * 4) = 1;
    for (local_58 = 0; local_58 < 10; local_58 = local_58 + 1) {
                    /* try { // try from 00101499 to 001014af has its CatchHandler @ 001014b2 */
      FUN_0010178e(*(undefined4 *)((long)&local_48 + (long)local_58 * 4));
    }
  }
  else {
    FUN_00101736("ERROR: Array index is negative.");
  }
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




bool FUN_00101e0b(pthread_t *param_1)

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




void FUN_00101cdb(void)

{
  return;
}




void FUN_00101cc5(void)

{
  return;
}



