
void FUN_00101801(uint *param_1)

{
  printf("%d -- %d\n",(ulong)*param_1,(ulong)param_1[1]);
  return;
}




void FUN_001015fc(uint param_1)

{
  printf("%d\n",(ulong)param_1);
  return;
}




ulong FUN_00101998(long param_1,ulong param_2,long param_3)

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
    __isoc99_swscanf(local_18 * 8 + param_3,&DAT_001020d8,local_1c);
    *(char *)(local_18 + param_1) = local_1c[0];
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00101afc(void)

{
  return;
}




void FUN_00101b28(void)

{
  return;
}




int FUN_00101a95(void)

{
  int iVar1;
  
  iVar1 = rand();
  return iVar1 % 2;
}




void FUN_001017a8(byte param_1)

{
  printf("%02x\n",(ulong)param_1);
  return;
}




void FUN_00101492(void)

{
  char *pcVar1;
  long in_FS_OFFSET;
  int local_2c;
  char local_1a [9];
  undefined local_11;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  for (local_2c = 0; local_2c < 1; local_2c = local_2c + 1) {
    pcVar1 = fgets(local_1a,10,stdin);
    if (pcVar1 == (char *)0x0) {
      FUN_001015a4("Error Condition: alter control flow to indicate action taken");
                    /* WARNING: Subroutine does not return */
      exit(1);
    }
    local_11 = 0;
    FUN_001015a4(local_1a);
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00101b6a(void)

{
  return;
}




void FUN_00101de0(undefined4 param_1,undefined8 param_2,undefined8 param_3)

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




undefined8 FUN_00101535(void)

{
  time_t tVar1;
  
  tVar1 = time((time_t *)0x0);
  srand((uint)tVar1);
  FUN_001015a4("Calling good()...");
  FUN_00101520();
  FUN_001015a4("Finished good()");
  FUN_001015a4("Calling bad()...");
  FUN_00101409();
  FUN_001015a4("Finished bad()");
  return 0;
}




void FUN_00101726(undefined4 param_1)

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




void _FINI_0(void)

{
  if (DAT_00104028 == '\0') {
    if (PTR___cxa_finalize_00103ff8 != (undefined *)0x0) {
      FUN_001011a0(PTR_LOOP_00104008);
    }
    FUN_00101350();
    DAT_00104028 = 1;
    return;
  }
  return;
}




void FUN_00101ae6(void)

{
  return;
}




void FUN_00101020(void)

{
  (*(code *)PTR_00103f18)();
  return;
}




void FUN_001015a4(char *param_1)

{
  if (param_1 != (char *)0x0) {
    puts(param_1);
  }
  return;
}




/* WARNING: Removing unreachable block (ram,0x00101363) */
/* WARNING: Removing unreachable block (ram,0x0010136f) */

void FUN_00101350(void)

{
  return;
}




void FUN_001015ca(long param_1)

{
  if (param_1 != 0) {
    wprintf(L"%ls\n",param_1);
  }
  return;
}




void FUN_00101aaf(void)

{
  return;
}




void FUN_0010167a(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




void FUN_00101834(long param_1,ulong param_2)

{
  ulong local_10;
  
  for (local_10 = 0; local_10 < param_2; local_10 = local_10 + 1) {
    printf("%02x",(ulong)*(byte *)(local_10 + param_1));
  }
  puts("");
  return;
}




void FUN_00101b12(void)

{
  return;
}




void FUN_00101b07(void)

{
  return;
}




void FUN_001016a5(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




undefined8 FUN_00101a77(void)

{
  return 1;
}




void FUN_00101650(float param_1)

{
  printf("%f\n",(double)param_1);
  return;
}




void FUN_00101af1(void)

{
  return;
}




undefined8 FUN_00101cf7(undefined8 *param_1)

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




ulong FUN_00101894(long param_1,ulong param_2,long param_3)

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
    __isoc99_sscanf(local_18 * 2 + param_3,&DAT_001020d0,local_1c);
    *(char *)(local_18 + param_1) = local_1c[0];
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00101520(void)

{
  FUN_00101492();
  return;
}




void FUN_001017d3(undefined8 param_1)

{
  printf("%g\n",param_1);
  return;
}




void FUN_00101b33(void)

{
  return;
}




void FUN_00101b3e(void)

{
  return;
}




void FUN_00101b49(void)

{
  return;
}




undefined8 FUN_00101cd4(void *param_1)

{
  free(param_1);
  return 1;
}




undefined8 FUN_00101a86(void)

{
  return 0;
}




void FUN_00101d8f(pthread_mutex_t *param_1)

{
  pthread_mutex_unlock(param_1);
  return;
}




void FUN_00101624(short param_1)

{
  printf("%hd\n",(ulong)(uint)(int)param_1);
  return;
}




void FUN_00101dae(pthread_mutex_t *param_1)

{
  pthread_mutex_destroy(param_1);
  free(param_1);
  return;
}




void FUN_00101b1d(void)

{
  return;
}




undefined8 FUN_00101bac(pthread_t param_1,pthread_t param_2,undefined8 *param_3)

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
    iVar1 = pthread_create(&local_20,(pthread_attr_t *)0x0,FUN_00101b75,local_18);
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




void FUN_00101b75(long param_1)

{
  (**(code **)(param_1 + 8))(*(undefined8 *)(param_1 + 0x10));
                    /* WARNING: Subroutine does not return */
  pthread_exit((void *)0x0);
}




void FUN_00101ad0(void)

{
  return;
}




void FUN_00101d70(pthread_mutex_t *param_1)

{
  pthread_mutex_lock(param_1);
  return;
}




void FUN_00101aba(void)

{
  return;
}




void FUN_00101780(uint param_1)

{
  printf("%u\n",(ulong)param_1);
  return;
}




/* WARNING: Removing unreachable block (ram,0x001013a4) */
/* WARNING: Removing unreachable block (ram,0x001013b0) */

void FUN_00101380(void)

{
  return;
}




void FUN_00101409(void)

{
  char *pcVar1;
  long in_FS_OFFSET;
  int local_2c;
  char local_1a [9];
  undefined local_11;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  for (local_2c = 0; local_2c < 1; local_2c = local_2c + 1) {
    pcVar1 = gets(local_1a);
    if ((int)pcVar1 == 0) {
      FUN_001015a4("Error Condition: alter control flow to indicate action taken");
                    /* WARNING: Subroutine does not return */
      exit(1);
    }
    local_11 = 0;
    FUN_001015a4(local_1a);
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_001016fb(char param_1)

{
  printf("%02x\n",(ulong)(uint)(int)param_1);
  return;
}




bool FUN_00101c79(pthread_t *param_1)

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




void FUN_001011a0(void)

{
  (*(code *)PTR___cxa_finalize_00103ff8)();
  return;
}




void FUN_00101b54(void)

{
  return;
}




void FUN_00101e50(void)

{
  return;
}




void FUN_001016d0(undefined8 param_1)

{
  printf("%zu\n",param_1);
  return;
}




void FUN_00101ac5(void)

{
  return;
}




void FUN_00101adb(void)

{
  return;
}




void FUN_00101b5f(void)

{
  return;
}



