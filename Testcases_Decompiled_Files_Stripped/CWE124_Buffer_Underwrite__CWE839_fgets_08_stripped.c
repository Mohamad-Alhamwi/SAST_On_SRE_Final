
undefined8 FUN_001013f8(void)

{
  return 0;
}




void FUN_00101eb6(void)

{
  return;
}




void _FINI_0(void)

{
  if (DAT_00105028 == '\0') {
    if (PTR___cxa_finalize_00104ff8 != (undefined *)0x0) {
      FUN_00101190(PTR_LOOP_00105008);
    }
    FUN_00101330();
    DAT_00105028 = 1;
    return;
  }
  return;
}




void FUN_00101517(void)

{
  int iVar1;
  char *pcVar2;
  long in_FS_OFFSET;
  int local_50;
  int local_4c;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  char local_1e [14];
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_50 = -1;
  iVar1 = FUN_001013e9();
  if (iVar1 != 0) {
    local_1e[0] = '\0';
    local_1e[1] = '\0';
    local_1e[2] = '\0';
    local_1e[3] = '\0';
    local_1e[4] = '\0';
    local_1e[5] = '\0';
    local_1e[6] = '\0';
    local_1e[7] = '\0';
    local_1e[8] = '\0';
    local_1e[9] = '\0';
    local_1e[10] = '\0';
    local_1e[0xb] = '\0';
    local_1e[0xc] = '\0';
    local_1e[0xd] = '\0';
    pcVar2 = fgets(local_1e,0xe,stdin);
    if (pcVar2 == (char *)0x0) {
      FUN_00101995("fgets() failed.");
    }
    else {
      local_50 = atoi(local_1e);
    }
  }
  iVar1 = FUN_001013f8();
  if (iVar1 == 0) {
    local_48 = 0;
    local_40 = 0;
    local_38 = 0;
    local_30 = 0;
    local_28 = 0;
    if ((local_50 < 0) || (9 < local_50)) {
      FUN_00101995("ERROR: Array index is out-of-bounds");
    }
    else {
      *(undefined4 *)((long)&local_48 + (long)local_50 * 4) = 1;
      for (local_4c = 0; local_4c < 10; local_4c = local_4c + 1) {
        FUN_001019ed(*(undefined4 *)((long)&local_48 + (long)local_4c * 4));
      }
    }
  }
  else {
    FUN_00101995("Benign, fixed string");
  }
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00101ed7(void)

{
  return;
}




undefined8 FUN_001020c5(void *param_1)

{
  free(param_1);
  return 1;
}




void FUN_00101f24(void)

{
  return;
}




void FUN_00101a6b(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




void FUN_00101f5b(void)

{
  return;
}




void FUN_00101bc4(undefined8 param_1)

{
  printf("%g\n",param_1);
  return;
}




void FUN_00101f03(void)

{
  return;
}




void FUN_00101020(void)

{
  (*(code *)PTR_00104f20)();
  return;
}




void FUN_00101c25(long param_1,ulong param_2)

{
  ulong local_10;
  
  for (local_10 = 0; local_10 < param_2; local_10 = local_10 + 1) {
    printf("%02x",(ulong)*(byte *)(local_10 + param_1));
  }
  puts("");
  return;
}




void FUN_001018f3(void)

{
  FUN_00101517();
  FUN_0010163d();
  FUN_00101755();
  FUN_0010182b();
  return;
}




void FUN_00101f50(void)

{
  return;
}




undefined8 FUN_00101926(void)

{
  time_t tVar1;
  
  tVar1 = time((time_t *)0x0);
  srand((uint)tVar1);
  FUN_00101995("Calling good()...");
  FUN_001018f3();
  FUN_00101995("Finished good()");
  FUN_00101995("Calling bad()...");
  FUN_00101407();
  FUN_00101995("Finished bad()");
  return 0;
}




void FUN_00101755(void)

{
  int iVar1;
  long in_FS_OFFSET;
  int local_40;
  int local_3c;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_40 = -1;
  iVar1 = FUN_001013f8();
  if (iVar1 == 0) {
    local_40 = 7;
  }
  else {
    FUN_00101995("Benign, fixed string");
  }
  iVar1 = FUN_001013e9();
  if (iVar1 != 0) {
    local_38 = 0;
    local_30 = 0;
    local_28 = 0;
    local_20 = 0;
    local_18 = 0;
    if (local_40 < 10) {
      *(undefined4 *)((long)&local_38 + (long)local_40 * 4) = 1;
      for (local_3c = 0; local_3c < 10; local_3c = local_3c + 1) {
        FUN_001019ed(*(undefined4 *)((long)&local_38 + (long)local_3c * 4));
      }
    }
    else {
      FUN_00101995("ERROR: Array index is negative.");
    }
  }
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00101ee2(void)

{
  return;
}




void FUN_00101b17(undefined4 param_1)

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




void FUN_00101ef8(void)

{
  return;
}




undefined8 FUN_001020e8(undefined8 *param_1)

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




void FUN_001021d0(undefined4 param_1,undefined8 param_2,undefined8 param_3)

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




void FUN_00101407(void)

{
  int iVar1;
  char *pcVar2;
  long in_FS_OFFSET;
  int local_50;
  int local_4c;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  char local_1e [14];
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_50 = -1;
  iVar1 = FUN_001013e9();
  if (iVar1 != 0) {
    local_1e[0] = '\0';
    local_1e[1] = '\0';
    local_1e[2] = '\0';
    local_1e[3] = '\0';
    local_1e[4] = '\0';
    local_1e[5] = '\0';
    local_1e[6] = '\0';
    local_1e[7] = '\0';
    local_1e[8] = '\0';
    local_1e[9] = '\0';
    local_1e[10] = '\0';
    local_1e[0xb] = '\0';
    local_1e[0xc] = '\0';
    local_1e[0xd] = '\0';
    pcVar2 = fgets(local_1e,0xe,stdin);
    if (pcVar2 == (char *)0x0) {
      FUN_00101995("fgets() failed.");
    }
    else {
      local_50 = atoi(local_1e);
    }
  }
  iVar1 = FUN_001013e9();
  if (iVar1 != 0) {
    local_48 = 0;
    local_40 = 0;
    local_38 = 0;
    local_30 = 0;
    local_28 = 0;
    if (local_50 < 10) {
      *(undefined4 *)((long)&local_48 + (long)local_50 * 4) = 1;
      for (local_4c = 0; local_4c < 10; local_4c = local_4c + 1) {
        FUN_001019ed(*(undefined4 *)((long)&local_48 + (long)local_4c * 4));
      }
    }
    else {
      FUN_00101995("ERROR: Array index is negative.");
    }
  }
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00101f3a(void)

{
  return;
}




void FUN_00101f66(long param_1)

{
  (**(code **)(param_1 + 8))(*(undefined8 *)(param_1 + 0x10));
                    /* WARNING: Subroutine does not return */
  pthread_exit((void *)0x0);
}




bool FUN_0010206a(pthread_t *param_1)

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




ulong FUN_00101c85(long param_1,ulong param_2,long param_3)

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
    __isoc99_sscanf(local_18 * 2 + param_3,&DAT_00103100,local_1c);
    *(char *)(local_18 + param_1) = local_1c[0];
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00101a96(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




void FUN_001019bb(long param_1)

{
  if (param_1 != 0) {
    wprintf(L"%ls\n",param_1);
  }
  return;
}




void FUN_00101190(void)

{
  (*(code *)PTR___cxa_finalize_00104ff8)();
  return;
}




/* WARNING: Removing unreachable block (ram,0x00101343) */
/* WARNING: Removing unreachable block (ram,0x0010134f) */

void FUN_00101330(void)

{
  return;
}




void FUN_00101eed(void)

{
  return;
}




undefined8 FUN_00101e68(void)

{
  return 1;
}




void FUN_0010182b(void)

{
  int iVar1;
  long in_FS_OFFSET;
  int local_40;
  int local_3c;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_40 = -1;
  iVar1 = FUN_001013e9();
  if (iVar1 != 0) {
    local_40 = 7;
  }
  iVar1 = FUN_001013e9();
  if (iVar1 != 0) {
    local_38 = 0;
    local_30 = 0;
    local_28 = 0;
    local_20 = 0;
    local_18 = 0;
    if (local_40 < 10) {
      *(undefined4 *)((long)&local_38 + (long)local_40 * 4) = 1;
      for (local_3c = 0; local_3c < 10; local_3c = local_3c + 1) {
        FUN_001019ed(*(undefined4 *)((long)&local_38 + (long)local_3c * 4));
      }
    }
    else {
      FUN_00101995("ERROR: Array index is negative.");
    }
  }
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00101ea0(void)

{
  return;
}




void FUN_00101f0e(void)

{
  return;
}




void FUN_0010163d(void)

{
  int iVar1;
  char *pcVar2;
  long in_FS_OFFSET;
  int local_50;
  int local_4c;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  char local_1e [14];
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_50 = -1;
  iVar1 = FUN_001013e9();
  if (iVar1 != 0) {
    local_1e[0] = '\0';
    local_1e[1] = '\0';
    local_1e[2] = '\0';
    local_1e[3] = '\0';
    local_1e[4] = '\0';
    local_1e[5] = '\0';
    local_1e[6] = '\0';
    local_1e[7] = '\0';
    local_1e[8] = '\0';
    local_1e[9] = '\0';
    local_1e[10] = '\0';
    local_1e[0xb] = '\0';
    local_1e[0xc] = '\0';
    local_1e[0xd] = '\0';
    pcVar2 = fgets(local_1e,0xe,stdin);
    if (pcVar2 == (char *)0x0) {
      FUN_00101995("fgets() failed.");
    }
    else {
      local_50 = atoi(local_1e);
    }
  }
  iVar1 = FUN_001013e9();
  if (iVar1 != 0) {
    local_48 = 0;
    local_40 = 0;
    local_38 = 0;
    local_30 = 0;
    local_28 = 0;
    if ((local_50 < 0) || (9 < local_50)) {
      FUN_00101995("ERROR: Array index is out-of-bounds");
    }
    else {
      *(undefined4 *)((long)&local_48 + (long)local_50 * 4) = 1;
      for (local_4c = 0; local_4c < 10; local_4c = local_4c + 1) {
        FUN_001019ed(*(undefined4 *)((long)&local_48 + (long)local_4c * 4));
      }
    }
  }
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




undefined8 FUN_00101e77(void)

{
  return 0;
}




void FUN_00101ec1(void)

{
  return;
}




void FUN_00101ac1(undefined8 param_1)

{
  printf("%zu\n",param_1);
  return;
}




void FUN_00101b71(uint param_1)

{
  printf("%u\n",(ulong)param_1);
  return;
}




void FUN_00101f2f(void)

{
  return;
}




void FUN_00102240(void)

{
  return;
}




void FUN_0010219f(pthread_mutex_t *param_1)

{
  pthread_mutex_destroy(param_1);
  free(param_1);
  return;
}




void FUN_00101a41(float param_1)

{
  printf("%f\n",(double)param_1);
  return;
}




void FUN_00101ecc(void)

{
  return;
}




undefined8 FUN_001013e9(void)

{
  return 1;
}




void FUN_00101b99(byte param_1)

{
  printf("%02x\n",(ulong)param_1);
  return;
}




ulong FUN_00101d89(long param_1,ulong param_2,long param_3)

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
    __isoc99_swscanf(local_18 * 8 + param_3,&DAT_00103108,local_1c);
    *(char *)(local_18 + param_1) = local_1c[0];
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00101eab(void)

{
  return;
}




void FUN_00101a15(short param_1)

{
  printf("%hd\n",(ulong)(uint)(int)param_1);
  return;
}




undefined8 FUN_00101f9d(pthread_t param_1,pthread_t param_2,undefined8 *param_3)

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
    iVar1 = pthread_create(&local_20,(pthread_attr_t *)0x0,FUN_00101f66,local_18);
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




/* WARNING: Removing unreachable block (ram,0x00101384) */
/* WARNING: Removing unreachable block (ram,0x00101390) */

void FUN_00101360(void)

{
  return;
}




void FUN_00102180(pthread_mutex_t *param_1)

{
  pthread_mutex_unlock(param_1);
  return;
}




void FUN_00102161(pthread_mutex_t *param_1)

{
  pthread_mutex_lock(param_1);
  return;
}




void FUN_00101f45(void)

{
  return;
}




void FUN_00101f19(void)

{
  return;
}




void FUN_00101aec(char param_1)

{
  printf("%02x\n",(ulong)(uint)(int)param_1);
  return;
}




void FUN_00101bf2(uint *param_1)

{
  printf("%d -- %d\n",(ulong)*param_1,(ulong)param_1[1]);
  return;
}




int FUN_00101e86(void)

{
  int iVar1;
  
  iVar1 = rand();
  return iVar1 % 2;
}




void FUN_001019ed(uint param_1)

{
  printf("%d\n",(ulong)param_1);
  return;
}




void FUN_00101995(char *param_1)

{
  if (param_1 != (char *)0x0) {
    puts(param_1);
  }
  return;
}



