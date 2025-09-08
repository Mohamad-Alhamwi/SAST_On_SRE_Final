
void FUN_00101b98(undefined8 param_1)

{
  printf("%g\n",param_1);
  return;
}




void FUN_00101eab(void)

{
  return;
}




void FUN_00101ec1(void)

{
  return;
}




void FUN_00101ecc(void)

{
  return;
}




void FUN_00101782(void)

{
  char *pcVar1;
  size_t sVar2;
  ssize_t sVar3;
  long in_FS_OFFSET;
  undefined4 local_7c;
  ulong local_78 [12];
  undefined4 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_78[0] = 0;
  local_78[1] = 0;
  local_78[2] = 0;
  local_78[3] = 0;
  local_78[4] = 0;
  local_78[5] = 0;
  local_78[6] = 0;
  local_78[7] = 0;
  local_78[8] = 0;
  local_78[9] = 0;
  local_78[10] = 0;
  local_78[0xb] = 0;
  local_18 = 0;
  local_7c = 0xffffffff;
  pcVar1 = fgets((char *)local_78,100,stdin);
  if (pcVar1 == (char *)0x0) {
    FUN_00101969("fgets() failed");
    local_78[0] = local_78[0] & 0xffffffffffffff00;
  }
  if ((char)local_78[0] != '\0') {
    sVar2 = strlen((char *)local_78);
    *(undefined *)((long)&local_7c + sVar2 + 3) = 0;
  }
  local_7c = open((char *)local_78,2);
  if (local_7c == -1) {
                    /* WARNING: Subroutine does not return */
    exit(1);
  }
  sVar3 = write(local_7c,"Good Sink...",0xc);
  if (sVar3 == -1) {
                    /* WARNING: Subroutine does not return */
    exit(1);
  }
  if (local_7c != -1) {
    close(local_7c);
  }
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




undefined8 FUN_001018fa(void)

{
  time_t tVar1;
  
  tVar1 = time((time_t *)0x0);
  srand((uint)tVar1);
  FUN_00101969("Calling good()...");
  FUN_001018db();
  FUN_00101969("Finished good()");
  FUN_00101969("Calling bad()...");
  FUN_00101489();
  FUN_00101969("Finished bad()");
  return 0;
}




void FUN_00101f2f(void)

{
  return;
}




void FUN_00102220(char *param_1,stat *param_2)

{
  __xstat(1,param_1,param_2);
  return;
}




void FUN_00101f19(void)

{
  return;
}




int FUN_00101e5a(void)

{
  int iVar1;
  
  iVar1 = rand();
  return iVar1 % 2;
}




void _FINI_0(void)

{
  if (DAT_00105028 == '\0') {
    if (PTR___cxa_finalize_00104ff8 != (undefined *)0x0) {
      FUN_001011e0(PTR_LOOP_00105008);
    }
    FUN_001013d0();
    DAT_00105028 = 1;
    return;
  }
  return;
}




void FUN_001019e9(short param_1)

{
  printf("%hd\n",(ulong)(uint)(int)param_1);
  return;
}




void FUN_00101bc6(uint *param_1)

{
  printf("%d -- %d\n",(ulong)*param_1,(ulong)param_1[1]);
  return;
}




void FUN_00101e7f(void)

{
  return;
}




void FUN_00101f24(void)

{
  return;
}




void FUN_001011e0(void)

{
  (*(code *)PTR___cxa_finalize_00104ff8)();
  return;
}




ulong FUN_00101d5d(long param_1,ulong param_2,long param_3)

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
    __isoc99_swscanf(local_18 * 8 + param_3,&DAT_001030dc,local_1c);
    *(char *)(local_18 + param_1) = local_1c[0];
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00101ee2(void)

{
  return;
}




void FUN_00101a95(undefined8 param_1)

{
  printf("%zu\n",param_1);
  return;
}




void FUN_00102210(void)

{
  return;
}




/* WARNING: Removing unreachable block (ram,0x001013e3) */
/* WARNING: Removing unreachable block (ram,0x001013ef) */

void FUN_001013d0(void)

{
  return;
}




void FUN_00101e8a(void)

{
  return;
}




void FUN_00101a15(float param_1)

{
  printf("%f\n",(double)param_1);
  return;
}




void FUN_001019c1(uint param_1)

{
  printf("%d\n",(ulong)param_1);
  return;
}




bool FUN_0010203e(pthread_t *param_1)

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




void FUN_00101969(char *param_1)

{
  if (param_1 != (char *)0x0) {
    puts(param_1);
  }
  return;
}




void FUN_00101ed7(void)

{
  return;
}




undefined8 FUN_00101f71(pthread_t param_1,pthread_t param_2,undefined8 *param_3)

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
    iVar1 = pthread_create(&local_20,(pthread_attr_t *)0x0,FUN_00101f3a,local_18);
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




void FUN_00101489(void)

{
  int iVar1;
  char *pcVar2;
  size_t sVar3;
  ssize_t sVar4;
  long in_FS_OFFSET;
  undefined local_108 [143];
  char cStack_79;
  ulong local_78 [12];
  undefined4 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_78[0] = 0;
  local_78[1] = 0;
  local_78[2] = 0;
  local_78[3] = 0;
  local_78[4] = 0;
  local_78[5] = 0;
  local_78[6] = 0;
  local_78[7] = 0;
  local_78[8] = 0;
  local_78[9] = 0;
  local_78[10] = 0;
  local_78[0xb] = 0;
  local_18 = 0;
  pcVar2 = fgets((char *)local_78,100,stdin);
  if (pcVar2 == (char *)0x0) {
    FUN_00101969("fgets() failed");
    local_78[0] = local_78[0] & 0xffffffffffffff00;
  }
  if ((char)local_78[0] != '\0') {
    sVar3 = strlen((char *)local_78);
    (&cStack_79)[sVar3] = '\0';
  }
  iVar1 = FUN_00102220(local_78,local_108);
  if (iVar1 == -1) {
                    /* WARNING: Subroutine does not return */
    exit(1);
  }
  iVar1 = open((char *)local_78,2);
  if (iVar1 == -1) {
                    /* WARNING: Subroutine does not return */
    exit(1);
  }
  sVar4 = write(iVar1,"Bad Sink...",0xb);
  if (sVar4 != -1) {
    if (iVar1 != -1) {
      close(iVar1);
    }
    if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
      return;
    }
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
                    /* WARNING: Subroutine does not return */
  exit(1);
}




void FUN_00101a6a(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




void FUN_00101e95(void)

{
  return;
}




void FUN_00101eb6(void)

{
  return;
}




void FUN_001018db(void)

{
  FUN_0010161c();
  FUN_00101782();
  return;
}




void FUN_00101b45(uint param_1)

{
  printf("%u\n",(ulong)param_1);
  return;
}




ulong FUN_00101c59(long param_1,ulong param_2,long param_3)

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
    __isoc99_sscanf(local_18 * 2 + param_3,&DAT_001030d4,local_1c);
    *(char *)(local_18 + param_1) = local_1c[0];
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




/* WARNING: Removing unreachable block (ram,0x00101640) */

void FUN_0010161c(void)

{
  char *pcVar1;
  size_t sVar2;
  ssize_t sVar3;
  long in_FS_OFFSET;
  undefined4 local_7c;
  ulong local_78 [12];
  undefined4 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_78[0] = 0;
  local_78[1] = 0;
  local_78[2] = 0;
  local_78[3] = 0;
  local_78[4] = 0;
  local_78[5] = 0;
  local_78[6] = 0;
  local_78[7] = 0;
  local_78[8] = 0;
  local_78[9] = 0;
  local_78[10] = 0;
  local_78[0xb] = 0;
  local_18 = 0;
  local_7c = 0xffffffff;
  pcVar1 = fgets((char *)local_78,100,stdin);
  if (pcVar1 == (char *)0x0) {
    FUN_00101969("fgets() failed");
    local_78[0] = local_78[0] & 0xffffffffffffff00;
  }
  if ((char)local_78[0] != '\0') {
    sVar2 = strlen((char *)local_78);
    *(undefined *)((long)&local_7c + sVar2 + 3) = 0;
  }
  local_7c = open((char *)local_78,2);
  if (local_7c == -1) {
                    /* WARNING: Subroutine does not return */
    exit(1);
  }
  sVar3 = write(local_7c,"Good Sink...",0xc);
  if (sVar3 == -1) {
                    /* WARNING: Subroutine does not return */
    exit(1);
  }
  if (local_7c != -1) {
    close(local_7c);
  }
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00101020(void)

{
  (*(code *)PTR_00104ef8)();
  return;
}




void FUN_001021a0(undefined4 param_1,undefined8 param_2,undefined8 param_3)

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




void FUN_00101ea0(void)

{
  return;
}




void FUN_00101f0e(void)

{
  return;
}




void FUN_00102173(pthread_mutex_t *param_1)

{
  pthread_mutex_destroy(param_1);
  free(param_1);
  return;
}




void FUN_00101eed(void)

{
  return;
}




void FUN_00101ac0(char param_1)

{
  printf("%02x\n",(ulong)(uint)(int)param_1);
  return;
}




void FUN_00101b6d(byte param_1)

{
  printf("%02x\n",(ulong)param_1);
  return;
}




undefined8 FUN_00101e4b(void)

{
  return 0;
}




void FUN_00101ef8(void)

{
  return;
}




void FUN_00101f03(void)

{
  return;
}




void FUN_00101f3a(long param_1)

{
  (**(code **)(param_1 + 8))(*(undefined8 *)(param_1 + 0x10));
                    /* WARNING: Subroutine does not return */
  pthread_exit((void *)0x0);
}




undefined8 FUN_00101e3c(void)

{
  return 1;
}




undefined8 FUN_00102099(void *param_1)

{
  free(param_1);
  return 1;
}




undefined8 FUN_001020bc(undefined8 *param_1)

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




void FUN_00101bf9(long param_1,ulong param_2)

{
  ulong local_10;
  
  for (local_10 = 0; local_10 < param_2; local_10 = local_10 + 1) {
    printf("%02x",(ulong)*(byte *)(local_10 + param_1));
  }
  puts("");
  return;
}




/* WARNING: Removing unreachable block (ram,0x00101424) */
/* WARNING: Removing unreachable block (ram,0x00101430) */

void FUN_00101400(void)

{
  return;
}




void FUN_00101a3f(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




void FUN_00101aeb(undefined4 param_1)

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




void FUN_00102135(pthread_mutex_t *param_1)

{
  pthread_mutex_lock(param_1);
  return;
}




void FUN_0010198f(long param_1)

{
  if (param_1 != 0) {
    wprintf(L"%ls\n",param_1);
  }
  return;
}




void FUN_00102154(pthread_mutex_t *param_1)

{
  pthread_mutex_unlock(param_1);
  return;
}




void FUN_00101e74(void)

{
  return;
}



