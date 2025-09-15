
undefined8 FUN_00102255(undefined8 *param_1)

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




void FUN_00101cde(uint param_1)

{
  printf("%u\n",(ulong)param_1);
  return;
}




void FUN_0010209c(void)

{
  return;
}




undefined8 FUN_001019c3(void)

{
  time_t tVar1;
  
  tVar1 = time((time_t *)0x0);
  srand((uint)tVar1);
  FUN_00101b02("Calling good()...");
  FUN_001019ae();
  FUN_00101b02("Finished good()");
  FUN_00101b02("Calling bad()...");
  FUN_001014b2();
  FUN_00101b02("Finished bad()");
  return 0;
}




void FUN_00101b28(long param_1)

{
  if (param_1 != 0) {
    wprintf(L"%ls\n",param_1);
  }
  return;
}




void FUN_001020bd(void)

{
  return;
}




void FUN_00101a74(undefined8 *param_1)

{
  FUN_00101a28(param_1);
  *param_1 = &PTR_FUN_00105c40;
  return;
}




void FUN_0010144a(undefined8 param_1,char *param_2)

{
  fprintf(stdout,param_2);
  return;
}




void FUN_00102039(void)

{
  return;
}




void FUN_00101c2e(undefined8 param_1)

{
  printf("%zu\n",param_1);
  return;
}




void FUN_001014b2(void)

{
  char *__s;
  size_t sVar1;
  char *pcVar2;
  undefined8 *puVar3;
  long in_FS_OFFSET;
  char acStack_89 [105];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  acStack_89[1] = '\0';
  acStack_89[2] = '\0';
  acStack_89[3] = '\0';
  acStack_89[4] = '\0';
  acStack_89[5] = '\0';
  acStack_89[6] = '\0';
  acStack_89[7] = '\0';
  acStack_89[8] = '\0';
  acStack_89[9] = '\0';
  acStack_89[10] = '\0';
  acStack_89[0xb] = '\0';
  acStack_89[0xc] = '\0';
  acStack_89[0xd] = '\0';
  acStack_89[0xe] = '\0';
  acStack_89[0xf] = '\0';
  acStack_89[0x10] = '\0';
  acStack_89[0x11] = '\0';
  acStack_89[0x12] = '\0';
  acStack_89[0x13] = '\0';
  acStack_89[0x14] = '\0';
  acStack_89[0x15] = '\0';
  acStack_89[0x16] = '\0';
  acStack_89[0x17] = '\0';
  acStack_89[0x18] = '\0';
  acStack_89[0x19] = '\0';
  acStack_89[0x1a] = '\0';
  acStack_89[0x1b] = '\0';
  acStack_89[0x1c] = '\0';
  acStack_89[0x1d] = '\0';
  acStack_89[0x1e] = '\0';
  acStack_89[0x1f] = '\0';
  acStack_89[0x20] = '\0';
  acStack_89[0x21] = '\0';
  acStack_89[0x22] = '\0';
  acStack_89[0x23] = '\0';
  acStack_89[0x24] = '\0';
  acStack_89[0x25] = '\0';
  acStack_89[0x26] = '\0';
  acStack_89[0x27] = '\0';
  acStack_89[0x28] = '\0';
  acStack_89[0x29] = '\0';
  acStack_89[0x2a] = '\0';
  acStack_89[0x2b] = '\0';
  acStack_89[0x2c] = '\0';
  acStack_89[0x2d] = '\0';
  acStack_89[0x2e] = '\0';
  acStack_89[0x2f] = '\0';
  acStack_89[0x30] = '\0';
  acStack_89[0x31] = '\0';
  acStack_89[0x32] = '\0';
  acStack_89[0x33] = '\0';
  acStack_89[0x34] = '\0';
  acStack_89[0x35] = '\0';
  acStack_89[0x36] = '\0';
  acStack_89[0x37] = '\0';
  acStack_89[0x38] = '\0';
  acStack_89[0x39] = '\0';
  acStack_89[0x3a] = '\0';
  acStack_89[0x3b] = '\0';
  acStack_89[0x3c] = '\0';
  acStack_89[0x3d] = '\0';
  acStack_89[0x3e] = '\0';
  acStack_89[0x3f] = '\0';
  acStack_89[0x40] = '\0';
  acStack_89[0x41] = '\0';
  acStack_89[0x42] = '\0';
  acStack_89[0x43] = '\0';
  acStack_89[0x44] = '\0';
  acStack_89[0x45] = '\0';
  acStack_89[0x46] = '\0';
  acStack_89[0x47] = '\0';
  acStack_89[0x48] = '\0';
  acStack_89[0x49] = '\0';
  acStack_89[0x4a] = '\0';
  acStack_89[0x4b] = '\0';
  acStack_89[0x4c] = '\0';
  acStack_89[0x4d] = '\0';
  acStack_89[0x4e] = '\0';
  acStack_89[0x4f] = '\0';
  acStack_89[0x50] = '\0';
  acStack_89[0x51] = '\0';
  acStack_89[0x52] = '\0';
  acStack_89[0x53] = '\0';
  acStack_89[0x54] = '\0';
  acStack_89[0x55] = '\0';
  acStack_89[0x56] = '\0';
  acStack_89[0x57] = '\0';
  acStack_89[0x58] = '\0';
  acStack_89[0x59] = '\0';
  acStack_89[0x5a] = '\0';
  acStack_89[0x5b] = '\0';
  acStack_89[0x5c] = '\0';
  acStack_89[0x5d] = '\0';
  acStack_89[0x5e] = '\0';
  acStack_89[0x5f] = '\0';
  acStack_89[0x60] = '\0';
  acStack_89[0x61] = '\0';
  acStack_89[0x62] = '\0';
  acStack_89[99] = '\0';
  acStack_89[100] = '\0';
  __s = acStack_89 + 1;
  sVar1 = strlen(__s);
  if (1 < 100 - sVar1) {
    pcVar2 = fgets(__s + sVar1,100 - (int)sVar1,stdin);
    if (pcVar2 == (char *)0x0) {
      FUN_00101b02("fgets() failed");
      __s[sVar1] = '\0';
    }
    else {
      sVar1 = strlen(__s);
      if ((sVar1 != 0) && (__s[sVar1 - 1] == '\n')) {
        __s[sVar1 - 1] = '\0';
      }
    }
  }
  puVar3 = (undefined8 *)operator_new(8);
  FUN_00101a46(puVar3);
  (**(code **)*puVar3)(puVar3,__s);
  if (puVar3 != (undefined8 *)0x0) {
    operator_delete(puVar3,8);
  }
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00101ad0(undefined8 param_1,char *param_2)

{
  fprintf(stdout,param_2);
  return;
}




void FUN_00101a28(undefined8 *param_1)

{
  *param_1 = &PTR___cxa_pure_virtual_00105cc8;
  return;
}




void FUN_00101bd8(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




undefined8 FUN_00101fe4(void)

{
  return 0;
}




void FUN_00101c03(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




void FUN_00102070(void)

{
  return;
}




undefined8 FUN_00102232(void *param_1)

{
  free(param_1);
  return 1;
}




ulong FUN_00101ef6(long param_1,ulong param_2,long param_3)

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
    __isoc99_swscanf(local_18 * 8 + param_3,&DAT_00103310,local_1c);
    *(char *)(local_18 + param_1) = local_1c[0];
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00102023(void)

{
  return;
}




void FUN_0010147c(undefined8 param_1,undefined8 param_2)

{
  fprintf(stdout,"%s\n",param_2);
  return;
}




void FUN_001020b2(void)

{
  return;
}




bool FUN_001021d7(pthread_t *param_1)

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




void FUN_001022ce(pthread_mutex_t *param_1)

{
  pthread_mutex_lock(param_1);
  return;
}




void FUN_00102065(void)

{
  return;
}




void FUN_00101a46(undefined8 *param_1)

{
  FUN_00101a28(param_1);
  *param_1 = &PTR_FUN_00105c70;
  return;
}




void FUN_00101bae(float param_1)

{
  printf("%f\n",(double)param_1);
  return;
}




/* WARNING: Removing unreachable block (ram,0x001013e4) */
/* WARNING: Removing unreachable block (ram,0x001013f0) */

void FUN_001013c0(void)

{
  return;
}




int FUN_00101ff3(void)

{
  int iVar1;
  
  iVar1 = rand();
  return iVar1 % 2;
}




undefined8 FUN_0010210a(pthread_t param_1,pthread_t param_2,undefined8 *param_3)

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
    iVar1 = pthread_create(&local_20,(pthread_attr_t *)0x0,FUN_001020d3,local_18);
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




void FUN_00102340(undefined4 param_1,undefined8 param_2,undefined8 param_3)

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




void FUN_00101b5a(uint param_1)

{
  printf("%d\n",(ulong)param_1);
  return;
}




void FUN_00102086(void)

{
  return;
}




void _FINI_0(void)

{
  if (DAT_00106038 == '\0') {
    if (PTR___cxa_finalize_00105fd8 != (undefined *)0x0) {
      __cxa_finalize(PTR_LOOP_00106008);
    }
    FUN_00101390();
    DAT_00106038 = 1;
    return;
  }
  return;
}




void FUN_0010202e(void)

{
  return;
}




/* WARNING: Removing unreachable block (ram,0x001013a3) */
/* WARNING: Removing unreachable block (ram,0x001013af) */

void FUN_00101390(void)

{
  return;
}




void FUN_00102044(void)

{
  return;
}




void FUN_00101d06(byte param_1)

{
  printf("%02x\n",(ulong)param_1);
  return;
}




void FUN_001020a7(void)

{
  return;
}




void FUN_001020d3(long param_1)

{
  (**(code **)(param_1 + 8))(*(undefined8 *)(param_1 + 0x10));
                    /* WARNING: Subroutine does not return */
  pthread_exit((void *)0x0);
}




void FUN_001022ed(pthread_mutex_t *param_1)

{
  pthread_mutex_unlock(param_1);
  return;
}




void FUN_001023b0(void)

{
  return;
}




void FUN_00101b02(char *param_1)

{
  if (param_1 != (char *)0x0) {
    puts(param_1);
  }
  return;
}




void FUN_00101c59(char param_1)

{
  printf("%02x\n",(ulong)(uint)(int)param_1);
  return;
}




void FUN_00102018(void)

{
  return;
}




void FUN_00101d31(undefined8 param_1)

{
  printf("%g\n",param_1);
  return;
}




void FUN_0010169b(void)

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
  undefined4 local_28;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  local_78 = 0;
  local_70 = 0;
  local_68 = 0;
  local_60 = 0;
  local_58 = 0;
  local_50 = 0;
  local_48 = 0;
  local_40 = 0;
  local_38 = 0;
  local_30 = 0;
  local_28 = 0;
  local_88 = 0x7274736465786966;
  local_80 = 0x74736574676e69;
  puVar1 = (undefined8 *)operator_new(8);
  FUN_00101a74(puVar1);
  (**(code **)*puVar1)(puVar1,&local_88);
  if (puVar1 != (undefined8 *)0x0) {
    operator_delete(puVar1,8);
  }
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00101d5f(uint *param_1)

{
  printf("%d -- %d\n",(ulong)*param_1,(ulong)param_1[1]);
  return;
}




void FUN_00101d92(long param_1,ulong param_2)

{
  ulong local_10;
  
  for (local_10 = 0; local_10 < param_2; local_10 = local_10 + 1) {
    printf("%02x",(ulong)*(byte *)(local_10 + param_1));
  }
  puts("");
  return;
}




void FUN_0010200d(void)

{
  return;
}




void FUN_0010205a(void)

{
  return;
}




void FUN_001020c8(void)

{
  return;
}




void FUN_0010230c(pthread_mutex_t *param_1)

{
  pthread_mutex_destroy(param_1);
  free(param_1);
  return;
}




void FUN_00101020(void)

{
  (*(code *)PTR_00105f08)();
  return;
}




void FUN_00101b82(short param_1)

{
  printf("%hd\n",(ulong)(uint)(int)param_1);
  return;
}




void FUN_0010207b(void)

{
  return;
}




undefined8 FUN_00101fd5(void)

{
  return 1;
}




void FUN_00102091(void)

{
  return;
}




void FUN_00101c84(undefined4 param_1)

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




ulong FUN_00101df2(long param_1,ulong param_2,long param_3)

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
    __isoc99_sscanf(local_18 * 2 + param_3,&DAT_00103308,local_1c);
    *(char *)(local_18 + param_1) = local_1c[0];
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_001019ae(void)

{
  FUN_0010169b();
  FUN_001017c5();
  return;
}




void FUN_0010204f(void)

{
  return;
}




void FUN_00101aa2(undefined8 *param_1)

{
  FUN_00101a28(param_1);
  *param_1 = &PTR_FUN_00105c58;
  return;
}




void FUN_001017c5(void)

{
  char *__s;
  size_t sVar1;
  char *pcVar2;
  undefined8 *puVar3;
  long in_FS_OFFSET;
  char acStack_89 [105];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  acStack_89[1] = '\0';
  acStack_89[2] = '\0';
  acStack_89[3] = '\0';
  acStack_89[4] = '\0';
  acStack_89[5] = '\0';
  acStack_89[6] = '\0';
  acStack_89[7] = '\0';
  acStack_89[8] = '\0';
  acStack_89[9] = '\0';
  acStack_89[10] = '\0';
  acStack_89[0xb] = '\0';
  acStack_89[0xc] = '\0';
  acStack_89[0xd] = '\0';
  acStack_89[0xe] = '\0';
  acStack_89[0xf] = '\0';
  acStack_89[0x10] = '\0';
  acStack_89[0x11] = '\0';
  acStack_89[0x12] = '\0';
  acStack_89[0x13] = '\0';
  acStack_89[0x14] = '\0';
  acStack_89[0x15] = '\0';
  acStack_89[0x16] = '\0';
  acStack_89[0x17] = '\0';
  acStack_89[0x18] = '\0';
  acStack_89[0x19] = '\0';
  acStack_89[0x1a] = '\0';
  acStack_89[0x1b] = '\0';
  acStack_89[0x1c] = '\0';
  acStack_89[0x1d] = '\0';
  acStack_89[0x1e] = '\0';
  acStack_89[0x1f] = '\0';
  acStack_89[0x20] = '\0';
  acStack_89[0x21] = '\0';
  acStack_89[0x22] = '\0';
  acStack_89[0x23] = '\0';
  acStack_89[0x24] = '\0';
  acStack_89[0x25] = '\0';
  acStack_89[0x26] = '\0';
  acStack_89[0x27] = '\0';
  acStack_89[0x28] = '\0';
  acStack_89[0x29] = '\0';
  acStack_89[0x2a] = '\0';
  acStack_89[0x2b] = '\0';
  acStack_89[0x2c] = '\0';
  acStack_89[0x2d] = '\0';
  acStack_89[0x2e] = '\0';
  acStack_89[0x2f] = '\0';
  acStack_89[0x30] = '\0';
  acStack_89[0x31] = '\0';
  acStack_89[0x32] = '\0';
  acStack_89[0x33] = '\0';
  acStack_89[0x34] = '\0';
  acStack_89[0x35] = '\0';
  acStack_89[0x36] = '\0';
  acStack_89[0x37] = '\0';
  acStack_89[0x38] = '\0';
  acStack_89[0x39] = '\0';
  acStack_89[0x3a] = '\0';
  acStack_89[0x3b] = '\0';
  acStack_89[0x3c] = '\0';
  acStack_89[0x3d] = '\0';
  acStack_89[0x3e] = '\0';
  acStack_89[0x3f] = '\0';
  acStack_89[0x40] = '\0';
  acStack_89[0x41] = '\0';
  acStack_89[0x42] = '\0';
  acStack_89[0x43] = '\0';
  acStack_89[0x44] = '\0';
  acStack_89[0x45] = '\0';
  acStack_89[0x46] = '\0';
  acStack_89[0x47] = '\0';
  acStack_89[0x48] = '\0';
  acStack_89[0x49] = '\0';
  acStack_89[0x4a] = '\0';
  acStack_89[0x4b] = '\0';
  acStack_89[0x4c] = '\0';
  acStack_89[0x4d] = '\0';
  acStack_89[0x4e] = '\0';
  acStack_89[0x4f] = '\0';
  acStack_89[0x50] = '\0';
  acStack_89[0x51] = '\0';
  acStack_89[0x52] = '\0';
  acStack_89[0x53] = '\0';
  acStack_89[0x54] = '\0';
  acStack_89[0x55] = '\0';
  acStack_89[0x56] = '\0';
  acStack_89[0x57] = '\0';
  acStack_89[0x58] = '\0';
  acStack_89[0x59] = '\0';
  acStack_89[0x5a] = '\0';
  acStack_89[0x5b] = '\0';
  acStack_89[0x5c] = '\0';
  acStack_89[0x5d] = '\0';
  acStack_89[0x5e] = '\0';
  acStack_89[0x5f] = '\0';
  acStack_89[0x60] = '\0';
  acStack_89[0x61] = '\0';
  acStack_89[0x62] = '\0';
  acStack_89[99] = '\0';
  acStack_89[100] = '\0';
  __s = acStack_89 + 1;
  sVar1 = strlen(__s);
  if (1 < 100 - sVar1) {
    pcVar2 = fgets(__s + sVar1,100 - (int)sVar1,stdin);
    if (pcVar2 == (char *)0x0) {
      FUN_00101b02("fgets() failed");
      __s[sVar1] = '\0';
    }
    else {
      sVar1 = strlen(__s);
      if ((sVar1 != 0) && (__s[sVar1 - 1] == '\n')) {
        __s[sVar1 - 1] = '\0';
      }
    }
  }
  puVar3 = (undefined8 *)operator_new(8);
  FUN_00101aa2(puVar3);
  (**(code **)*puVar3)(puVar3,__s);
  if (puVar3 != (undefined8 *)0x0) {
    operator_delete(puVar3,8);
  }
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



