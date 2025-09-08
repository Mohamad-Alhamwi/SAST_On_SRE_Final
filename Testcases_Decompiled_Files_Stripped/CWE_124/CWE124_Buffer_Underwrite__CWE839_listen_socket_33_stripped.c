
void FUN_00101bbd(uint param_1)

{
  printf("%u\n",(ulong)param_1);
  return;
}




void FUN_00101f0d(void)

{
  return;
}




void FUN_00101f23(void)

{
  return;
}




void FUN_00101f2e(void)

{
  return;
}




void FUN_001014e9(void)

{
  uint16_t uVar1;
  int iVar2;
  ssize_t sVar3;
  long in_FS_OFFSET;
  int local_68;
  int local_64;
  int local_60;
  int local_5c;
  int local_58;
  int local_54;
  int *local_50;
  sockaddr local_48;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  char local_1e [14];
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_50 = &local_68;
  local_68 = -1;
  local_5c = 0xffffffff;
  local_64 = -1;
  local_5c = socket(2,1,6);
  if (local_5c != -1) {
    memset(&local_48,0,0x10);
    local_48.sa_family = 2;
    local_48._0_8_ = local_48._0_8_ & 0xffffffff;
    uVar1 = htons(0x6987);
    local_48.sa_data._0_2_ = uVar1;
    iVar2 = bind(local_5c,&local_48,0x10);
    if (((iVar2 != -1) && (iVar2 = listen(local_5c,5), iVar2 != -1)) &&
       (local_64 = accept(local_5c,(sockaddr *)0x0,(socklen_t *)0x0), local_64 != -1)) {
      sVar3 = recv(local_64,local_1e,0xd,0);
      local_58 = (int)sVar3;
      if ((local_58 != -1) && (local_58 != 0)) {
        local_1e[local_58] = '\0';
        local_68 = atoi(local_1e);
      }
    }
  }
  if (local_5c != -1) {
    close(local_5c);
  }
  if (local_64 != -1) {
    close(local_64);
  }
  local_54 = *local_50;
  local_48.sa_family = 0;
  local_48.sa_data[0] = '\0';
  local_48.sa_data[1] = '\0';
  local_48.sa_data[2] = '\0';
  local_48.sa_data[3] = '\0';
  local_48.sa_data[4] = '\0';
  local_48.sa_data[5] = '\0';
  local_48.sa_data[6] = '\0';
  local_48.sa_data[7] = '\0';
  local_48.sa_data[8] = '\0';
  local_48.sa_data[9] = '\0';
  local_48.sa_data[10] = '\0';
  local_48.sa_data[0xb] = '\0';
  local_48.sa_data[0xc] = '\0';
  local_48.sa_data[0xd] = '\0';
  local_38 = 0;
  local_30 = 0;
  local_28 = 0;
  if (local_54 < 10) {
    *(undefined4 *)(local_48.sa_data + (long)local_54 * 4 + -2) = 1;
    for (local_60 = 0; local_60 < 10; local_60 = local_60 + 1) {
      FUN_00101a39(*(undefined4 *)(local_48.sa_data + (long)local_60 * 4 + -2));
    }
  }
  else {
    FUN_001019e1("ERROR: Array index is negative.");
  }
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00101788(void)

{
  uint16_t uVar1;
  int iVar2;
  ssize_t sVar3;
  long in_FS_OFFSET;
  int local_68;
  int local_64;
  int local_60;
  int local_5c;
  int local_58;
  int local_54;
  int *local_50;
  sockaddr local_48;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  char local_1e [14];
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_50 = &local_68;
  local_68 = -1;
  local_5c = 0xffffffff;
  local_64 = -1;
  local_5c = socket(2,1,6);
  if (local_5c != -1) {
    memset(&local_48,0,0x10);
    local_48.sa_family = 2;
    local_48._0_8_ = local_48._0_8_ & 0xffffffff;
    uVar1 = htons(0x6987);
    local_48.sa_data._0_2_ = uVar1;
    iVar2 = bind(local_5c,&local_48,0x10);
    if (((iVar2 != -1) && (iVar2 = listen(local_5c,5), iVar2 != -1)) &&
       (local_64 = accept(local_5c,(sockaddr *)0x0,(socklen_t *)0x0), local_64 != -1)) {
      sVar3 = recv(local_64,local_1e,0xd,0);
      local_58 = (int)sVar3;
      if ((local_58 != -1) && (local_58 != 0)) {
        local_1e[local_58] = '\0';
        local_68 = atoi(local_1e);
      }
    }
  }
  if (local_5c != -1) {
    close(local_5c);
  }
  if (local_64 != -1) {
    close(local_64);
  }
  local_54 = *local_50;
  local_48.sa_family = 0;
  local_48.sa_data[0] = '\0';
  local_48.sa_data[1] = '\0';
  local_48.sa_data[2] = '\0';
  local_48.sa_data[3] = '\0';
  local_48.sa_data[4] = '\0';
  local_48.sa_data[5] = '\0';
  local_48.sa_data[6] = '\0';
  local_48.sa_data[7] = '\0';
  local_48.sa_data[8] = '\0';
  local_48.sa_data[9] = '\0';
  local_48.sa_data[10] = '\0';
  local_48.sa_data[0xb] = '\0';
  local_48.sa_data[0xc] = '\0';
  local_48.sa_data[0xd] = '\0';
  local_38 = 0;
  local_30 = 0;
  local_28 = 0;
  if ((local_54 < 0) || (9 < local_54)) {
    FUN_001019e1("ERROR: Array index is out-of-bounds");
  }
  else {
    *(undefined4 *)(local_48.sa_data + (long)local_54 * 4 + -2) = 1;
    for (local_60 = 0; local_60 < 10; local_60 = local_60 + 1) {
      FUN_00101a39(*(undefined4 *)(local_48.sa_data + (long)local_60 * 4 + -2));
    }
  }
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00101f91(void)

{
  return;
}




void FUN_00102220(undefined4 param_1,undefined8 param_2,undefined8 param_3)

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




void FUN_00101f7b(void)

{
  return;
}




undefined8 FUN_00101eb4(void)

{
  return 1;
}




/* WARNING: Removing unreachable block (ram,0x00101443) */
/* WARNING: Removing unreachable block (ram,0x0010144f) */

void FUN_00101430(void)

{
  return;
}




void FUN_00101a07(long param_1)

{
  if (param_1 != 0) {
    wprintf(L"%ls\n",param_1);
  }
  return;
}




void FUN_00101be5(byte param_1)

{
  printf("%02x\n",(ulong)param_1);
  return;
}




int FUN_00101ed2(void)

{
  int iVar1;
  
  iVar1 = rand();
  return iVar1 % 2;
}




void FUN_00101f86(void)

{
  return;
}




void FUN_00101c71(long param_1,ulong param_2)

{
  ulong local_10;
  
  for (local_10 = 0; local_10 < param_2; local_10 = local_10 + 1) {
    printf("%02x",(ulong)*(byte *)(local_10 + param_1));
  }
  puts("");
  return;
}




void FUN_00101f44(void)

{
  return;
}




void FUN_00101ab7(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




void FUN_001021eb(pthread_mutex_t *param_1)

{
  pthread_mutex_destroy(param_1);
  free(param_1);
  return;
}




void FUN_00101020(void)

{
  (*(code *)PTR_00104ee0)();
  return;
}




void FUN_00101eec(void)

{
  return;
}




void FUN_00101a39(uint param_1)

{
  printf("%d\n",(ulong)param_1);
  return;
}




void FUN_001019e1(char *param_1)

{
  if (param_1 != (char *)0x0) {
    puts(param_1);
  }
  return;
}




void FUN_00101fb2(long param_1)

{
  (**(code **)(param_1 + 8))(*(undefined8 *)(param_1 + 0x10));
                    /* WARNING: Subroutine does not return */
  pthread_exit((void *)0x0);
}




void FUN_00101967(void)

{
  FUN_001016bf();
  FUN_00101788();
  return;
}




void FUN_00101f39(void)

{
  return;
}




void FUN_00101fa7(void)

{
  return;
}




/* WARNING: Removing unreachable block (ram,0x00101484) */
/* WARNING: Removing unreachable block (ram,0x00101490) */

void FUN_00101460(void)

{
  return;
}




void FUN_00101a8d(float param_1)

{
  printf("%f\n",(double)param_1);
  return;
}




void FUN_00101ef7(void)

{
  return;
}




void FUN_00101f18(void)

{
  return;
}




/* WARNING: Removing unreachable block (ram,0x00101757) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_001016bf(void)

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
                    /* try { // try from 0010174c to 00101762 has its CatchHandler @ 00101765 */
    FUN_00101a39(*(undefined4 *)((long)&local_38 + (long)local_48 * 4));
  }
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00101b38(char param_1)

{
  printf("%02x\n",(ulong)(uint)(int)param_1);
  return;
}




void FUN_00101c3e(uint *param_1)

{
  printf("%d -- %d\n",(ulong)*param_1,(ulong)param_1[1]);
  return;
}




void _FINI_0(void)

{
  if (DAT_00105020 == '\0') {
    if (PTR___cxa_finalize_00104fd8 != (undefined *)0x0) {
      __cxa_finalize(PTR_LOOP_00105008);
    }
    FUN_00101430();
    DAT_00105020 = 1;
    return;
  }
  return;
}




void FUN_001021cc(pthread_mutex_t *param_1)

{
  pthread_mutex_unlock(param_1);
  return;
}




void FUN_00101f02(void)

{
  return;
}




void FUN_00101f70(void)

{
  return;
}




void FUN_001021ad(pthread_mutex_t *param_1)

{
  pthread_mutex_lock(param_1);
  return;
}




void FUN_00102290(void)

{
  return;
}




void FUN_00101f4f(void)

{
  return;
}




void FUN_00101ae2(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




void FUN_00101b63(undefined4 param_1)

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




ulong FUN_00101dd5(long param_1,ulong param_2,long param_3)

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
    __isoc99_swscanf(local_18 * 8 + param_3,&DAT_001030e0,local_1c);
    *(char *)(local_18 + param_1) = local_1c[0];
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00101f5a(void)

{
  return;
}




void FUN_00101f65(void)

{
  return;
}




void FUN_00101f9c(void)

{
  return;
}




ulong FUN_00101cd1(long param_1,ulong param_2,long param_3)

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
    __isoc99_sscanf(local_18 * 2 + param_3,&DAT_001030d8,local_1c);
    *(char *)(local_18 + param_1) = local_1c[0];
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




undefined8 FUN_00101fe9(pthread_t param_1,pthread_t param_2,undefined8 *param_3)

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
    iVar1 = pthread_create(&local_20,(pthread_attr_t *)0x0,FUN_00101fb2,local_18);
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




bool FUN_001020b6(pthread_t *param_1)

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




void FUN_00101c10(undefined8 param_1)

{
  printf("%g\n",param_1);
  return;
}




void FUN_00101a61(short param_1)

{
  printf("%hd\n",(ulong)(uint)(int)param_1);
  return;
}




void FUN_00101b0d(undefined8 param_1)

{
  printf("%zu\n",param_1);
  return;
}




undefined8 FUN_00102111(void *param_1)

{
  free(param_1);
  return 1;
}




undefined8 FUN_0010197c(void)

{
  time_t tVar1;
  
  tVar1 = time((time_t *)0x0);
  srand((uint)tVar1);
  FUN_001019e1("Calling good()...");
  FUN_00101967();
  FUN_001019e1("Finished good()");
  FUN_001019e1("Calling bad()...");
  FUN_001014e9();
  FUN_001019e1("Finished bad()");
  return 0;
}




undefined8 FUN_00102134(undefined8 *param_1)

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




undefined8 FUN_00101ec3(void)

{
  return 0;
}



