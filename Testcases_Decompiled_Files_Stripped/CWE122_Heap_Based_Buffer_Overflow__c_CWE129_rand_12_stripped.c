
void FUN_00101f8c(void)

{
  return;
}




void FUN_00101a60(char *param_1)

{
  if (param_1 != (char *)0x0) {
    puts(param_1);
  }
  return;
}




void FUN_00101fe4(void)

{
  return;
}




void FUN_00102310(void)

{
  return;
}




undefined8 FUN_00101f42(void)

{
  return 0;
}




void FUN_001013c9(void)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  void *pvVar4;
  uint local_34;
  int local_30;
  int local_2c;
  
  iVar1 = FUN_00101f51();
  if (iVar1 == 0) {
    local_34 = 7;
  }
  else {
    uVar2 = rand();
    if ((uVar2 & 1) == 0) {
      iVar1 = rand();
      iVar3 = rand();
      uVar2 = rand();
      local_34 = ~(uVar2 ^ iVar1 << 0x1e ^ iVar3 << 0xf);
    }
    else {
      iVar1 = rand();
      iVar3 = rand();
      local_34 = rand();
      local_34 = local_34 ^ iVar1 << 0x1e ^ iVar3 << 0xf;
    }
  }
  iVar1 = FUN_00101f51();
  if (iVar1 == 0) {
    pvVar4 = malloc(0x28);
    if (pvVar4 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    for (local_2c = 0; local_2c < 10; local_2c = local_2c + 1) {
      *(undefined4 *)((long)pvVar4 + (long)local_2c * 4) = 0;
    }
    if (((int)local_34 < 0) || (9 < (int)local_34)) {
      FUN_00101a60("ERROR: Array index is out-of-bounds");
    }
    else {
      *(undefined4 *)((long)pvVar4 + (long)(int)local_34 * 4) = 1;
      for (local_2c = 0; local_2c < 10; local_2c = local_2c + 1) {
        FUN_00101ab8(*(undefined4 *)((long)pvVar4 + (long)local_2c * 4));
      }
    }
    free(pvVar4);
  }
  else {
    pvVar4 = malloc(0x28);
    if (pvVar4 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    for (local_30 = 0; local_30 < 10; local_30 = local_30 + 1) {
      *(undefined4 *)((long)pvVar4 + (long)local_30 * 4) = 0;
    }
    if ((int)local_34 < 0) {
      FUN_00101a60("ERROR: Array index is negative.");
    }
    else {
      *(undefined4 *)((long)pvVar4 + (long)(int)local_34 * 4) = 1;
      for (local_30 = 0; local_30 < 10; local_30 = local_30 + 1) {
        FUN_00101ab8(*(undefined4 *)((long)pvVar4 + (long)local_30 * 4));
      }
    }
    free(pvVar4);
  }
  return;
}




void FUN_00101f81(void)

{
  return;
}




void FUN_00101ffa(void)

{
  return;
}




void FUN_00101fef(void)

{
  return;
}




void FUN_00101c8f(undefined8 param_1)

{
  printf("%g\n",param_1);
  return;
}




void FUN_00101020(void)

{
  (*(code *)PTR_00104f28)();
  return;
}




ulong FUN_00101e54(long param_1,ulong param_2,long param_3)

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




void FUN_00101f97(void)

{
  return;
}




void FUN_00102026(void)

{
  return;
}




void FUN_0010222c(pthread_mutex_t *param_1)

{
  pthread_mutex_lock(param_1);
  return;
}




void _FINI_0(void)

{
  if (DAT_00105018 == '\0') {
    if (PTR___cxa_finalize_00104ff8 != (undefined *)0x0) {
      FUN_00101180(PTR_LOOP_00105008);
    }
    FUN_00101310();
    DAT_00105018 = 1;
    return;
  }
  return;
}




void FUN_0010226a(pthread_mutex_t *param_1)

{
  pthread_mutex_destroy(param_1);
  free(param_1);
  return;
}




bool FUN_00102135(pthread_t *param_1)

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




void FUN_00101bb7(char param_1)

{
  printf("%02x\n",(ulong)(uint)(int)param_1);
  return;
}




/* WARNING: Removing unreachable block (ram,0x00101364) */
/* WARNING: Removing unreachable block (ram,0x00101370) */

void FUN_00101340(void)

{
  return;
}




undefined8 FUN_00102068(pthread_t param_1,pthread_t param_2,undefined8 *param_3)

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
    iVar1 = pthread_create(&local_20,(pthread_attr_t *)0x0,FUN_00102031,local_18);
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




void FUN_00101be2(undefined4 param_1)

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




void FUN_00102005(void)

{
  return;
}




void FUN_00101b8c(undefined8 param_1)

{
  printf("%zu\n",param_1);
  return;
}




void FUN_00101fd9(void)

{
  return;
}




undefined8 FUN_00102190(void *param_1)

{
  free(param_1);
  return 1;
}




void FUN_00101cbd(uint *param_1)

{
  printf("%d -- %d\n",(ulong)*param_1,(ulong)param_1[1]);
  return;
}




void FUN_00101fc3(void)

{
  return;
}




/* WARNING: Removing unreachable block (ram,0x00101323) */
/* WARNING: Removing unreachable block (ram,0x0010132f) */

void FUN_00101310(void)

{
  return;
}




void FUN_00101fb8(void)

{
  return;
}




void FUN_00101b0c(float param_1)

{
  printf("%f\n",(double)param_1);
  return;
}




void FUN_0010224b(pthread_mutex_t *param_1)

{
  pthread_mutex_unlock(param_1);
  return;
}




void FUN_00101cf0(long param_1,ulong param_2)

{
  ulong local_10;
  
  for (local_10 = 0; local_10 < param_2; local_10 = local_10 + 1) {
    printf("%02x",(ulong)*(byte *)(local_10 + param_1));
  }
  puts("");
  return;
}




/* WARNING: Removing unreachable block (ram,0x001018fc) */
/* WARNING: Removing unreachable block (ram,0x001019b7) */

void FUN_0010181b(void)

{
  int iVar1;
  void *pvVar2;
  int local_20;
  int local_1c;
  
  FUN_00101f51();
  iVar1 = FUN_00101f51();
  if (iVar1 == 0) {
    pvVar2 = malloc(0x28);
    if (pvVar2 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    for (local_1c = 0; local_1c < 10; local_1c = local_1c + 1) {
      *(undefined4 *)((long)pvVar2 + (long)local_1c * 4) = 0;
    }
    *(undefined4 *)((long)pvVar2 + 0x1c) = 1;
    for (local_1c = 0; local_1c < 10; local_1c = local_1c + 1) {
      FUN_00101ab8(*(undefined4 *)((long)pvVar2 + (long)local_1c * 4));
    }
    free(pvVar2);
  }
  else {
    pvVar2 = malloc(0x28);
    if (pvVar2 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    for (local_20 = 0; local_20 < 10; local_20 = local_20 + 1) {
      *(undefined4 *)((long)pvVar2 + (long)local_20 * 4) = 0;
    }
    *(undefined4 *)((long)pvVar2 + 0x1c) = 1;
    for (local_20 = 0; local_20 < 10; local_20 = local_20 + 1) {
      FUN_00101ab8(*(undefined4 *)((long)pvVar2 + (long)local_20 * 4));
    }
    free(pvVar2);
  }
  return;
}




void FUN_00102010(void)

{
  return;
}




void FUN_001019d2(void)

{
  FUN_001015ce();
  FUN_0010181b();
  return;
}




undefined8 FUN_001019f1(void)

{
  time_t tVar1;
  
  tVar1 = time((time_t *)0x0);
  srand((uint)tVar1);
  FUN_00101a60("Calling good()...");
  FUN_001019d2();
  FUN_00101a60("Finished good()");
  FUN_00101a60("Calling bad()...");
  FUN_001013c9();
  FUN_00101a60("Finished bad()");
  return 0;
}




void FUN_00101a86(long param_1)

{
  if (param_1 != 0) {
    wprintf(L"%ls\n",param_1);
  }
  return;
}




void FUN_00101c64(byte param_1)

{
  printf("%02x\n",(ulong)param_1);
  return;
}




void FUN_00101ae0(short param_1)

{
  printf("%hd\n",(ulong)(uint)(int)param_1);
  return;
}




ulong FUN_00101d50(long param_1,ulong param_2,long param_3)

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




undefined8 FUN_00101f33(void)

{
  return 1;
}




void FUN_00101ab8(uint param_1)

{
  printf("%d\n",(ulong)param_1);
  return;
}




void FUN_00101fad(void)

{
  return;
}




void FUN_00102031(long param_1)

{
  (**(code **)(param_1 + 8))(*(undefined8 *)(param_1 + 0x10));
                    /* WARNING: Subroutine does not return */
  pthread_exit((void *)0x0);
}




void FUN_00101b61(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




void FUN_00101b36(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




void FUN_00101c3c(uint param_1)

{
  printf("%u\n",(ulong)param_1);
  return;
}




void FUN_00101180(void)

{
  (*(code *)PTR___cxa_finalize_00104ff8)();
  return;
}




void FUN_001015ce(void)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  void *pvVar4;
  uint local_34;
  int local_30;
  int local_2c;
  
  iVar1 = FUN_00101f51();
  if (iVar1 == 0) {
    uVar2 = rand();
    if ((uVar2 & 1) == 0) {
      iVar1 = rand();
      iVar3 = rand();
      uVar2 = rand();
      local_34 = ~(uVar2 ^ iVar1 << 0x1e ^ iVar3 << 0xf);
    }
    else {
      iVar1 = rand();
      iVar3 = rand();
      local_34 = rand();
      local_34 = local_34 ^ iVar1 << 0x1e ^ iVar3 << 0xf;
    }
  }
  else {
    uVar2 = rand();
    if ((uVar2 & 1) == 0) {
      iVar1 = rand();
      iVar3 = rand();
      uVar2 = rand();
      local_34 = ~(uVar2 ^ iVar1 << 0x1e ^ iVar3 << 0xf);
    }
    else {
      iVar1 = rand();
      iVar3 = rand();
      local_34 = rand();
      local_34 = local_34 ^ iVar1 << 0x1e ^ iVar3 << 0xf;
    }
  }
  iVar1 = FUN_00101f51();
  if (iVar1 == 0) {
    pvVar4 = malloc(0x28);
    if (pvVar4 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    for (local_2c = 0; local_2c < 10; local_2c = local_2c + 1) {
      *(undefined4 *)((long)pvVar4 + (long)local_2c * 4) = 0;
    }
    if (((int)local_34 < 0) || (9 < (int)local_34)) {
      FUN_00101a60("ERROR: Array index is out-of-bounds");
    }
    else {
      *(undefined4 *)((long)pvVar4 + (long)(int)local_34 * 4) = 1;
      for (local_2c = 0; local_2c < 10; local_2c = local_2c + 1) {
        FUN_00101ab8(*(undefined4 *)((long)pvVar4 + (long)local_2c * 4));
      }
    }
    free(pvVar4);
  }
  else {
    pvVar4 = malloc(0x28);
    if (pvVar4 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    for (local_30 = 0; local_30 < 10; local_30 = local_30 + 1) {
      *(undefined4 *)((long)pvVar4 + (long)local_30 * 4) = 0;
    }
    if (((int)local_34 < 0) || (9 < (int)local_34)) {
      FUN_00101a60("ERROR: Array index is out-of-bounds");
    }
    else {
      *(undefined4 *)((long)pvVar4 + (long)(int)local_34 * 4) = 1;
      for (local_30 = 0; local_30 < 10; local_30 = local_30 + 1) {
        FUN_00101ab8(*(undefined4 *)((long)pvVar4 + (long)local_30 * 4));
      }
    }
    free(pvVar4);
  }
  return;
}




void FUN_00101f6b(void)

{
  return;
}




void FUN_001022a0(undefined4 param_1,undefined8 param_2,undefined8 param_3)

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




void FUN_0010201b(void)

{
  return;
}




void FUN_00101fa2(void)

{
  return;
}




void FUN_00101fce(void)

{
  return;
}




int FUN_00101f51(void)

{
  int iVar1;
  
  iVar1 = rand();
  return iVar1 % 2;
}




void FUN_00101f76(void)

{
  return;
}




undefined8 FUN_001021b3(undefined8 *param_1)

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



