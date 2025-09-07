
void FUN_00101cb0(uint param_1)

{
  printf("%u\n",(ulong)param_1);
  return;
}




void FUN_00102000(void)

{
  return;
}




void FUN_00102016(void)

{
  return;
}




void FUN_00102021(void)

{
  return;
}




void FUN_00101429(void)

{
  int iVar1;
  char *pcVar2;
  void *pvVar3;
  long in_FS_OFFSET;
  int local_3c;
  int local_38;
  int local_34;
  char local_1e [14];
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_3c = -1;
  iVar1 = FUN_00101fc5();
  if (iVar1 == 0) {
    local_3c = 7;
  }
  else {
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
      FUN_00101ad4("fgets() failed.");
    }
    else {
      local_3c = atoi(local_1e);
    }
  }
  iVar1 = FUN_00101fc5();
  if (iVar1 == 0) {
    pvVar3 = operator_new__(0x28);
    for (local_34 = 0; local_34 < 10; local_34 = local_34 + 1) {
      *(undefined4 *)((long)pvVar3 + (long)local_34 * 4) = 0;
    }
    if ((local_3c < 0) || (9 < local_3c)) {
      FUN_00101ad4("ERROR: Array index is out-of-bounds");
    }
    else {
      *(undefined4 *)((long)pvVar3 + (long)local_3c * 4) = 1;
      for (local_34 = 0; local_34 < 10; local_34 = local_34 + 1) {
        FUN_00101b2c(*(undefined4 *)((long)pvVar3 + (long)local_34 * 4));
      }
    }
    if (pvVar3 != (void *)0x0) {
      operator_delete__(pvVar3);
    }
  }
  else {
    pvVar3 = operator_new__(0x28);
    for (local_38 = 0; local_38 < 10; local_38 = local_38 + 1) {
      *(undefined4 *)((long)pvVar3 + (long)local_38 * 4) = 0;
    }
    if (local_3c < 0) {
      FUN_00101ad4("ERROR: Array index is negative.");
    }
    else {
      *(undefined4 *)((long)pvVar3 + (long)local_3c * 4) = 1;
      for (local_38 = 0; local_38 < 10; local_38 = local_38 + 1) {
        FUN_00101b2c(*(undefined4 *)((long)pvVar3 + (long)local_38 * 4));
      }
    }
    if (pvVar3 != (void *)0x0) {
      operator_delete__(pvVar3);
    }
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




/* WARNING: Removing unreachable block (ram,0x00101985) */
/* WARNING: Removing unreachable block (ram,0x00101a38) */

void FUN_001018b7(void)

{
  int iVar1;
  void *pvVar2;
  int local_20;
  int local_1c;
  
  FUN_00101fc5();
  iVar1 = FUN_00101fc5();
  if (iVar1 == 0) {
    pvVar2 = operator_new__(0x28);
    for (local_1c = 0; local_1c < 10; local_1c = local_1c + 1) {
      *(undefined4 *)((long)pvVar2 + (long)local_1c * 4) = 0;
    }
    *(undefined4 *)((long)pvVar2 + 0x1c) = 1;
    for (local_1c = 0; local_1c < 10; local_1c = local_1c + 1) {
      FUN_00101b2c(*(undefined4 *)((long)pvVar2 + (long)local_1c * 4));
    }
    if (pvVar2 != (void *)0x0) {
      operator_delete__(pvVar2);
    }
  }
  else {
    pvVar2 = operator_new__(0x28);
    for (local_20 = 0; local_20 < 10; local_20 = local_20 + 1) {
      *(undefined4 *)((long)pvVar2 + (long)local_20 * 4) = 0;
    }
    *(undefined4 *)((long)pvVar2 + 0x1c) = 1;
    for (local_20 = 0; local_20 < 10; local_20 = local_20 + 1) {
      FUN_00101b2c(*(undefined4 *)((long)pvVar2 + (long)local_20 * 4));
    }
    if (pvVar2 != (void *)0x0) {
      operator_delete__(pvVar2);
    }
  }
  return;
}




void FUN_00102084(void)

{
  return;
}




void FUN_00102310(undefined4 param_1,undefined8 param_2,undefined8 param_3)

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




void FUN_0010206e(void)

{
  return;
}




undefined8 FUN_00101fa7(void)

{
  return 1;
}




/* WARNING: Removing unreachable block (ram,0x00101383) */
/* WARNING: Removing unreachable block (ram,0x0010138f) */

void FUN_00101370(void)

{
  return;
}




void FUN_00101afa(long param_1)

{
  if (param_1 != 0) {
    wprintf(L"%ls\n",param_1);
  }
  return;
}




void FUN_00101cd8(byte param_1)

{
  printf("%02x\n",(ulong)param_1);
  return;
}




int FUN_00101fc5(void)

{
  int iVar1;
  
  iVar1 = rand();
  return iVar1 % 2;
}




void FUN_00102079(void)

{
  return;
}




void FUN_00101d64(long param_1,ulong param_2)

{
  ulong local_10;
  
  for (local_10 = 0; local_10 < param_2; local_10 = local_10 + 1) {
    printf("%02x",(ulong)*(byte *)(local_10 + param_1));
  }
  puts("");
  return;
}




void FUN_00102037(void)

{
  return;
}




void FUN_00101baa(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




void FUN_001022de(pthread_mutex_t *param_1)

{
  pthread_mutex_destroy(param_1);
  free(param_1);
  return;
}




void FUN_00101020(void)

{
  (*(code *)PTR_00104f10)();
  return;
}




void FUN_00101fdf(void)

{
  return;
}




void FUN_00101b2c(uint param_1)

{
  printf("%d\n",(ulong)param_1);
  return;
}




void FUN_00101ad4(char *param_1)

{
  if (param_1 != (char *)0x0) {
    puts(param_1);
  }
  return;
}




void FUN_001020a5(long param_1)

{
  (**(code **)(param_1 + 8))(*(undefined8 *)(param_1 + 0x10));
                    /* WARNING: Subroutine does not return */
  pthread_exit((void *)0x0);
}




void FUN_00101a5a(void)

{
  FUN_00101645();
  FUN_001018b7();
  return;
}




void FUN_0010202c(void)

{
  return;
}




void FUN_0010209a(void)

{
  return;
}




/* WARNING: Removing unreachable block (ram,0x001013c4) */
/* WARNING: Removing unreachable block (ram,0x001013d0) */

void FUN_001013a0(void)

{
  return;
}




void FUN_00101b80(float param_1)

{
  printf("%f\n",(double)param_1);
  return;
}




void FUN_00101fea(void)

{
  return;
}




void FUN_0010200b(void)

{
  return;
}




void FUN_00101645(void)

{
  int iVar1;
  char *pcVar2;
  void *pvVar3;
  long in_FS_OFFSET;
  int local_3c;
  int local_38;
  int local_34;
  char local_1e [14];
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_3c = -1;
  iVar1 = FUN_00101fc5();
  if (iVar1 == 0) {
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
      FUN_00101ad4("fgets() failed.");
    }
    else {
      local_3c = atoi(local_1e);
    }
  }
  else {
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
      FUN_00101ad4("fgets() failed.");
    }
    else {
      local_3c = atoi(local_1e);
    }
  }
  iVar1 = FUN_00101fc5();
  if (iVar1 == 0) {
    pvVar3 = operator_new__(0x28);
    for (local_34 = 0; local_34 < 10; local_34 = local_34 + 1) {
      *(undefined4 *)((long)pvVar3 + (long)local_34 * 4) = 0;
    }
    if ((local_3c < 0) || (9 < local_3c)) {
      FUN_00101ad4("ERROR: Array index is out-of-bounds");
    }
    else {
      *(undefined4 *)((long)pvVar3 + (long)local_3c * 4) = 1;
      for (local_34 = 0; local_34 < 10; local_34 = local_34 + 1) {
        FUN_00101b2c(*(undefined4 *)((long)pvVar3 + (long)local_34 * 4));
      }
    }
    if (pvVar3 != (void *)0x0) {
      operator_delete__(pvVar3);
    }
  }
  else {
    pvVar3 = operator_new__(0x28);
    for (local_38 = 0; local_38 < 10; local_38 = local_38 + 1) {
      *(undefined4 *)((long)pvVar3 + (long)local_38 * 4) = 0;
    }
    if ((local_3c < 0) || (9 < local_3c)) {
      FUN_00101ad4("ERROR: Array index is out-of-bounds");
    }
    else {
      *(undefined4 *)((long)pvVar3 + (long)local_3c * 4) = 1;
      for (local_38 = 0; local_38 < 10; local_38 = local_38 + 1) {
        FUN_00101b2c(*(undefined4 *)((long)pvVar3 + (long)local_38 * 4));
      }
    }
    if (pvVar3 != (void *)0x0) {
      operator_delete__(pvVar3);
    }
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00101c2b(char param_1)

{
  printf("%02x\n",(ulong)(uint)(int)param_1);
  return;
}




void FUN_00101d31(uint *param_1)

{
  printf("%d -- %d\n",(ulong)*param_1,(ulong)param_1[1]);
  return;
}




void _FINI_0(void)

{
  if (DAT_00105028 == '\0') {
    if (PTR___cxa_finalize_00104fd8 != (undefined *)0x0) {
      __cxa_finalize(PTR_LOOP_00105008);
    }
    FUN_00101370();
    DAT_00105028 = 1;
    return;
  }
  return;
}




void FUN_001022bf(pthread_mutex_t *param_1)

{
  pthread_mutex_unlock(param_1);
  return;
}




void FUN_00101ff5(void)

{
  return;
}




void FUN_00102063(void)

{
  return;
}




void FUN_001022a0(pthread_mutex_t *param_1)

{
  pthread_mutex_lock(param_1);
  return;
}




void FUN_00102380(void)

{
  return;
}




void FUN_00102042(void)

{
  return;
}




void FUN_00101bd5(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




void FUN_00101c56(undefined4 param_1)

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




ulong FUN_00101ec8(long param_1,ulong param_2,long param_3)

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
    __isoc99_swscanf(local_18 * 8 + param_3,&DAT_001030f0,local_1c);
    *(char *)(local_18 + param_1) = local_1c[0];
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_0010204d(void)

{
  return;
}




void FUN_00102058(void)

{
  return;
}




void FUN_0010208f(void)

{
  return;
}




ulong FUN_00101dc4(long param_1,ulong param_2,long param_3)

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
    __isoc99_sscanf(local_18 * 2 + param_3,&DAT_001030e8,local_1c);
    *(char *)(local_18 + param_1) = local_1c[0];
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




undefined8 FUN_001020dc(pthread_t param_1,pthread_t param_2,undefined8 *param_3)

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
    iVar1 = pthread_create(&local_20,(pthread_attr_t *)0x0,FUN_001020a5,local_18);
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




bool FUN_001021a9(pthread_t *param_1)

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




void FUN_00101d03(undefined8 param_1)

{
  printf("%g\n",param_1);
  return;
}




void FUN_00101b54(short param_1)

{
  printf("%hd\n",(ulong)(uint)(int)param_1);
  return;
}




void FUN_00101c00(undefined8 param_1)

{
  printf("%zu\n",param_1);
  return;
}




undefined8 FUN_00102204(void *param_1)

{
  free(param_1);
  return 1;
}




undefined8 FUN_00101a6f(void)

{
  time_t tVar1;
  
  tVar1 = time((time_t *)0x0);
  srand((uint)tVar1);
  FUN_00101ad4("Calling good()...");
  FUN_00101a5a();
  FUN_00101ad4("Finished good()");
  FUN_00101ad4("Calling bad()...");
  FUN_00101429();
  FUN_00101ad4("Finished bad()");
  return 0;
}




undefined8 FUN_00102227(undefined8 *param_1)

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




undefined8 FUN_00101fb6(void)

{
  return 0;
}



