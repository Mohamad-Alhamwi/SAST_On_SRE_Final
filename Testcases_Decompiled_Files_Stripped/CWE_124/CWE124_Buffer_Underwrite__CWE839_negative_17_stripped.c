
void FUN_00101c63(void)

{
  return;
}




void FUN_001018e2(undefined8 param_1)

{
  printf("%g\n",param_1);
  return;
}




void FUN_001016d9(long param_1)

{
  if (param_1 != 0) {
    wprintf(L"%ls\n",param_1);
  }
  return;
}




/* WARNING: Removing unreachable block (ram,0x00101303) */
/* WARNING: Removing unreachable block (ram,0x0010130f) */

void FUN_001012f0(void)

{
  return;
}




void FUN_0010170b(uint param_1)

{
  printf("%d\n",(ulong)param_1);
  return;
}




void FUN_001013a9(void)

{
  long in_FS_OFFSET;
  int aiStack_4c [15];
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  aiStack_4c[3] = -1;
  for (aiStack_4c[1] = 0; aiStack_4c[1] < 1; aiStack_4c[1] = aiStack_4c[1] + 1) {
    aiStack_4c[3] = -5;
  }
  for (aiStack_4c[2] = 0; aiStack_4c[2] < 1; aiStack_4c[2] = aiStack_4c[2] + 1) {
    aiStack_4c[5] = 0;
    aiStack_4c[6] = 0;
    aiStack_4c[7] = 0;
    aiStack_4c[8] = 0;
    aiStack_4c[9] = 0;
    aiStack_4c[10] = 0;
    aiStack_4c[0xb] = 0;
    aiStack_4c[0xc] = 0;
    aiStack_4c[0xd] = 0;
    aiStack_4c[0xe] = 0;
    if (aiStack_4c[3] < 10) {
      aiStack_4c[(long)aiStack_4c[3] + 5] = 1;
      for (aiStack_4c[4] = 0; aiStack_4c[4] < 10; aiStack_4c[4] = aiStack_4c[4] + 1) {
        FUN_0010170b(aiStack_4c[(long)aiStack_4c[4] + 5]);
      }
    }
    else {
      FUN_001016b3("ERROR: Array index is negative.");
    }
  }
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00101e7f(pthread_mutex_t *param_1)

{
  pthread_mutex_lock(param_1);
  return;
}




void FUN_00101c2c(void)

{
  return;
}




void FUN_001017df(undefined8 param_1)

{
  printf("%zu\n",param_1);
  return;
}




void FUN_00101c58(void)

{
  return;
}




void _FINI_0(void)

{
  if (DAT_00104018 == '\0') {
    if (PTR___cxa_finalize_00103ff8 != (undefined *)0x0) {
      FUN_00101170(PTR_LOOP_00104008);
    }
    FUN_001012f0();
    DAT_00104018 = 1;
    return;
  }
  return;
}




void FUN_00101020(void)

{
  (*(code *)PTR_00103f30)();
  return;
}




void FUN_00101ebd(pthread_mutex_t *param_1)

{
  pthread_mutex_destroy(param_1);
  free(param_1);
  return;
}




void FUN_00101e9e(pthread_mutex_t *param_1)

{
  pthread_mutex_unlock(param_1);
  return;
}




void FUN_00101bea(void)

{
  return;
}




void FUN_0010175f(float param_1)

{
  printf("%f\n",(double)param_1);
  return;
}




void FUN_00101c16(void)

{
  return;
}




void FUN_00101c6e(void)

{
  return;
}




undefined8 FUN_00101644(void)

{
  time_t tVar1;
  
  tVar1 = time((time_t *)0x0);
  srand((uint)tVar1);
  FUN_001016b3("Calling good()...");
  FUN_00101625();
  FUN_001016b3("Finished good()");
  FUN_001016b3("Calling bad()...");
  FUN_001013a9();
  FUN_001016b3("Finished bad()");
  return 0;
}




void FUN_00101bbe(void)

{
  return;
}




void FUN_00101625(void)

{
  FUN_0010147b();
  FUN_00101553();
  return;
}




void FUN_00101bc9(void)

{
  return;
}




void FUN_00101ef0(undefined4 param_1,undefined8 param_2,undefined8 param_3)

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




int FUN_00101ba4(void)

{
  int iVar1;
  
  iVar1 = rand();
  return iVar1 % 2;
}




void FUN_00101553(void)

{
  long in_FS_OFFSET;
  int local_48;
  int local_44;
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
  for (local_48 = 0; local_48 < 1; local_48 = local_48 + 1) {
    local_40 = 7;
  }
  for (local_44 = 0; local_44 < 1; local_44 = local_44 + 1) {
    local_38 = 0;
    local_30 = 0;
    local_28 = 0;
    local_20 = 0;
    local_18 = 0;
    if (local_40 < 10) {
      *(undefined4 *)((long)&local_38 + (long)local_40 * 4) = 1;
      for (local_3c = 0; local_3c < 10; local_3c = local_3c + 1) {
        FUN_0010170b(*(undefined4 *)((long)&local_38 + (long)local_3c * 4));
      }
    }
    else {
      FUN_001016b3("ERROR: Array index is negative.");
    }
  }
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




undefined8 FUN_00101e06(undefined8 *param_1)

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




void FUN_00101bf5(void)

{
  return;
}




bool FUN_00101d88(pthread_t *param_1)

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




void FUN_001017b4(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




undefined8 FUN_00101cbb(pthread_t param_1,pthread_t param_2,undefined8 *param_3)

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
    iVar1 = pthread_create(&local_20,(pthread_attr_t *)0x0,FUN_00101c84,local_18);
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




ulong FUN_00101aa7(long param_1,ulong param_2,long param_3)

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




void FUN_00101c00(void)

{
  return;
}




void FUN_00101835(undefined4 param_1)

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




void FUN_00101f60(void)

{
  return;
}




void FUN_0010188f(uint param_1)

{
  printf("%u\n",(ulong)param_1);
  return;
}




void FUN_001018b7(byte param_1)

{
  printf("%02x\n",(ulong)param_1);
  return;
}




void FUN_00101910(uint *param_1)

{
  printf("%d -- %d\n",(ulong)*param_1,(ulong)param_1[1]);
  return;
}




void FUN_00101bdf(void)

{
  return;
}




ulong FUN_001019a3(long param_1,ulong param_2,long param_3)

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




void FUN_00101c0b(void)

{
  return;
}




void FUN_00101c21(void)

{
  return;
}




void FUN_00101943(long param_1,ulong param_2)

{
  ulong local_10;
  
  for (local_10 = 0; local_10 < param_2; local_10 = local_10 + 1) {
    printf("%02x",(ulong)*(byte *)(local_10 + param_1));
  }
  puts("");
  return;
}




void FUN_00101c84(long param_1)

{
  (**(code **)(param_1 + 8))(*(undefined8 *)(param_1 + 0x10));
                    /* WARNING: Subroutine does not return */
  pthread_exit((void *)0x0);
}




undefined8 FUN_00101de3(void *param_1)

{
  free(param_1);
  return 1;
}




/* WARNING: Removing unreachable block (ram,0x00101344) */
/* WARNING: Removing unreachable block (ram,0x00101350) */

void FUN_00101320(void)

{
  return;
}




void FUN_001016b3(char *param_1)

{
  if (param_1 != (char *)0x0) {
    puts(param_1);
  }
  return;
}




undefined8 FUN_00101b95(void)

{
  return 0;
}




void FUN_00101170(void)

{
  (*(code *)PTR___cxa_finalize_00103ff8)();
  return;
}




undefined8 FUN_00101b86(void)

{
  return 1;
}




void FUN_00101bd4(void)

{
  return;
}




void FUN_00101789(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




void FUN_0010180a(char param_1)

{
  printf("%02x\n",(ulong)(uint)(int)param_1);
  return;
}




void FUN_00101c42(void)

{
  return;
}




void FUN_00101733(short param_1)

{
  printf("%hd\n",(ulong)(uint)(int)param_1);
  return;
}




void FUN_00101c79(void)

{
  return;
}




void FUN_0010147b(void)

{
  long in_FS_OFFSET;
  int aiStack_4c [15];
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  aiStack_4c[3] = -1;
  for (aiStack_4c[1] = 0; aiStack_4c[1] < 1; aiStack_4c[1] = aiStack_4c[1] + 1) {
    aiStack_4c[3] = -5;
  }
  for (aiStack_4c[2] = 0; aiStack_4c[2] < 1; aiStack_4c[2] = aiStack_4c[2] + 1) {
    aiStack_4c[5] = 0;
    aiStack_4c[6] = 0;
    aiStack_4c[7] = 0;
    aiStack_4c[8] = 0;
    aiStack_4c[9] = 0;
    aiStack_4c[10] = 0;
    aiStack_4c[0xb] = 0;
    aiStack_4c[0xc] = 0;
    aiStack_4c[0xd] = 0;
    aiStack_4c[0xe] = 0;
    if ((aiStack_4c[3] < 0) || (9 < aiStack_4c[3])) {
      FUN_001016b3("ERROR: Array index is out-of-bounds");
    }
    else {
      aiStack_4c[(long)aiStack_4c[3] + 5] = 1;
      for (aiStack_4c[4] = 0; aiStack_4c[4] < 10; aiStack_4c[4] = aiStack_4c[4] + 1) {
        FUN_0010170b(aiStack_4c[(long)aiStack_4c[4] + 5]);
      }
    }
  }
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00101c37(void)

{
  return;
}




void FUN_00101c4d(void)

{
  return;
}



